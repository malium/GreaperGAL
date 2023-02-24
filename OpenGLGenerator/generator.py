#!/usr/bin/env python

####################################################################################
#   Copyright 2023 Marcos Sánchez Torrent.                                         #
#   All Rights Reserved.                                                           #
####################################################################################

import argparse
import datetime
import os
import sys
import re
import urllib.request

generate_gl = True
generate_glx = True
generate_wgl = True

os.chdir(os.path.dirname(os.path.abspath(__file__)))

urls = {
    'gl' : 'https://www.khronos.org/registry/OpenGL/api/GL/glcorearb.h',
    'glx' : 'https://www.khronos.org/registry/OpenGL/api/GL/glxext.h',
    'wgl' : 'https://www.khronos.org/registry/OpenGL/api/GL/wgl.h'
}
procs = {
    'gl' : [],
    'glx' : [],
    'wgl' : []
}
defines = {
    'gl' : [],
    'glx' : [],
    'wgl' : []
}
structs = {
    'gl' : [],
    'glx' : [],
    'wgl' : []
}
callbacks = {
    'gl' : [],
    'glx' : [],
    'wgl' : []
}
handles = {
    'gl' : [],
    'glx' : [],
    'wgl' : []
}

proc_patterns = {
    'gl' : re.compile(r'GLAPI.*APIENTRY\s+(\w+)'),
    'glx' : re.compile(r'.*(glX+\w+)'),
    'wgl' : re.compile(r'.*WINAPI\s+(\w+)')
}

define_patterns = {
    'gl' : re.compile(r'#define.*(GL+\w+)\s+(\w+)'),
    'glx' : re.compile(r'#define.*(GLX+\w+)\s+(\w+)'),
    'wgl' : re.compile(r'#define.*(WGL+\w+)\s+(\w+)')
}

callback_patterns = {
    'gl' : re.compile(r'.*APIENTRY  \*.*'),
    'glx' : re.compile(r'.*FuncPtr\).*'),
    'wgl' : None # wgl doesn't have callbacks
}
# only WGL has HANDLEs 
handle_patterns = {
    'gl' : None,
    'glx' : None,
    'wgl' : re.compile(r'DECLARE_HANDLE.*')
}

ignore_d = re.compile(r'#define +\w+ 1')
ignore_typedef = re.compile(r'typedef \w+ \w+;')
ignore_typedef_fn = re.compile(r'.*PFN.*')

struct_typedef = re.compile(r'typedef struct.*;')
struct_define = re.compile(r'struct \w+;')
struct_typedef_multiline_begin = re.compile(r'typedef struct \{')
struct_typedef_multiline_end = re.compile(r'\} \w+;')


typedict= {
    'gl' : {
        'GLvoid' : 'void',
        'GLenum' : 'uint32',
        'GLfloat' : 'float',
        'GLint' : 'int32',
        'GLsizei' : 'int32',
        'GLbitfield' : 'uint32',
        'GLdouble' : 'double',
        'GLuint' : 'uint32',
        'GLboolean' : 'uint8',
        'GLubyte' : 'uint8',
        'GLclampf' : 'float',
        'GLclampd' : 'double',
        'GLsizeiptr' : 'ptrint',
        'GLintptr' : 'ptrint',
        'GLchar' : 'achar',
        'GLshort' : 'int16',
        'GLbyte' : 'int8',
        'GLushort' : 'uint16',
        'GLhalf' : 'uint16',
        'GLuint64' : 'uint64',
        'GLint64' : 'int64',
        'GLuint64EXT' : 'uint64',
        'GLint64EXT' : 'int64'
    },
    'glx' : {
        'GLXContextID' : 'XID',
        'GLXWindow' : 'XID',
        'GLXPbuffer' : 'XID',
        'GLXVideoCaptureDeviceNV' : 'XID',
        'GLXPbufferSGIX' : 'XID',
        'GLXVideoSourceSGIX' : 'XID'
    },
    'wgl' : {

    }
}

license_Marcos = '''/***********************************************************************************
*   Copyright %d Marcos Sánchez Torrent.                                         *
*   All Rights Reserved.                                                           *
***********************************************************************************/
''' % (datetime.date.today().year)

license_khronos = '''/*
** Copyright 2013-2020 The Khronos Group Inc.
** SPDX-License-Identifier: MIT
** 
** This file is a modification from the generated XML API registry.
** The current version of the Registry, generator scripts
** used to make the header, and the header can be found at
**   https://github.com/KhronosGroup/OpenGL-Registry
*/
'''

include_guards_begin = {
    'gl' : '#ifndef GAL_GL_HEADER_H\n#define GAL_GL_HEADER_H 1\n',
    'glx' : '#ifndef GAL_GLX_HEADER_H\n#define GAL_GLX_HEADER_H 1\n',
    'wgl' : '#ifndef GAL_WGL_HEADER_H\n#define GAL_WGL_HEADER_H 1\n'
}

include_guards_end = {
    'gl' : '#endif /* GAL_GL_HEADER_H */\n',
    'glx' : '#endif /* GAL_GLX_HEADER_H */\n',
    'wgl' : '#endif /* GAL_WGL_HEADER_H */\n'
}

proc_pattern = {
    'gl' : re.compile(r'GLAPI(.*)APIENTRY (\w+) (\(.*\)).*'),
    'glx' : re.compile(r'(.*)(glX\w+) (\(.*\)).*'),
    'wgl' : re.compile(r'(.*)WINAPI (\w+) (\(.*\)).*')
}

def proc_to_using(proc, header)->str:
    pm = proc_pattern[header].match(proc)
    ret = pm.group(1).strip()
    name = pm.group(2).strip()
    args = pm.group(3).strip()
    return 'using ' + name + '_t = ' + ret + '(*)' + args + ';'

def proc_to_function(proc, header)->str:
    pm = proc_pattern[header].match(proc)
    name = pm.group(2).strip()
    return 'FuncDef::' + name + '_t ' + name + ';'

def parse_header(header:str):
    url = urls[header]
    header_web = urllib.request.urlopen(urllib.request.Request(url, headers={'User-Agent': 'Mozilla/5.0'}))
    weblines = [line.decode('utf-8') for line in header_web.readlines()]
    multiline_struct = ''
    proc_pattern = proc_patterns[header]
    define_pattern = define_patterns[header]
    callback_pattern:re.Pattern[str] = callback_patterns[header]
    handle_pattern:re.Pattern[str] = handle_patterns[header]

    for line in weblines:
        if len(multiline_struct) <= 0:
            m = ignore_d.match(line)
            if m is not None:
                continue
                
            m = ignore_typedef.match(line)
            if m is not None:
                continue

            m = proc_pattern.match(line)
            if m is not None:
                procs[header].append(str(line).strip(' \n\r'))
                continue
            
            if callback_pattern is not None:
                m = callback_pattern.match(line)
                if m is not None:
                    callbacks[header].append(str(line).strip(' \n\r'))
                    continue
            
            if handle_pattern is not None:
                m = handle_pattern.match(line)
                if m is not None:
                    handles[header].append(str(line).strip(' \n\r'))
                    continue

            m = define_pattern.match(line)
            if m is not None:
                if str(line).count('#define GLAPI') > 0:
                    continue
                if str(line).count('GLX_GLXEXT_VERSION') > 0:
                    continue

                defines[header].append(str(line).strip(' \n\r'))
                continue
            
            m = struct_define.match(line)
            if m is not None:
                structs[header].append(str(line).strip(' \n\r'))
                continue

            m = struct_typedef.match(line)
            if m is not None:
                structs[header].append(str(line).strip(' \n\r'))
                continue

            m = struct_typedef_multiline_begin.match(line)
            if m is not None:
                multiline_struct = str(line)
                continue
        else: # multiline struct definition
            m = struct_typedef_multiline_end.match(line)
            multiline_struct += str(line)
            if m is not None:
                structs[header].append(multiline_struct.strip('\r\n'))
                multiline_struct = ''
                continue

def write_typedefs(file, header):
    types = typedict[header]
    for typeInfo in types:
        file.write(('\ttypedef %s %s;\n'%(types[typeInfo], typeInfo)).encode('utf-8'))
    file.write(('using %s_proc = void(*)();\n'%(header.upper())).encode('utf-8'))
    file.write(b'\n')

def write_function_definitions(file, header):
    functions = procs[header]
    for proc in functions:
        file.write(('\t\t%s\n'%(proc_to_using(proc, header))).encode('utf-8'))

def write_functions(file, header):
    functions = procs[header]
    for proc in functions:
        file.write(('\t\t%s\n'%(proc_to_function(proc, header))).encode('utf-8'))

def write_proc_array(file, header):
    functions = procs[header]


def generate_header(header:str):
    filename = "GAL" + header.upper() + ".h"
    if os.path.exists(filename):
        os.remove(filename)
    with open(filename, "wb") as file:
        license_header = license_Marcos + '\n' + license_khronos + '\n'
        file.write(license_header.encode('utf-8'))
        file.write((include_guards_begin[header] + '\n').encode('utf-8'))

        # union begin
        file.write(("union " + header.upper() + "\n{\n").encode('utf-8'))

        write_typedefs(file, header)

        file.write('\tstruct FuncDef {\n'.encode('utf-8'))
        write_function_definitions(file, header)
        file.write('\t};\n'.encode('utf-8'))
        file.write('\tstruct {\n'.encode('utf-8'))
        write_functions(file, header)
        file.write('\t};\n'.encode('utf-8'))
        # union end
        file.write("};\n".encode('utf-8'))

        
        file.write(include_guards_end[header].encode('utf-8'))

    return

if generate_gl:
    parse_header('gl')
    generate_header('gl')
if generate_glx:
    parse_header('glx')
    generate_header('glx')
if generate_wgl:
    parse_header('wgl')
    generate_header('wgl')
            
print('end')