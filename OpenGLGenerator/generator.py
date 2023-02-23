import argparse
import os
import sys
import re
import urllib.request

#def write(f, s):
#    f.write(s.encode('utf-8'))

#def touch_dir(path):
#    if not os.path.exists(path):
#        os.makedirs(path)

def download(url, dst):
    if os.path.exists(dst):
        print('Reusing {0}...'.format(dst))
        return

    print('Downloading {0}...'.format(dst))
    web = urllib.request.urlopen(urllib.request.Request(url, headers={'User-Agent': 'Mozilla/5.0'}))
    with open(dst, 'wb') as f:
        f.writelines(web.readlines())

generate_gl = True
generate_glx = True
generate_wgl = True

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
            print(str(line).strip(' \r\n'))
        else: # multiline struct definition
            m = struct_typedef_multiline_end.match(line)
            multiline_struct += str(line)
            if m is not None:
                structs[header].append(multiline_struct.strip('\r\n'))
                multiline_struct = ''
                continue


if generate_gl:
    parse_header('gl')
if generate_glx:
    parse_header('glx')
if generate_wgl:
    parse_header('wgl')
            
print('end')