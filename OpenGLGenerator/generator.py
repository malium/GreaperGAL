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
remove_gl_prefix = True
c_compatible = False

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
		'GLenum' : 'uint32_t',
		'GLfloat' : 'float',
		'GLint' : 'int32_t',
		'GLsizei' : 'int32_t',
		'GLbitfield' : 'uint32_t',
		'GLdouble' : 'double',
		'GLuint' : 'uint32_t',
		'GLboolean' : 'uint8_t',
		'GLubyte' : 'uint8_t',
		'GLclampf' : 'float',
		'GLclampd' : 'double',
		'GLsizeiptr' : 'intptr_t',
		'GLintptr' : 'intptr_t',
		'GLchar' : 'char',
		'GLshort' : 'int16_t',
		'GLbyte' : 'int8_t',
		'GLushort' : 'uint16_t',
		'GLhalf' : 'uint16_t',
		'GLuint64' : 'uint64_t',
		'GLint64' : 'int64_t',
		'GLuint64EXT' : 'uint64_t',
		'GLint64EXT' : 'int64_t',
		'GLeglImageOES' : 'void*'
	},
	'glx' : {
		'GLXContextID' : 'XID',
		'GLXWindow' : 'XID',
		'GLXPbuffer' : 'XID',
		'GLXVideoCaptureDeviceNV' : 'XID',
		'GLXPbufferSGIX' : 'XID',
		'GLXVideoSourceSGIX' : 'XID',
		'GLXVideoDeviceNV' : 'uint32_t'
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

gl_define_GALGLPROC = '#ifdef _WIN32\n#define GALGLPROC __stdcall\n#else\n#define GALGLPROC\n#endif\n'

proc_header_pattern = {
	'gl' : re.compile(r'GLAPI(.*)APIENTRY (\w+) (\(.*\)).*'),
	'glx' : re.compile(r'(.*)(glX\w+) (\(.*\)).*'),
	'wgl' : re.compile(r'(.*)WINAPI (\w+) (\(.*\)).*')
}

constant_pattern = re.compile(r'#\w+\W+(\w+)\W+(.*)')

callback_info_patterns = {
	'gl': re.compile(r'typedef(.*)\(APIENTRY  \*(\w+)\)(\(.*\)).*'),
	'glx' : re.compile(r'typedef(.*)\( \*(\w+)\)(\(.*\)).*'),
	'wgl' : None
}

def proc_to_using(proc, header)->str:
	pm = proc_header_pattern[header].match(proc)
	ret = pm.group(1).strip()
	name = pm.group(2).strip()
	args = pm.group(3).strip()
	return 'typedef %s (GALGLPROC* %s_t)%s;'%(ret, name, args)

def proc_to_function(proc, header)->str:
	pm = proc_header_pattern[header].match(proc)
	defname = name = pm.group(2).strip()
	if remove_gl_prefix:
		name = name.lstrip(header)
	return 'FuncDef::' + defname + '_t ' + name + ';'

def proc_to_name(proc, header)->str:
	pm = proc_header_pattern[header].match(proc)
	return pm.group(2).strip()

def define_to_constant(define, header)->str:
	dm = constant_pattern.match(define)
	name = dm.group(1)
	if name != 'GL_FALSE' and name != 'GL_TRUE' and name != 'GL_WAIT_FAILED': # this constants without the GL prefix collide with Win32 API
		if remove_gl_prefix:
			temp_name = name.removeprefix(header.upper() + '_')
			if not temp_name[0].isdigit(): # avoid constants starting with number names, it's an invalid syntax
				name = temp_name
	value = dm.group(2)
	return 'static constexpr auto %s = %s;'%(name, value)

def callback_to_using(callback, header)->str:
	pattern:re.Pattern[str] = callback_info_patterns[header]
	if pattern is None:
		return ''
	cm = pattern.match(callback)
	ret = cm.group(1).strip()
	name = cm.group(2).strip()
	args = cm.group(3).strip()
	return 'typedef %s (GALGLPROC* %s)%s;'%(ret, name, args)

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

def write_typedefs(tabs:str, file, header):
	types = typedict[header]
	for typeInfo in types:
		file.write(('%stypedef %s %s;\n'%(tabs, types[typeInfo], typeInfo)).encode('utf-8'))
	file.write(('%stypedef void (GALGLPROC* %sproc)();\n'%(tabs, header.upper())).encode('utf-8'))
	file.write(b'\n')

def write_structs(tabs:str, file, header):
	struct_list:list[str] = structs[header]
	for struct in struct_list:
		for line in struct.splitlines():
			file.write(('%s%s\n'%(tabs, line)).encode('utf-8'))
	
	if len(struct_list) > 0:
		file.write(b'\n')

def write_handles(tabs:str, file, header):
	handle_list = handles[header]
	for handle in handle_list:
		file.write(('%s%s\n'%(tabs, handle)).encode('utf-8'))
	
	if len(handle_list) > 0:
		file.write(b'\n')

def write_callbacks(tabs:str, file, header):
	cb_list:list[str] = callbacks[header]
	for callback in cb_list:
		file.write(('%s%s\n'%(tabs, callback_to_using(callback, header))).encode('utf-8'))

	if len(cb_list) > 0:
		file.write(b'\n')

def write_function_definitions(tabs:str, file, header):
	functions = procs[header]
	for proc in functions:
		file.write(('%s%s\n'%(tabs, proc_to_using(proc, header))).encode('utf-8'))

def write_functions(tabs:str, file, header):
	functions = procs[header]
	for proc in functions:
		file.write(('%s%s\n'%(tabs, proc_to_function(proc, header))).encode('utf-8'))

def write_constants(tabs:str, file, header):
	constants = defines[header]
	for constant in constants:
		file.write(('%s%s\n'%(tabs, define_to_constant(constant, header))).encode('utf-8'))
	
	if len(constants) > 0:
		file.write(b'\n')

def write_proclist(tabs:str, file, header):
	functions = procs[header]
	file.write(('%s%sproc ProcList[%d];\n\n'%(tabs, header.upper(), len(functions))).encode('utf-8'))

def write_funcdef(tabs:str, file, header):
	file.write(('%sstruct FuncDef {\n'%(tabs)).encode('utf-8'))
	write_function_definitions(tabs + '\t', file, header)
	file.write(('%s};\n\n'%(tabs)).encode('utf-8'))

def write_function_struct(tabs, file, header):
	file.write(('%sstruct {\n'%(tabs)).encode('utf-8'))
	write_functions(tabs + '\t', file, header)
	file.write(('%s};\n\n'%(tabs)).encode('utf-8'))

def write_procnamelist(tabs:str, file, header):
	functions = procs[header]
	file.write(('%sstatic constexpr const char* ProcList[%d] = {\n'%(tabs, len(functions))).encode('utf-8'))
	for proc in functions:
		file.write(('%s\t"%s",\n'%(tabs, proc_to_name(proc, header))).encode('utf-8'))
	file.write(('%s};\n'%(tabs)).encode('utf-8'))

def write_union(tabs:str, file, header):
	# union begin
	file.write(("%sunion %s\n{\n"%(tabs, header.upper())).encode('utf-8'))

	cur_tabs = tabs + '\t'

	write_callbacks(cur_tabs, file, header)

	write_constants(cur_tabs, file, header)

	write_funcdef(cur_tabs, file, header)

	write_function_struct(cur_tabs, file, header)

	write_proclist(cur_tabs, file, header)

	write_procnamelist(cur_tabs, file, header)

	# union end
	file.write(("%s};\n"%(tabs)).encode('utf-8'))


def generate_header(header:str):
	filename = "GAL" + header.upper() + ".h"
	if os.path.exists(filename):
		os.remove(filename)
	with open(filename, "wb") as file:
		license_header = license_Marcos + '\n' + license_khronos + '\n'
		file.write(license_header.encode('utf-8'))
		file.write((include_guards_begin[header] + '\n').encode('utf-8'))

		if header == 'gl':
			file.write('#include <stdint.h>\n'.encode('utf-8'))
			file.write(b'\n')
			file.write(gl_define_GALGLPROC.encode('utf-8'))
			file.write(b'\n')
		else:
			file.write('#include "GALGL.h"\n\n'.encode('utf-8'))

		tabs = ''
		write_typedefs(tabs, file, header)

		write_structs(tabs, file, header)

		write_handles(tabs, file, header)

		write_union(tabs, file, header)
		
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