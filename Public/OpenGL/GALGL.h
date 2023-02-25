/***********************************************************************************
*   Copyright 2023 Marcos Sánchez Torrent.                                         *
*   All Rights Reserved.                                                           *
***********************************************************************************/

/*
** Copyright 2013-2020 The Khronos Group Inc.
** SPDX-License-Identifier: MIT
** 
** This file is a modification from the generated XML API registry.
** The current version of the Registry, generator scripts
** used to make the header, and the header can be found at
**   https://github.com/KhronosGroup/OpenGL-Registry
*/

#ifndef GAL_GL_HEADER_H
#define GAL_GL_HEADER_H 1

#include <stdint.h>

#ifdef _WIN32
#define GALGLPROC WINAPI
#else
#define GALGLPROC
#endif

typedef void GLvoid;
typedef uint32_t GLenum;
typedef float GLfloat;
typedef int32_t GLint;
typedef int32_t GLsizei;
typedef uint32_t GLbitfield;
typedef double GLdouble;
typedef uint32_t GLuint;
typedef uint8_t GLboolean;
typedef uint8_t GLubyte;
typedef float GLclampf;
typedef double GLclampd;
typedef intptr_t GLsizeiptr;
typedef intptr_t GLintptr;
typedef char GLchar;
typedef int16_t GLshort;
typedef int8_t GLbyte;
typedef uint16_t GLushort;
typedef uint16_t GLhalf;
typedef uint64_t GLuint64;
typedef int64_t GLint64;
typedef uint64_t GLuint64EXT;
typedef int64_t GLint64EXT;
typedef void* GLeglImageOES;
typedef void (GALGLPROC* GLproc)();

typedef struct __GLsync *GLsync;
struct _cl_context;
struct _cl_event;

union GL
{
	typedef void (GALGLPROC* GLDEBUGPROC)(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *message,const void *userParam);
	typedef void (GALGLPROC* GLDEBUGPROCARB)(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *message,const void *userParam);
	typedef void (GALGLPROC* GLVULKANPROCNV)(void);

	static constexpr auto DEPTH_BUFFER_BIT = 0x00000100;
	static constexpr auto STENCIL_BUFFER_BIT = 0x00000400;
	static constexpr auto COLOR_BUFFER_BIT = 0x00004000;
	static constexpr auto GL_FALSE = 0;
	static constexpr auto GL_TRUE = 1;
	static constexpr auto POINTS = 0x0000;
	static constexpr auto INES = 0x0001;
	static constexpr auto INE_LOOP = 0x0002;
	static constexpr auto INE_STRIP = 0x0003;
	static constexpr auto TRIANGLES = 0x0004;
	static constexpr auto TRIANGLE_STRIP = 0x0005;
	static constexpr auto TRIANGLE_FAN = 0x0006;
	static constexpr auto QUADS = 0x0007;
	static constexpr auto NEVER = 0x0200;
	static constexpr auto ESS = 0x0201;
	static constexpr auto EQUAL = 0x0202;
	static constexpr auto EQUAL = 0x0203;
	static constexpr auto REATER = 0x0204;
	static constexpr auto NOTEQUAL = 0x0205;
	static constexpr auto EQUAL = 0x0206;
	static constexpr auto ALWAYS = 0x0207;
	static constexpr auto ZERO = 0;
	static constexpr auto ONE = 1;
	static constexpr auto SRC_COLOR = 0x0300;
	static constexpr auto ONE_MINUS_SRC_COLOR = 0x0301;
	static constexpr auto SRC_ALPHA = 0x0302;
	static constexpr auto ONE_MINUS_SRC_ALPHA = 0x0303;
	static constexpr auto DST_ALPHA = 0x0304;
	static constexpr auto ONE_MINUS_DST_ALPHA = 0x0305;
	static constexpr auto DST_COLOR = 0x0306;
	static constexpr auto ONE_MINUS_DST_COLOR = 0x0307;
	static constexpr auto SRC_ALPHA_SATURATE = 0x0308;
	static constexpr auto NONE = 0;
	static constexpr auto FRONT_LEFT = 0x0400;
	static constexpr auto FRONT_RIGHT = 0x0401;
	static constexpr auto BACK_LEFT = 0x0402;
	static constexpr auto BACK_RIGHT = 0x0403;
	static constexpr auto FRONT = 0x0404;
	static constexpr auto BACK = 0x0405;
	static constexpr auto EFT = 0x0406;
	static constexpr auto RIGHT = 0x0407;
	static constexpr auto FRONT_AND_BACK = 0x0408;
	static constexpr auto NO_ERROR = 0;
	static constexpr auto INVALID_ENUM = 0x0500;
	static constexpr auto INVALID_VALUE = 0x0501;
	static constexpr auto INVALID_OPERATION = 0x0502;
	static constexpr auto OUT_OF_MEMORY = 0x0505;
	static constexpr auto CW = 0x0900;
	static constexpr auto CCW = 0x0901;
	static constexpr auto POINT_SIZE = 0x0B11;
	static constexpr auto POINT_SIZE_RANGE = 0x0B12;
	static constexpr auto POINT_SIZE_GRANULARITY = 0x0B13;
	static constexpr auto INE_SMOOTH = 0x0B20;
	static constexpr auto INE_WIDTH = 0x0B21;
	static constexpr auto INE_WIDTH_RANGE = 0x0B22;
	static constexpr auto INE_WIDTH_GRANULARITY = 0x0B23;
	static constexpr auto POLYGON_MODE = 0x0B40;
	static constexpr auto POLYGON_SMOOTH = 0x0B41;
	static constexpr auto CULL_FACE = 0x0B44;
	static constexpr auto CULL_FACE_MODE = 0x0B45;
	static constexpr auto FRONT_FACE = 0x0B46;
	static constexpr auto DEPTH_RANGE = 0x0B70;
	static constexpr auto DEPTH_TEST = 0x0B71;
	static constexpr auto DEPTH_WRITEMASK = 0x0B72;
	static constexpr auto DEPTH_CLEAR_VALUE = 0x0B73;
	static constexpr auto DEPTH_FUNC = 0x0B74;
	static constexpr auto STENCIL_TEST = 0x0B90;
	static constexpr auto STENCIL_CLEAR_VALUE = 0x0B91;
	static constexpr auto STENCIL_FUNC = 0x0B92;
	static constexpr auto STENCIL_VALUE_MASK = 0x0B93;
	static constexpr auto STENCIL_FAIL = 0x0B94;
	static constexpr auto STENCIL_PASS_DEPTH_FAIL = 0x0B95;
	static constexpr auto STENCIL_PASS_DEPTH_PASS = 0x0B96;
	static constexpr auto STENCIL_REF = 0x0B97;
	static constexpr auto STENCIL_WRITEMASK = 0x0B98;
	static constexpr auto VIEWPORT = 0x0BA2;
	static constexpr auto DITHER = 0x0BD0;
	static constexpr auto BLEND_DST = 0x0BE0;
	static constexpr auto BLEND_SRC = 0x0BE1;
	static constexpr auto BLEND = 0x0BE2;
	static constexpr auto OGIC_OP_MODE = 0x0BF0;
	static constexpr auto DRAW_BUFFER = 0x0C01;
	static constexpr auto READ_BUFFER = 0x0C02;
	static constexpr auto SCISSOR_BOX = 0x0C10;
	static constexpr auto SCISSOR_TEST = 0x0C11;
	static constexpr auto COLOR_CLEAR_VALUE = 0x0C22;
	static constexpr auto COLOR_WRITEMASK = 0x0C23;
	static constexpr auto DOUBLEBUFFER = 0x0C32;
	static constexpr auto STEREO = 0x0C33;
	static constexpr auto INE_SMOOTH_HINT = 0x0C52;
	static constexpr auto POLYGON_SMOOTH_HINT = 0x0C53;
	static constexpr auto UNPACK_SWAP_BYTES = 0x0CF0;
	static constexpr auto UNPACK_LSB_FIRST = 0x0CF1;
	static constexpr auto UNPACK_ROW_LENGTH = 0x0CF2;
	static constexpr auto UNPACK_SKIP_ROWS = 0x0CF3;
	static constexpr auto UNPACK_SKIP_PIXELS = 0x0CF4;
	static constexpr auto UNPACK_ALIGNMENT = 0x0CF5;
	static constexpr auto PACK_SWAP_BYTES = 0x0D00;
	static constexpr auto PACK_LSB_FIRST = 0x0D01;
	static constexpr auto PACK_ROW_LENGTH = 0x0D02;
	static constexpr auto PACK_SKIP_ROWS = 0x0D03;
	static constexpr auto PACK_SKIP_PIXELS = 0x0D04;
	static constexpr auto PACK_ALIGNMENT = 0x0D05;
	static constexpr auto MAX_TEXTURE_SIZE = 0x0D33;
	static constexpr auto MAX_VIEWPORT_DIMS = 0x0D3A;
	static constexpr auto SUBPIXEL_BITS = 0x0D50;
	static constexpr auto TEXTURE_1D = 0x0DE0;
	static constexpr auto TEXTURE_2D = 0x0DE1;
	static constexpr auto TEXTURE_WIDTH = 0x1000;
	static constexpr auto TEXTURE_HEIGHT = 0x1001;
	static constexpr auto TEXTURE_BORDER_COLOR = 0x1004;
	static constexpr auto DONT_CARE = 0x1100;
	static constexpr auto FASTEST = 0x1101;
	static constexpr auto NICEST = 0x1102;
	static constexpr auto BYTE = 0x1400;
	static constexpr auto UNSIGNED_BYTE = 0x1401;
	static constexpr auto SHORT = 0x1402;
	static constexpr auto UNSIGNED_SHORT = 0x1403;
	static constexpr auto INT = 0x1404;
	static constexpr auto UNSIGNED_INT = 0x1405;
	static constexpr auto FLOAT = 0x1406;
	static constexpr auto STACK_OVERFLOW = 0x0503;
	static constexpr auto STACK_UNDERFLOW = 0x0504;
	static constexpr auto CLEAR = 0x1500;
	static constexpr auto AND = 0x1501;
	static constexpr auto AND_REVERSE = 0x1502;
	static constexpr auto COPY = 0x1503;
	static constexpr auto AND_INVERTED = 0x1504;
	static constexpr auto NOOP = 0x1505;
	static constexpr auto XOR = 0x1506;
	static constexpr auto OR = 0x1507;
	static constexpr auto NOR = 0x1508;
	static constexpr auto EQUIV = 0x1509;
	static constexpr auto INVERT = 0x150A;
	static constexpr auto OR_REVERSE = 0x150B;
	static constexpr auto COPY_INVERTED = 0x150C;
	static constexpr auto OR_INVERTED = 0x150D;
	static constexpr auto NAND = 0x150E;
	static constexpr auto SET = 0x150F;
	static constexpr auto TEXTURE = 0x1702;
	static constexpr auto COLOR = 0x1800;
	static constexpr auto DEPTH = 0x1801;
	static constexpr auto STENCIL = 0x1802;
	static constexpr auto STENCIL_INDEX = 0x1901;
	static constexpr auto DEPTH_COMPONENT = 0x1902;
	static constexpr auto RED = 0x1903;
	static constexpr auto REEN = 0x1904;
	static constexpr auto BLUE = 0x1905;
	static constexpr auto ALPHA = 0x1906;
	static constexpr auto RGB = 0x1907;
	static constexpr auto RGBA = 0x1908;
	static constexpr auto POINT = 0x1B00;
	static constexpr auto INE = 0x1B01;
	static constexpr auto FILL = 0x1B02;
	static constexpr auto KEEP = 0x1E00;
	static constexpr auto REPLACE = 0x1E01;
	static constexpr auto INCR = 0x1E02;
	static constexpr auto DECR = 0x1E03;
	static constexpr auto VENDOR = 0x1F00;
	static constexpr auto RENDERER = 0x1F01;
	static constexpr auto VERSION = 0x1F02;
	static constexpr auto EXTENSIONS = 0x1F03;
	static constexpr auto NEAREST = 0x2600;
	static constexpr auto INEAR = 0x2601;
	static constexpr auto NEAREST_MIPMAP_NEAREST = 0x2700;
	static constexpr auto INEAR_MIPMAP_NEAREST = 0x2701;
	static constexpr auto NEAREST_MIPMAP_LINEAR = 0x2702;
	static constexpr auto INEAR_MIPMAP_LINEAR = 0x2703;
	static constexpr auto TEXTURE_MAG_FILTER = 0x2800;
	static constexpr auto TEXTURE_MIN_FILTER = 0x2801;
	static constexpr auto TEXTURE_WRAP_S = 0x2802;
	static constexpr auto TEXTURE_WRAP_T = 0x2803;
	static constexpr auto REPEAT = 0x2901;
	static constexpr auto COLOR_LOGIC_OP = 0x0BF2;
	static constexpr auto POLYGON_OFFSET_UNITS = 0x2A00;
	static constexpr auto POLYGON_OFFSET_POINT = 0x2A01;
	static constexpr auto POLYGON_OFFSET_LINE = 0x2A02;
	static constexpr auto POLYGON_OFFSET_FILL = 0x8037;
	static constexpr auto POLYGON_OFFSET_FACTOR = 0x8038;
	static constexpr auto TEXTURE_BINDING_1D = 0x8068;
	static constexpr auto TEXTURE_BINDING_2D = 0x8069;
	static constexpr auto TEXTURE_INTERNAL_FORMAT = 0x1003;
	static constexpr auto TEXTURE_RED_SIZE = 0x805C;
	static constexpr auto TEXTURE_GREEN_SIZE = 0x805D;
	static constexpr auto TEXTURE_BLUE_SIZE = 0x805E;
	static constexpr auto TEXTURE_ALPHA_SIZE = 0x805F;
	static constexpr auto DOUBLE = 0x140A;
	static constexpr auto PROXY_TEXTURE_1D = 0x8063;
	static constexpr auto PROXY_TEXTURE_2D = 0x8064;
	static constexpr auto R3_G3_B2 = 0x2A10;
	static constexpr auto RGB4 = 0x804F;
	static constexpr auto RGB5 = 0x8050;
	static constexpr auto RGB8 = 0x8051;
	static constexpr auto RGB10 = 0x8052;
	static constexpr auto RGB12 = 0x8053;
	static constexpr auto RGB16 = 0x8054;
	static constexpr auto RGBA2 = 0x8055;
	static constexpr auto RGBA4 = 0x8056;
	static constexpr auto RGB5_A1 = 0x8057;
	static constexpr auto RGBA8 = 0x8058;
	static constexpr auto RGB10_A2 = 0x8059;
	static constexpr auto RGBA12 = 0x805A;
	static constexpr auto RGBA16 = 0x805B;
	static constexpr auto VERTEX_ARRAY = 0x8074;
	static constexpr auto UNSIGNED_BYTE_3_3_2 = 0x8032;
	static constexpr auto UNSIGNED_SHORT_4_4_4_4 = 0x8033;
	static constexpr auto UNSIGNED_SHORT_5_5_5_1 = 0x8034;
	static constexpr auto UNSIGNED_INT_8_8_8_8 = 0x8035;
	static constexpr auto UNSIGNED_INT_10_10_10_2 = 0x8036;
	static constexpr auto TEXTURE_BINDING_3D = 0x806A;
	static constexpr auto PACK_SKIP_IMAGES = 0x806B;
	static constexpr auto PACK_IMAGE_HEIGHT = 0x806C;
	static constexpr auto UNPACK_SKIP_IMAGES = 0x806D;
	static constexpr auto UNPACK_IMAGE_HEIGHT = 0x806E;
	static constexpr auto TEXTURE_3D = 0x806F;
	static constexpr auto PROXY_TEXTURE_3D = 0x8070;
	static constexpr auto TEXTURE_DEPTH = 0x8071;
	static constexpr auto TEXTURE_WRAP_R = 0x8072;
	static constexpr auto MAX_3D_TEXTURE_SIZE = 0x8073;
	static constexpr auto UNSIGNED_BYTE_2_3_3_REV = 0x8362;
	static constexpr auto UNSIGNED_SHORT_5_6_5 = 0x8363;
	static constexpr auto UNSIGNED_SHORT_5_6_5_REV = 0x8364;
	static constexpr auto UNSIGNED_SHORT_4_4_4_4_REV = 0x8365;
	static constexpr auto UNSIGNED_SHORT_1_5_5_5_REV = 0x8366;
	static constexpr auto UNSIGNED_INT_8_8_8_8_REV = 0x8367;
	static constexpr auto UNSIGNED_INT_2_10_10_10_REV = 0x8368;
	static constexpr auto BGR = 0x80E0;
	static constexpr auto BGRA = 0x80E1;
	static constexpr auto MAX_ELEMENTS_VERTICES = 0x80E8;
	static constexpr auto MAX_ELEMENTS_INDICES = 0x80E9;
	static constexpr auto CLAMP_TO_EDGE = 0x812F;
	static constexpr auto TEXTURE_MIN_LOD = 0x813A;
	static constexpr auto TEXTURE_MAX_LOD = 0x813B;
	static constexpr auto TEXTURE_BASE_LEVEL = 0x813C;
	static constexpr auto TEXTURE_MAX_LEVEL = 0x813D;
	static constexpr auto SMOOTH_POINT_SIZE_RANGE = 0x0B12;
	static constexpr auto SMOOTH_POINT_SIZE_GRANULARITY = 0x0B13;
	static constexpr auto SMOOTH_LINE_WIDTH_RANGE = 0x0B22;
	static constexpr auto SMOOTH_LINE_WIDTH_GRANULARITY = 0x0B23;
	static constexpr auto ALIASED_LINE_WIDTH_RANGE = 0x846E;
	static constexpr auto TEXTURE0 = 0x84C0;
	static constexpr auto TEXTURE1 = 0x84C1;
	static constexpr auto TEXTURE2 = 0x84C2;
	static constexpr auto TEXTURE3 = 0x84C3;
	static constexpr auto TEXTURE4 = 0x84C4;
	static constexpr auto TEXTURE5 = 0x84C5;
	static constexpr auto TEXTURE6 = 0x84C6;
	static constexpr auto TEXTURE7 = 0x84C7;
	static constexpr auto TEXTURE8 = 0x84C8;
	static constexpr auto TEXTURE9 = 0x84C9;
	static constexpr auto TEXTURE10 = 0x84CA;
	static constexpr auto TEXTURE11 = 0x84CB;
	static constexpr auto TEXTURE12 = 0x84CC;
	static constexpr auto TEXTURE13 = 0x84CD;
	static constexpr auto TEXTURE14 = 0x84CE;
	static constexpr auto TEXTURE15 = 0x84CF;
	static constexpr auto TEXTURE16 = 0x84D0;
	static constexpr auto TEXTURE17 = 0x84D1;
	static constexpr auto TEXTURE18 = 0x84D2;
	static constexpr auto TEXTURE19 = 0x84D3;
	static constexpr auto TEXTURE20 = 0x84D4;
	static constexpr auto TEXTURE21 = 0x84D5;
	static constexpr auto TEXTURE22 = 0x84D6;
	static constexpr auto TEXTURE23 = 0x84D7;
	static constexpr auto TEXTURE24 = 0x84D8;
	static constexpr auto TEXTURE25 = 0x84D9;
	static constexpr auto TEXTURE26 = 0x84DA;
	static constexpr auto TEXTURE27 = 0x84DB;
	static constexpr auto TEXTURE28 = 0x84DC;
	static constexpr auto TEXTURE29 = 0x84DD;
	static constexpr auto TEXTURE30 = 0x84DE;
	static constexpr auto TEXTURE31 = 0x84DF;
	static constexpr auto ACTIVE_TEXTURE = 0x84E0;
	static constexpr auto MULTISAMPLE = 0x809D;
	static constexpr auto SAMPLE_ALPHA_TO_COVERAGE = 0x809E;
	static constexpr auto SAMPLE_ALPHA_TO_ONE = 0x809F;
	static constexpr auto SAMPLE_COVERAGE = 0x80A0;
	static constexpr auto SAMPLE_BUFFERS = 0x80A8;
	static constexpr auto SAMPLES = 0x80A9;
	static constexpr auto SAMPLE_COVERAGE_VALUE = 0x80AA;
	static constexpr auto SAMPLE_COVERAGE_INVERT = 0x80AB;
	static constexpr auto TEXTURE_CUBE_MAP = 0x8513;
	static constexpr auto TEXTURE_BINDING_CUBE_MAP = 0x8514;
	static constexpr auto TEXTURE_CUBE_MAP_POSITIVE_X = 0x8515;
	static constexpr auto TEXTURE_CUBE_MAP_NEGATIVE_X = 0x8516;
	static constexpr auto TEXTURE_CUBE_MAP_POSITIVE_Y = 0x8517;
	static constexpr auto TEXTURE_CUBE_MAP_NEGATIVE_Y = 0x8518;
	static constexpr auto TEXTURE_CUBE_MAP_POSITIVE_Z = 0x8519;
	static constexpr auto TEXTURE_CUBE_MAP_NEGATIVE_Z = 0x851A;
	static constexpr auto PROXY_TEXTURE_CUBE_MAP = 0x851B;
	static constexpr auto MAX_CUBE_MAP_TEXTURE_SIZE = 0x851C;
	static constexpr auto COMPRESSED_RGB = 0x84ED;
	static constexpr auto COMPRESSED_RGBA = 0x84EE;
	static constexpr auto TEXTURE_COMPRESSION_HINT = 0x84EF;
	static constexpr auto TEXTURE_COMPRESSED_IMAGE_SIZE = 0x86A0;
	static constexpr auto TEXTURE_COMPRESSED = 0x86A1;
	static constexpr auto NUM_COMPRESSED_TEXTURE_FORMATS = 0x86A2;
	static constexpr auto COMPRESSED_TEXTURE_FORMATS = 0x86A3;
	static constexpr auto CLAMP_TO_BORDER = 0x812D;
	static constexpr auto BLEND_DST_RGB = 0x80C8;
	static constexpr auto BLEND_SRC_RGB = 0x80C9;
	static constexpr auto BLEND_DST_ALPHA = 0x80CA;
	static constexpr auto BLEND_SRC_ALPHA = 0x80CB;
	static constexpr auto POINT_FADE_THRESHOLD_SIZE = 0x8128;
	static constexpr auto DEPTH_COMPONENT16 = 0x81A5;
	static constexpr auto DEPTH_COMPONENT24 = 0x81A6;
	static constexpr auto DEPTH_COMPONENT32 = 0x81A7;
	static constexpr auto MIRRORED_REPEAT = 0x8370;
	static constexpr auto MAX_TEXTURE_LOD_BIAS = 0x84FD;
	static constexpr auto TEXTURE_LOD_BIAS = 0x8501;
	static constexpr auto INCR_WRAP = 0x8507;
	static constexpr auto DECR_WRAP = 0x8508;
	static constexpr auto TEXTURE_DEPTH_SIZE = 0x884A;
	static constexpr auto TEXTURE_COMPARE_MODE = 0x884C;
	static constexpr auto TEXTURE_COMPARE_FUNC = 0x884D;
	static constexpr auto BLEND_COLOR = 0x8005;
	static constexpr auto BLEND_EQUATION = 0x8009;
	static constexpr auto CONSTANT_COLOR = 0x8001;
	static constexpr auto ONE_MINUS_CONSTANT_COLOR = 0x8002;
	static constexpr auto CONSTANT_ALPHA = 0x8003;
	static constexpr auto ONE_MINUS_CONSTANT_ALPHA = 0x8004;
	static constexpr auto FUNC_ADD = 0x8006;
	static constexpr auto FUNC_REVERSE_SUBTRACT = 0x800B;
	static constexpr auto FUNC_SUBTRACT = 0x800A;
	static constexpr auto MIN = 0x8007;
	static constexpr auto MAX = 0x8008;
	static constexpr auto BUFFER_SIZE = 0x8764;
	static constexpr auto BUFFER_USAGE = 0x8765;
	static constexpr auto QUERY_COUNTER_BITS = 0x8864;
	static constexpr auto CURRENT_QUERY = 0x8865;
	static constexpr auto QUERY_RESULT = 0x8866;
	static constexpr auto QUERY_RESULT_AVAILABLE = 0x8867;
	static constexpr auto ARRAY_BUFFER = 0x8892;
	static constexpr auto ELEMENT_ARRAY_BUFFER = 0x8893;
	static constexpr auto ARRAY_BUFFER_BINDING = 0x8894;
	static constexpr auto ELEMENT_ARRAY_BUFFER_BINDING = 0x8895;
	static constexpr auto VERTEX_ATTRIB_ARRAY_BUFFER_BINDING = 0x889F;
	static constexpr auto READ_ONLY = 0x88B8;
	static constexpr auto WRITE_ONLY = 0x88B9;
	static constexpr auto READ_WRITE = 0x88BA;
	static constexpr auto BUFFER_ACCESS = 0x88BB;
	static constexpr auto BUFFER_MAPPED = 0x88BC;
	static constexpr auto BUFFER_MAP_POINTER = 0x88BD;
	static constexpr auto STREAM_DRAW = 0x88E0;
	static constexpr auto STREAM_READ = 0x88E1;
	static constexpr auto STREAM_COPY = 0x88E2;
	static constexpr auto STATIC_DRAW = 0x88E4;
	static constexpr auto STATIC_READ = 0x88E5;
	static constexpr auto STATIC_COPY = 0x88E6;
	static constexpr auto DYNAMIC_DRAW = 0x88E8;
	static constexpr auto DYNAMIC_READ = 0x88E9;
	static constexpr auto DYNAMIC_COPY = 0x88EA;
	static constexpr auto SAMPLES_PASSED = 0x8914;
	static constexpr auto SRC1_ALPHA = 0x8589;
	static constexpr auto BLEND_EQUATION_RGB = 0x8009;
	static constexpr auto VERTEX_ATTRIB_ARRAY_ENABLED = 0x8622;
	static constexpr auto VERTEX_ATTRIB_ARRAY_SIZE = 0x8623;
	static constexpr auto VERTEX_ATTRIB_ARRAY_STRIDE = 0x8624;
	static constexpr auto VERTEX_ATTRIB_ARRAY_TYPE = 0x8625;
	static constexpr auto CURRENT_VERTEX_ATTRIB = 0x8626;
	static constexpr auto VERTEX_PROGRAM_POINT_SIZE = 0x8642;
	static constexpr auto VERTEX_ATTRIB_ARRAY_POINTER = 0x8645;
	static constexpr auto STENCIL_BACK_FUNC = 0x8800;
	static constexpr auto STENCIL_BACK_FAIL = 0x8801;
	static constexpr auto STENCIL_BACK_PASS_DEPTH_FAIL = 0x8802;
	static constexpr auto STENCIL_BACK_PASS_DEPTH_PASS = 0x8803;
	static constexpr auto MAX_DRAW_BUFFERS = 0x8824;
	static constexpr auto DRAW_BUFFER0 = 0x8825;
	static constexpr auto DRAW_BUFFER1 = 0x8826;
	static constexpr auto DRAW_BUFFER2 = 0x8827;
	static constexpr auto DRAW_BUFFER3 = 0x8828;
	static constexpr auto DRAW_BUFFER4 = 0x8829;
	static constexpr auto DRAW_BUFFER5 = 0x882A;
	static constexpr auto DRAW_BUFFER6 = 0x882B;
	static constexpr auto DRAW_BUFFER7 = 0x882C;
	static constexpr auto DRAW_BUFFER8 = 0x882D;
	static constexpr auto DRAW_BUFFER9 = 0x882E;
	static constexpr auto DRAW_BUFFER10 = 0x882F;
	static constexpr auto DRAW_BUFFER11 = 0x8830;
	static constexpr auto DRAW_BUFFER12 = 0x8831;
	static constexpr auto DRAW_BUFFER13 = 0x8832;
	static constexpr auto DRAW_BUFFER14 = 0x8833;
	static constexpr auto DRAW_BUFFER15 = 0x8834;
	static constexpr auto BLEND_EQUATION_ALPHA = 0x883D;
	static constexpr auto MAX_VERTEX_ATTRIBS = 0x8869;
	static constexpr auto VERTEX_ATTRIB_ARRAY_NORMALIZED = 0x886A;
	static constexpr auto MAX_TEXTURE_IMAGE_UNITS = 0x8872;
	static constexpr auto FRAGMENT_SHADER = 0x8B30;
	static constexpr auto VERTEX_SHADER = 0x8B31;
	static constexpr auto MAX_FRAGMENT_UNIFORM_COMPONENTS = 0x8B49;
	static constexpr auto MAX_VERTEX_UNIFORM_COMPONENTS = 0x8B4A;
	static constexpr auto MAX_VARYING_FLOATS = 0x8B4B;
	static constexpr auto MAX_VERTEX_TEXTURE_IMAGE_UNITS = 0x8B4C;
	static constexpr auto MAX_COMBINED_TEXTURE_IMAGE_UNITS = 0x8B4D;
	static constexpr auto SHADER_TYPE = 0x8B4F;
	static constexpr auto FLOAT_VEC2 = 0x8B50;
	static constexpr auto FLOAT_VEC3 = 0x8B51;
	static constexpr auto FLOAT_VEC4 = 0x8B52;
	static constexpr auto INT_VEC2 = 0x8B53;
	static constexpr auto INT_VEC3 = 0x8B54;
	static constexpr auto INT_VEC4 = 0x8B55;
	static constexpr auto BOOL = 0x8B56;
	static constexpr auto BOOL_VEC2 = 0x8B57;
	static constexpr auto BOOL_VEC3 = 0x8B58;
	static constexpr auto BOOL_VEC4 = 0x8B59;
	static constexpr auto FLOAT_MAT2 = 0x8B5A;
	static constexpr auto FLOAT_MAT3 = 0x8B5B;
	static constexpr auto FLOAT_MAT4 = 0x8B5C;
	static constexpr auto SAMPLER_1D = 0x8B5D;
	static constexpr auto SAMPLER_2D = 0x8B5E;
	static constexpr auto SAMPLER_3D = 0x8B5F;
	static constexpr auto SAMPLER_CUBE = 0x8B60;
	static constexpr auto SAMPLER_1D_SHADOW = 0x8B61;
	static constexpr auto SAMPLER_2D_SHADOW = 0x8B62;
	static constexpr auto DELETE_STATUS = 0x8B80;
	static constexpr auto COMPILE_STATUS = 0x8B81;
	static constexpr auto INK_STATUS = 0x8B82;
	static constexpr auto VALIDATE_STATUS = 0x8B83;
	static constexpr auto INFO_LOG_LENGTH = 0x8B84;
	static constexpr auto ATTACHED_SHADERS = 0x8B85;
	static constexpr auto ACTIVE_UNIFORMS = 0x8B86;
	static constexpr auto ACTIVE_UNIFORM_MAX_LENGTH = 0x8B87;
	static constexpr auto SHADER_SOURCE_LENGTH = 0x8B88;
	static constexpr auto ACTIVE_ATTRIBUTES = 0x8B89;
	static constexpr auto ACTIVE_ATTRIBUTE_MAX_LENGTH = 0x8B8A;
	static constexpr auto FRAGMENT_SHADER_DERIVATIVE_HINT = 0x8B8B;
	static constexpr auto SHADING_LANGUAGE_VERSION = 0x8B8C;
	static constexpr auto CURRENT_PROGRAM = 0x8B8D;
	static constexpr auto POINT_SPRITE_COORD_ORIGIN = 0x8CA0;
	static constexpr auto OWER_LEFT = 0x8CA1;
	static constexpr auto UPPER_LEFT = 0x8CA2;
	static constexpr auto STENCIL_BACK_REF = 0x8CA3;
	static constexpr auto STENCIL_BACK_VALUE_MASK = 0x8CA4;
	static constexpr auto STENCIL_BACK_WRITEMASK = 0x8CA5;
	static constexpr auto PIXEL_PACK_BUFFER = 0x88EB;
	static constexpr auto PIXEL_UNPACK_BUFFER = 0x88EC;
	static constexpr auto PIXEL_PACK_BUFFER_BINDING = 0x88ED;
	static constexpr auto PIXEL_UNPACK_BUFFER_BINDING = 0x88EF;
	static constexpr auto FLOAT_MAT2x3 = 0x8B65;
	static constexpr auto FLOAT_MAT2x4 = 0x8B66;
	static constexpr auto FLOAT_MAT3x2 = 0x8B67;
	static constexpr auto FLOAT_MAT3x4 = 0x8B68;
	static constexpr auto FLOAT_MAT4x2 = 0x8B69;
	static constexpr auto FLOAT_MAT4x3 = 0x8B6A;
	static constexpr auto SRGB = 0x8C40;
	static constexpr auto SRGB8 = 0x8C41;
	static constexpr auto SRGB_ALPHA = 0x8C42;
	static constexpr auto SRGB8_ALPHA8 = 0x8C43;
	static constexpr auto COMPRESSED_SRGB = 0x8C48;
	static constexpr auto COMPRESSED_SRGB_ALPHA = 0x8C49;
	static constexpr auto COMPARE_REF_TO_TEXTURE = 0x884E;
	static constexpr auto CLIP_DISTANCE0 = 0x3000;
	static constexpr auto CLIP_DISTANCE1 = 0x3001;
	static constexpr auto CLIP_DISTANCE2 = 0x3002;
	static constexpr auto CLIP_DISTANCE3 = 0x3003;
	static constexpr auto CLIP_DISTANCE4 = 0x3004;
	static constexpr auto CLIP_DISTANCE5 = 0x3005;
	static constexpr auto CLIP_DISTANCE6 = 0x3006;
	static constexpr auto CLIP_DISTANCE7 = 0x3007;
	static constexpr auto MAX_CLIP_DISTANCES = 0x0D32;
	static constexpr auto MAJOR_VERSION = 0x821B;
	static constexpr auto MINOR_VERSION = 0x821C;
	static constexpr auto NUM_EXTENSIONS = 0x821D;
	static constexpr auto CONTEXT_FLAGS = 0x821E;
	static constexpr auto COMPRESSED_RED = 0x8225;
	static constexpr auto COMPRESSED_RG = 0x8226;
	static constexpr auto CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT = 0x00000001;
	static constexpr auto RGBA32F = 0x8814;
	static constexpr auto RGB32F = 0x8815;
	static constexpr auto RGBA16F = 0x881A;
	static constexpr auto RGB16F = 0x881B;
	static constexpr auto VERTEX_ATTRIB_ARRAY_INTEGER = 0x88FD;
	static constexpr auto MAX_ARRAY_TEXTURE_LAYERS = 0x88FF;
	static constexpr auto MIN_PROGRAM_TEXEL_OFFSET = 0x8904;
	static constexpr auto MAX_PROGRAM_TEXEL_OFFSET = 0x8905;
	static constexpr auto CLAMP_READ_COLOR = 0x891C;
	static constexpr auto FIXED_ONLY = 0x891D;
	static constexpr auto MAX_VARYING_COMPONENTS = 0x8B4B;
	static constexpr auto TEXTURE_1D_ARRAY = 0x8C18;
	static constexpr auto PROXY_TEXTURE_1D_ARRAY = 0x8C19;
	static constexpr auto TEXTURE_2D_ARRAY = 0x8C1A;
	static constexpr auto PROXY_TEXTURE_2D_ARRAY = 0x8C1B;
	static constexpr auto TEXTURE_BINDING_1D_ARRAY = 0x8C1C;
	static constexpr auto TEXTURE_BINDING_2D_ARRAY = 0x8C1D;
	static constexpr auto R11F_G11F_B10F = 0x8C3A;
	static constexpr auto UNSIGNED_INT_10F_11F_11F_REV = 0x8C3B;
	static constexpr auto RGB9_E5 = 0x8C3D;
	static constexpr auto UNSIGNED_INT_5_9_9_9_REV = 0x8C3E;
	static constexpr auto TEXTURE_SHARED_SIZE = 0x8C3F;
	static constexpr auto TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH = 0x8C76;
	static constexpr auto TRANSFORM_FEEDBACK_BUFFER_MODE = 0x8C7F;
	static constexpr auto MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS = 0x8C80;
	static constexpr auto TRANSFORM_FEEDBACK_VARYINGS = 0x8C83;
	static constexpr auto TRANSFORM_FEEDBACK_BUFFER_START = 0x8C84;
	static constexpr auto TRANSFORM_FEEDBACK_BUFFER_SIZE = 0x8C85;
	static constexpr auto PRIMITIVES_GENERATED = 0x8C87;
	static constexpr auto TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN = 0x8C88;
	static constexpr auto RASTERIZER_DISCARD = 0x8C89;
	static constexpr auto MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS = 0x8C8A;
	static constexpr auto MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS = 0x8C8B;
	static constexpr auto INTERLEAVED_ATTRIBS = 0x8C8C;
	static constexpr auto SEPARATE_ATTRIBS = 0x8C8D;
	static constexpr auto TRANSFORM_FEEDBACK_BUFFER = 0x8C8E;
	static constexpr auto TRANSFORM_FEEDBACK_BUFFER_BINDING = 0x8C8F;
	static constexpr auto RGBA32UI = 0x8D70;
	static constexpr auto RGB32UI = 0x8D71;
	static constexpr auto RGBA16UI = 0x8D76;
	static constexpr auto RGB16UI = 0x8D77;
	static constexpr auto RGBA8UI = 0x8D7C;
	static constexpr auto RGB8UI = 0x8D7D;
	static constexpr auto RGBA32I = 0x8D82;
	static constexpr auto RGB32I = 0x8D83;
	static constexpr auto RGBA16I = 0x8D88;
	static constexpr auto RGB16I = 0x8D89;
	static constexpr auto RGBA8I = 0x8D8E;
	static constexpr auto RGB8I = 0x8D8F;
	static constexpr auto RED_INTEGER = 0x8D94;
	static constexpr auto REEN_INTEGER = 0x8D95;
	static constexpr auto BLUE_INTEGER = 0x8D96;
	static constexpr auto RGB_INTEGER = 0x8D98;
	static constexpr auto RGBA_INTEGER = 0x8D99;
	static constexpr auto BGR_INTEGER = 0x8D9A;
	static constexpr auto BGRA_INTEGER = 0x8D9B;
	static constexpr auto SAMPLER_1D_ARRAY = 0x8DC0;
	static constexpr auto SAMPLER_2D_ARRAY = 0x8DC1;
	static constexpr auto SAMPLER_1D_ARRAY_SHADOW = 0x8DC3;
	static constexpr auto SAMPLER_2D_ARRAY_SHADOW = 0x8DC4;
	static constexpr auto SAMPLER_CUBE_SHADOW = 0x8DC5;
	static constexpr auto UNSIGNED_INT_VEC2 = 0x8DC6;
	static constexpr auto UNSIGNED_INT_VEC3 = 0x8DC7;
	static constexpr auto UNSIGNED_INT_VEC4 = 0x8DC8;
	static constexpr auto INT_SAMPLER_1D = 0x8DC9;
	static constexpr auto INT_SAMPLER_2D = 0x8DCA;
	static constexpr auto INT_SAMPLER_3D = 0x8DCB;
	static constexpr auto INT_SAMPLER_CUBE = 0x8DCC;
	static constexpr auto INT_SAMPLER_1D_ARRAY = 0x8DCE;
	static constexpr auto INT_SAMPLER_2D_ARRAY = 0x8DCF;
	static constexpr auto UNSIGNED_INT_SAMPLER_1D = 0x8DD1;
	static constexpr auto UNSIGNED_INT_SAMPLER_2D = 0x8DD2;
	static constexpr auto UNSIGNED_INT_SAMPLER_3D = 0x8DD3;
	static constexpr auto UNSIGNED_INT_SAMPLER_CUBE = 0x8DD4;
	static constexpr auto UNSIGNED_INT_SAMPLER_1D_ARRAY = 0x8DD6;
	static constexpr auto UNSIGNED_INT_SAMPLER_2D_ARRAY = 0x8DD7;
	static constexpr auto QUERY_WAIT = 0x8E13;
	static constexpr auto QUERY_NO_WAIT = 0x8E14;
	static constexpr auto QUERY_BY_REGION_WAIT = 0x8E15;
	static constexpr auto QUERY_BY_REGION_NO_WAIT = 0x8E16;
	static constexpr auto BUFFER_ACCESS_FLAGS = 0x911F;
	static constexpr auto BUFFER_MAP_LENGTH = 0x9120;
	static constexpr auto BUFFER_MAP_OFFSET = 0x9121;
	static constexpr auto DEPTH_COMPONENT32F = 0x8CAC;
	static constexpr auto DEPTH32F_STENCIL8 = 0x8CAD;
	static constexpr auto FLOAT_32_UNSIGNED_INT_24_8_REV = 0x8DAD;
	static constexpr auto INVALID_FRAMEBUFFER_OPERATION = 0x0506;
	static constexpr auto FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING = 0x8210;
	static constexpr auto FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE = 0x8211;
	static constexpr auto FRAMEBUFFER_ATTACHMENT_RED_SIZE = 0x8212;
	static constexpr auto FRAMEBUFFER_ATTACHMENT_GREEN_SIZE = 0x8213;
	static constexpr auto FRAMEBUFFER_ATTACHMENT_BLUE_SIZE = 0x8214;
	static constexpr auto FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE = 0x8215;
	static constexpr auto FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE = 0x8216;
	static constexpr auto FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE = 0x8217;
	static constexpr auto FRAMEBUFFER_DEFAULT = 0x8218;
	static constexpr auto FRAMEBUFFER_UNDEFINED = 0x8219;
	static constexpr auto DEPTH_STENCIL_ATTACHMENT = 0x821A;
	static constexpr auto MAX_RENDERBUFFER_SIZE = 0x84E8;
	static constexpr auto DEPTH_STENCIL = 0x84F9;
	static constexpr auto UNSIGNED_INT_24_8 = 0x84FA;
	static constexpr auto DEPTH24_STENCIL8 = 0x88F0;
	static constexpr auto TEXTURE_STENCIL_SIZE = 0x88F1;
	static constexpr auto TEXTURE_RED_TYPE = 0x8C10;
	static constexpr auto TEXTURE_GREEN_TYPE = 0x8C11;
	static constexpr auto TEXTURE_BLUE_TYPE = 0x8C12;
	static constexpr auto TEXTURE_ALPHA_TYPE = 0x8C13;
	static constexpr auto TEXTURE_DEPTH_TYPE = 0x8C16;
	static constexpr auto UNSIGNED_NORMALIZED = 0x8C17;
	static constexpr auto FRAMEBUFFER_BINDING = 0x8CA6;
	static constexpr auto DRAW_FRAMEBUFFER_BINDING = 0x8CA6;
	static constexpr auto RENDERBUFFER_BINDING = 0x8CA7;
	static constexpr auto READ_FRAMEBUFFER = 0x8CA8;
	static constexpr auto DRAW_FRAMEBUFFER = 0x8CA9;
	static constexpr auto READ_FRAMEBUFFER_BINDING = 0x8CAA;
	static constexpr auto RENDERBUFFER_SAMPLES = 0x8CAB;
	static constexpr auto FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE = 0x8CD0;
	static constexpr auto FRAMEBUFFER_ATTACHMENT_OBJECT_NAME = 0x8CD1;
	static constexpr auto FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL = 0x8CD2;
	static constexpr auto FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE = 0x8CD3;
	static constexpr auto FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER = 0x8CD4;
	static constexpr auto FRAMEBUFFER_COMPLETE = 0x8CD5;
	static constexpr auto FRAMEBUFFER_INCOMPLETE_ATTACHMENT = 0x8CD6;
	static constexpr auto FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT = 0x8CD7;
	static constexpr auto FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER = 0x8CDB;
	static constexpr auto FRAMEBUFFER_INCOMPLETE_READ_BUFFER = 0x8CDC;
	static constexpr auto FRAMEBUFFER_UNSUPPORTED = 0x8CDD;
	static constexpr auto MAX_COLOR_ATTACHMENTS = 0x8CDF;
	static constexpr auto COLOR_ATTACHMENT0 = 0x8CE0;
	static constexpr auto COLOR_ATTACHMENT1 = 0x8CE1;
	static constexpr auto COLOR_ATTACHMENT2 = 0x8CE2;
	static constexpr auto COLOR_ATTACHMENT3 = 0x8CE3;
	static constexpr auto COLOR_ATTACHMENT4 = 0x8CE4;
	static constexpr auto COLOR_ATTACHMENT5 = 0x8CE5;
	static constexpr auto COLOR_ATTACHMENT6 = 0x8CE6;
	static constexpr auto COLOR_ATTACHMENT7 = 0x8CE7;
	static constexpr auto COLOR_ATTACHMENT8 = 0x8CE8;
	static constexpr auto COLOR_ATTACHMENT9 = 0x8CE9;
	static constexpr auto COLOR_ATTACHMENT10 = 0x8CEA;
	static constexpr auto COLOR_ATTACHMENT11 = 0x8CEB;
	static constexpr auto COLOR_ATTACHMENT12 = 0x8CEC;
	static constexpr auto COLOR_ATTACHMENT13 = 0x8CED;
	static constexpr auto COLOR_ATTACHMENT14 = 0x8CEE;
	static constexpr auto COLOR_ATTACHMENT15 = 0x8CEF;
	static constexpr auto COLOR_ATTACHMENT16 = 0x8CF0;
	static constexpr auto COLOR_ATTACHMENT17 = 0x8CF1;
	static constexpr auto COLOR_ATTACHMENT18 = 0x8CF2;
	static constexpr auto COLOR_ATTACHMENT19 = 0x8CF3;
	static constexpr auto COLOR_ATTACHMENT20 = 0x8CF4;
	static constexpr auto COLOR_ATTACHMENT21 = 0x8CF5;
	static constexpr auto COLOR_ATTACHMENT22 = 0x8CF6;
	static constexpr auto COLOR_ATTACHMENT23 = 0x8CF7;
	static constexpr auto COLOR_ATTACHMENT24 = 0x8CF8;
	static constexpr auto COLOR_ATTACHMENT25 = 0x8CF9;
	static constexpr auto COLOR_ATTACHMENT26 = 0x8CFA;
	static constexpr auto COLOR_ATTACHMENT27 = 0x8CFB;
	static constexpr auto COLOR_ATTACHMENT28 = 0x8CFC;
	static constexpr auto COLOR_ATTACHMENT29 = 0x8CFD;
	static constexpr auto COLOR_ATTACHMENT30 = 0x8CFE;
	static constexpr auto COLOR_ATTACHMENT31 = 0x8CFF;
	static constexpr auto DEPTH_ATTACHMENT = 0x8D00;
	static constexpr auto STENCIL_ATTACHMENT = 0x8D20;
	static constexpr auto FRAMEBUFFER = 0x8D40;
	static constexpr auto RENDERBUFFER = 0x8D41;
	static constexpr auto RENDERBUFFER_WIDTH = 0x8D42;
	static constexpr auto RENDERBUFFER_HEIGHT = 0x8D43;
	static constexpr auto RENDERBUFFER_INTERNAL_FORMAT = 0x8D44;
	static constexpr auto STENCIL_INDEX1 = 0x8D46;
	static constexpr auto STENCIL_INDEX4 = 0x8D47;
	static constexpr auto STENCIL_INDEX8 = 0x8D48;
	static constexpr auto STENCIL_INDEX16 = 0x8D49;
	static constexpr auto RENDERBUFFER_RED_SIZE = 0x8D50;
	static constexpr auto RENDERBUFFER_GREEN_SIZE = 0x8D51;
	static constexpr auto RENDERBUFFER_BLUE_SIZE = 0x8D52;
	static constexpr auto RENDERBUFFER_ALPHA_SIZE = 0x8D53;
	static constexpr auto RENDERBUFFER_DEPTH_SIZE = 0x8D54;
	static constexpr auto RENDERBUFFER_STENCIL_SIZE = 0x8D55;
	static constexpr auto FRAMEBUFFER_INCOMPLETE_MULTISAMPLE = 0x8D56;
	static constexpr auto MAX_SAMPLES = 0x8D57;
	static constexpr auto FRAMEBUFFER_SRGB = 0x8DB9;
	static constexpr auto HALF_FLOAT = 0x140B;
	static constexpr auto MAP_READ_BIT = 0x0001;
	static constexpr auto MAP_WRITE_BIT = 0x0002;
	static constexpr auto MAP_INVALIDATE_RANGE_BIT = 0x0004;
	static constexpr auto MAP_INVALIDATE_BUFFER_BIT = 0x0008;
	static constexpr auto MAP_FLUSH_EXPLICIT_BIT = 0x0010;
	static constexpr auto MAP_UNSYNCHRONIZED_BIT = 0x0020;
	static constexpr auto COMPRESSED_RED_RGTC1 = 0x8DBB;
	static constexpr auto COMPRESSED_SIGNED_RED_RGTC1 = 0x8DBC;
	static constexpr auto COMPRESSED_RG_RGTC2 = 0x8DBD;
	static constexpr auto COMPRESSED_SIGNED_RG_RGTC2 = 0x8DBE;
	static constexpr auto RG = 0x8227;
	static constexpr auto RG_INTEGER = 0x8228;
	static constexpr auto R8 = 0x8229;
	static constexpr auto R16 = 0x822A;
	static constexpr auto RG8 = 0x822B;
	static constexpr auto RG16 = 0x822C;
	static constexpr auto R16F = 0x822D;
	static constexpr auto R32F = 0x822E;
	static constexpr auto RG16F = 0x822F;
	static constexpr auto RG32F = 0x8230;
	static constexpr auto R8I = 0x8231;
	static constexpr auto R8UI = 0x8232;
	static constexpr auto R16I = 0x8233;
	static constexpr auto R16UI = 0x8234;
	static constexpr auto R32I = 0x8235;
	static constexpr auto R32UI = 0x8236;
	static constexpr auto RG8I = 0x8237;
	static constexpr auto RG8UI = 0x8238;
	static constexpr auto RG16I = 0x8239;
	static constexpr auto RG16UI = 0x823A;
	static constexpr auto RG32I = 0x823B;
	static constexpr auto RG32UI = 0x823C;
	static constexpr auto VERTEX_ARRAY_BINDING = 0x85B5;
	static constexpr auto SAMPLER_2D_RECT = 0x8B63;
	static constexpr auto SAMPLER_2D_RECT_SHADOW = 0x8B64;
	static constexpr auto SAMPLER_BUFFER = 0x8DC2;
	static constexpr auto INT_SAMPLER_2D_RECT = 0x8DCD;
	static constexpr auto INT_SAMPLER_BUFFER = 0x8DD0;
	static constexpr auto UNSIGNED_INT_SAMPLER_2D_RECT = 0x8DD5;
	static constexpr auto UNSIGNED_INT_SAMPLER_BUFFER = 0x8DD8;
	static constexpr auto TEXTURE_BUFFER = 0x8C2A;
	static constexpr auto MAX_TEXTURE_BUFFER_SIZE = 0x8C2B;
	static constexpr auto TEXTURE_BINDING_BUFFER = 0x8C2C;
	static constexpr auto TEXTURE_BUFFER_DATA_STORE_BINDING = 0x8C2D;
	static constexpr auto TEXTURE_RECTANGLE = 0x84F5;
	static constexpr auto TEXTURE_BINDING_RECTANGLE = 0x84F6;
	static constexpr auto PROXY_TEXTURE_RECTANGLE = 0x84F7;
	static constexpr auto MAX_RECTANGLE_TEXTURE_SIZE = 0x84F8;
	static constexpr auto R8_SNORM = 0x8F94;
	static constexpr auto RG8_SNORM = 0x8F95;
	static constexpr auto RGB8_SNORM = 0x8F96;
	static constexpr auto RGBA8_SNORM = 0x8F97;
	static constexpr auto R16_SNORM = 0x8F98;
	static constexpr auto RG16_SNORM = 0x8F99;
	static constexpr auto RGB16_SNORM = 0x8F9A;
	static constexpr auto RGBA16_SNORM = 0x8F9B;
	static constexpr auto SIGNED_NORMALIZED = 0x8F9C;
	static constexpr auto PRIMITIVE_RESTART = 0x8F9D;
	static constexpr auto PRIMITIVE_RESTART_INDEX = 0x8F9E;
	static constexpr auto COPY_READ_BUFFER = 0x8F36;
	static constexpr auto COPY_WRITE_BUFFER = 0x8F37;
	static constexpr auto UNIFORM_BUFFER = 0x8A11;
	static constexpr auto UNIFORM_BUFFER_BINDING = 0x8A28;
	static constexpr auto UNIFORM_BUFFER_START = 0x8A29;
	static constexpr auto UNIFORM_BUFFER_SIZE = 0x8A2A;
	static constexpr auto MAX_VERTEX_UNIFORM_BLOCKS = 0x8A2B;
	static constexpr auto MAX_GEOMETRY_UNIFORM_BLOCKS = 0x8A2C;
	static constexpr auto MAX_FRAGMENT_UNIFORM_BLOCKS = 0x8A2D;
	static constexpr auto MAX_COMBINED_UNIFORM_BLOCKS = 0x8A2E;
	static constexpr auto MAX_UNIFORM_BUFFER_BINDINGS = 0x8A2F;
	static constexpr auto MAX_UNIFORM_BLOCK_SIZE = 0x8A30;
	static constexpr auto MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS = 0x8A31;
	static constexpr auto MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS = 0x8A32;
	static constexpr auto MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS = 0x8A33;
	static constexpr auto UNIFORM_BUFFER_OFFSET_ALIGNMENT = 0x8A34;
	static constexpr auto ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH = 0x8A35;
	static constexpr auto ACTIVE_UNIFORM_BLOCKS = 0x8A36;
	static constexpr auto UNIFORM_TYPE = 0x8A37;
	static constexpr auto UNIFORM_SIZE = 0x8A38;
	static constexpr auto UNIFORM_NAME_LENGTH = 0x8A39;
	static constexpr auto UNIFORM_BLOCK_INDEX = 0x8A3A;
	static constexpr auto UNIFORM_OFFSET = 0x8A3B;
	static constexpr auto UNIFORM_ARRAY_STRIDE = 0x8A3C;
	static constexpr auto UNIFORM_MATRIX_STRIDE = 0x8A3D;
	static constexpr auto UNIFORM_IS_ROW_MAJOR = 0x8A3E;
	static constexpr auto UNIFORM_BLOCK_BINDING = 0x8A3F;
	static constexpr auto UNIFORM_BLOCK_DATA_SIZE = 0x8A40;
	static constexpr auto UNIFORM_BLOCK_NAME_LENGTH = 0x8A41;
	static constexpr auto UNIFORM_BLOCK_ACTIVE_UNIFORMS = 0x8A42;
	static constexpr auto UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES = 0x8A43;
	static constexpr auto UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER = 0x8A44;
	static constexpr auto UNIFORM_BLOCK_REFERENCED_BY_GEOMETRY_SHADER = 0x8A45;
	static constexpr auto UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER = 0x8A46;
	static constexpr auto INVALID_INDEX = 0xFFFFFFFFu;
	static constexpr auto CONTEXT_CORE_PROFILE_BIT = 0x00000001;
	static constexpr auto CONTEXT_COMPATIBILITY_PROFILE_BIT = 0x00000002;
	static constexpr auto INES_ADJACENCY = 0x000A;
	static constexpr auto INE_STRIP_ADJACENCY = 0x000B;
	static constexpr auto TRIANGLES_ADJACENCY = 0x000C;
	static constexpr auto TRIANGLE_STRIP_ADJACENCY = 0x000D;
	static constexpr auto PROGRAM_POINT_SIZE = 0x8642;
	static constexpr auto MAX_GEOMETRY_TEXTURE_IMAGE_UNITS = 0x8C29;
	static constexpr auto FRAMEBUFFER_ATTACHMENT_LAYERED = 0x8DA7;
	static constexpr auto FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS = 0x8DA8;
	static constexpr auto EOMETRY_SHADER = 0x8DD9;
	static constexpr auto EOMETRY_VERTICES_OUT = 0x8916;
	static constexpr auto EOMETRY_INPUT_TYPE = 0x8917;
	static constexpr auto EOMETRY_OUTPUT_TYPE = 0x8918;
	static constexpr auto MAX_GEOMETRY_UNIFORM_COMPONENTS = 0x8DDF;
	static constexpr auto MAX_GEOMETRY_OUTPUT_VERTICES = 0x8DE0;
	static constexpr auto MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS = 0x8DE1;
	static constexpr auto MAX_VERTEX_OUTPUT_COMPONENTS = 0x9122;
	static constexpr auto MAX_GEOMETRY_INPUT_COMPONENTS = 0x9123;
	static constexpr auto MAX_GEOMETRY_OUTPUT_COMPONENTS = 0x9124;
	static constexpr auto MAX_FRAGMENT_INPUT_COMPONENTS = 0x9125;
	static constexpr auto CONTEXT_PROFILE_MASK = 0x9126;
	static constexpr auto DEPTH_CLAMP = 0x864F;
	static constexpr auto QUADS_FOLLOW_PROVOKING_VERTEX_CONVENTION = 0x8E4C;
	static constexpr auto FIRST_VERTEX_CONVENTION = 0x8E4D;
	static constexpr auto AST_VERTEX_CONVENTION = 0x8E4E;
	static constexpr auto PROVOKING_VERTEX = 0x8E4F;
	static constexpr auto TEXTURE_CUBE_MAP_SEAMLESS = 0x884F;
	static constexpr auto MAX_SERVER_WAIT_TIMEOUT = 0x9111;
	static constexpr auto OBJECT_TYPE = 0x9112;
	static constexpr auto SYNC_CONDITION = 0x9113;
	static constexpr auto SYNC_STATUS = 0x9114;
	static constexpr auto SYNC_FLAGS = 0x9115;
	static constexpr auto SYNC_FENCE = 0x9116;
	static constexpr auto SYNC_GPU_COMMANDS_COMPLETE = 0x9117;
	static constexpr auto UNSIGNALED = 0x9118;
	static constexpr auto SIGNALED = 0x9119;
	static constexpr auto ALREADY_SIGNALED = 0x911A;
	static constexpr auto TIMEOUT_EXPIRED = 0x911B;
	static constexpr auto CONDITION_SATISFIED = 0x911C;
	static constexpr auto GL_WAIT_FAILED = 0x911D;
	static constexpr auto TIMEOUT_IGNORED = 0xFFFFFFFFFFFFFFFFull;
	static constexpr auto SYNC_FLUSH_COMMANDS_BIT = 0x00000001;
	static constexpr auto SAMPLE_POSITION = 0x8E50;
	static constexpr auto SAMPLE_MASK = 0x8E51;
	static constexpr auto SAMPLE_MASK_VALUE = 0x8E52;
	static constexpr auto MAX_SAMPLE_MASK_WORDS = 0x8E59;
	static constexpr auto TEXTURE_2D_MULTISAMPLE = 0x9100;
	static constexpr auto PROXY_TEXTURE_2D_MULTISAMPLE = 0x9101;
	static constexpr auto TEXTURE_2D_MULTISAMPLE_ARRAY = 0x9102;
	static constexpr auto PROXY_TEXTURE_2D_MULTISAMPLE_ARRAY = 0x9103;
	static constexpr auto TEXTURE_BINDING_2D_MULTISAMPLE = 0x9104;
	static constexpr auto TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY = 0x9105;
	static constexpr auto TEXTURE_SAMPLES = 0x9106;
	static constexpr auto TEXTURE_FIXED_SAMPLE_LOCATIONS = 0x9107;
	static constexpr auto SAMPLER_2D_MULTISAMPLE = 0x9108;
	static constexpr auto INT_SAMPLER_2D_MULTISAMPLE = 0x9109;
	static constexpr auto UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE = 0x910A;
	static constexpr auto SAMPLER_2D_MULTISAMPLE_ARRAY = 0x910B;
	static constexpr auto INT_SAMPLER_2D_MULTISAMPLE_ARRAY = 0x910C;
	static constexpr auto UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY = 0x910D;
	static constexpr auto MAX_COLOR_TEXTURE_SAMPLES = 0x910E;
	static constexpr auto MAX_DEPTH_TEXTURE_SAMPLES = 0x910F;
	static constexpr auto MAX_INTEGER_SAMPLES = 0x9110;
	static constexpr auto VERTEX_ATTRIB_ARRAY_DIVISOR = 0x88FE;
	static constexpr auto SRC1_COLOR = 0x88F9;
	static constexpr auto ONE_MINUS_SRC1_COLOR = 0x88FA;
	static constexpr auto ONE_MINUS_SRC1_ALPHA = 0x88FB;
	static constexpr auto MAX_DUAL_SOURCE_DRAW_BUFFERS = 0x88FC;
	static constexpr auto ANY_SAMPLES_PASSED = 0x8C2F;
	static constexpr auto SAMPLER_BINDING = 0x8919;
	static constexpr auto RGB10_A2UI = 0x906F;
	static constexpr auto TEXTURE_SWIZZLE_R = 0x8E42;
	static constexpr auto TEXTURE_SWIZZLE_G = 0x8E43;
	static constexpr auto TEXTURE_SWIZZLE_B = 0x8E44;
	static constexpr auto TEXTURE_SWIZZLE_A = 0x8E45;
	static constexpr auto TEXTURE_SWIZZLE_RGBA = 0x8E46;
	static constexpr auto TIME_ELAPSED = 0x88BF;
	static constexpr auto TIMESTAMP = 0x8E28;
	static constexpr auto INT_2_10_10_10_REV = 0x8D9F;
	static constexpr auto SAMPLE_SHADING = 0x8C36;
	static constexpr auto MIN_SAMPLE_SHADING_VALUE = 0x8C37;
	static constexpr auto MIN_PROGRAM_TEXTURE_GATHER_OFFSET = 0x8E5E;
	static constexpr auto MAX_PROGRAM_TEXTURE_GATHER_OFFSET = 0x8E5F;
	static constexpr auto TEXTURE_CUBE_MAP_ARRAY = 0x9009;
	static constexpr auto TEXTURE_BINDING_CUBE_MAP_ARRAY = 0x900A;
	static constexpr auto PROXY_TEXTURE_CUBE_MAP_ARRAY = 0x900B;
	static constexpr auto SAMPLER_CUBE_MAP_ARRAY = 0x900C;
	static constexpr auto SAMPLER_CUBE_MAP_ARRAY_SHADOW = 0x900D;
	static constexpr auto INT_SAMPLER_CUBE_MAP_ARRAY = 0x900E;
	static constexpr auto UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY = 0x900F;
	static constexpr auto DRAW_INDIRECT_BUFFER = 0x8F3F;
	static constexpr auto DRAW_INDIRECT_BUFFER_BINDING = 0x8F43;
	static constexpr auto EOMETRY_SHADER_INVOCATIONS = 0x887F;
	static constexpr auto MAX_GEOMETRY_SHADER_INVOCATIONS = 0x8E5A;
	static constexpr auto MIN_FRAGMENT_INTERPOLATION_OFFSET = 0x8E5B;
	static constexpr auto MAX_FRAGMENT_INTERPOLATION_OFFSET = 0x8E5C;
	static constexpr auto FRAGMENT_INTERPOLATION_OFFSET_BITS = 0x8E5D;
	static constexpr auto MAX_VERTEX_STREAMS = 0x8E71;
	static constexpr auto DOUBLE_VEC2 = 0x8FFC;
	static constexpr auto DOUBLE_VEC3 = 0x8FFD;
	static constexpr auto DOUBLE_VEC4 = 0x8FFE;
	static constexpr auto DOUBLE_MAT2 = 0x8F46;
	static constexpr auto DOUBLE_MAT3 = 0x8F47;
	static constexpr auto DOUBLE_MAT4 = 0x8F48;
	static constexpr auto DOUBLE_MAT2x3 = 0x8F49;
	static constexpr auto DOUBLE_MAT2x4 = 0x8F4A;
	static constexpr auto DOUBLE_MAT3x2 = 0x8F4B;
	static constexpr auto DOUBLE_MAT3x4 = 0x8F4C;
	static constexpr auto DOUBLE_MAT4x2 = 0x8F4D;
	static constexpr auto DOUBLE_MAT4x3 = 0x8F4E;
	static constexpr auto ACTIVE_SUBROUTINES = 0x8DE5;
	static constexpr auto ACTIVE_SUBROUTINE_UNIFORMS = 0x8DE6;
	static constexpr auto ACTIVE_SUBROUTINE_UNIFORM_LOCATIONS = 0x8E47;
	static constexpr auto ACTIVE_SUBROUTINE_MAX_LENGTH = 0x8E48;
	static constexpr auto ACTIVE_SUBROUTINE_UNIFORM_MAX_LENGTH = 0x8E49;
	static constexpr auto MAX_SUBROUTINES = 0x8DE7;
	static constexpr auto MAX_SUBROUTINE_UNIFORM_LOCATIONS = 0x8DE8;
	static constexpr auto NUM_COMPATIBLE_SUBROUTINES = 0x8E4A;
	static constexpr auto COMPATIBLE_SUBROUTINES = 0x8E4B;
	static constexpr auto PATCHES = 0x000E;
	static constexpr auto PATCH_VERTICES = 0x8E72;
	static constexpr auto PATCH_DEFAULT_INNER_LEVEL = 0x8E73;
	static constexpr auto PATCH_DEFAULT_OUTER_LEVEL = 0x8E74;
	static constexpr auto TESS_CONTROL_OUTPUT_VERTICES = 0x8E75;
	static constexpr auto TESS_GEN_MODE = 0x8E76;
	static constexpr auto TESS_GEN_SPACING = 0x8E77;
	static constexpr auto TESS_GEN_VERTEX_ORDER = 0x8E78;
	static constexpr auto TESS_GEN_POINT_MODE = 0x8E79;
	static constexpr auto ISOLINES = 0x8E7A;
	static constexpr auto FRACTIONAL_ODD = 0x8E7B;
	static constexpr auto FRACTIONAL_EVEN = 0x8E7C;
	static constexpr auto MAX_PATCH_VERTICES = 0x8E7D;
	static constexpr auto MAX_TESS_GEN_LEVEL = 0x8E7E;
	static constexpr auto MAX_TESS_CONTROL_UNIFORM_COMPONENTS = 0x8E7F;
	static constexpr auto MAX_TESS_EVALUATION_UNIFORM_COMPONENTS = 0x8E80;
	static constexpr auto MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS = 0x8E81;
	static constexpr auto MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS = 0x8E82;
	static constexpr auto MAX_TESS_CONTROL_OUTPUT_COMPONENTS = 0x8E83;
	static constexpr auto MAX_TESS_PATCH_COMPONENTS = 0x8E84;
	static constexpr auto MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS = 0x8E85;
	static constexpr auto MAX_TESS_EVALUATION_OUTPUT_COMPONENTS = 0x8E86;
	static constexpr auto MAX_TESS_CONTROL_UNIFORM_BLOCKS = 0x8E89;
	static constexpr auto MAX_TESS_EVALUATION_UNIFORM_BLOCKS = 0x8E8A;
	static constexpr auto MAX_TESS_CONTROL_INPUT_COMPONENTS = 0x886C;
	static constexpr auto MAX_TESS_EVALUATION_INPUT_COMPONENTS = 0x886D;
	static constexpr auto MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS = 0x8E1E;
	static constexpr auto MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS = 0x8E1F;
	static constexpr auto UNIFORM_BLOCK_REFERENCED_BY_TESS_CONTROL_SHADER = 0x84F0;
	static constexpr auto UNIFORM_BLOCK_REFERENCED_BY_TESS_EVALUATION_SHADER = 0x84F1;
	static constexpr auto TESS_EVALUATION_SHADER = 0x8E87;
	static constexpr auto TESS_CONTROL_SHADER = 0x8E88;
	static constexpr auto TRANSFORM_FEEDBACK = 0x8E22;
	static constexpr auto TRANSFORM_FEEDBACK_BUFFER_PAUSED = 0x8E23;
	static constexpr auto TRANSFORM_FEEDBACK_BUFFER_ACTIVE = 0x8E24;
	static constexpr auto TRANSFORM_FEEDBACK_BINDING = 0x8E25;
	static constexpr auto MAX_TRANSFORM_FEEDBACK_BUFFERS = 0x8E70;
	static constexpr auto FIXED = 0x140C;
	static constexpr auto IMPLEMENTATION_COLOR_READ_TYPE = 0x8B9A;
	static constexpr auto IMPLEMENTATION_COLOR_READ_FORMAT = 0x8B9B;
	static constexpr auto OW_FLOAT = 0x8DF0;
	static constexpr auto MEDIUM_FLOAT = 0x8DF1;
	static constexpr auto HIGH_FLOAT = 0x8DF2;
	static constexpr auto OW_INT = 0x8DF3;
	static constexpr auto MEDIUM_INT = 0x8DF4;
	static constexpr auto HIGH_INT = 0x8DF5;
	static constexpr auto SHADER_COMPILER = 0x8DFA;
	static constexpr auto SHADER_BINARY_FORMATS = 0x8DF8;
	static constexpr auto NUM_SHADER_BINARY_FORMATS = 0x8DF9;
	static constexpr auto MAX_VERTEX_UNIFORM_VECTORS = 0x8DFB;
	static constexpr auto MAX_VARYING_VECTORS = 0x8DFC;
	static constexpr auto MAX_FRAGMENT_UNIFORM_VECTORS = 0x8DFD;
	static constexpr auto RGB565 = 0x8D62;
	static constexpr auto PROGRAM_BINARY_RETRIEVABLE_HINT = 0x8257;
	static constexpr auto PROGRAM_BINARY_LENGTH = 0x8741;
	static constexpr auto NUM_PROGRAM_BINARY_FORMATS = 0x87FE;
	static constexpr auto PROGRAM_BINARY_FORMATS = 0x87FF;
	static constexpr auto VERTEX_SHADER_BIT = 0x00000001;
	static constexpr auto FRAGMENT_SHADER_BIT = 0x00000002;
	static constexpr auto EOMETRY_SHADER_BIT = 0x00000004;
	static constexpr auto TESS_CONTROL_SHADER_BIT = 0x00000008;
	static constexpr auto TESS_EVALUATION_SHADER_BIT = 0x00000010;
	static constexpr auto ALL_SHADER_BITS = 0xFFFFFFFF;
	static constexpr auto PROGRAM_SEPARABLE = 0x8258;
	static constexpr auto ACTIVE_PROGRAM = 0x8259;
	static constexpr auto PROGRAM_PIPELINE_BINDING = 0x825A;
	static constexpr auto MAX_VIEWPORTS = 0x825B;
	static constexpr auto VIEWPORT_SUBPIXEL_BITS = 0x825C;
	static constexpr auto VIEWPORT_BOUNDS_RANGE = 0x825D;
	static constexpr auto AYER_PROVOKING_VERTEX = 0x825E;
	static constexpr auto VIEWPORT_INDEX_PROVOKING_VERTEX = 0x825F;
	static constexpr auto UNDEFINED_VERTEX = 0x8260;
	static constexpr auto COPY_READ_BUFFER_BINDING = 0x8F36;
	static constexpr auto COPY_WRITE_BUFFER_BINDING = 0x8F37;
	static constexpr auto TRANSFORM_FEEDBACK_ACTIVE = 0x8E24;
	static constexpr auto TRANSFORM_FEEDBACK_PAUSED = 0x8E23;
	static constexpr auto UNPACK_COMPRESSED_BLOCK_WIDTH = 0x9127;
	static constexpr auto UNPACK_COMPRESSED_BLOCK_HEIGHT = 0x9128;
	static constexpr auto UNPACK_COMPRESSED_BLOCK_DEPTH = 0x9129;
	static constexpr auto UNPACK_COMPRESSED_BLOCK_SIZE = 0x912A;
	static constexpr auto PACK_COMPRESSED_BLOCK_WIDTH = 0x912B;
	static constexpr auto PACK_COMPRESSED_BLOCK_HEIGHT = 0x912C;
	static constexpr auto PACK_COMPRESSED_BLOCK_DEPTH = 0x912D;
	static constexpr auto PACK_COMPRESSED_BLOCK_SIZE = 0x912E;
	static constexpr auto NUM_SAMPLE_COUNTS = 0x9380;
	static constexpr auto MIN_MAP_BUFFER_ALIGNMENT = 0x90BC;
	static constexpr auto ATOMIC_COUNTER_BUFFER = 0x92C0;
	static constexpr auto ATOMIC_COUNTER_BUFFER_BINDING = 0x92C1;
	static constexpr auto ATOMIC_COUNTER_BUFFER_START = 0x92C2;
	static constexpr auto ATOMIC_COUNTER_BUFFER_SIZE = 0x92C3;
	static constexpr auto ATOMIC_COUNTER_BUFFER_DATA_SIZE = 0x92C4;
	static constexpr auto ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTERS = 0x92C5;
	static constexpr auto ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTER_INDICES = 0x92C6;
	static constexpr auto ATOMIC_COUNTER_BUFFER_REFERENCED_BY_VERTEX_SHADER = 0x92C7;
	static constexpr auto ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_CONTROL_SHADER = 0x92C8;
	static constexpr auto ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_EVALUATION_SHADER = 0x92C9;
	static constexpr auto ATOMIC_COUNTER_BUFFER_REFERENCED_BY_GEOMETRY_SHADER = 0x92CA;
	static constexpr auto ATOMIC_COUNTER_BUFFER_REFERENCED_BY_FRAGMENT_SHADER = 0x92CB;
	static constexpr auto MAX_VERTEX_ATOMIC_COUNTER_BUFFERS = 0x92CC;
	static constexpr auto MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS = 0x92CD;
	static constexpr auto MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS = 0x92CE;
	static constexpr auto MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS = 0x92CF;
	static constexpr auto MAX_FRAGMENT_ATOMIC_COUNTER_BUFFERS = 0x92D0;
	static constexpr auto MAX_COMBINED_ATOMIC_COUNTER_BUFFERS = 0x92D1;
	static constexpr auto MAX_VERTEX_ATOMIC_COUNTERS = 0x92D2;
	static constexpr auto MAX_TESS_CONTROL_ATOMIC_COUNTERS = 0x92D3;
	static constexpr auto MAX_TESS_EVALUATION_ATOMIC_COUNTERS = 0x92D4;
	static constexpr auto MAX_GEOMETRY_ATOMIC_COUNTERS = 0x92D5;
	static constexpr auto MAX_FRAGMENT_ATOMIC_COUNTERS = 0x92D6;
	static constexpr auto MAX_COMBINED_ATOMIC_COUNTERS = 0x92D7;
	static constexpr auto MAX_ATOMIC_COUNTER_BUFFER_SIZE = 0x92D8;
	static constexpr auto MAX_ATOMIC_COUNTER_BUFFER_BINDINGS = 0x92DC;
	static constexpr auto ACTIVE_ATOMIC_COUNTER_BUFFERS = 0x92D9;
	static constexpr auto UNIFORM_ATOMIC_COUNTER_BUFFER_INDEX = 0x92DA;
	static constexpr auto UNSIGNED_INT_ATOMIC_COUNTER = 0x92DB;
	static constexpr auto VERTEX_ATTRIB_ARRAY_BARRIER_BIT = 0x00000001;
	static constexpr auto ELEMENT_ARRAY_BARRIER_BIT = 0x00000002;
	static constexpr auto UNIFORM_BARRIER_BIT = 0x00000004;
	static constexpr auto TEXTURE_FETCH_BARRIER_BIT = 0x00000008;
	static constexpr auto SHADER_IMAGE_ACCESS_BARRIER_BIT = 0x00000020;
	static constexpr auto COMMAND_BARRIER_BIT = 0x00000040;
	static constexpr auto PIXEL_BUFFER_BARRIER_BIT = 0x00000080;
	static constexpr auto TEXTURE_UPDATE_BARRIER_BIT = 0x00000100;
	static constexpr auto BUFFER_UPDATE_BARRIER_BIT = 0x00000200;
	static constexpr auto FRAMEBUFFER_BARRIER_BIT = 0x00000400;
	static constexpr auto TRANSFORM_FEEDBACK_BARRIER_BIT = 0x00000800;
	static constexpr auto ATOMIC_COUNTER_BARRIER_BIT = 0x00001000;
	static constexpr auto ALL_BARRIER_BITS = 0xFFFFFFFF;
	static constexpr auto MAX_IMAGE_UNITS = 0x8F38;
	static constexpr auto MAX_COMBINED_IMAGE_UNITS_AND_FRAGMENT_OUTPUTS = 0x8F39;
	static constexpr auto IMAGE_BINDING_NAME = 0x8F3A;
	static constexpr auto IMAGE_BINDING_LEVEL = 0x8F3B;
	static constexpr auto IMAGE_BINDING_LAYERED = 0x8F3C;
	static constexpr auto IMAGE_BINDING_LAYER = 0x8F3D;
	static constexpr auto IMAGE_BINDING_ACCESS = 0x8F3E;
	static constexpr auto IMAGE_1D = 0x904C;
	static constexpr auto IMAGE_2D = 0x904D;
	static constexpr auto IMAGE_3D = 0x904E;
	static constexpr auto IMAGE_2D_RECT = 0x904F;
	static constexpr auto IMAGE_CUBE = 0x9050;
	static constexpr auto IMAGE_BUFFER = 0x9051;
	static constexpr auto IMAGE_1D_ARRAY = 0x9052;
	static constexpr auto IMAGE_2D_ARRAY = 0x9053;
	static constexpr auto IMAGE_CUBE_MAP_ARRAY = 0x9054;
	static constexpr auto IMAGE_2D_MULTISAMPLE = 0x9055;
	static constexpr auto IMAGE_2D_MULTISAMPLE_ARRAY = 0x9056;
	static constexpr auto INT_IMAGE_1D = 0x9057;
	static constexpr auto INT_IMAGE_2D = 0x9058;
	static constexpr auto INT_IMAGE_3D = 0x9059;
	static constexpr auto INT_IMAGE_2D_RECT = 0x905A;
	static constexpr auto INT_IMAGE_CUBE = 0x905B;
	static constexpr auto INT_IMAGE_BUFFER = 0x905C;
	static constexpr auto INT_IMAGE_1D_ARRAY = 0x905D;
	static constexpr auto INT_IMAGE_2D_ARRAY = 0x905E;
	static constexpr auto INT_IMAGE_CUBE_MAP_ARRAY = 0x905F;
	static constexpr auto INT_IMAGE_2D_MULTISAMPLE = 0x9060;
	static constexpr auto INT_IMAGE_2D_MULTISAMPLE_ARRAY = 0x9061;
	static constexpr auto UNSIGNED_INT_IMAGE_1D = 0x9062;
	static constexpr auto UNSIGNED_INT_IMAGE_2D = 0x9063;
	static constexpr auto UNSIGNED_INT_IMAGE_3D = 0x9064;
	static constexpr auto UNSIGNED_INT_IMAGE_2D_RECT = 0x9065;
	static constexpr auto UNSIGNED_INT_IMAGE_CUBE = 0x9066;
	static constexpr auto UNSIGNED_INT_IMAGE_BUFFER = 0x9067;
	static constexpr auto UNSIGNED_INT_IMAGE_1D_ARRAY = 0x9068;
	static constexpr auto UNSIGNED_INT_IMAGE_2D_ARRAY = 0x9069;
	static constexpr auto UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY = 0x906A;
	static constexpr auto UNSIGNED_INT_IMAGE_2D_MULTISAMPLE = 0x906B;
	static constexpr auto UNSIGNED_INT_IMAGE_2D_MULTISAMPLE_ARRAY = 0x906C;
	static constexpr auto MAX_IMAGE_SAMPLES = 0x906D;
	static constexpr auto IMAGE_BINDING_FORMAT = 0x906E;
	static constexpr auto IMAGE_FORMAT_COMPATIBILITY_TYPE = 0x90C7;
	static constexpr auto IMAGE_FORMAT_COMPATIBILITY_BY_SIZE = 0x90C8;
	static constexpr auto IMAGE_FORMAT_COMPATIBILITY_BY_CLASS = 0x90C9;
	static constexpr auto MAX_VERTEX_IMAGE_UNIFORMS = 0x90CA;
	static constexpr auto MAX_TESS_CONTROL_IMAGE_UNIFORMS = 0x90CB;
	static constexpr auto MAX_TESS_EVALUATION_IMAGE_UNIFORMS = 0x90CC;
	static constexpr auto MAX_GEOMETRY_IMAGE_UNIFORMS = 0x90CD;
	static constexpr auto MAX_FRAGMENT_IMAGE_UNIFORMS = 0x90CE;
	static constexpr auto MAX_COMBINED_IMAGE_UNIFORMS = 0x90CF;
	static constexpr auto COMPRESSED_RGBA_BPTC_UNORM = 0x8E8C;
	static constexpr auto COMPRESSED_SRGB_ALPHA_BPTC_UNORM = 0x8E8D;
	static constexpr auto COMPRESSED_RGB_BPTC_SIGNED_FLOAT = 0x8E8E;
	static constexpr auto COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT = 0x8E8F;
	static constexpr auto TEXTURE_IMMUTABLE_FORMAT = 0x912F;
	static constexpr auto NUM_SHADING_LANGUAGE_VERSIONS = 0x82E9;
	static constexpr auto VERTEX_ATTRIB_ARRAY_LONG = 0x874E;
	static constexpr auto COMPRESSED_RGB8_ETC2 = 0x9274;
	static constexpr auto COMPRESSED_SRGB8_ETC2 = 0x9275;
	static constexpr auto COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2 = 0x9276;
	static constexpr auto COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2 = 0x9277;
	static constexpr auto COMPRESSED_RGBA8_ETC2_EAC = 0x9278;
	static constexpr auto COMPRESSED_SRGB8_ALPHA8_ETC2_EAC = 0x9279;
	static constexpr auto COMPRESSED_R11_EAC = 0x9270;
	static constexpr auto COMPRESSED_SIGNED_R11_EAC = 0x9271;
	static constexpr auto COMPRESSED_RG11_EAC = 0x9272;
	static constexpr auto COMPRESSED_SIGNED_RG11_EAC = 0x9273;
	static constexpr auto PRIMITIVE_RESTART_FIXED_INDEX = 0x8D69;
	static constexpr auto ANY_SAMPLES_PASSED_CONSERVATIVE = 0x8D6A;
	static constexpr auto MAX_ELEMENT_INDEX = 0x8D6B;
	static constexpr auto COMPUTE_SHADER = 0x91B9;
	static constexpr auto MAX_COMPUTE_UNIFORM_BLOCKS = 0x91BB;
	static constexpr auto MAX_COMPUTE_TEXTURE_IMAGE_UNITS = 0x91BC;
	static constexpr auto MAX_COMPUTE_IMAGE_UNIFORMS = 0x91BD;
	static constexpr auto MAX_COMPUTE_SHARED_MEMORY_SIZE = 0x8262;
	static constexpr auto MAX_COMPUTE_UNIFORM_COMPONENTS = 0x8263;
	static constexpr auto MAX_COMPUTE_ATOMIC_COUNTER_BUFFERS = 0x8264;
	static constexpr auto MAX_COMPUTE_ATOMIC_COUNTERS = 0x8265;
	static constexpr auto MAX_COMBINED_COMPUTE_UNIFORM_COMPONENTS = 0x8266;
	static constexpr auto MAX_COMPUTE_WORK_GROUP_INVOCATIONS = 0x90EB;
	static constexpr auto MAX_COMPUTE_WORK_GROUP_COUNT = 0x91BE;
	static constexpr auto MAX_COMPUTE_WORK_GROUP_SIZE = 0x91BF;
	static constexpr auto COMPUTE_WORK_GROUP_SIZE = 0x8267;
	static constexpr auto UNIFORM_BLOCK_REFERENCED_BY_COMPUTE_SHADER = 0x90EC;
	static constexpr auto ATOMIC_COUNTER_BUFFER_REFERENCED_BY_COMPUTE_SHADER = 0x90ED;
	static constexpr auto DISPATCH_INDIRECT_BUFFER = 0x90EE;
	static constexpr auto DISPATCH_INDIRECT_BUFFER_BINDING = 0x90EF;
	static constexpr auto COMPUTE_SHADER_BIT = 0x00000020;
	static constexpr auto DEBUG_OUTPUT_SYNCHRONOUS = 0x8242;
	static constexpr auto DEBUG_NEXT_LOGGED_MESSAGE_LENGTH = 0x8243;
	static constexpr auto DEBUG_CALLBACK_FUNCTION = 0x8244;
	static constexpr auto DEBUG_CALLBACK_USER_PARAM = 0x8245;
	static constexpr auto DEBUG_SOURCE_API = 0x8246;
	static constexpr auto DEBUG_SOURCE_WINDOW_SYSTEM = 0x8247;
	static constexpr auto DEBUG_SOURCE_SHADER_COMPILER = 0x8248;
	static constexpr auto DEBUG_SOURCE_THIRD_PARTY = 0x8249;
	static constexpr auto DEBUG_SOURCE_APPLICATION = 0x824A;
	static constexpr auto DEBUG_SOURCE_OTHER = 0x824B;
	static constexpr auto DEBUG_TYPE_ERROR = 0x824C;
	static constexpr auto DEBUG_TYPE_DEPRECATED_BEHAVIOR = 0x824D;
	static constexpr auto DEBUG_TYPE_UNDEFINED_BEHAVIOR = 0x824E;
	static constexpr auto DEBUG_TYPE_PORTABILITY = 0x824F;
	static constexpr auto DEBUG_TYPE_PERFORMANCE = 0x8250;
	static constexpr auto DEBUG_TYPE_OTHER = 0x8251;
	static constexpr auto MAX_DEBUG_MESSAGE_LENGTH = 0x9143;
	static constexpr auto MAX_DEBUG_LOGGED_MESSAGES = 0x9144;
	static constexpr auto DEBUG_LOGGED_MESSAGES = 0x9145;
	static constexpr auto DEBUG_SEVERITY_HIGH = 0x9146;
	static constexpr auto DEBUG_SEVERITY_MEDIUM = 0x9147;
	static constexpr auto DEBUG_SEVERITY_LOW = 0x9148;
	static constexpr auto DEBUG_TYPE_MARKER = 0x8268;
	static constexpr auto DEBUG_TYPE_PUSH_GROUP = 0x8269;
	static constexpr auto DEBUG_TYPE_POP_GROUP = 0x826A;
	static constexpr auto DEBUG_SEVERITY_NOTIFICATION = 0x826B;
	static constexpr auto MAX_DEBUG_GROUP_STACK_DEPTH = 0x826C;
	static constexpr auto DEBUG_GROUP_STACK_DEPTH = 0x826D;
	static constexpr auto BUFFER = 0x82E0;
	static constexpr auto SHADER = 0x82E1;
	static constexpr auto PROGRAM = 0x82E2;
	static constexpr auto QUERY = 0x82E3;
	static constexpr auto PROGRAM_PIPELINE = 0x82E4;
	static constexpr auto SAMPLER = 0x82E6;
	static constexpr auto MAX_LABEL_LENGTH = 0x82E8;
	static constexpr auto DEBUG_OUTPUT = 0x92E0;
	static constexpr auto CONTEXT_FLAG_DEBUG_BIT = 0x00000002;
	static constexpr auto MAX_UNIFORM_LOCATIONS = 0x826E;
	static constexpr auto FRAMEBUFFER_DEFAULT_WIDTH = 0x9310;
	static constexpr auto FRAMEBUFFER_DEFAULT_HEIGHT = 0x9311;
	static constexpr auto FRAMEBUFFER_DEFAULT_LAYERS = 0x9312;
	static constexpr auto FRAMEBUFFER_DEFAULT_SAMPLES = 0x9313;
	static constexpr auto FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS = 0x9314;
	static constexpr auto MAX_FRAMEBUFFER_WIDTH = 0x9315;
	static constexpr auto MAX_FRAMEBUFFER_HEIGHT = 0x9316;
	static constexpr auto MAX_FRAMEBUFFER_LAYERS = 0x9317;
	static constexpr auto MAX_FRAMEBUFFER_SAMPLES = 0x9318;
	static constexpr auto INTERNALFORMAT_SUPPORTED = 0x826F;
	static constexpr auto INTERNALFORMAT_PREFERRED = 0x8270;
	static constexpr auto INTERNALFORMAT_RED_SIZE = 0x8271;
	static constexpr auto INTERNALFORMAT_GREEN_SIZE = 0x8272;
	static constexpr auto INTERNALFORMAT_BLUE_SIZE = 0x8273;
	static constexpr auto INTERNALFORMAT_ALPHA_SIZE = 0x8274;
	static constexpr auto INTERNALFORMAT_DEPTH_SIZE = 0x8275;
	static constexpr auto INTERNALFORMAT_STENCIL_SIZE = 0x8276;
	static constexpr auto INTERNALFORMAT_SHARED_SIZE = 0x8277;
	static constexpr auto INTERNALFORMAT_RED_TYPE = 0x8278;
	static constexpr auto INTERNALFORMAT_GREEN_TYPE = 0x8279;
	static constexpr auto INTERNALFORMAT_BLUE_TYPE = 0x827A;
	static constexpr auto INTERNALFORMAT_ALPHA_TYPE = 0x827B;
	static constexpr auto INTERNALFORMAT_DEPTH_TYPE = 0x827C;
	static constexpr auto INTERNALFORMAT_STENCIL_TYPE = 0x827D;
	static constexpr auto MAX_WIDTH = 0x827E;
	static constexpr auto MAX_HEIGHT = 0x827F;
	static constexpr auto MAX_DEPTH = 0x8280;
	static constexpr auto MAX_LAYERS = 0x8281;
	static constexpr auto MAX_COMBINED_DIMENSIONS = 0x8282;
	static constexpr auto COLOR_COMPONENTS = 0x8283;
	static constexpr auto DEPTH_COMPONENTS = 0x8284;
	static constexpr auto STENCIL_COMPONENTS = 0x8285;
	static constexpr auto COLOR_RENDERABLE = 0x8286;
	static constexpr auto DEPTH_RENDERABLE = 0x8287;
	static constexpr auto STENCIL_RENDERABLE = 0x8288;
	static constexpr auto FRAMEBUFFER_RENDERABLE = 0x8289;
	static constexpr auto FRAMEBUFFER_RENDERABLE_LAYERED = 0x828A;
	static constexpr auto FRAMEBUFFER_BLEND = 0x828B;
	static constexpr auto READ_PIXELS = 0x828C;
	static constexpr auto READ_PIXELS_FORMAT = 0x828D;
	static constexpr auto READ_PIXELS_TYPE = 0x828E;
	static constexpr auto TEXTURE_IMAGE_FORMAT = 0x828F;
	static constexpr auto TEXTURE_IMAGE_TYPE = 0x8290;
	static constexpr auto ET_TEXTURE_IMAGE_FORMAT = 0x8291;
	static constexpr auto ET_TEXTURE_IMAGE_TYPE = 0x8292;
	static constexpr auto MIPMAP = 0x8293;
	static constexpr auto MANUAL_GENERATE_MIPMAP = 0x8294;
	static constexpr auto AUTO_GENERATE_MIPMAP = 0x8295;
	static constexpr auto COLOR_ENCODING = 0x8296;
	static constexpr auto SRGB_READ = 0x8297;
	static constexpr auto SRGB_WRITE = 0x8298;
	static constexpr auto FILTER = 0x829A;
	static constexpr auto VERTEX_TEXTURE = 0x829B;
	static constexpr auto TESS_CONTROL_TEXTURE = 0x829C;
	static constexpr auto TESS_EVALUATION_TEXTURE = 0x829D;
	static constexpr auto EOMETRY_TEXTURE = 0x829E;
	static constexpr auto FRAGMENT_TEXTURE = 0x829F;
	static constexpr auto COMPUTE_TEXTURE = 0x82A0;
	static constexpr auto TEXTURE_SHADOW = 0x82A1;
	static constexpr auto TEXTURE_GATHER = 0x82A2;
	static constexpr auto TEXTURE_GATHER_SHADOW = 0x82A3;
	static constexpr auto SHADER_IMAGE_LOAD = 0x82A4;
	static constexpr auto SHADER_IMAGE_STORE = 0x82A5;
	static constexpr auto SHADER_IMAGE_ATOMIC = 0x82A6;
	static constexpr auto IMAGE_TEXEL_SIZE = 0x82A7;
	static constexpr auto IMAGE_COMPATIBILITY_CLASS = 0x82A8;
	static constexpr auto IMAGE_PIXEL_FORMAT = 0x82A9;
	static constexpr auto IMAGE_PIXEL_TYPE = 0x82AA;
	static constexpr auto SIMULTANEOUS_TEXTURE_AND_DEPTH_TEST = 0x82AC;
	static constexpr auto SIMULTANEOUS_TEXTURE_AND_STENCIL_TEST = 0x82AD;
	static constexpr auto SIMULTANEOUS_TEXTURE_AND_DEPTH_WRITE = 0x82AE;
	static constexpr auto SIMULTANEOUS_TEXTURE_AND_STENCIL_WRITE = 0x82AF;
	static constexpr auto TEXTURE_COMPRESSED_BLOCK_WIDTH = 0x82B1;
	static constexpr auto TEXTURE_COMPRESSED_BLOCK_HEIGHT = 0x82B2;
	static constexpr auto TEXTURE_COMPRESSED_BLOCK_SIZE = 0x82B3;
	static constexpr auto CLEAR_BUFFER = 0x82B4;
	static constexpr auto TEXTURE_VIEW = 0x82B5;
	static constexpr auto VIEW_COMPATIBILITY_CLASS = 0x82B6;
	static constexpr auto FULL_SUPPORT = 0x82B7;
	static constexpr auto CAVEAT_SUPPORT = 0x82B8;
	static constexpr auto IMAGE_CLASS_4_X_32 = 0x82B9;
	static constexpr auto IMAGE_CLASS_2_X_32 = 0x82BA;
	static constexpr auto IMAGE_CLASS_1_X_32 = 0x82BB;
	static constexpr auto IMAGE_CLASS_4_X_16 = 0x82BC;
	static constexpr auto IMAGE_CLASS_2_X_16 = 0x82BD;
	static constexpr auto IMAGE_CLASS_1_X_16 = 0x82BE;
	static constexpr auto IMAGE_CLASS_4_X_8 = 0x82BF;
	static constexpr auto IMAGE_CLASS_2_X_8 = 0x82C0;
	static constexpr auto IMAGE_CLASS_1_X_8 = 0x82C1;
	static constexpr auto IMAGE_CLASS_11_11_10 = 0x82C2;
	static constexpr auto IMAGE_CLASS_10_10_10_2 = 0x82C3;
	static constexpr auto VIEW_CLASS_128_BITS = 0x82C4;
	static constexpr auto VIEW_CLASS_96_BITS = 0x82C5;
	static constexpr auto VIEW_CLASS_64_BITS = 0x82C6;
	static constexpr auto VIEW_CLASS_48_BITS = 0x82C7;
	static constexpr auto VIEW_CLASS_32_BITS = 0x82C8;
	static constexpr auto VIEW_CLASS_24_BITS = 0x82C9;
	static constexpr auto VIEW_CLASS_16_BITS = 0x82CA;
	static constexpr auto VIEW_CLASS_8_BITS = 0x82CB;
	static constexpr auto VIEW_CLASS_S3TC_DXT1_RGB = 0x82CC;
	static constexpr auto VIEW_CLASS_S3TC_DXT1_RGBA = 0x82CD;
	static constexpr auto VIEW_CLASS_S3TC_DXT3_RGBA = 0x82CE;
	static constexpr auto VIEW_CLASS_S3TC_DXT5_RGBA = 0x82CF;
	static constexpr auto VIEW_CLASS_RGTC1_RED = 0x82D0;
	static constexpr auto VIEW_CLASS_RGTC2_RG = 0x82D1;
	static constexpr auto VIEW_CLASS_BPTC_UNORM = 0x82D2;
	static constexpr auto VIEW_CLASS_BPTC_FLOAT = 0x82D3;
	static constexpr auto UNIFORM = 0x92E1;
	static constexpr auto UNIFORM_BLOCK = 0x92E2;
	static constexpr auto PROGRAM_INPUT = 0x92E3;
	static constexpr auto PROGRAM_OUTPUT = 0x92E4;
	static constexpr auto BUFFER_VARIABLE = 0x92E5;
	static constexpr auto SHADER_STORAGE_BLOCK = 0x92E6;
	static constexpr auto VERTEX_SUBROUTINE = 0x92E8;
	static constexpr auto TESS_CONTROL_SUBROUTINE = 0x92E9;
	static constexpr auto TESS_EVALUATION_SUBROUTINE = 0x92EA;
	static constexpr auto EOMETRY_SUBROUTINE = 0x92EB;
	static constexpr auto FRAGMENT_SUBROUTINE = 0x92EC;
	static constexpr auto COMPUTE_SUBROUTINE = 0x92ED;
	static constexpr auto VERTEX_SUBROUTINE_UNIFORM = 0x92EE;
	static constexpr auto TESS_CONTROL_SUBROUTINE_UNIFORM = 0x92EF;
	static constexpr auto TESS_EVALUATION_SUBROUTINE_UNIFORM = 0x92F0;
	static constexpr auto EOMETRY_SUBROUTINE_UNIFORM = 0x92F1;
	static constexpr auto FRAGMENT_SUBROUTINE_UNIFORM = 0x92F2;
	static constexpr auto COMPUTE_SUBROUTINE_UNIFORM = 0x92F3;
	static constexpr auto TRANSFORM_FEEDBACK_VARYING = 0x92F4;
	static constexpr auto ACTIVE_RESOURCES = 0x92F5;
	static constexpr auto MAX_NAME_LENGTH = 0x92F6;
	static constexpr auto MAX_NUM_ACTIVE_VARIABLES = 0x92F7;
	static constexpr auto MAX_NUM_COMPATIBLE_SUBROUTINES = 0x92F8;
	static constexpr auto NAME_LENGTH = 0x92F9;
	static constexpr auto TYPE = 0x92FA;
	static constexpr auto ARRAY_SIZE = 0x92FB;
	static constexpr auto OFFSET = 0x92FC;
	static constexpr auto BLOCK_INDEX = 0x92FD;
	static constexpr auto ARRAY_STRIDE = 0x92FE;
	static constexpr auto MATRIX_STRIDE = 0x92FF;
	static constexpr auto IS_ROW_MAJOR = 0x9300;
	static constexpr auto ATOMIC_COUNTER_BUFFER_INDEX = 0x9301;
	static constexpr auto BUFFER_BINDING = 0x9302;
	static constexpr auto BUFFER_DATA_SIZE = 0x9303;
	static constexpr auto NUM_ACTIVE_VARIABLES = 0x9304;
	static constexpr auto ACTIVE_VARIABLES = 0x9305;
	static constexpr auto REFERENCED_BY_VERTEX_SHADER = 0x9306;
	static constexpr auto REFERENCED_BY_TESS_CONTROL_SHADER = 0x9307;
	static constexpr auto REFERENCED_BY_TESS_EVALUATION_SHADER = 0x9308;
	static constexpr auto REFERENCED_BY_GEOMETRY_SHADER = 0x9309;
	static constexpr auto REFERENCED_BY_FRAGMENT_SHADER = 0x930A;
	static constexpr auto REFERENCED_BY_COMPUTE_SHADER = 0x930B;
	static constexpr auto TOP_LEVEL_ARRAY_SIZE = 0x930C;
	static constexpr auto TOP_LEVEL_ARRAY_STRIDE = 0x930D;
	static constexpr auto OCATION = 0x930E;
	static constexpr auto OCATION_INDEX = 0x930F;
	static constexpr auto IS_PER_PATCH = 0x92E7;
	static constexpr auto SHADER_STORAGE_BUFFER = 0x90D2;
	static constexpr auto SHADER_STORAGE_BUFFER_BINDING = 0x90D3;
	static constexpr auto SHADER_STORAGE_BUFFER_START = 0x90D4;
	static constexpr auto SHADER_STORAGE_BUFFER_SIZE = 0x90D5;
	static constexpr auto MAX_VERTEX_SHADER_STORAGE_BLOCKS = 0x90D6;
	static constexpr auto MAX_GEOMETRY_SHADER_STORAGE_BLOCKS = 0x90D7;
	static constexpr auto MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS = 0x90D8;
	static constexpr auto MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS = 0x90D9;
	static constexpr auto MAX_FRAGMENT_SHADER_STORAGE_BLOCKS = 0x90DA;
	static constexpr auto MAX_COMPUTE_SHADER_STORAGE_BLOCKS = 0x90DB;
	static constexpr auto MAX_COMBINED_SHADER_STORAGE_BLOCKS = 0x90DC;
	static constexpr auto MAX_SHADER_STORAGE_BUFFER_BINDINGS = 0x90DD;
	static constexpr auto MAX_SHADER_STORAGE_BLOCK_SIZE = 0x90DE;
	static constexpr auto SHADER_STORAGE_BUFFER_OFFSET_ALIGNMENT = 0x90DF;
	static constexpr auto SHADER_STORAGE_BARRIER_BIT = 0x00002000;
	static constexpr auto MAX_COMBINED_SHADER_OUTPUT_RESOURCES = 0x8F39;
	static constexpr auto DEPTH_STENCIL_TEXTURE_MODE = 0x90EA;
	static constexpr auto TEXTURE_BUFFER_OFFSET = 0x919D;
	static constexpr auto TEXTURE_BUFFER_SIZE = 0x919E;
	static constexpr auto TEXTURE_BUFFER_OFFSET_ALIGNMENT = 0x919F;
	static constexpr auto TEXTURE_VIEW_MIN_LEVEL = 0x82DB;
	static constexpr auto TEXTURE_VIEW_NUM_LEVELS = 0x82DC;
	static constexpr auto TEXTURE_VIEW_MIN_LAYER = 0x82DD;
	static constexpr auto TEXTURE_VIEW_NUM_LAYERS = 0x82DE;
	static constexpr auto TEXTURE_IMMUTABLE_LEVELS = 0x82DF;
	static constexpr auto VERTEX_ATTRIB_BINDING = 0x82D4;
	static constexpr auto VERTEX_ATTRIB_RELATIVE_OFFSET = 0x82D5;
	static constexpr auto VERTEX_BINDING_DIVISOR = 0x82D6;
	static constexpr auto VERTEX_BINDING_OFFSET = 0x82D7;
	static constexpr auto VERTEX_BINDING_STRIDE = 0x82D8;
	static constexpr auto MAX_VERTEX_ATTRIB_RELATIVE_OFFSET = 0x82D9;
	static constexpr auto MAX_VERTEX_ATTRIB_BINDINGS = 0x82DA;
	static constexpr auto VERTEX_BINDING_BUFFER = 0x8F4F;
	static constexpr auto MAX_VERTEX_ATTRIB_STRIDE = 0x82E5;
	static constexpr auto PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED = 0x8221;
	static constexpr auto TEXTURE_BUFFER_BINDING = 0x8C2A;
	static constexpr auto MAP_PERSISTENT_BIT = 0x0040;
	static constexpr auto MAP_COHERENT_BIT = 0x0080;
	static constexpr auto DYNAMIC_STORAGE_BIT = 0x0100;
	static constexpr auto CLIENT_STORAGE_BIT = 0x0200;
	static constexpr auto CLIENT_MAPPED_BUFFER_BARRIER_BIT = 0x00004000;
	static constexpr auto BUFFER_IMMUTABLE_STORAGE = 0x821F;
	static constexpr auto BUFFER_STORAGE_FLAGS = 0x8220;
	static constexpr auto CLEAR_TEXTURE = 0x9365;
	static constexpr auto OCATION_COMPONENT = 0x934A;
	static constexpr auto TRANSFORM_FEEDBACK_BUFFER_INDEX = 0x934B;
	static constexpr auto TRANSFORM_FEEDBACK_BUFFER_STRIDE = 0x934C;
	static constexpr auto QUERY_BUFFER = 0x9192;
	static constexpr auto QUERY_BUFFER_BARRIER_BIT = 0x00008000;
	static constexpr auto QUERY_BUFFER_BINDING = 0x9193;
	static constexpr auto QUERY_RESULT_NO_WAIT = 0x9194;
	static constexpr auto MIRROR_CLAMP_TO_EDGE = 0x8743;
	static constexpr auto CONTEXT_LOST = 0x0507;
	static constexpr auto NEGATIVE_ONE_TO_ONE = 0x935E;
	static constexpr auto ZERO_TO_ONE = 0x935F;
	static constexpr auto CLIP_ORIGIN = 0x935C;
	static constexpr auto CLIP_DEPTH_MODE = 0x935D;
	static constexpr auto QUERY_WAIT_INVERTED = 0x8E17;
	static constexpr auto QUERY_NO_WAIT_INVERTED = 0x8E18;
	static constexpr auto QUERY_BY_REGION_WAIT_INVERTED = 0x8E19;
	static constexpr auto QUERY_BY_REGION_NO_WAIT_INVERTED = 0x8E1A;
	static constexpr auto MAX_CULL_DISTANCES = 0x82F9;
	static constexpr auto MAX_COMBINED_CLIP_AND_CULL_DISTANCES = 0x82FA;
	static constexpr auto TEXTURE_TARGET = 0x1006;
	static constexpr auto QUERY_TARGET = 0x82EA;
	static constexpr auto UILTY_CONTEXT_RESET = 0x8253;
	static constexpr auto INNOCENT_CONTEXT_RESET = 0x8254;
	static constexpr auto UNKNOWN_CONTEXT_RESET = 0x8255;
	static constexpr auto RESET_NOTIFICATION_STRATEGY = 0x8256;
	static constexpr auto OSE_CONTEXT_ON_RESET = 0x8252;
	static constexpr auto NO_RESET_NOTIFICATION = 0x8261;
	static constexpr auto CONTEXT_FLAG_ROBUST_ACCESS_BIT = 0x00000004;
	static constexpr auto CONTEXT_RELEASE_BEHAVIOR = 0x82FB;
	static constexpr auto CONTEXT_RELEASE_BEHAVIOR_FLUSH = 0x82FC;
	static constexpr auto SHADER_BINARY_FORMAT_SPIR_V = 0x9551;
	static constexpr auto SPIR_V_BINARY = 0x9552;
	static constexpr auto PARAMETER_BUFFER = 0x80EE;
	static constexpr auto PARAMETER_BUFFER_BINDING = 0x80EF;
	static constexpr auto CONTEXT_FLAG_NO_ERROR_BIT = 0x00000008;
	static constexpr auto VERTICES_SUBMITTED = 0x82EE;
	static constexpr auto PRIMITIVES_SUBMITTED = 0x82EF;
	static constexpr auto VERTEX_SHADER_INVOCATIONS = 0x82F0;
	static constexpr auto TESS_CONTROL_SHADER_PATCHES = 0x82F1;
	static constexpr auto TESS_EVALUATION_SHADER_INVOCATIONS = 0x82F2;
	static constexpr auto EOMETRY_SHADER_PRIMITIVES_EMITTED = 0x82F3;
	static constexpr auto FRAGMENT_SHADER_INVOCATIONS = 0x82F4;
	static constexpr auto COMPUTE_SHADER_INVOCATIONS = 0x82F5;
	static constexpr auto CLIPPING_INPUT_PRIMITIVES = 0x82F6;
	static constexpr auto CLIPPING_OUTPUT_PRIMITIVES = 0x82F7;
	static constexpr auto POLYGON_OFFSET_CLAMP = 0x8E1B;
	static constexpr auto SPIR_V_EXTENSIONS = 0x9553;
	static constexpr auto NUM_SPIR_V_EXTENSIONS = 0x9554;
	static constexpr auto TEXTURE_MAX_ANISOTROPY = 0x84FE;
	static constexpr auto MAX_TEXTURE_MAX_ANISOTROPY = 0x84FF;
	static constexpr auto TRANSFORM_FEEDBACK_OVERFLOW = 0x82EC;
	static constexpr auto TRANSFORM_FEEDBACK_STREAM_OVERFLOW = 0x82ED;
	static constexpr auto PRIMITIVE_BOUNDING_BOX_ARB = 0x92BE;
	static constexpr auto MULTISAMPLE_LINE_WIDTH_RANGE_ARB = 0x9381;
	static constexpr auto MULTISAMPLE_LINE_WIDTH_GRANULARITY_ARB = 0x9382;
	static constexpr auto UNSIGNED_INT64_ARB = 0x140F;
	static constexpr auto SYNC_CL_EVENT_ARB = 0x8240;
	static constexpr auto SYNC_CL_EVENT_COMPLETE_ARB = 0x8241;
	static constexpr auto MAX_COMPUTE_VARIABLE_GROUP_INVOCATIONS_ARB = 0x9344;
	static constexpr auto MAX_COMPUTE_FIXED_GROUP_INVOCATIONS_ARB = 0x90EB;
	static constexpr auto MAX_COMPUTE_VARIABLE_GROUP_SIZE_ARB = 0x9345;
	static constexpr auto MAX_COMPUTE_FIXED_GROUP_SIZE_ARB = 0x91BF;
	static constexpr auto DEBUG_OUTPUT_SYNCHRONOUS_ARB = 0x8242;
	static constexpr auto DEBUG_NEXT_LOGGED_MESSAGE_LENGTH_ARB = 0x8243;
	static constexpr auto DEBUG_CALLBACK_FUNCTION_ARB = 0x8244;
	static constexpr auto DEBUG_CALLBACK_USER_PARAM_ARB = 0x8245;
	static constexpr auto DEBUG_SOURCE_API_ARB = 0x8246;
	static constexpr auto DEBUG_SOURCE_WINDOW_SYSTEM_ARB = 0x8247;
	static constexpr auto DEBUG_SOURCE_SHADER_COMPILER_ARB = 0x8248;
	static constexpr auto DEBUG_SOURCE_THIRD_PARTY_ARB = 0x8249;
	static constexpr auto DEBUG_SOURCE_APPLICATION_ARB = 0x824A;
	static constexpr auto DEBUG_SOURCE_OTHER_ARB = 0x824B;
	static constexpr auto DEBUG_TYPE_ERROR_ARB = 0x824C;
	static constexpr auto DEBUG_TYPE_DEPRECATED_BEHAVIOR_ARB = 0x824D;
	static constexpr auto DEBUG_TYPE_UNDEFINED_BEHAVIOR_ARB = 0x824E;
	static constexpr auto DEBUG_TYPE_PORTABILITY_ARB = 0x824F;
	static constexpr auto DEBUG_TYPE_PERFORMANCE_ARB = 0x8250;
	static constexpr auto DEBUG_TYPE_OTHER_ARB = 0x8251;
	static constexpr auto MAX_DEBUG_MESSAGE_LENGTH_ARB = 0x9143;
	static constexpr auto MAX_DEBUG_LOGGED_MESSAGES_ARB = 0x9144;
	static constexpr auto DEBUG_LOGGED_MESSAGES_ARB = 0x9145;
	static constexpr auto DEBUG_SEVERITY_HIGH_ARB = 0x9146;
	static constexpr auto DEBUG_SEVERITY_MEDIUM_ARB = 0x9147;
	static constexpr auto DEBUG_SEVERITY_LOW_ARB = 0x9148;
	static constexpr auto INES_ADJACENCY_ARB = 0x000A;
	static constexpr auto INE_STRIP_ADJACENCY_ARB = 0x000B;
	static constexpr auto TRIANGLES_ADJACENCY_ARB = 0x000C;
	static constexpr auto TRIANGLE_STRIP_ADJACENCY_ARB = 0x000D;
	static constexpr auto PROGRAM_POINT_SIZE_ARB = 0x8642;
	static constexpr auto MAX_GEOMETRY_TEXTURE_IMAGE_UNITS_ARB = 0x8C29;
	static constexpr auto FRAMEBUFFER_ATTACHMENT_LAYERED_ARB = 0x8DA7;
	static constexpr auto FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS_ARB = 0x8DA8;
	static constexpr auto FRAMEBUFFER_INCOMPLETE_LAYER_COUNT_ARB = 0x8DA9;
	static constexpr auto EOMETRY_SHADER_ARB = 0x8DD9;
	static constexpr auto EOMETRY_VERTICES_OUT_ARB = 0x8DDA;
	static constexpr auto EOMETRY_INPUT_TYPE_ARB = 0x8DDB;
	static constexpr auto EOMETRY_OUTPUT_TYPE_ARB = 0x8DDC;
	static constexpr auto MAX_GEOMETRY_VARYING_COMPONENTS_ARB = 0x8DDD;
	static constexpr auto MAX_VERTEX_VARYING_COMPONENTS_ARB = 0x8DDE;
	static constexpr auto MAX_GEOMETRY_UNIFORM_COMPONENTS_ARB = 0x8DDF;
	static constexpr auto MAX_GEOMETRY_OUTPUT_VERTICES_ARB = 0x8DE0;
	static constexpr auto MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS_ARB = 0x8DE1;
	static constexpr auto SHADER_BINARY_FORMAT_SPIR_V_ARB = 0x9551;
	static constexpr auto SPIR_V_BINARY_ARB = 0x9552;
	static constexpr auto INT64_ARB = 0x140E;
	static constexpr auto INT64_VEC2_ARB = 0x8FE9;
	static constexpr auto INT64_VEC3_ARB = 0x8FEA;
	static constexpr auto INT64_VEC4_ARB = 0x8FEB;
	static constexpr auto UNSIGNED_INT64_VEC2_ARB = 0x8FF5;
	static constexpr auto UNSIGNED_INT64_VEC3_ARB = 0x8FF6;
	static constexpr auto UNSIGNED_INT64_VEC4_ARB = 0x8FF7;
	static constexpr auto PARAMETER_BUFFER_ARB = 0x80EE;
	static constexpr auto PARAMETER_BUFFER_BINDING_ARB = 0x80EF;
	static constexpr auto VERTEX_ATTRIB_ARRAY_DIVISOR_ARB = 0x88FE;
	static constexpr auto SRGB_DECODE_ARB = 0x8299;
	static constexpr auto VIEW_CLASS_EAC_R11 = 0x9383;
	static constexpr auto VIEW_CLASS_EAC_RG11 = 0x9384;
	static constexpr auto VIEW_CLASS_ETC2_RGB = 0x9385;
	static constexpr auto VIEW_CLASS_ETC2_RGBA = 0x9386;
	static constexpr auto VIEW_CLASS_ETC2_EAC_RGBA = 0x9387;
	static constexpr auto VIEW_CLASS_ASTC_4x4_RGBA = 0x9388;
	static constexpr auto VIEW_CLASS_ASTC_5x4_RGBA = 0x9389;
	static constexpr auto VIEW_CLASS_ASTC_5x5_RGBA = 0x938A;
	static constexpr auto VIEW_CLASS_ASTC_6x5_RGBA = 0x938B;
	static constexpr auto VIEW_CLASS_ASTC_6x6_RGBA = 0x938C;
	static constexpr auto VIEW_CLASS_ASTC_8x5_RGBA = 0x938D;
	static constexpr auto VIEW_CLASS_ASTC_8x6_RGBA = 0x938E;
	static constexpr auto VIEW_CLASS_ASTC_8x8_RGBA = 0x938F;
	static constexpr auto VIEW_CLASS_ASTC_10x5_RGBA = 0x9390;
	static constexpr auto VIEW_CLASS_ASTC_10x6_RGBA = 0x9391;
	static constexpr auto VIEW_CLASS_ASTC_10x8_RGBA = 0x9392;
	static constexpr auto VIEW_CLASS_ASTC_10x10_RGBA = 0x9393;
	static constexpr auto VIEW_CLASS_ASTC_12x10_RGBA = 0x9394;
	static constexpr auto VIEW_CLASS_ASTC_12x12_RGBA = 0x9395;
	static constexpr auto MAX_SHADER_COMPILER_THREADS_ARB = 0x91B0;
	static constexpr auto COMPLETION_STATUS_ARB = 0x91B1;
	static constexpr auto VERTICES_SUBMITTED_ARB = 0x82EE;
	static constexpr auto PRIMITIVES_SUBMITTED_ARB = 0x82EF;
	static constexpr auto VERTEX_SHADER_INVOCATIONS_ARB = 0x82F0;
	static constexpr auto TESS_CONTROL_SHADER_PATCHES_ARB = 0x82F1;
	static constexpr auto TESS_EVALUATION_SHADER_INVOCATIONS_ARB = 0x82F2;
	static constexpr auto EOMETRY_SHADER_PRIMITIVES_EMITTED_ARB = 0x82F3;
	static constexpr auto FRAGMENT_SHADER_INVOCATIONS_ARB = 0x82F4;
	static constexpr auto COMPUTE_SHADER_INVOCATIONS_ARB = 0x82F5;
	static constexpr auto CLIPPING_INPUT_PRIMITIVES_ARB = 0x82F6;
	static constexpr auto CLIPPING_OUTPUT_PRIMITIVES_ARB = 0x82F7;
	static constexpr auto PIXEL_PACK_BUFFER_ARB = 0x88EB;
	static constexpr auto PIXEL_UNPACK_BUFFER_ARB = 0x88EC;
	static constexpr auto PIXEL_PACK_BUFFER_BINDING_ARB = 0x88ED;
	static constexpr auto PIXEL_UNPACK_BUFFER_BINDING_ARB = 0x88EF;
	static constexpr auto CONTEXT_FLAG_ROBUST_ACCESS_BIT_ARB = 0x00000004;
	static constexpr auto OSE_CONTEXT_ON_RESET_ARB = 0x8252;
	static constexpr auto UILTY_CONTEXT_RESET_ARB = 0x8253;
	static constexpr auto INNOCENT_CONTEXT_RESET_ARB = 0x8254;
	static constexpr auto UNKNOWN_CONTEXT_RESET_ARB = 0x8255;
	static constexpr auto RESET_NOTIFICATION_STRATEGY_ARB = 0x8256;
	static constexpr auto NO_RESET_NOTIFICATION_ARB = 0x8261;
	static constexpr auto SAMPLE_LOCATION_SUBPIXEL_BITS_ARB = 0x933D;
	static constexpr auto SAMPLE_LOCATION_PIXEL_GRID_WIDTH_ARB = 0x933E;
	static constexpr auto SAMPLE_LOCATION_PIXEL_GRID_HEIGHT_ARB = 0x933F;
	static constexpr auto PROGRAMMABLE_SAMPLE_LOCATION_TABLE_SIZE_ARB = 0x9340;
	static constexpr auto SAMPLE_LOCATION_ARB = 0x8E50;
	static constexpr auto PROGRAMMABLE_SAMPLE_LOCATION_ARB = 0x9341;
	static constexpr auto FRAMEBUFFER_PROGRAMMABLE_SAMPLE_LOCATIONS_ARB = 0x9342;
	static constexpr auto FRAMEBUFFER_SAMPLE_LOCATION_PIXEL_GRID_ARB = 0x9343;
	static constexpr auto SAMPLE_SHADING_ARB = 0x8C36;
	static constexpr auto MIN_SAMPLE_SHADING_VALUE_ARB = 0x8C37;
	static constexpr auto SHADER_INCLUDE_ARB = 0x8DAE;
	static constexpr auto NAMED_STRING_LENGTH_ARB = 0x8DE9;
	static constexpr auto NAMED_STRING_TYPE_ARB = 0x8DEA;
	static constexpr auto SPARSE_STORAGE_BIT_ARB = 0x0400;
	static constexpr auto SPARSE_BUFFER_PAGE_SIZE_ARB = 0x82F8;
	static constexpr auto TEXTURE_SPARSE_ARB = 0x91A6;
	static constexpr auto VIRTUAL_PAGE_SIZE_INDEX_ARB = 0x91A7;
	static constexpr auto NUM_SPARSE_LEVELS_ARB = 0x91AA;
	static constexpr auto NUM_VIRTUAL_PAGE_SIZES_ARB = 0x91A8;
	static constexpr auto VIRTUAL_PAGE_SIZE_X_ARB = 0x9195;
	static constexpr auto VIRTUAL_PAGE_SIZE_Y_ARB = 0x9196;
	static constexpr auto VIRTUAL_PAGE_SIZE_Z_ARB = 0x9197;
	static constexpr auto MAX_SPARSE_TEXTURE_SIZE_ARB = 0x9198;
	static constexpr auto MAX_SPARSE_3D_TEXTURE_SIZE_ARB = 0x9199;
	static constexpr auto MAX_SPARSE_ARRAY_TEXTURE_LAYERS_ARB = 0x919A;
	static constexpr auto SPARSE_TEXTURE_FULL_ARRAY_CUBE_MIPMAPS_ARB = 0x91A9;
	static constexpr auto CLAMP_TO_BORDER_ARB = 0x812D;
	static constexpr auto TEXTURE_BUFFER_ARB = 0x8C2A;
	static constexpr auto MAX_TEXTURE_BUFFER_SIZE_ARB = 0x8C2B;
	static constexpr auto TEXTURE_BINDING_BUFFER_ARB = 0x8C2C;
	static constexpr auto TEXTURE_BUFFER_DATA_STORE_BINDING_ARB = 0x8C2D;
	static constexpr auto TEXTURE_BUFFER_FORMAT_ARB = 0x8C2E;
	static constexpr auto COMPRESSED_RGBA_BPTC_UNORM_ARB = 0x8E8C;
	static constexpr auto COMPRESSED_SRGB_ALPHA_BPTC_UNORM_ARB = 0x8E8D;
	static constexpr auto COMPRESSED_RGB_BPTC_SIGNED_FLOAT_ARB = 0x8E8E;
	static constexpr auto COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT_ARB = 0x8E8F;
	static constexpr auto TEXTURE_CUBE_MAP_ARRAY_ARB = 0x9009;
	static constexpr auto TEXTURE_BINDING_CUBE_MAP_ARRAY_ARB = 0x900A;
	static constexpr auto PROXY_TEXTURE_CUBE_MAP_ARRAY_ARB = 0x900B;
	static constexpr auto SAMPLER_CUBE_MAP_ARRAY_ARB = 0x900C;
	static constexpr auto SAMPLER_CUBE_MAP_ARRAY_SHADOW_ARB = 0x900D;
	static constexpr auto INT_SAMPLER_CUBE_MAP_ARRAY_ARB = 0x900E;
	static constexpr auto UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY_ARB = 0x900F;
	static constexpr auto TEXTURE_REDUCTION_MODE_ARB = 0x9366;
	static constexpr auto WEIGHTED_AVERAGE_ARB = 0x9367;
	static constexpr auto MIN_PROGRAM_TEXTURE_GATHER_OFFSET_ARB = 0x8E5E;
	static constexpr auto MAX_PROGRAM_TEXTURE_GATHER_OFFSET_ARB = 0x8E5F;
	static constexpr auto MAX_PROGRAM_TEXTURE_GATHER_COMPONENTS_ARB = 0x8F9F;
	static constexpr auto MIRRORED_REPEAT_ARB = 0x8370;
	static constexpr auto TRANSFORM_FEEDBACK_OVERFLOW_ARB = 0x82EC;
	static constexpr auto TRANSFORM_FEEDBACK_STREAM_OVERFLOW_ARB = 0x82ED;
	static constexpr auto MULTIPLY_KHR = 0x9294;
	static constexpr auto SCREEN_KHR = 0x9295;
	static constexpr auto OVERLAY_KHR = 0x9296;
	static constexpr auto DARKEN_KHR = 0x9297;
	static constexpr auto IGHTEN_KHR = 0x9298;
	static constexpr auto COLORDODGE_KHR = 0x9299;
	static constexpr auto COLORBURN_KHR = 0x929A;
	static constexpr auto HARDLIGHT_KHR = 0x929B;
	static constexpr auto SOFTLIGHT_KHR = 0x929C;
	static constexpr auto DIFFERENCE_KHR = 0x929E;
	static constexpr auto EXCLUSION_KHR = 0x92A0;
	static constexpr auto HSL_HUE_KHR = 0x92AD;
	static constexpr auto HSL_SATURATION_KHR = 0x92AE;
	static constexpr auto HSL_COLOR_KHR = 0x92AF;
	static constexpr auto HSL_LUMINOSITY_KHR = 0x92B0;
	static constexpr auto BLEND_ADVANCED_COHERENT_KHR = 0x9285;
	static constexpr auto CONTEXT_FLAG_NO_ERROR_BIT_KHR = 0x00000008;
	static constexpr auto MAX_SHADER_COMPILER_THREADS_KHR = 0x91B0;
	static constexpr auto COMPLETION_STATUS_KHR = 0x91B1;
	static constexpr auto CONTEXT_ROBUST_ACCESS = 0x90F3;
	static constexpr auto SUBGROUP_SIZE_KHR = 0x9532;
	static constexpr auto SUBGROUP_SUPPORTED_STAGES_KHR = 0x9533;
	static constexpr auto SUBGROUP_SUPPORTED_FEATURES_KHR = 0x9534;
	static constexpr auto SUBGROUP_QUAD_ALL_STAGES_KHR = 0x9535;
	static constexpr auto SUBGROUP_FEATURE_BASIC_BIT_KHR = 0x00000001;
	static constexpr auto SUBGROUP_FEATURE_VOTE_BIT_KHR = 0x00000002;
	static constexpr auto SUBGROUP_FEATURE_ARITHMETIC_BIT_KHR = 0x00000004;
	static constexpr auto SUBGROUP_FEATURE_BALLOT_BIT_KHR = 0x00000008;
	static constexpr auto SUBGROUP_FEATURE_SHUFFLE_BIT_KHR = 0x00000010;
	static constexpr auto SUBGROUP_FEATURE_SHUFFLE_RELATIVE_BIT_KHR = 0x00000020;
	static constexpr auto SUBGROUP_FEATURE_CLUSTERED_BIT_KHR = 0x00000040;
	static constexpr auto SUBGROUP_FEATURE_QUAD_BIT_KHR = 0x00000080;
	static constexpr auto COMPRESSED_RGBA_ASTC_4x4_KHR = 0x93B0;
	static constexpr auto COMPRESSED_RGBA_ASTC_5x4_KHR = 0x93B1;
	static constexpr auto COMPRESSED_RGBA_ASTC_5x5_KHR = 0x93B2;
	static constexpr auto COMPRESSED_RGBA_ASTC_6x5_KHR = 0x93B3;
	static constexpr auto COMPRESSED_RGBA_ASTC_6x6_KHR = 0x93B4;
	static constexpr auto COMPRESSED_RGBA_ASTC_8x5_KHR = 0x93B5;
	static constexpr auto COMPRESSED_RGBA_ASTC_8x6_KHR = 0x93B6;
	static constexpr auto COMPRESSED_RGBA_ASTC_8x8_KHR = 0x93B7;
	static constexpr auto COMPRESSED_RGBA_ASTC_10x5_KHR = 0x93B8;
	static constexpr auto COMPRESSED_RGBA_ASTC_10x6_KHR = 0x93B9;
	static constexpr auto COMPRESSED_RGBA_ASTC_10x8_KHR = 0x93BA;
	static constexpr auto COMPRESSED_RGBA_ASTC_10x10_KHR = 0x93BB;
	static constexpr auto COMPRESSED_RGBA_ASTC_12x10_KHR = 0x93BC;
	static constexpr auto COMPRESSED_RGBA_ASTC_12x12_KHR = 0x93BD;
	static constexpr auto COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR = 0x93D0;
	static constexpr auto COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR = 0x93D1;
	static constexpr auto COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR = 0x93D2;
	static constexpr auto COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR = 0x93D3;
	static constexpr auto COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR = 0x93D4;
	static constexpr auto COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR = 0x93D5;
	static constexpr auto COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR = 0x93D6;
	static constexpr auto COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR = 0x93D7;
	static constexpr auto COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR = 0x93D8;
	static constexpr auto COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR = 0x93D9;
	static constexpr auto COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR = 0x93DA;
	static constexpr auto COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR = 0x93DB;
	static constexpr auto COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR = 0x93DC;
	static constexpr auto COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR = 0x93DD;
	static constexpr auto RENDERBUFFER_STORAGE_SAMPLES_AMD = 0x91B2;
	static constexpr auto MAX_COLOR_FRAMEBUFFER_SAMPLES_AMD = 0x91B3;
	static constexpr auto MAX_COLOR_FRAMEBUFFER_STORAGE_SAMPLES_AMD = 0x91B4;
	static constexpr auto MAX_DEPTH_STENCIL_FRAMEBUFFER_SAMPLES_AMD = 0x91B5;
	static constexpr auto NUM_SUPPORTED_MULTISAMPLE_MODES_AMD = 0x91B6;
	static constexpr auto SUPPORTED_MULTISAMPLE_MODES_AMD = 0x91B7;
	static constexpr auto COUNTER_TYPE_AMD = 0x8BC0;
	static constexpr auto COUNTER_RANGE_AMD = 0x8BC1;
	static constexpr auto UNSIGNED_INT64_AMD = 0x8BC2;
	static constexpr auto PERCENTAGE_AMD = 0x8BC3;
	static constexpr auto PERFMON_RESULT_AVAILABLE_AMD = 0x8BC4;
	static constexpr auto PERFMON_RESULT_SIZE_AMD = 0x8BC5;
	static constexpr auto PERFMON_RESULT_AMD = 0x8BC6;
	static constexpr auto RGB_422_APPLE = 0x8A1F;
	static constexpr auto UNSIGNED_SHORT_8_8_APPLE = 0x85BA;
	static constexpr auto UNSIGNED_SHORT_8_8_REV_APPLE = 0x85BB;
	static constexpr auto RGB_RAW_422_APPLE = 0x8A51;
	static constexpr auto PROGRAM_PIPELINE_OBJECT_EXT = 0x8A4F;
	static constexpr auto PROGRAM_OBJECT_EXT = 0x8B40;
	static constexpr auto SHADER_OBJECT_EXT = 0x8B48;
	static constexpr auto BUFFER_OBJECT_EXT = 0x9151;
	static constexpr auto QUERY_OBJECT_EXT = 0x9153;
	static constexpr auto VERTEX_ARRAY_OBJECT_EXT = 0x9154;
	static constexpr auto PROGRAM_MATRIX_EXT = 0x8E2D;
	static constexpr auto TRANSPOSE_PROGRAM_MATRIX_EXT = 0x8E2E;
	static constexpr auto PROGRAM_MATRIX_STACK_DEPTH_EXT = 0x8E2F;
	static constexpr auto POLYGON_OFFSET_CLAMP_EXT = 0x8E1B;
	static constexpr auto RASTER_MULTISAMPLE_EXT = 0x9327;
	static constexpr auto RASTER_SAMPLES_EXT = 0x9328;
	static constexpr auto MAX_RASTER_SAMPLES_EXT = 0x9329;
	static constexpr auto RASTER_FIXED_SAMPLE_LOCATIONS_EXT = 0x932A;
	static constexpr auto MULTISAMPLE_RASTERIZATION_ALLOWED_EXT = 0x932B;
	static constexpr auto EFFECTIVE_RASTER_SAMPLES_EXT = 0x932C;
	static constexpr auto ACTIVE_PROGRAM_EXT = 0x8B8D;
	static constexpr auto FRAGMENT_SHADER_DISCARDS_SAMPLES_EXT = 0x8A52;
	static constexpr auto COMPRESSED_RGB_S3TC_DXT1_EXT = 0x83F0;
	static constexpr auto COMPRESSED_RGBA_S3TC_DXT1_EXT = 0x83F1;
	static constexpr auto COMPRESSED_RGBA_S3TC_DXT3_EXT = 0x83F2;
	static constexpr auto COMPRESSED_RGBA_S3TC_DXT5_EXT = 0x83F3;
	static constexpr auto TEXTURE_REDUCTION_MODE_EXT = 0x9366;
	static constexpr auto WEIGHTED_AVERAGE_EXT = 0x9367;
	static constexpr auto SR8_EXT = 0x8FBD;
	static constexpr auto SRG8_EXT = 0x8FBE;
	static constexpr auto TEXTURE_SRGB_DECODE_EXT = 0x8A48;
	static constexpr auto DECODE_EXT = 0x8A49;
	static constexpr auto SKIP_DECODE_EXT = 0x8A4A;
	static constexpr auto TEXTURE_IMMUTABLE_FORMAT_EXT = 0x912F;
	static constexpr auto ALPHA8_EXT = 0x803C;
	static constexpr auto UMINANCE8_EXT = 0x8040;
	static constexpr auto UMINANCE8_ALPHA8_EXT = 0x8045;
	static constexpr auto RGBA32F_EXT = 0x8814;
	static constexpr auto RGB32F_EXT = 0x8815;
	static constexpr auto ALPHA32F_EXT = 0x8816;
	static constexpr auto UMINANCE32F_EXT = 0x8818;
	static constexpr auto UMINANCE_ALPHA32F_EXT = 0x8819;
	static constexpr auto RGBA16F_EXT = 0x881A;
	static constexpr auto RGB16F_EXT = 0x881B;
	static constexpr auto ALPHA16F_EXT = 0x881C;
	static constexpr auto UMINANCE16F_EXT = 0x881E;
	static constexpr auto UMINANCE_ALPHA16F_EXT = 0x881F;
	static constexpr auto RGB10_A2_EXT = 0x8059;
	static constexpr auto RGB10_EXT = 0x8052;
	static constexpr auto BGRA8_EXT = 0x93A1;
	static constexpr auto R8_EXT = 0x8229;
	static constexpr auto RG8_EXT = 0x822B;
	static constexpr auto R32F_EXT = 0x822E;
	static constexpr auto RG32F_EXT = 0x8230;
	static constexpr auto R16F_EXT = 0x822D;
	static constexpr auto RG16F_EXT = 0x822F;
	static constexpr auto INCLUSIVE_EXT = 0x8F10;
	static constexpr auto EXCLUSIVE_EXT = 0x8F11;
	static constexpr auto WINDOW_RECTANGLE_EXT = 0x8F12;
	static constexpr auto WINDOW_RECTANGLE_MODE_EXT = 0x8F13;
	static constexpr auto MAX_WINDOW_RECTANGLES_EXT = 0x8F14;
	static constexpr auto NUM_WINDOW_RECTANGLES_EXT = 0x8F15;
	static constexpr auto BLACKHOLE_RENDER_INTEL = 0x83FC;
	static constexpr auto CONSERVATIVE_RASTERIZATION_INTEL = 0x83FE;
	static constexpr auto PERFQUERY_SINGLE_CONTEXT_INTEL = 0x00000000;
	static constexpr auto PERFQUERY_GLOBAL_CONTEXT_INTEL = 0x00000001;
	static constexpr auto PERFQUERY_WAIT_INTEL = 0x83FB;
	static constexpr auto PERFQUERY_FLUSH_INTEL = 0x83FA;
	static constexpr auto PERFQUERY_DONOT_FLUSH_INTEL = 0x83F9;
	static constexpr auto PERFQUERY_COUNTER_EVENT_INTEL = 0x94F0;
	static constexpr auto PERFQUERY_COUNTER_DURATION_NORM_INTEL = 0x94F1;
	static constexpr auto PERFQUERY_COUNTER_DURATION_RAW_INTEL = 0x94F2;
	static constexpr auto PERFQUERY_COUNTER_THROUGHPUT_INTEL = 0x94F3;
	static constexpr auto PERFQUERY_COUNTER_RAW_INTEL = 0x94F4;
	static constexpr auto PERFQUERY_COUNTER_TIMESTAMP_INTEL = 0x94F5;
	static constexpr auto PERFQUERY_COUNTER_DATA_UINT32_INTEL = 0x94F8;
	static constexpr auto PERFQUERY_COUNTER_DATA_UINT64_INTEL = 0x94F9;
	static constexpr auto PERFQUERY_COUNTER_DATA_FLOAT_INTEL = 0x94FA;
	static constexpr auto PERFQUERY_COUNTER_DATA_DOUBLE_INTEL = 0x94FB;
	static constexpr auto PERFQUERY_COUNTER_DATA_BOOL32_INTEL = 0x94FC;
	static constexpr auto PERFQUERY_QUERY_NAME_LENGTH_MAX_INTEL = 0x94FD;
	static constexpr auto PERFQUERY_COUNTER_NAME_LENGTH_MAX_INTEL = 0x94FE;
	static constexpr auto PERFQUERY_COUNTER_DESC_LENGTH_MAX_INTEL = 0x94FF;
	static constexpr auto PERFQUERY_GPA_EXTENDED_COUNTERS_INTEL = 0x9500;
	static constexpr auto FRAMEBUFFER_FLIP_X_MESA = 0x8BBC;
	static constexpr auto FRAMEBUFFER_FLIP_Y_MESA = 0x8BBB;
	static constexpr auto FRAMEBUFFER_SWAP_XY_MESA = 0x8BBD;
	static constexpr auto BLEND_OVERLAP_NV = 0x9281;
	static constexpr auto BLEND_PREMULTIPLIED_SRC_NV = 0x9280;
	static constexpr auto BLUE_NV = 0x1905;
	static constexpr auto COLORBURN_NV = 0x929A;
	static constexpr auto COLORDODGE_NV = 0x9299;
	static constexpr auto CONJOINT_NV = 0x9284;
	static constexpr auto CONTRAST_NV = 0x92A1;
	static constexpr auto DARKEN_NV = 0x9297;
	static constexpr auto DIFFERENCE_NV = 0x929E;
	static constexpr auto DISJOINT_NV = 0x9283;
	static constexpr auto DST_ATOP_NV = 0x928F;
	static constexpr auto DST_IN_NV = 0x928B;
	static constexpr auto DST_NV = 0x9287;
	static constexpr auto DST_OUT_NV = 0x928D;
	static constexpr auto DST_OVER_NV = 0x9289;
	static constexpr auto EXCLUSION_NV = 0x92A0;
	static constexpr auto REEN_NV = 0x1904;
	static constexpr auto HARDLIGHT_NV = 0x929B;
	static constexpr auto HARDMIX_NV = 0x92A9;
	static constexpr auto HSL_COLOR_NV = 0x92AF;
	static constexpr auto HSL_HUE_NV = 0x92AD;
	static constexpr auto HSL_LUMINOSITY_NV = 0x92B0;
	static constexpr auto HSL_SATURATION_NV = 0x92AE;
	static constexpr auto INVERT_OVG_NV = 0x92B4;
	static constexpr auto INVERT_RGB_NV = 0x92A3;
	static constexpr auto IGHTEN_NV = 0x9298;
	static constexpr auto INEARBURN_NV = 0x92A5;
	static constexpr auto INEARDODGE_NV = 0x92A4;
	static constexpr auto INEARLIGHT_NV = 0x92A7;
	static constexpr auto MINUS_CLAMPED_NV = 0x92B3;
	static constexpr auto MINUS_NV = 0x929F;
	static constexpr auto MULTIPLY_NV = 0x9294;
	static constexpr auto OVERLAY_NV = 0x9296;
	static constexpr auto PINLIGHT_NV = 0x92A8;
	static constexpr auto PLUS_CLAMPED_ALPHA_NV = 0x92B2;
	static constexpr auto PLUS_CLAMPED_NV = 0x92B1;
	static constexpr auto PLUS_DARKER_NV = 0x9292;
	static constexpr auto PLUS_NV = 0x9291;
	static constexpr auto RED_NV = 0x1903;
	static constexpr auto SCREEN_NV = 0x9295;
	static constexpr auto SOFTLIGHT_NV = 0x929C;
	static constexpr auto SRC_ATOP_NV = 0x928E;
	static constexpr auto SRC_IN_NV = 0x928A;
	static constexpr auto SRC_NV = 0x9286;
	static constexpr auto SRC_OUT_NV = 0x928C;
	static constexpr auto SRC_OVER_NV = 0x9288;
	static constexpr auto UNCORRELATED_NV = 0x9282;
	static constexpr auto VIVIDLIGHT_NV = 0x92A6;
	static constexpr auto XOR_NV = 0x1506;
	static constexpr auto BLEND_ADVANCED_COHERENT_NV = 0x9285;
	static constexpr auto FACTOR_MIN_AMD = 0x901C;
	static constexpr auto FACTOR_MAX_AMD = 0x901D;
	static constexpr auto VIEWPORT_POSITION_W_SCALE_NV = 0x937C;
	static constexpr auto VIEWPORT_POSITION_W_SCALE_X_COEFF_NV = 0x937D;
	static constexpr auto VIEWPORT_POSITION_W_SCALE_Y_COEFF_NV = 0x937E;
	static constexpr auto TERMINATE_SEQUENCE_COMMAND_NV = 0x0000;
	static constexpr auto NOP_COMMAND_NV = 0x0001;
	static constexpr auto DRAW_ELEMENTS_COMMAND_NV = 0x0002;
	static constexpr auto DRAW_ARRAYS_COMMAND_NV = 0x0003;
	static constexpr auto DRAW_ELEMENTS_STRIP_COMMAND_NV = 0x0004;
	static constexpr auto DRAW_ARRAYS_STRIP_COMMAND_NV = 0x0005;
	static constexpr auto DRAW_ELEMENTS_INSTANCED_COMMAND_NV = 0x0006;
	static constexpr auto DRAW_ARRAYS_INSTANCED_COMMAND_NV = 0x0007;
	static constexpr auto ELEMENT_ADDRESS_COMMAND_NV = 0x0008;
	static constexpr auto ATTRIBUTE_ADDRESS_COMMAND_NV = 0x0009;
	static constexpr auto UNIFORM_ADDRESS_COMMAND_NV = 0x000A;
	static constexpr auto BLEND_COLOR_COMMAND_NV = 0x000B;
	static constexpr auto STENCIL_REF_COMMAND_NV = 0x000C;
	static constexpr auto INE_WIDTH_COMMAND_NV = 0x000D;
	static constexpr auto POLYGON_OFFSET_COMMAND_NV = 0x000E;
	static constexpr auto ALPHA_REF_COMMAND_NV = 0x000F;
	static constexpr auto VIEWPORT_COMMAND_NV = 0x0010;
	static constexpr auto SCISSOR_COMMAND_NV = 0x0011;
	static constexpr auto FRONT_FACE_COMMAND_NV = 0x0012;
	static constexpr auto QUERY_WAIT_NV = 0x8E13;
	static constexpr auto QUERY_NO_WAIT_NV = 0x8E14;
	static constexpr auto QUERY_BY_REGION_WAIT_NV = 0x8E15;
	static constexpr auto QUERY_BY_REGION_NO_WAIT_NV = 0x8E16;
	static constexpr auto CONSERVATIVE_RASTERIZATION_NV = 0x9346;
	static constexpr auto SUBPIXEL_PRECISION_BIAS_X_BITS_NV = 0x9347;
	static constexpr auto SUBPIXEL_PRECISION_BIAS_Y_BITS_NV = 0x9348;
	static constexpr auto MAX_SUBPIXEL_PRECISION_BIAS_BITS_NV = 0x9349;
	static constexpr auto CONSERVATIVE_RASTER_DILATE_NV = 0x9379;
	static constexpr auto CONSERVATIVE_RASTER_DILATE_RANGE_NV = 0x937A;
	static constexpr auto CONSERVATIVE_RASTER_DILATE_GRANULARITY_NV = 0x937B;
	static constexpr auto CONSERVATIVE_RASTER_MODE_PRE_SNAP_NV = 0x9550;
	static constexpr auto CONSERVATIVE_RASTER_MODE_NV = 0x954D;
	static constexpr auto CONSERVATIVE_RASTER_MODE_POST_SNAP_NV = 0x954E;
	static constexpr auto CONSERVATIVE_RASTER_MODE_PRE_SNAP_TRIANGLES_NV = 0x954F;
	static constexpr auto DEPTH_COMPONENT32F_NV = 0x8DAB;
	static constexpr auto DEPTH32F_STENCIL8_NV = 0x8DAC;
	static constexpr auto FLOAT_32_UNSIGNED_INT_24_8_REV_NV = 0x8DAD;
	static constexpr auto DEPTH_BUFFER_FLOAT_MODE_NV = 0x8DAF;
	static constexpr auto FILL_RECTANGLE_NV = 0x933C;
	static constexpr auto FRAGMENT_COVERAGE_TO_COLOR_NV = 0x92DD;
	static constexpr auto FRAGMENT_COVERAGE_COLOR_NV = 0x92DE;
	static constexpr auto COVERAGE_MODULATION_TABLE_NV = 0x9331;
	static constexpr auto COLOR_SAMPLES_NV = 0x8E20;
	static constexpr auto DEPTH_SAMPLES_NV = 0x932D;
	static constexpr auto STENCIL_SAMPLES_NV = 0x932E;
	static constexpr auto MIXED_DEPTH_SAMPLES_SUPPORTED_NV = 0x932F;
	static constexpr auto MIXED_STENCIL_SAMPLES_SUPPORTED_NV = 0x9330;
	static constexpr auto COVERAGE_MODULATION_NV = 0x9332;
	static constexpr auto COVERAGE_MODULATION_TABLE_SIZE_NV = 0x9333;
	static constexpr auto RENDERBUFFER_COVERAGE_SAMPLES_NV = 0x8CAB;
	static constexpr auto RENDERBUFFER_COLOR_SAMPLES_NV = 0x8E10;
	static constexpr auto MAX_MULTISAMPLE_COVERAGE_MODES_NV = 0x8E11;
	static constexpr auto MULTISAMPLE_COVERAGE_MODES_NV = 0x8E12;
	static constexpr auto INT64_NV = 0x140E;
	static constexpr auto UNSIGNED_INT64_NV = 0x140F;
	static constexpr auto INT8_NV = 0x8FE0;
	static constexpr auto INT8_VEC2_NV = 0x8FE1;
	static constexpr auto INT8_VEC3_NV = 0x8FE2;
	static constexpr auto INT8_VEC4_NV = 0x8FE3;
	static constexpr auto INT16_NV = 0x8FE4;
	static constexpr auto INT16_VEC2_NV = 0x8FE5;
	static constexpr auto INT16_VEC3_NV = 0x8FE6;
	static constexpr auto INT16_VEC4_NV = 0x8FE7;
	static constexpr auto INT64_VEC2_NV = 0x8FE9;
	static constexpr auto INT64_VEC3_NV = 0x8FEA;
	static constexpr auto INT64_VEC4_NV = 0x8FEB;
	static constexpr auto UNSIGNED_INT8_NV = 0x8FEC;
	static constexpr auto UNSIGNED_INT8_VEC2_NV = 0x8FED;
	static constexpr auto UNSIGNED_INT8_VEC3_NV = 0x8FEE;
	static constexpr auto UNSIGNED_INT8_VEC4_NV = 0x8FEF;
	static constexpr auto UNSIGNED_INT16_NV = 0x8FF0;
	static constexpr auto UNSIGNED_INT16_VEC2_NV = 0x8FF1;
	static constexpr auto UNSIGNED_INT16_VEC3_NV = 0x8FF2;
	static constexpr auto UNSIGNED_INT16_VEC4_NV = 0x8FF3;
	static constexpr auto UNSIGNED_INT64_VEC2_NV = 0x8FF5;
	static constexpr auto UNSIGNED_INT64_VEC3_NV = 0x8FF6;
	static constexpr auto UNSIGNED_INT64_VEC4_NV = 0x8FF7;
	static constexpr auto FLOAT16_NV = 0x8FF8;
	static constexpr auto FLOAT16_VEC2_NV = 0x8FF9;
	static constexpr auto FLOAT16_VEC3_NV = 0x8FFA;
	static constexpr auto FLOAT16_VEC4_NV = 0x8FFB;
	static constexpr auto MULTISAMPLES_NV = 0x9371;
	static constexpr auto SUPERSAMPLE_SCALE_X_NV = 0x9372;
	static constexpr auto SUPERSAMPLE_SCALE_Y_NV = 0x9373;
	static constexpr auto CONFORMANT_NV = 0x9374;
	static constexpr auto ATTACHED_MEMORY_OBJECT_NV = 0x95A4;
	static constexpr auto ATTACHED_MEMORY_OFFSET_NV = 0x95A5;
	static constexpr auto MEMORY_ATTACHABLE_ALIGNMENT_NV = 0x95A6;
	static constexpr auto MEMORY_ATTACHABLE_SIZE_NV = 0x95A7;
	static constexpr auto MEMORY_ATTACHABLE_NV = 0x95A8;
	static constexpr auto DETACHED_MEMORY_INCARNATION_NV = 0x95A9;
	static constexpr auto DETACHED_TEXTURES_NV = 0x95AA;
	static constexpr auto DETACHED_BUFFERS_NV = 0x95AB;
	static constexpr auto MAX_DETACHED_TEXTURES_NV = 0x95AC;
	static constexpr auto MAX_DETACHED_BUFFERS_NV = 0x95AD;
	static constexpr auto MESH_SHADER_NV = 0x9559;
	static constexpr auto TASK_SHADER_NV = 0x955A;
	static constexpr auto MAX_MESH_UNIFORM_BLOCKS_NV = 0x8E60;
	static constexpr auto MAX_MESH_TEXTURE_IMAGE_UNITS_NV = 0x8E61;
	static constexpr auto MAX_MESH_IMAGE_UNIFORMS_NV = 0x8E62;
	static constexpr auto MAX_MESH_UNIFORM_COMPONENTS_NV = 0x8E63;
	static constexpr auto MAX_MESH_ATOMIC_COUNTER_BUFFERS_NV = 0x8E64;
	static constexpr auto MAX_MESH_ATOMIC_COUNTERS_NV = 0x8E65;
	static constexpr auto MAX_MESH_SHADER_STORAGE_BLOCKS_NV = 0x8E66;
	static constexpr auto MAX_COMBINED_MESH_UNIFORM_COMPONENTS_NV = 0x8E67;
	static constexpr auto MAX_TASK_UNIFORM_BLOCKS_NV = 0x8E68;
	static constexpr auto MAX_TASK_TEXTURE_IMAGE_UNITS_NV = 0x8E69;
	static constexpr auto MAX_TASK_IMAGE_UNIFORMS_NV = 0x8E6A;
	static constexpr auto MAX_TASK_UNIFORM_COMPONENTS_NV = 0x8E6B;
	static constexpr auto MAX_TASK_ATOMIC_COUNTER_BUFFERS_NV = 0x8E6C;
	static constexpr auto MAX_TASK_ATOMIC_COUNTERS_NV = 0x8E6D;
	static constexpr auto MAX_TASK_SHADER_STORAGE_BLOCKS_NV = 0x8E6E;
	static constexpr auto MAX_COMBINED_TASK_UNIFORM_COMPONENTS_NV = 0x8E6F;
	static constexpr auto MAX_MESH_WORK_GROUP_INVOCATIONS_NV = 0x95A2;
	static constexpr auto MAX_TASK_WORK_GROUP_INVOCATIONS_NV = 0x95A3;
	static constexpr auto MAX_MESH_TOTAL_MEMORY_SIZE_NV = 0x9536;
	static constexpr auto MAX_TASK_TOTAL_MEMORY_SIZE_NV = 0x9537;
	static constexpr auto MAX_MESH_OUTPUT_VERTICES_NV = 0x9538;
	static constexpr auto MAX_MESH_OUTPUT_PRIMITIVES_NV = 0x9539;
	static constexpr auto MAX_TASK_OUTPUT_COUNT_NV = 0x953A;
	static constexpr auto MAX_DRAW_MESH_TASKS_COUNT_NV = 0x953D;
	static constexpr auto MAX_MESH_VIEWS_NV = 0x9557;
	static constexpr auto MESH_OUTPUT_PER_VERTEX_GRANULARITY_NV = 0x92DF;
	static constexpr auto MESH_OUTPUT_PER_PRIMITIVE_GRANULARITY_NV = 0x9543;
	static constexpr auto MAX_MESH_WORK_GROUP_SIZE_NV = 0x953B;
	static constexpr auto MAX_TASK_WORK_GROUP_SIZE_NV = 0x953C;
	static constexpr auto MESH_WORK_GROUP_SIZE_NV = 0x953E;
	static constexpr auto TASK_WORK_GROUP_SIZE_NV = 0x953F;
	static constexpr auto MESH_VERTICES_OUT_NV = 0x9579;
	static constexpr auto MESH_PRIMITIVES_OUT_NV = 0x957A;
	static constexpr auto MESH_OUTPUT_TYPE_NV = 0x957B;
	static constexpr auto UNIFORM_BLOCK_REFERENCED_BY_MESH_SHADER_NV = 0x959C;
	static constexpr auto UNIFORM_BLOCK_REFERENCED_BY_TASK_SHADER_NV = 0x959D;
	static constexpr auto REFERENCED_BY_MESH_SHADER_NV = 0x95A0;
	static constexpr auto REFERENCED_BY_TASK_SHADER_NV = 0x95A1;
	static constexpr auto MESH_SHADER_BIT_NV = 0x00000040;
	static constexpr auto TASK_SHADER_BIT_NV = 0x00000080;
	static constexpr auto MESH_SUBROUTINE_NV = 0x957C;
	static constexpr auto TASK_SUBROUTINE_NV = 0x957D;
	static constexpr auto MESH_SUBROUTINE_UNIFORM_NV = 0x957E;
	static constexpr auto TASK_SUBROUTINE_UNIFORM_NV = 0x957F;
	static constexpr auto ATOMIC_COUNTER_BUFFER_REFERENCED_BY_MESH_SHADER_NV = 0x959E;
	static constexpr auto ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TASK_SHADER_NV = 0x959F;
	static constexpr auto PATH_FORMAT_SVG_NV = 0x9070;
	static constexpr auto PATH_FORMAT_PS_NV = 0x9071;
	static constexpr auto STANDARD_FONT_NAME_NV = 0x9072;
	static constexpr auto SYSTEM_FONT_NAME_NV = 0x9073;
	static constexpr auto FILE_NAME_NV = 0x9074;
	static constexpr auto PATH_STROKE_WIDTH_NV = 0x9075;
	static constexpr auto PATH_END_CAPS_NV = 0x9076;
	static constexpr auto PATH_INITIAL_END_CAP_NV = 0x9077;
	static constexpr auto PATH_TERMINAL_END_CAP_NV = 0x9078;
	static constexpr auto PATH_JOIN_STYLE_NV = 0x9079;
	static constexpr auto PATH_MITER_LIMIT_NV = 0x907A;
	static constexpr auto PATH_DASH_CAPS_NV = 0x907B;
	static constexpr auto PATH_INITIAL_DASH_CAP_NV = 0x907C;
	static constexpr auto PATH_TERMINAL_DASH_CAP_NV = 0x907D;
	static constexpr auto PATH_DASH_OFFSET_NV = 0x907E;
	static constexpr auto PATH_CLIENT_LENGTH_NV = 0x907F;
	static constexpr auto PATH_FILL_MODE_NV = 0x9080;
	static constexpr auto PATH_FILL_MASK_NV = 0x9081;
	static constexpr auto PATH_FILL_COVER_MODE_NV = 0x9082;
	static constexpr auto PATH_STROKE_COVER_MODE_NV = 0x9083;
	static constexpr auto PATH_STROKE_MASK_NV = 0x9084;
	static constexpr auto COUNT_UP_NV = 0x9088;
	static constexpr auto COUNT_DOWN_NV = 0x9089;
	static constexpr auto PATH_OBJECT_BOUNDING_BOX_NV = 0x908A;
	static constexpr auto CONVEX_HULL_NV = 0x908B;
	static constexpr auto BOUNDING_BOX_NV = 0x908D;
	static constexpr auto TRANSLATE_X_NV = 0x908E;
	static constexpr auto TRANSLATE_Y_NV = 0x908F;
	static constexpr auto TRANSLATE_2D_NV = 0x9090;
	static constexpr auto TRANSLATE_3D_NV = 0x9091;
	static constexpr auto AFFINE_2D_NV = 0x9092;
	static constexpr auto AFFINE_3D_NV = 0x9094;
	static constexpr auto TRANSPOSE_AFFINE_2D_NV = 0x9096;
	static constexpr auto TRANSPOSE_AFFINE_3D_NV = 0x9098;
	static constexpr auto UTF8_NV = 0x909A;
	static constexpr auto UTF16_NV = 0x909B;
	static constexpr auto BOUNDING_BOX_OF_BOUNDING_BOXES_NV = 0x909C;
	static constexpr auto PATH_COMMAND_COUNT_NV = 0x909D;
	static constexpr auto PATH_COORD_COUNT_NV = 0x909E;
	static constexpr auto PATH_DASH_ARRAY_COUNT_NV = 0x909F;
	static constexpr auto PATH_COMPUTED_LENGTH_NV = 0x90A0;
	static constexpr auto PATH_FILL_BOUNDING_BOX_NV = 0x90A1;
	static constexpr auto PATH_STROKE_BOUNDING_BOX_NV = 0x90A2;
	static constexpr auto SQUARE_NV = 0x90A3;
	static constexpr auto ROUND_NV = 0x90A4;
	static constexpr auto TRIANGULAR_NV = 0x90A5;
	static constexpr auto BEVEL_NV = 0x90A6;
	static constexpr auto MITER_REVERT_NV = 0x90A7;
	static constexpr auto MITER_TRUNCATE_NV = 0x90A8;
	static constexpr auto SKIP_MISSING_GLYPH_NV = 0x90A9;
	static constexpr auto USE_MISSING_GLYPH_NV = 0x90AA;
	static constexpr auto PATH_ERROR_POSITION_NV = 0x90AB;
	static constexpr auto ACCUM_ADJACENT_PAIRS_NV = 0x90AD;
	static constexpr auto ADJACENT_PAIRS_NV = 0x90AE;
	static constexpr auto FIRST_TO_REST_NV = 0x90AF;
	static constexpr auto PATH_GEN_MODE_NV = 0x90B0;
	static constexpr auto PATH_GEN_COEFF_NV = 0x90B1;
	static constexpr auto PATH_GEN_COMPONENTS_NV = 0x90B3;
	static constexpr auto PATH_STENCIL_FUNC_NV = 0x90B7;
	static constexpr auto PATH_STENCIL_REF_NV = 0x90B8;
	static constexpr auto PATH_STENCIL_VALUE_MASK_NV = 0x90B9;
	static constexpr auto PATH_STENCIL_DEPTH_OFFSET_FACTOR_NV = 0x90BD;
	static constexpr auto PATH_STENCIL_DEPTH_OFFSET_UNITS_NV = 0x90BE;
	static constexpr auto PATH_COVER_DEPTH_FUNC_NV = 0x90BF;
	static constexpr auto PATH_DASH_OFFSET_RESET_NV = 0x90B4;
	static constexpr auto MOVE_TO_RESETS_NV = 0x90B5;
	static constexpr auto MOVE_TO_CONTINUES_NV = 0x90B6;
	static constexpr auto CLOSE_PATH_NV = 0x00;
	static constexpr auto MOVE_TO_NV = 0x02;
	static constexpr auto RELATIVE_MOVE_TO_NV = 0x03;
	static constexpr auto INE_TO_NV = 0x04;
	static constexpr auto RELATIVE_LINE_TO_NV = 0x05;
	static constexpr auto HORIZONTAL_LINE_TO_NV = 0x06;
	static constexpr auto RELATIVE_HORIZONTAL_LINE_TO_NV = 0x07;
	static constexpr auto VERTICAL_LINE_TO_NV = 0x08;
	static constexpr auto RELATIVE_VERTICAL_LINE_TO_NV = 0x09;
	static constexpr auto QUADRATIC_CURVE_TO_NV = 0x0A;
	static constexpr auto RELATIVE_QUADRATIC_CURVE_TO_NV = 0x0B;
	static constexpr auto CUBIC_CURVE_TO_NV = 0x0C;
	static constexpr auto RELATIVE_CUBIC_CURVE_TO_NV = 0x0D;
	static constexpr auto SMOOTH_QUADRATIC_CURVE_TO_NV = 0x0E;
	static constexpr auto RELATIVE_SMOOTH_QUADRATIC_CURVE_TO_NV = 0x0F;
	static constexpr auto SMOOTH_CUBIC_CURVE_TO_NV = 0x10;
	static constexpr auto RELATIVE_SMOOTH_CUBIC_CURVE_TO_NV = 0x11;
	static constexpr auto SMALL_CCW_ARC_TO_NV = 0x12;
	static constexpr auto RELATIVE_SMALL_CCW_ARC_TO_NV = 0x13;
	static constexpr auto SMALL_CW_ARC_TO_NV = 0x14;
	static constexpr auto RELATIVE_SMALL_CW_ARC_TO_NV = 0x15;
	static constexpr auto ARGE_CCW_ARC_TO_NV = 0x16;
	static constexpr auto RELATIVE_LARGE_CCW_ARC_TO_NV = 0x17;
	static constexpr auto ARGE_CW_ARC_TO_NV = 0x18;
	static constexpr auto RELATIVE_LARGE_CW_ARC_TO_NV = 0x19;
	static constexpr auto RESTART_PATH_NV = 0xF0;
	static constexpr auto DUP_FIRST_CUBIC_CURVE_TO_NV = 0xF2;
	static constexpr auto DUP_LAST_CUBIC_CURVE_TO_NV = 0xF4;
	static constexpr auto RECT_NV = 0xF6;
	static constexpr auto CIRCULAR_CCW_ARC_TO_NV = 0xF8;
	static constexpr auto CIRCULAR_CW_ARC_TO_NV = 0xFA;
	static constexpr auto CIRCULAR_TANGENT_ARC_TO_NV = 0xFC;
	static constexpr auto ARC_TO_NV = 0xFE;
	static constexpr auto RELATIVE_ARC_TO_NV = 0xFF;
	static constexpr auto BOLD_BIT_NV = 0x01;
	static constexpr auto ITALIC_BIT_NV = 0x02;
	static constexpr auto YPH_WIDTH_BIT_NV = 0x01;
	static constexpr auto YPH_HEIGHT_BIT_NV = 0x02;
	static constexpr auto YPH_HORIZONTAL_BEARING_X_BIT_NV = 0x04;
	static constexpr auto YPH_HORIZONTAL_BEARING_Y_BIT_NV = 0x08;
	static constexpr auto YPH_HORIZONTAL_BEARING_ADVANCE_BIT_NV = 0x10;
	static constexpr auto YPH_VERTICAL_BEARING_X_BIT_NV = 0x20;
	static constexpr auto YPH_VERTICAL_BEARING_Y_BIT_NV = 0x40;
	static constexpr auto YPH_VERTICAL_BEARING_ADVANCE_BIT_NV = 0x80;
	static constexpr auto YPH_HAS_KERNING_BIT_NV = 0x100;
	static constexpr auto FONT_X_MIN_BOUNDS_BIT_NV = 0x00010000;
	static constexpr auto FONT_Y_MIN_BOUNDS_BIT_NV = 0x00020000;
	static constexpr auto FONT_X_MAX_BOUNDS_BIT_NV = 0x00040000;
	static constexpr auto FONT_Y_MAX_BOUNDS_BIT_NV = 0x00080000;
	static constexpr auto FONT_UNITS_PER_EM_BIT_NV = 0x00100000;
	static constexpr auto FONT_ASCENDER_BIT_NV = 0x00200000;
	static constexpr auto FONT_DESCENDER_BIT_NV = 0x00400000;
	static constexpr auto FONT_HEIGHT_BIT_NV = 0x00800000;
	static constexpr auto FONT_MAX_ADVANCE_WIDTH_BIT_NV = 0x01000000;
	static constexpr auto FONT_MAX_ADVANCE_HEIGHT_BIT_NV = 0x02000000;
	static constexpr auto FONT_UNDERLINE_POSITION_BIT_NV = 0x04000000;
	static constexpr auto FONT_UNDERLINE_THICKNESS_BIT_NV = 0x08000000;
	static constexpr auto FONT_HAS_KERNING_BIT_NV = 0x10000000;
	static constexpr auto ROUNDED_RECT_NV = 0xE8;
	static constexpr auto RELATIVE_ROUNDED_RECT_NV = 0xE9;
	static constexpr auto ROUNDED_RECT2_NV = 0xEA;
	static constexpr auto RELATIVE_ROUNDED_RECT2_NV = 0xEB;
	static constexpr auto ROUNDED_RECT4_NV = 0xEC;
	static constexpr auto RELATIVE_ROUNDED_RECT4_NV = 0xED;
	static constexpr auto ROUNDED_RECT8_NV = 0xEE;
	static constexpr auto RELATIVE_ROUNDED_RECT8_NV = 0xEF;
	static constexpr auto RELATIVE_RECT_NV = 0xF7;
	static constexpr auto FONT_GLYPHS_AVAILABLE_NV = 0x9368;
	static constexpr auto FONT_TARGET_UNAVAILABLE_NV = 0x9369;
	static constexpr auto FONT_UNAVAILABLE_NV = 0x936A;
	static constexpr auto FONT_UNINTELLIGIBLE_NV = 0x936B;
	static constexpr auto CONIC_CURVE_TO_NV = 0x1A;
	static constexpr auto RELATIVE_CONIC_CURVE_TO_NV = 0x1B;
	static constexpr auto FONT_NUM_GLYPH_INDICES_BIT_NV = 0x20000000;
	static constexpr auto STANDARD_FONT_FORMAT_NV = 0x936C;
	static constexpr auto PATH_PROJECTION_NV = 0x1701;
	static constexpr auto PATH_MODELVIEW_NV = 0x1700;
	static constexpr auto PATH_MODELVIEW_STACK_DEPTH_NV = 0x0BA3;
	static constexpr auto PATH_MODELVIEW_MATRIX_NV = 0x0BA6;
	static constexpr auto PATH_MAX_MODELVIEW_STACK_DEPTH_NV = 0x0D36;
	static constexpr auto PATH_TRANSPOSE_MODELVIEW_MATRIX_NV = 0x84E3;
	static constexpr auto PATH_PROJECTION_STACK_DEPTH_NV = 0x0BA4;
	static constexpr auto PATH_PROJECTION_MATRIX_NV = 0x0BA7;
	static constexpr auto PATH_MAX_PROJECTION_STACK_DEPTH_NV = 0x0D38;
	static constexpr auto PATH_TRANSPOSE_PROJECTION_MATRIX_NV = 0x84E4;
	static constexpr auto FRAGMENT_INPUT_NV = 0x936D;
	static constexpr auto SHARED_EDGE_NV = 0xC0;
	static constexpr auto SHADING_RATE_IMAGE_PER_PRIMITIVE_NV = 0x95B1;
	static constexpr auto SHADING_RATE_IMAGE_PALETTE_COUNT_NV = 0x95B2;
	static constexpr auto REPRESENTATIVE_FRAGMENT_TEST_NV = 0x937F;
	static constexpr auto SAMPLE_LOCATION_SUBPIXEL_BITS_NV = 0x933D;
	static constexpr auto SAMPLE_LOCATION_PIXEL_GRID_WIDTH_NV = 0x933E;
	static constexpr auto SAMPLE_LOCATION_PIXEL_GRID_HEIGHT_NV = 0x933F;
	static constexpr auto PROGRAMMABLE_SAMPLE_LOCATION_TABLE_SIZE_NV = 0x9340;
	static constexpr auto SAMPLE_LOCATION_NV = 0x8E50;
	static constexpr auto PROGRAMMABLE_SAMPLE_LOCATION_NV = 0x9341;
	static constexpr auto FRAMEBUFFER_PROGRAMMABLE_SAMPLE_LOCATIONS_NV = 0x9342;
	static constexpr auto FRAMEBUFFER_SAMPLE_LOCATION_PIXEL_GRID_NV = 0x9343;
	static constexpr auto SCISSOR_TEST_EXCLUSIVE_NV = 0x9555;
	static constexpr auto SCISSOR_BOX_EXCLUSIVE_NV = 0x9556;
	static constexpr auto BUFFER_GPU_ADDRESS_NV = 0x8F1D;
	static constexpr auto PU_ADDRESS_NV = 0x8F34;
	static constexpr auto MAX_SHADER_BUFFER_ADDRESS_NV = 0x8F35;
	static constexpr auto SHADER_GLOBAL_ACCESS_BARRIER_BIT_NV = 0x00000010;
	static constexpr auto SUBGROUP_FEATURE_PARTITIONED_BIT_NV = 0x00000100;
	static constexpr auto WARP_SIZE_NV = 0x9339;
	static constexpr auto WARPS_PER_SM_NV = 0x933A;
	static constexpr auto SM_COUNT_NV = 0x933B;
	static constexpr auto SHADING_RATE_IMAGE_NV = 0x9563;
	static constexpr auto SHADING_RATE_NO_INVOCATIONS_NV = 0x9564;
	static constexpr auto SHADING_RATE_1_INVOCATION_PER_PIXEL_NV = 0x9565;
	static constexpr auto SHADING_RATE_1_INVOCATION_PER_1X2_PIXELS_NV = 0x9566;
	static constexpr auto SHADING_RATE_1_INVOCATION_PER_2X1_PIXELS_NV = 0x9567;
	static constexpr auto SHADING_RATE_1_INVOCATION_PER_2X2_PIXELS_NV = 0x9568;
	static constexpr auto SHADING_RATE_1_INVOCATION_PER_2X4_PIXELS_NV = 0x9569;
	static constexpr auto SHADING_RATE_1_INVOCATION_PER_4X2_PIXELS_NV = 0x956A;
	static constexpr auto SHADING_RATE_1_INVOCATION_PER_4X4_PIXELS_NV = 0x956B;
	static constexpr auto SHADING_RATE_2_INVOCATIONS_PER_PIXEL_NV = 0x956C;
	static constexpr auto SHADING_RATE_4_INVOCATIONS_PER_PIXEL_NV = 0x956D;
	static constexpr auto SHADING_RATE_8_INVOCATIONS_PER_PIXEL_NV = 0x956E;
	static constexpr auto SHADING_RATE_16_INVOCATIONS_PER_PIXEL_NV = 0x956F;
	static constexpr auto SHADING_RATE_IMAGE_BINDING_NV = 0x955B;
	static constexpr auto SHADING_RATE_IMAGE_TEXEL_WIDTH_NV = 0x955C;
	static constexpr auto SHADING_RATE_IMAGE_TEXEL_HEIGHT_NV = 0x955D;
	static constexpr auto SHADING_RATE_IMAGE_PALETTE_SIZE_NV = 0x955E;
	static constexpr auto MAX_COARSE_FRAGMENT_SAMPLES_NV = 0x955F;
	static constexpr auto SHADING_RATE_SAMPLE_ORDER_DEFAULT_NV = 0x95AE;
	static constexpr auto SHADING_RATE_SAMPLE_ORDER_PIXEL_MAJOR_NV = 0x95AF;
	static constexpr auto SHADING_RATE_SAMPLE_ORDER_SAMPLE_MAJOR_NV = 0x95B0;
	static constexpr auto UNIFORM_BUFFER_UNIFIED_NV = 0x936E;
	static constexpr auto UNIFORM_BUFFER_ADDRESS_NV = 0x936F;
	static constexpr auto UNIFORM_BUFFER_LENGTH_NV = 0x9370;
	static constexpr auto VERTEX_ATTRIB_ARRAY_UNIFIED_NV = 0x8F1E;
	static constexpr auto ELEMENT_ARRAY_UNIFIED_NV = 0x8F1F;
	static constexpr auto VERTEX_ATTRIB_ARRAY_ADDRESS_NV = 0x8F20;
	static constexpr auto VERTEX_ARRAY_ADDRESS_NV = 0x8F21;
	static constexpr auto NORMAL_ARRAY_ADDRESS_NV = 0x8F22;
	static constexpr auto COLOR_ARRAY_ADDRESS_NV = 0x8F23;
	static constexpr auto INDEX_ARRAY_ADDRESS_NV = 0x8F24;
	static constexpr auto TEXTURE_COORD_ARRAY_ADDRESS_NV = 0x8F25;
	static constexpr auto EDGE_FLAG_ARRAY_ADDRESS_NV = 0x8F26;
	static constexpr auto SECONDARY_COLOR_ARRAY_ADDRESS_NV = 0x8F27;
	static constexpr auto FOG_COORD_ARRAY_ADDRESS_NV = 0x8F28;
	static constexpr auto ELEMENT_ARRAY_ADDRESS_NV = 0x8F29;
	static constexpr auto VERTEX_ATTRIB_ARRAY_LENGTH_NV = 0x8F2A;
	static constexpr auto VERTEX_ARRAY_LENGTH_NV = 0x8F2B;
	static constexpr auto NORMAL_ARRAY_LENGTH_NV = 0x8F2C;
	static constexpr auto COLOR_ARRAY_LENGTH_NV = 0x8F2D;
	static constexpr auto INDEX_ARRAY_LENGTH_NV = 0x8F2E;
	static constexpr auto TEXTURE_COORD_ARRAY_LENGTH_NV = 0x8F2F;
	static constexpr auto EDGE_FLAG_ARRAY_LENGTH_NV = 0x8F30;
	static constexpr auto SECONDARY_COLOR_ARRAY_LENGTH_NV = 0x8F31;
	static constexpr auto FOG_COORD_ARRAY_LENGTH_NV = 0x8F32;
	static constexpr auto ELEMENT_ARRAY_LENGTH_NV = 0x8F33;
	static constexpr auto DRAW_INDIRECT_UNIFIED_NV = 0x8F40;
	static constexpr auto DRAW_INDIRECT_ADDRESS_NV = 0x8F41;
	static constexpr auto DRAW_INDIRECT_LENGTH_NV = 0x8F42;
	static constexpr auto VIEWPORT_SWIZZLE_POSITIVE_X_NV = 0x9350;
	static constexpr auto VIEWPORT_SWIZZLE_NEGATIVE_X_NV = 0x9351;
	static constexpr auto VIEWPORT_SWIZZLE_POSITIVE_Y_NV = 0x9352;
	static constexpr auto VIEWPORT_SWIZZLE_NEGATIVE_Y_NV = 0x9353;
	static constexpr auto VIEWPORT_SWIZZLE_POSITIVE_Z_NV = 0x9354;
	static constexpr auto VIEWPORT_SWIZZLE_NEGATIVE_Z_NV = 0x9355;
	static constexpr auto VIEWPORT_SWIZZLE_POSITIVE_W_NV = 0x9356;
	static constexpr auto VIEWPORT_SWIZZLE_NEGATIVE_W_NV = 0x9357;
	static constexpr auto VIEWPORT_SWIZZLE_X_NV = 0x9358;
	static constexpr auto VIEWPORT_SWIZZLE_Y_NV = 0x9359;
	static constexpr auto VIEWPORT_SWIZZLE_Z_NV = 0x935A;
	static constexpr auto VIEWPORT_SWIZZLE_W_NV = 0x935B;
	static constexpr auto FRAMEBUFFER_ATTACHMENT_TEXTURE_NUM_VIEWS_OVR = 0x9630;
	static constexpr auto FRAMEBUFFER_ATTACHMENT_TEXTURE_BASE_VIEW_INDEX_OVR = 0x9632;
	static constexpr auto MAX_VIEWS_OVR = 0x9631;
	static constexpr auto FRAMEBUFFER_INCOMPLETE_VIEW_TARGETS_OVR = 0x9633;

	struct FuncDef {
		typedef void (GALGLPROC* glCullFace_t)(GLenum mode);
		typedef void (GALGLPROC* glFrontFace_t)(GLenum mode);
		typedef void (GALGLPROC* glHint_t)(GLenum target, GLenum mode);
		typedef void (GALGLPROC* glLineWidth_t)(GLfloat width);
		typedef void (GALGLPROC* glPointSize_t)(GLfloat size);
		typedef void (GALGLPROC* glPolygonMode_t)(GLenum face, GLenum mode);
		typedef void (GALGLPROC* glScissor_t)(GLint x, GLint y, GLsizei width, GLsizei height);
		typedef void (GALGLPROC* glTexParameterf_t)(GLenum target, GLenum pname, GLfloat param);
		typedef void (GALGLPROC* glTexParameterfv_t)(GLenum target, GLenum pname, const GLfloat *params);
		typedef void (GALGLPROC* glTexParameteri_t)(GLenum target, GLenum pname, GLint param);
		typedef void (GALGLPROC* glTexParameteriv_t)(GLenum target, GLenum pname, const GLint *params);
		typedef void (GALGLPROC* glTexImage1D_t)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void *pixels);
		typedef void (GALGLPROC* glTexImage2D_t)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void *pixels);
		typedef void (GALGLPROC* glDrawBuffer_t)(GLenum buf);
		typedef void (GALGLPROC* glClear_t)(GLbitfield mask);
		typedef void (GALGLPROC* glClearColor_t)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
		typedef void (GALGLPROC* glClearStencil_t)(GLint s);
		typedef void (GALGLPROC* glClearDepth_t)(GLdouble depth);
		typedef void (GALGLPROC* glStencilMask_t)(GLuint mask);
		typedef void (GALGLPROC* glColorMask_t)(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
		typedef void (GALGLPROC* glDepthMask_t)(GLboolean flag);
		typedef void (GALGLPROC* glDisable_t)(GLenum cap);
		typedef void (GALGLPROC* glEnable_t)(GLenum cap);
		typedef void (GALGLPROC* glFinish_t)(void);
		typedef void (GALGLPROC* glFlush_t)(void);
		typedef void (GALGLPROC* glBlendFunc_t)(GLenum sfactor, GLenum dfactor);
		typedef void (GALGLPROC* glLogicOp_t)(GLenum opcode);
		typedef void (GALGLPROC* glStencilFunc_t)(GLenum func, GLint ref, GLuint mask);
		typedef void (GALGLPROC* glStencilOp_t)(GLenum fail, GLenum zfail, GLenum zpass);
		typedef void (GALGLPROC* glDepthFunc_t)(GLenum func);
		typedef void (GALGLPROC* glPixelStoref_t)(GLenum pname, GLfloat param);
		typedef void (GALGLPROC* glPixelStorei_t)(GLenum pname, GLint param);
		typedef void (GALGLPROC* glReadBuffer_t)(GLenum src);
		typedef void (GALGLPROC* glReadPixels_t)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void *pixels);
		typedef void (GALGLPROC* glGetBooleanv_t)(GLenum pname, GLboolean *data);
		typedef void (GALGLPROC* glGetDoublev_t)(GLenum pname, GLdouble *data);
		typedef GLenum (GALGLPROC* glGetError_t)(void);
		typedef void (GALGLPROC* glGetFloatv_t)(GLenum pname, GLfloat *data);
		typedef void (GALGLPROC* glGetIntegerv_t)(GLenum pname, GLint *data);
		typedef const GLubyte * (GALGLPROC* glGetString_t)(GLenum name);
		typedef void (GALGLPROC* glGetTexImage_t)(GLenum target, GLint level, GLenum format, GLenum type, void *pixels);
		typedef void (GALGLPROC* glGetTexParameterfv_t)(GLenum target, GLenum pname, GLfloat *params);
		typedef void (GALGLPROC* glGetTexParameteriv_t)(GLenum target, GLenum pname, GLint *params);
		typedef void (GALGLPROC* glGetTexLevelParameterfv_t)(GLenum target, GLint level, GLenum pname, GLfloat *params);
		typedef void (GALGLPROC* glGetTexLevelParameteriv_t)(GLenum target, GLint level, GLenum pname, GLint *params);
		typedef GLboolean (GALGLPROC* glIsEnabled_t)(GLenum cap);
		typedef void (GALGLPROC* glDepthRange_t)(GLdouble n, GLdouble f);
		typedef void (GALGLPROC* glViewport_t)(GLint x, GLint y, GLsizei width, GLsizei height);
		typedef void (GALGLPROC* glDrawArrays_t)(GLenum mode, GLint first, GLsizei count);
		typedef void (GALGLPROC* glDrawElements_t)(GLenum mode, GLsizei count, GLenum type, const void *indices);
		typedef void (GALGLPROC* glGetPointerv_t)(GLenum pname, void **params);
		typedef void (GALGLPROC* glPolygonOffset_t)(GLfloat factor, GLfloat units);
		typedef void (GALGLPROC* glCopyTexImage1D_t)(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
		typedef void (GALGLPROC* glCopyTexImage2D_t)(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
		typedef void (GALGLPROC* glCopyTexSubImage1D_t)(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
		typedef void (GALGLPROC* glCopyTexSubImage2D_t)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
		typedef void (GALGLPROC* glTexSubImage1D_t)(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels);
		typedef void (GALGLPROC* glTexSubImage2D_t)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels);
		typedef void (GALGLPROC* glBindTexture_t)(GLenum target, GLuint texture);
		typedef void (GALGLPROC* glDeleteTextures_t)(GLsizei n, const GLuint *textures);
		typedef void (GALGLPROC* glGenTextures_t)(GLsizei n, GLuint *textures);
		typedef GLboolean (GALGLPROC* glIsTexture_t)(GLuint texture);
		typedef void (GALGLPROC* glDrawRangeElements_t)(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices);
		typedef void (GALGLPROC* glTexImage3D_t)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels);
		typedef void (GALGLPROC* glTexSubImage3D_t)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels);
		typedef void (GALGLPROC* glCopyTexSubImage3D_t)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
		typedef void (GALGLPROC* glActiveTexture_t)(GLenum texture);
		typedef void (GALGLPROC* glSampleCoverage_t)(GLfloat value, GLboolean invert);
		typedef void (GALGLPROC* glCompressedTexImage3D_t)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *data);
		typedef void (GALGLPROC* glCompressedTexImage2D_t)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *data);
		typedef void (GALGLPROC* glCompressedTexImage1D_t)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void *data);
		typedef void (GALGLPROC* glCompressedTexSubImage3D_t)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data);
		typedef void (GALGLPROC* glCompressedTexSubImage2D_t)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data);
		typedef void (GALGLPROC* glCompressedTexSubImage1D_t)(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *data);
		typedef void (GALGLPROC* glGetCompressedTexImage_t)(GLenum target, GLint level, void *img);
		typedef void (GALGLPROC* glBlendFuncSeparate_t)(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
		typedef void (GALGLPROC* glMultiDrawArrays_t)(GLenum mode, const GLint *first, const GLsizei *count, GLsizei drawcount);
		typedef void (GALGLPROC* glMultiDrawElements_t)(GLenum mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei drawcount);
		typedef void (GALGLPROC* glPointParameterf_t)(GLenum pname, GLfloat param);
		typedef void (GALGLPROC* glPointParameterfv_t)(GLenum pname, const GLfloat *params);
		typedef void (GALGLPROC* glPointParameteri_t)(GLenum pname, GLint param);
		typedef void (GALGLPROC* glPointParameteriv_t)(GLenum pname, const GLint *params);
		typedef void (GALGLPROC* glBlendColor_t)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
		typedef void (GALGLPROC* glBlendEquation_t)(GLenum mode);
		typedef void (GALGLPROC* glGenQueries_t)(GLsizei n, GLuint *ids);
		typedef void (GALGLPROC* glDeleteQueries_t)(GLsizei n, const GLuint *ids);
		typedef GLboolean (GALGLPROC* glIsQuery_t)(GLuint id);
		typedef void (GALGLPROC* glBeginQuery_t)(GLenum target, GLuint id);
		typedef void (GALGLPROC* glEndQuery_t)(GLenum target);
		typedef void (GALGLPROC* glGetQueryiv_t)(GLenum target, GLenum pname, GLint *params);
		typedef void (GALGLPROC* glGetQueryObjectiv_t)(GLuint id, GLenum pname, GLint *params);
		typedef void (GALGLPROC* glGetQueryObjectuiv_t)(GLuint id, GLenum pname, GLuint *params);
		typedef void (GALGLPROC* glBindBuffer_t)(GLenum target, GLuint buffer);
		typedef void (GALGLPROC* glDeleteBuffers_t)(GLsizei n, const GLuint *buffers);
		typedef void (GALGLPROC* glGenBuffers_t)(GLsizei n, GLuint *buffers);
		typedef GLboolean (GALGLPROC* glIsBuffer_t)(GLuint buffer);
		typedef void (GALGLPROC* glBufferData_t)(GLenum target, GLsizeiptr size, const void *data, GLenum usage);
		typedef void (GALGLPROC* glBufferSubData_t)(GLenum target, GLintptr offset, GLsizeiptr size, const void *data);
		typedef void (GALGLPROC* glGetBufferSubData_t)(GLenum target, GLintptr offset, GLsizeiptr size, void *data);
		typedef void * (GALGLPROC* glMapBuffer_t)(GLenum target, GLenum access);
		typedef GLboolean (GALGLPROC* glUnmapBuffer_t)(GLenum target);
		typedef void (GALGLPROC* glGetBufferParameteriv_t)(GLenum target, GLenum pname, GLint *params);
		typedef void (GALGLPROC* glGetBufferPointerv_t)(GLenum target, GLenum pname, void **params);
		typedef void (GALGLPROC* glBlendEquationSeparate_t)(GLenum modeRGB, GLenum modeAlpha);
		typedef void (GALGLPROC* glDrawBuffers_t)(GLsizei n, const GLenum *bufs);
		typedef void (GALGLPROC* glStencilOpSeparate_t)(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass);
		typedef void (GALGLPROC* glStencilFuncSeparate_t)(GLenum face, GLenum func, GLint ref, GLuint mask);
		typedef void (GALGLPROC* glStencilMaskSeparate_t)(GLenum face, GLuint mask);
		typedef void (GALGLPROC* glAttachShader_t)(GLuint program, GLuint shader);
		typedef void (GALGLPROC* glBindAttribLocation_t)(GLuint program, GLuint index, const GLchar *name);
		typedef void (GALGLPROC* glCompileShader_t)(GLuint shader);
		typedef GLuint (GALGLPROC* glCreateProgram_t)(void);
		typedef GLuint (GALGLPROC* glCreateShader_t)(GLenum type);
		typedef void (GALGLPROC* glDeleteProgram_t)(GLuint program);
		typedef void (GALGLPROC* glDeleteShader_t)(GLuint shader);
		typedef void (GALGLPROC* glDetachShader_t)(GLuint program, GLuint shader);
		typedef void (GALGLPROC* glDisableVertexAttribArray_t)(GLuint index);
		typedef void (GALGLPROC* glEnableVertexAttribArray_t)(GLuint index);
		typedef void (GALGLPROC* glGetActiveAttrib_t)(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name);
		typedef void (GALGLPROC* glGetActiveUniform_t)(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name);
		typedef void (GALGLPROC* glGetAttachedShaders_t)(GLuint program, GLsizei maxCount, GLsizei *count, GLuint *shaders);
		typedef GLint (GALGLPROC* glGetAttribLocation_t)(GLuint program, const GLchar *name);
		typedef void (GALGLPROC* glGetProgramiv_t)(GLuint program, GLenum pname, GLint *params);
		typedef void (GALGLPROC* glGetProgramInfoLog_t)(GLuint program, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
		typedef void (GALGLPROC* glGetShaderiv_t)(GLuint shader, GLenum pname, GLint *params);
		typedef void (GALGLPROC* glGetShaderInfoLog_t)(GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
		typedef void (GALGLPROC* glGetShaderSource_t)(GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *source);
		typedef GLint (GALGLPROC* glGetUniformLocation_t)(GLuint program, const GLchar *name);
		typedef void (GALGLPROC* glGetUniformfv_t)(GLuint program, GLint location, GLfloat *params);
		typedef void (GALGLPROC* glGetUniformiv_t)(GLuint program, GLint location, GLint *params);
		typedef void (GALGLPROC* glGetVertexAttribdv_t)(GLuint index, GLenum pname, GLdouble *params);
		typedef void (GALGLPROC* glGetVertexAttribfv_t)(GLuint index, GLenum pname, GLfloat *params);
		typedef void (GALGLPROC* glGetVertexAttribiv_t)(GLuint index, GLenum pname, GLint *params);
		typedef void (GALGLPROC* glGetVertexAttribPointerv_t)(GLuint index, GLenum pname, void **pointer);
		typedef GLboolean (GALGLPROC* glIsProgram_t)(GLuint program);
		typedef GLboolean (GALGLPROC* glIsShader_t)(GLuint shader);
		typedef void (GALGLPROC* glLinkProgram_t)(GLuint program);
		typedef void (GALGLPROC* glShaderSource_t)(GLuint shader, GLsizei count, const GLchar *const*string, const GLint *length);
		typedef void (GALGLPROC* glUseProgram_t)(GLuint program);
		typedef void (GALGLPROC* glUniform1f_t)(GLint location, GLfloat v0);
		typedef void (GALGLPROC* glUniform2f_t)(GLint location, GLfloat v0, GLfloat v1);
		typedef void (GALGLPROC* glUniform3f_t)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
		typedef void (GALGLPROC* glUniform4f_t)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
		typedef void (GALGLPROC* glUniform1i_t)(GLint location, GLint v0);
		typedef void (GALGLPROC* glUniform2i_t)(GLint location, GLint v0, GLint v1);
		typedef void (GALGLPROC* glUniform3i_t)(GLint location, GLint v0, GLint v1, GLint v2);
		typedef void (GALGLPROC* glUniform4i_t)(GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
		typedef void (GALGLPROC* glUniform1fv_t)(GLint location, GLsizei count, const GLfloat *value);
		typedef void (GALGLPROC* glUniform2fv_t)(GLint location, GLsizei count, const GLfloat *value);
		typedef void (GALGLPROC* glUniform3fv_t)(GLint location, GLsizei count, const GLfloat *value);
		typedef void (GALGLPROC* glUniform4fv_t)(GLint location, GLsizei count, const GLfloat *value);
		typedef void (GALGLPROC* glUniform1iv_t)(GLint location, GLsizei count, const GLint *value);
		typedef void (GALGLPROC* glUniform2iv_t)(GLint location, GLsizei count, const GLint *value);
		typedef void (GALGLPROC* glUniform3iv_t)(GLint location, GLsizei count, const GLint *value);
		typedef void (GALGLPROC* glUniform4iv_t)(GLint location, GLsizei count, const GLint *value);
		typedef void (GALGLPROC* glUniformMatrix2fv_t)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
		typedef void (GALGLPROC* glUniformMatrix3fv_t)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
		typedef void (GALGLPROC* glUniformMatrix4fv_t)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
		typedef void (GALGLPROC* glValidateProgram_t)(GLuint program);
		typedef void (GALGLPROC* glVertexAttrib1d_t)(GLuint index, GLdouble x);
		typedef void (GALGLPROC* glVertexAttrib1dv_t)(GLuint index, const GLdouble *v);
		typedef void (GALGLPROC* glVertexAttrib1f_t)(GLuint index, GLfloat x);
		typedef void (GALGLPROC* glVertexAttrib1fv_t)(GLuint index, const GLfloat *v);
		typedef void (GALGLPROC* glVertexAttrib1s_t)(GLuint index, GLshort x);
		typedef void (GALGLPROC* glVertexAttrib1sv_t)(GLuint index, const GLshort *v);
		typedef void (GALGLPROC* glVertexAttrib2d_t)(GLuint index, GLdouble x, GLdouble y);
		typedef void (GALGLPROC* glVertexAttrib2dv_t)(GLuint index, const GLdouble *v);
		typedef void (GALGLPROC* glVertexAttrib2f_t)(GLuint index, GLfloat x, GLfloat y);
		typedef void (GALGLPROC* glVertexAttrib2fv_t)(GLuint index, const GLfloat *v);
		typedef void (GALGLPROC* glVertexAttrib2s_t)(GLuint index, GLshort x, GLshort y);
		typedef void (GALGLPROC* glVertexAttrib2sv_t)(GLuint index, const GLshort *v);
		typedef void (GALGLPROC* glVertexAttrib3d_t)(GLuint index, GLdouble x, GLdouble y, GLdouble z);
		typedef void (GALGLPROC* glVertexAttrib3dv_t)(GLuint index, const GLdouble *v);
		typedef void (GALGLPROC* glVertexAttrib3f_t)(GLuint index, GLfloat x, GLfloat y, GLfloat z);
		typedef void (GALGLPROC* glVertexAttrib3fv_t)(GLuint index, const GLfloat *v);
		typedef void (GALGLPROC* glVertexAttrib3s_t)(GLuint index, GLshort x, GLshort y, GLshort z);
		typedef void (GALGLPROC* glVertexAttrib3sv_t)(GLuint index, const GLshort *v);
		typedef void (GALGLPROC* glVertexAttrib4Nbv_t)(GLuint index, const GLbyte *v);
		typedef void (GALGLPROC* glVertexAttrib4Niv_t)(GLuint index, const GLint *v);
		typedef void (GALGLPROC* glVertexAttrib4Nsv_t)(GLuint index, const GLshort *v);
		typedef void (GALGLPROC* glVertexAttrib4Nub_t)(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w);
		typedef void (GALGLPROC* glVertexAttrib4Nubv_t)(GLuint index, const GLubyte *v);
		typedef void (GALGLPROC* glVertexAttrib4Nuiv_t)(GLuint index, const GLuint *v);
		typedef void (GALGLPROC* glVertexAttrib4Nusv_t)(GLuint index, const GLushort *v);
		typedef void (GALGLPROC* glVertexAttrib4bv_t)(GLuint index, const GLbyte *v);
		typedef void (GALGLPROC* glVertexAttrib4d_t)(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
		typedef void (GALGLPROC* glVertexAttrib4dv_t)(GLuint index, const GLdouble *v);
		typedef void (GALGLPROC* glVertexAttrib4f_t)(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
		typedef void (GALGLPROC* glVertexAttrib4fv_t)(GLuint index, const GLfloat *v);
		typedef void (GALGLPROC* glVertexAttrib4iv_t)(GLuint index, const GLint *v);
		typedef void (GALGLPROC* glVertexAttrib4s_t)(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w);
		typedef void (GALGLPROC* glVertexAttrib4sv_t)(GLuint index, const GLshort *v);
		typedef void (GALGLPROC* glVertexAttrib4ubv_t)(GLuint index, const GLubyte *v);
		typedef void (GALGLPROC* glVertexAttrib4uiv_t)(GLuint index, const GLuint *v);
		typedef void (GALGLPROC* glVertexAttrib4usv_t)(GLuint index, const GLushort *v);
		typedef void (GALGLPROC* glVertexAttribPointer_t)(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void *pointer);
		typedef void (GALGLPROC* glUniformMatrix2x3fv_t)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
		typedef void (GALGLPROC* glUniformMatrix3x2fv_t)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
		typedef void (GALGLPROC* glUniformMatrix2x4fv_t)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
		typedef void (GALGLPROC* glUniformMatrix4x2fv_t)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
		typedef void (GALGLPROC* glUniformMatrix3x4fv_t)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
		typedef void (GALGLPROC* glUniformMatrix4x3fv_t)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
		typedef void (GALGLPROC* glColorMaski_t)(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
		typedef void (GALGLPROC* glGetBooleani_v_t)(GLenum target, GLuint index, GLboolean *data);
		typedef void (GALGLPROC* glGetIntegeri_v_t)(GLenum target, GLuint index, GLint *data);
		typedef void (GALGLPROC* glEnablei_t)(GLenum target, GLuint index);
		typedef void (GALGLPROC* glDisablei_t)(GLenum target, GLuint index);
		typedef GLboolean (GALGLPROC* glIsEnabledi_t)(GLenum target, GLuint index);
		typedef void (GALGLPROC* glBeginTransformFeedback_t)(GLenum primitiveMode);
		typedef void (GALGLPROC* glEndTransformFeedback_t)(void);
		typedef void (GALGLPROC* glBindBufferRange_t)(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
		typedef void (GALGLPROC* glBindBufferBase_t)(GLenum target, GLuint index, GLuint buffer);
		typedef void (GALGLPROC* glTransformFeedbackVaryings_t)(GLuint program, GLsizei count, const GLchar *const*varyings, GLenum bufferMode);
		typedef void (GALGLPROC* glGetTransformFeedbackVarying_t)(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name);
		typedef void (GALGLPROC* glClampColor_t)(GLenum target, GLenum clamp);
		typedef void (GALGLPROC* glBeginConditionalRender_t)(GLuint id, GLenum mode);
		typedef void (GALGLPROC* glEndConditionalRender_t)(void);
		typedef void (GALGLPROC* glVertexAttribIPointer_t)(GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer);
		typedef void (GALGLPROC* glGetVertexAttribIiv_t)(GLuint index, GLenum pname, GLint *params);
		typedef void (GALGLPROC* glGetVertexAttribIuiv_t)(GLuint index, GLenum pname, GLuint *params);
		typedef void (GALGLPROC* glVertexAttribI1i_t)(GLuint index, GLint x);
		typedef void (GALGLPROC* glVertexAttribI2i_t)(GLuint index, GLint x, GLint y);
		typedef void (GALGLPROC* glVertexAttribI3i_t)(GLuint index, GLint x, GLint y, GLint z);
		typedef void (GALGLPROC* glVertexAttribI4i_t)(GLuint index, GLint x, GLint y, GLint z, GLint w);
		typedef void (GALGLPROC* glVertexAttribI1ui_t)(GLuint index, GLuint x);
		typedef void (GALGLPROC* glVertexAttribI2ui_t)(GLuint index, GLuint x, GLuint y);
		typedef void (GALGLPROC* glVertexAttribI3ui_t)(GLuint index, GLuint x, GLuint y, GLuint z);
		typedef void (GALGLPROC* glVertexAttribI4ui_t)(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
		typedef void (GALGLPROC* glVertexAttribI1iv_t)(GLuint index, const GLint *v);
		typedef void (GALGLPROC* glVertexAttribI2iv_t)(GLuint index, const GLint *v);
		typedef void (GALGLPROC* glVertexAttribI3iv_t)(GLuint index, const GLint *v);
		typedef void (GALGLPROC* glVertexAttribI4iv_t)(GLuint index, const GLint *v);
		typedef void (GALGLPROC* glVertexAttribI1uiv_t)(GLuint index, const GLuint *v);
		typedef void (GALGLPROC* glVertexAttribI2uiv_t)(GLuint index, const GLuint *v);
		typedef void (GALGLPROC* glVertexAttribI3uiv_t)(GLuint index, const GLuint *v);
		typedef void (GALGLPROC* glVertexAttribI4uiv_t)(GLuint index, const GLuint *v);
		typedef void (GALGLPROC* glVertexAttribI4bv_t)(GLuint index, const GLbyte *v);
		typedef void (GALGLPROC* glVertexAttribI4sv_t)(GLuint index, const GLshort *v);
		typedef void (GALGLPROC* glVertexAttribI4ubv_t)(GLuint index, const GLubyte *v);
		typedef void (GALGLPROC* glVertexAttribI4usv_t)(GLuint index, const GLushort *v);
		typedef void (GALGLPROC* glGetUniformuiv_t)(GLuint program, GLint location, GLuint *params);
		typedef void (GALGLPROC* glBindFragDataLocation_t)(GLuint program, GLuint color, const GLchar *name);
		typedef GLint (GALGLPROC* glGetFragDataLocation_t)(GLuint program, const GLchar *name);
		typedef void (GALGLPROC* glUniform1ui_t)(GLint location, GLuint v0);
		typedef void (GALGLPROC* glUniform2ui_t)(GLint location, GLuint v0, GLuint v1);
		typedef void (GALGLPROC* glUniform3ui_t)(GLint location, GLuint v0, GLuint v1, GLuint v2);
		typedef void (GALGLPROC* glUniform4ui_t)(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
		typedef void (GALGLPROC* glUniform1uiv_t)(GLint location, GLsizei count, const GLuint *value);
		typedef void (GALGLPROC* glUniform2uiv_t)(GLint location, GLsizei count, const GLuint *value);
		typedef void (GALGLPROC* glUniform3uiv_t)(GLint location, GLsizei count, const GLuint *value);
		typedef void (GALGLPROC* glUniform4uiv_t)(GLint location, GLsizei count, const GLuint *value);
		typedef void (GALGLPROC* glTexParameterIiv_t)(GLenum target, GLenum pname, const GLint *params);
		typedef void (GALGLPROC* glTexParameterIuiv_t)(GLenum target, GLenum pname, const GLuint *params);
		typedef void (GALGLPROC* glGetTexParameterIiv_t)(GLenum target, GLenum pname, GLint *params);
		typedef void (GALGLPROC* glGetTexParameterIuiv_t)(GLenum target, GLenum pname, GLuint *params);
		typedef void (GALGLPROC* glClearBufferiv_t)(GLenum buffer, GLint drawbuffer, const GLint *value);
		typedef void (GALGLPROC* glClearBufferuiv_t)(GLenum buffer, GLint drawbuffer, const GLuint *value);
		typedef void (GALGLPROC* glClearBufferfv_t)(GLenum buffer, GLint drawbuffer, const GLfloat *value);
		typedef void (GALGLPROC* glClearBufferfi_t)(GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);
		typedef const GLubyte * (GALGLPROC* glGetStringi_t)(GLenum name, GLuint index);
		typedef GLboolean (GALGLPROC* glIsRenderbuffer_t)(GLuint renderbuffer);
		typedef void (GALGLPROC* glBindRenderbuffer_t)(GLenum target, GLuint renderbuffer);
		typedef void (GALGLPROC* glDeleteRenderbuffers_t)(GLsizei n, const GLuint *renderbuffers);
		typedef void (GALGLPROC* glGenRenderbuffers_t)(GLsizei n, GLuint *renderbuffers);
		typedef void (GALGLPROC* glRenderbufferStorage_t)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
		typedef void (GALGLPROC* glGetRenderbufferParameteriv_t)(GLenum target, GLenum pname, GLint *params);
		typedef GLboolean (GALGLPROC* glIsFramebuffer_t)(GLuint framebuffer);
		typedef void (GALGLPROC* glBindFramebuffer_t)(GLenum target, GLuint framebuffer);
		typedef void (GALGLPROC* glDeleteFramebuffers_t)(GLsizei n, const GLuint *framebuffers);
		typedef void (GALGLPROC* glGenFramebuffers_t)(GLsizei n, GLuint *framebuffers);
		typedef GLenum (GALGLPROC* glCheckFramebufferStatus_t)(GLenum target);
		typedef void (GALGLPROC* glFramebufferTexture1D_t)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
		typedef void (GALGLPROC* glFramebufferTexture2D_t)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
		typedef void (GALGLPROC* glFramebufferTexture3D_t)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
		typedef void (GALGLPROC* glFramebufferRenderbuffer_t)(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
		typedef void (GALGLPROC* glGetFramebufferAttachmentParameteriv_t)(GLenum target, GLenum attachment, GLenum pname, GLint *params);
		typedef void (GALGLPROC* glGenerateMipmap_t)(GLenum target);
		typedef void (GALGLPROC* glBlitFramebuffer_t)(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
		typedef void (GALGLPROC* glRenderbufferStorageMultisample_t)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
		typedef void (GALGLPROC* glFramebufferTextureLayer_t)(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
		typedef void * (GALGLPROC* glMapBufferRange_t)(GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access);
		typedef void (GALGLPROC* glFlushMappedBufferRange_t)(GLenum target, GLintptr offset, GLsizeiptr length);
		typedef void (GALGLPROC* glBindVertexArray_t)(GLuint array);
		typedef void (GALGLPROC* glDeleteVertexArrays_t)(GLsizei n, const GLuint *arrays);
		typedef void (GALGLPROC* glGenVertexArrays_t)(GLsizei n, GLuint *arrays);
		typedef GLboolean (GALGLPROC* glIsVertexArray_t)(GLuint array);
		typedef void (GALGLPROC* glDrawArraysInstanced_t)(GLenum mode, GLint first, GLsizei count, GLsizei instancecount);
		typedef void (GALGLPROC* glDrawElementsInstanced_t)(GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount);
		typedef void (GALGLPROC* glTexBuffer_t)(GLenum target, GLenum internalformat, GLuint buffer);
		typedef void (GALGLPROC* glPrimitiveRestartIndex_t)(GLuint index);
		typedef void (GALGLPROC* glCopyBufferSubData_t)(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
		typedef void (GALGLPROC* glGetUniformIndices_t)(GLuint program, GLsizei uniformCount, const GLchar *const*uniformNames, GLuint *uniformIndices);
		typedef void (GALGLPROC* glGetActiveUniformsiv_t)(GLuint program, GLsizei uniformCount, const GLuint *uniformIndices, GLenum pname, GLint *params);
		typedef void (GALGLPROC* glGetActiveUniformName_t)(GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformName);
		typedef GLuint (GALGLPROC* glGetUniformBlockIndex_t)(GLuint program, const GLchar *uniformBlockName);
		typedef void (GALGLPROC* glGetActiveUniformBlockiv_t)(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint *params);
		typedef void (GALGLPROC* glGetActiveUniformBlockName_t)(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformBlockName);
		typedef void (GALGLPROC* glUniformBlockBinding_t)(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding);
		typedef void (GALGLPROC* glDrawElementsBaseVertex_t)(GLenum mode, GLsizei count, GLenum type, const void *indices, GLint basevertex);
		typedef void (GALGLPROC* glDrawRangeElementsBaseVertex_t)(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices, GLint basevertex);
		typedef void (GALGLPROC* glDrawElementsInstancedBaseVertex_t)(GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex);
		typedef void (GALGLPROC* glMultiDrawElementsBaseVertex_t)(GLenum mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei drawcount, const GLint *basevertex);
		typedef void (GALGLPROC* glProvokingVertex_t)(GLenum mode);
		typedef GLsync (GALGLPROC* glFenceSync_t)(GLenum condition, GLbitfield flags);
		typedef GLboolean (GALGLPROC* glIsSync_t)(GLsync sync);
		typedef void (GALGLPROC* glDeleteSync_t)(GLsync sync);
		typedef GLenum (GALGLPROC* glClientWaitSync_t)(GLsync sync, GLbitfield flags, GLuint64 timeout);
		typedef void (GALGLPROC* glWaitSync_t)(GLsync sync, GLbitfield flags, GLuint64 timeout);
		typedef void (GALGLPROC* glGetInteger64v_t)(GLenum pname, GLint64 *data);
		typedef void (GALGLPROC* glGetSynciv_t)(GLsync sync, GLenum pname, GLsizei count, GLsizei *length, GLint *values);
		typedef void (GALGLPROC* glGetInteger64i_v_t)(GLenum target, GLuint index, GLint64 *data);
		typedef void (GALGLPROC* glGetBufferParameteri64v_t)(GLenum target, GLenum pname, GLint64 *params);
		typedef void (GALGLPROC* glFramebufferTexture_t)(GLenum target, GLenum attachment, GLuint texture, GLint level);
		typedef void (GALGLPROC* glTexImage2DMultisample_t)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
		typedef void (GALGLPROC* glTexImage3DMultisample_t)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
		typedef void (GALGLPROC* glGetMultisamplefv_t)(GLenum pname, GLuint index, GLfloat *val);
		typedef void (GALGLPROC* glSampleMaski_t)(GLuint maskNumber, GLbitfield mask);
		typedef void (GALGLPROC* glBindFragDataLocationIndexed_t)(GLuint program, GLuint colorNumber, GLuint index, const GLchar *name);
		typedef GLint (GALGLPROC* glGetFragDataIndex_t)(GLuint program, const GLchar *name);
		typedef void (GALGLPROC* glGenSamplers_t)(GLsizei count, GLuint *samplers);
		typedef void (GALGLPROC* glDeleteSamplers_t)(GLsizei count, const GLuint *samplers);
		typedef GLboolean (GALGLPROC* glIsSampler_t)(GLuint sampler);
		typedef void (GALGLPROC* glBindSampler_t)(GLuint unit, GLuint sampler);
		typedef void (GALGLPROC* glSamplerParameteri_t)(GLuint sampler, GLenum pname, GLint param);
		typedef void (GALGLPROC* glSamplerParameteriv_t)(GLuint sampler, GLenum pname, const GLint *param);
		typedef void (GALGLPROC* glSamplerParameterf_t)(GLuint sampler, GLenum pname, GLfloat param);
		typedef void (GALGLPROC* glSamplerParameterfv_t)(GLuint sampler, GLenum pname, const GLfloat *param);
		typedef void (GALGLPROC* glSamplerParameterIiv_t)(GLuint sampler, GLenum pname, const GLint *param);
		typedef void (GALGLPROC* glSamplerParameterIuiv_t)(GLuint sampler, GLenum pname, const GLuint *param);
		typedef void (GALGLPROC* glGetSamplerParameteriv_t)(GLuint sampler, GLenum pname, GLint *params);
		typedef void (GALGLPROC* glGetSamplerParameterIiv_t)(GLuint sampler, GLenum pname, GLint *params);
		typedef void (GALGLPROC* glGetSamplerParameterfv_t)(GLuint sampler, GLenum pname, GLfloat *params);
		typedef void (GALGLPROC* glGetSamplerParameterIuiv_t)(GLuint sampler, GLenum pname, GLuint *params);
		typedef void (GALGLPROC* glQueryCounter_t)(GLuint id, GLenum target);
		typedef void (GALGLPROC* glGetQueryObjecti64v_t)(GLuint id, GLenum pname, GLint64 *params);
		typedef void (GALGLPROC* glGetQueryObjectui64v_t)(GLuint id, GLenum pname, GLuint64 *params);
		typedef void (GALGLPROC* glVertexAttribDivisor_t)(GLuint index, GLuint divisor);
		typedef void (GALGLPROC* glVertexAttribP1ui_t)(GLuint index, GLenum type, GLboolean normalized, GLuint value);
		typedef void (GALGLPROC* glVertexAttribP1uiv_t)(GLuint index, GLenum type, GLboolean normalized, const GLuint *value);
		typedef void (GALGLPROC* glVertexAttribP2ui_t)(GLuint index, GLenum type, GLboolean normalized, GLuint value);
		typedef void (GALGLPROC* glVertexAttribP2uiv_t)(GLuint index, GLenum type, GLboolean normalized, const GLuint *value);
		typedef void (GALGLPROC* glVertexAttribP3ui_t)(GLuint index, GLenum type, GLboolean normalized, GLuint value);
		typedef void (GALGLPROC* glVertexAttribP3uiv_t)(GLuint index, GLenum type, GLboolean normalized, const GLuint *value);
		typedef void (GALGLPROC* glVertexAttribP4ui_t)(GLuint index, GLenum type, GLboolean normalized, GLuint value);
		typedef void (GALGLPROC* glVertexAttribP4uiv_t)(GLuint index, GLenum type, GLboolean normalized, const GLuint *value);
		typedef void (GALGLPROC* glMinSampleShading_t)(GLfloat value);
		typedef void (GALGLPROC* glBlendEquationi_t)(GLuint buf, GLenum mode);
		typedef void (GALGLPROC* glBlendEquationSeparatei_t)(GLuint buf, GLenum modeRGB, GLenum modeAlpha);
		typedef void (GALGLPROC* glBlendFunci_t)(GLuint buf, GLenum src, GLenum dst);
		typedef void (GALGLPROC* glBlendFuncSeparatei_t)(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
		typedef void (GALGLPROC* glDrawArraysIndirect_t)(GLenum mode, const void *indirect);
		typedef void (GALGLPROC* glDrawElementsIndirect_t)(GLenum mode, GLenum type, const void *indirect);
		typedef void (GALGLPROC* glUniform1d_t)(GLint location, GLdouble x);
		typedef void (GALGLPROC* glUniform2d_t)(GLint location, GLdouble x, GLdouble y);
		typedef void (GALGLPROC* glUniform3d_t)(GLint location, GLdouble x, GLdouble y, GLdouble z);
		typedef void (GALGLPROC* glUniform4d_t)(GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
		typedef void (GALGLPROC* glUniform1dv_t)(GLint location, GLsizei count, const GLdouble *value);
		typedef void (GALGLPROC* glUniform2dv_t)(GLint location, GLsizei count, const GLdouble *value);
		typedef void (GALGLPROC* glUniform3dv_t)(GLint location, GLsizei count, const GLdouble *value);
		typedef void (GALGLPROC* glUniform4dv_t)(GLint location, GLsizei count, const GLdouble *value);
		typedef void (GALGLPROC* glUniformMatrix2dv_t)(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
		typedef void (GALGLPROC* glUniformMatrix3dv_t)(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
		typedef void (GALGLPROC* glUniformMatrix4dv_t)(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
		typedef void (GALGLPROC* glUniformMatrix2x3dv_t)(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
		typedef void (GALGLPROC* glUniformMatrix2x4dv_t)(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
		typedef void (GALGLPROC* glUniformMatrix3x2dv_t)(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
		typedef void (GALGLPROC* glUniformMatrix3x4dv_t)(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
		typedef void (GALGLPROC* glUniformMatrix4x2dv_t)(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
		typedef void (GALGLPROC* glUniformMatrix4x3dv_t)(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
		typedef void (GALGLPROC* glGetUniformdv_t)(GLuint program, GLint location, GLdouble *params);
		typedef GLint (GALGLPROC* glGetSubroutineUniformLocation_t)(GLuint program, GLenum shadertype, const GLchar *name);
		typedef GLuint (GALGLPROC* glGetSubroutineIndex_t)(GLuint program, GLenum shadertype, const GLchar *name);
		typedef void (GALGLPROC* glGetActiveSubroutineUniformiv_t)(GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint *values);
		typedef void (GALGLPROC* glGetActiveSubroutineUniformName_t)(GLuint program, GLenum shadertype, GLuint index, GLsizei bufSize, GLsizei *length, GLchar *name);
		typedef void (GALGLPROC* glGetActiveSubroutineName_t)(GLuint program, GLenum shadertype, GLuint index, GLsizei bufSize, GLsizei *length, GLchar *name);
		typedef void (GALGLPROC* glUniformSubroutinesuiv_t)(GLenum shadertype, GLsizei count, const GLuint *indices);
		typedef void (GALGLPROC* glGetUniformSubroutineuiv_t)(GLenum shadertype, GLint location, GLuint *params);
		typedef void (GALGLPROC* glGetProgramStageiv_t)(GLuint program, GLenum shadertype, GLenum pname, GLint *values);
		typedef void (GALGLPROC* glPatchParameteri_t)(GLenum pname, GLint value);
		typedef void (GALGLPROC* glPatchParameterfv_t)(GLenum pname, const GLfloat *values);
		typedef void (GALGLPROC* glBindTransformFeedback_t)(GLenum target, GLuint id);
		typedef void (GALGLPROC* glDeleteTransformFeedbacks_t)(GLsizei n, const GLuint *ids);
		typedef void (GALGLPROC* glGenTransformFeedbacks_t)(GLsizei n, GLuint *ids);
		typedef GLboolean (GALGLPROC* glIsTransformFeedback_t)(GLuint id);
		typedef void (GALGLPROC* glPauseTransformFeedback_t)(void);
		typedef void (GALGLPROC* glResumeTransformFeedback_t)(void);
		typedef void (GALGLPROC* glDrawTransformFeedback_t)(GLenum mode, GLuint id);
		typedef void (GALGLPROC* glDrawTransformFeedbackStream_t)(GLenum mode, GLuint id, GLuint stream);
		typedef void (GALGLPROC* glBeginQueryIndexed_t)(GLenum target, GLuint index, GLuint id);
		typedef void (GALGLPROC* glEndQueryIndexed_t)(GLenum target, GLuint index);
		typedef void (GALGLPROC* glGetQueryIndexediv_t)(GLenum target, GLuint index, GLenum pname, GLint *params);
		typedef void (GALGLPROC* glReleaseShaderCompiler_t)(void);
		typedef void (GALGLPROC* glShaderBinary_t)(GLsizei count, const GLuint *shaders, GLenum binaryFormat, const void *binary, GLsizei length);
		typedef void (GALGLPROC* glGetShaderPrecisionFormat_t)(GLenum shadertype, GLenum precisiontype, GLint *range, GLint *precision);
		typedef void (GALGLPROC* glDepthRangef_t)(GLfloat n, GLfloat f);
		typedef void (GALGLPROC* glClearDepthf_t)(GLfloat d);
		typedef void (GALGLPROC* glGetProgramBinary_t)(GLuint program, GLsizei bufSize, GLsizei *length, GLenum *binaryFormat, void *binary);
		typedef void (GALGLPROC* glProgramBinary_t)(GLuint program, GLenum binaryFormat, const void *binary, GLsizei length);
		typedef void (GALGLPROC* glProgramParameteri_t)(GLuint program, GLenum pname, GLint value);
		typedef void (GALGLPROC* glUseProgramStages_t)(GLuint pipeline, GLbitfield stages, GLuint program);
		typedef void (GALGLPROC* glActiveShaderProgram_t)(GLuint pipeline, GLuint program);
		typedef GLuint (GALGLPROC* glCreateShaderProgramv_t)(GLenum type, GLsizei count, const GLchar *const*strings);
		typedef void (GALGLPROC* glBindProgramPipeline_t)(GLuint pipeline);
		typedef void (GALGLPROC* glDeleteProgramPipelines_t)(GLsizei n, const GLuint *pipelines);
		typedef void (GALGLPROC* glGenProgramPipelines_t)(GLsizei n, GLuint *pipelines);
		typedef GLboolean (GALGLPROC* glIsProgramPipeline_t)(GLuint pipeline);
		typedef void (GALGLPROC* glGetProgramPipelineiv_t)(GLuint pipeline, GLenum pname, GLint *params);
		typedef void (GALGLPROC* glProgramUniform1i_t)(GLuint program, GLint location, GLint v0);
		typedef void (GALGLPROC* glProgramUniform1iv_t)(GLuint program, GLint location, GLsizei count, const GLint *value);
		typedef void (GALGLPROC* glProgramUniform1f_t)(GLuint program, GLint location, GLfloat v0);
		typedef void (GALGLPROC* glProgramUniform1fv_t)(GLuint program, GLint location, GLsizei count, const GLfloat *value);
		typedef void (GALGLPROC* glProgramUniform1d_t)(GLuint program, GLint location, GLdouble v0);
		typedef void (GALGLPROC* glProgramUniform1dv_t)(GLuint program, GLint location, GLsizei count, const GLdouble *value);
		typedef void (GALGLPROC* glProgramUniform1ui_t)(GLuint program, GLint location, GLuint v0);
		typedef void (GALGLPROC* glProgramUniform1uiv_t)(GLuint program, GLint location, GLsizei count, const GLuint *value);
		typedef void (GALGLPROC* glProgramUniform2i_t)(GLuint program, GLint location, GLint v0, GLint v1);
		typedef void (GALGLPROC* glProgramUniform2iv_t)(GLuint program, GLint location, GLsizei count, const GLint *value);
		typedef void (GALGLPROC* glProgramUniform2f_t)(GLuint program, GLint location, GLfloat v0, GLfloat v1);
		typedef void (GALGLPROC* glProgramUniform2fv_t)(GLuint program, GLint location, GLsizei count, const GLfloat *value);
		typedef void (GALGLPROC* glProgramUniform2d_t)(GLuint program, GLint location, GLdouble v0, GLdouble v1);
		typedef void (GALGLPROC* glProgramUniform2dv_t)(GLuint program, GLint location, GLsizei count, const GLdouble *value);
		typedef void (GALGLPROC* glProgramUniform2ui_t)(GLuint program, GLint location, GLuint v0, GLuint v1);
		typedef void (GALGLPROC* glProgramUniform2uiv_t)(GLuint program, GLint location, GLsizei count, const GLuint *value);
		typedef void (GALGLPROC* glProgramUniform3i_t)(GLuint program, GLint location, GLint v0, GLint v1, GLint v2);
		typedef void (GALGLPROC* glProgramUniform3iv_t)(GLuint program, GLint location, GLsizei count, const GLint *value);
		typedef void (GALGLPROC* glProgramUniform3f_t)(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
		typedef void (GALGLPROC* glProgramUniform3fv_t)(GLuint program, GLint location, GLsizei count, const GLfloat *value);
		typedef void (GALGLPROC* glProgramUniform3d_t)(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2);
		typedef void (GALGLPROC* glProgramUniform3dv_t)(GLuint program, GLint location, GLsizei count, const GLdouble *value);
		typedef void (GALGLPROC* glProgramUniform3ui_t)(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2);
		typedef void (GALGLPROC* glProgramUniform3uiv_t)(GLuint program, GLint location, GLsizei count, const GLuint *value);
		typedef void (GALGLPROC* glProgramUniform4i_t)(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
		typedef void (GALGLPROC* glProgramUniform4iv_t)(GLuint program, GLint location, GLsizei count, const GLint *value);
		typedef void (GALGLPROC* glProgramUniform4f_t)(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
		typedef void (GALGLPROC* glProgramUniform4fv_t)(GLuint program, GLint location, GLsizei count, const GLfloat *value);
		typedef void (GALGLPROC* glProgramUniform4d_t)(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3);
		typedef void (GALGLPROC* glProgramUniform4dv_t)(GLuint program, GLint location, GLsizei count, const GLdouble *value);
		typedef void (GALGLPROC* glProgramUniform4ui_t)(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
		typedef void (GALGLPROC* glProgramUniform4uiv_t)(GLuint program, GLint location, GLsizei count, const GLuint *value);
		typedef void (GALGLPROC* glProgramUniformMatrix2fv_t)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
		typedef void (GALGLPROC* glProgramUniformMatrix3fv_t)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
		typedef void (GALGLPROC* glProgramUniformMatrix4fv_t)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
		typedef void (GALGLPROC* glProgramUniformMatrix2dv_t)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
		typedef void (GALGLPROC* glProgramUniformMatrix3dv_t)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
		typedef void (GALGLPROC* glProgramUniformMatrix4dv_t)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
		typedef void (GALGLPROC* glProgramUniformMatrix2x3fv_t)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
		typedef void (GALGLPROC* glProgramUniformMatrix3x2fv_t)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
		typedef void (GALGLPROC* glProgramUniformMatrix2x4fv_t)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
		typedef void (GALGLPROC* glProgramUniformMatrix4x2fv_t)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
		typedef void (GALGLPROC* glProgramUniformMatrix3x4fv_t)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
		typedef void (GALGLPROC* glProgramUniformMatrix4x3fv_t)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
		typedef void (GALGLPROC* glProgramUniformMatrix2x3dv_t)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
		typedef void (GALGLPROC* glProgramUniformMatrix3x2dv_t)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
		typedef void (GALGLPROC* glProgramUniformMatrix2x4dv_t)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
		typedef void (GALGLPROC* glProgramUniformMatrix4x2dv_t)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
		typedef void (GALGLPROC* glProgramUniformMatrix3x4dv_t)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
		typedef void (GALGLPROC* glProgramUniformMatrix4x3dv_t)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
		typedef void (GALGLPROC* glValidateProgramPipeline_t)(GLuint pipeline);
		typedef void (GALGLPROC* glGetProgramPipelineInfoLog_t)(GLuint pipeline, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
		typedef void (GALGLPROC* glVertexAttribL1d_t)(GLuint index, GLdouble x);
		typedef void (GALGLPROC* glVertexAttribL2d_t)(GLuint index, GLdouble x, GLdouble y);
		typedef void (GALGLPROC* glVertexAttribL3d_t)(GLuint index, GLdouble x, GLdouble y, GLdouble z);
		typedef void (GALGLPROC* glVertexAttribL4d_t)(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
		typedef void (GALGLPROC* glVertexAttribL1dv_t)(GLuint index, const GLdouble *v);
		typedef void (GALGLPROC* glVertexAttribL2dv_t)(GLuint index, const GLdouble *v);
		typedef void (GALGLPROC* glVertexAttribL3dv_t)(GLuint index, const GLdouble *v);
		typedef void (GALGLPROC* glVertexAttribL4dv_t)(GLuint index, const GLdouble *v);
		typedef void (GALGLPROC* glVertexAttribLPointer_t)(GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer);
		typedef void (GALGLPROC* glGetVertexAttribLdv_t)(GLuint index, GLenum pname, GLdouble *params);
		typedef void (GALGLPROC* glViewportArrayv_t)(GLuint first, GLsizei count, const GLfloat *v);
		typedef void (GALGLPROC* glViewportIndexedf_t)(GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h);
		typedef void (GALGLPROC* glViewportIndexedfv_t)(GLuint index, const GLfloat *v);
		typedef void (GALGLPROC* glScissorArrayv_t)(GLuint first, GLsizei count, const GLint *v);
		typedef void (GALGLPROC* glScissorIndexed_t)(GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height);
		typedef void (GALGLPROC* glScissorIndexedv_t)(GLuint index, const GLint *v);
		typedef void (GALGLPROC* glDepthRangeArrayv_t)(GLuint first, GLsizei count, const GLdouble *v);
		typedef void (GALGLPROC* glDepthRangeIndexed_t)(GLuint index, GLdouble n, GLdouble f);
		typedef void (GALGLPROC* glGetFloati_v_t)(GLenum target, GLuint index, GLfloat *data);
		typedef void (GALGLPROC* glGetDoublei_v_t)(GLenum target, GLuint index, GLdouble *data);
		typedef void (GALGLPROC* glDrawArraysInstancedBaseInstance_t)(GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance);
		typedef void (GALGLPROC* glDrawElementsInstancedBaseInstance_t)(GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLuint baseinstance);
		typedef void (GALGLPROC* glDrawElementsInstancedBaseVertexBaseInstance_t)(GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance);
		typedef void (GALGLPROC* glGetInternalformativ_t)(GLenum target, GLenum internalformat, GLenum pname, GLsizei count, GLint *params);
		typedef void (GALGLPROC* glGetActiveAtomicCounterBufferiv_t)(GLuint program, GLuint bufferIndex, GLenum pname, GLint *params);
		typedef void (GALGLPROC* glBindImageTexture_t)(GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format);
		typedef void (GALGLPROC* glMemoryBarrier_t)(GLbitfield barriers);
		typedef void (GALGLPROC* glTexStorage1D_t)(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);
		typedef void (GALGLPROC* glTexStorage2D_t)(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
		typedef void (GALGLPROC* glTexStorage3D_t)(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
		typedef void (GALGLPROC* glDrawTransformFeedbackInstanced_t)(GLenum mode, GLuint id, GLsizei instancecount);
		typedef void (GALGLPROC* glDrawTransformFeedbackStreamInstanced_t)(GLenum mode, GLuint id, GLuint stream, GLsizei instancecount);
		typedef void (GALGLPROC* glClearBufferData_t)(GLenum target, GLenum internalformat, GLenum format, GLenum type, const void *data);
		typedef void (GALGLPROC* glClearBufferSubData_t)(GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data);
		typedef void (GALGLPROC* glDispatchCompute_t)(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z);
		typedef void (GALGLPROC* glDispatchComputeIndirect_t)(GLintptr indirect);
		typedef void (GALGLPROC* glCopyImageSubData_t)(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);
		typedef void (GALGLPROC* glFramebufferParameteri_t)(GLenum target, GLenum pname, GLint param);
		typedef void (GALGLPROC* glGetFramebufferParameteriv_t)(GLenum target, GLenum pname, GLint *params);
		typedef void (GALGLPROC* glGetInternalformati64v_t)(GLenum target, GLenum internalformat, GLenum pname, GLsizei count, GLint64 *params);
		typedef void (GALGLPROC* glInvalidateTexSubImage_t)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth);
		typedef void (GALGLPROC* glInvalidateTexImage_t)(GLuint texture, GLint level);
		typedef void (GALGLPROC* glInvalidateBufferSubData_t)(GLuint buffer, GLintptr offset, GLsizeiptr length);
		typedef void (GALGLPROC* glInvalidateBufferData_t)(GLuint buffer);
		typedef void (GALGLPROC* glInvalidateFramebuffer_t)(GLenum target, GLsizei numAttachments, const GLenum *attachments);
		typedef void (GALGLPROC* glInvalidateSubFramebuffer_t)(GLenum target, GLsizei numAttachments, const GLenum *attachments, GLint x, GLint y, GLsizei width, GLsizei height);
		typedef void (GALGLPROC* glMultiDrawArraysIndirect_t)(GLenum mode, const void *indirect, GLsizei drawcount, GLsizei stride);
		typedef void (GALGLPROC* glMultiDrawElementsIndirect_t)(GLenum mode, GLenum type, const void *indirect, GLsizei drawcount, GLsizei stride);
		typedef void (GALGLPROC* glGetProgramInterfaceiv_t)(GLuint program, GLenum programInterface, GLenum pname, GLint *params);
		typedef GLuint (GALGLPROC* glGetProgramResourceIndex_t)(GLuint program, GLenum programInterface, const GLchar *name);
		typedef void (GALGLPROC* glGetProgramResourceName_t)(GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei *length, GLchar *name);
		typedef void (GALGLPROC* glGetProgramResourceiv_t)(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum *props, GLsizei count, GLsizei *length, GLint *params);
		typedef GLint (GALGLPROC* glGetProgramResourceLocation_t)(GLuint program, GLenum programInterface, const GLchar *name);
		typedef GLint (GALGLPROC* glGetProgramResourceLocationIndex_t)(GLuint program, GLenum programInterface, const GLchar *name);
		typedef void (GALGLPROC* glShaderStorageBlockBinding_t)(GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding);
		typedef void (GALGLPROC* glTexBufferRange_t)(GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
		typedef void (GALGLPROC* glTexStorage2DMultisample_t)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
		typedef void (GALGLPROC* glTexStorage3DMultisample_t)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
		typedef void (GALGLPROC* glTextureView_t)(GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers);
		typedef void (GALGLPROC* glBindVertexBuffer_t)(GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
		typedef void (GALGLPROC* glVertexAttribFormat_t)(GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
		typedef void (GALGLPROC* glVertexAttribIFormat_t)(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
		typedef void (GALGLPROC* glVertexAttribLFormat_t)(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
		typedef void (GALGLPROC* glVertexAttribBinding_t)(GLuint attribindex, GLuint bindingindex);
		typedef void (GALGLPROC* glVertexBindingDivisor_t)(GLuint bindingindex, GLuint divisor);
		typedef void (GALGLPROC* glDebugMessageControl_t)(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled);
		typedef void (GALGLPROC* glDebugMessageInsert_t)(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar *buf);
		typedef void (GALGLPROC* glDebugMessageCallback_t)(GLDEBUGPROC callback, const void *userParam);
		typedef GLuint (GALGLPROC* glGetDebugMessageLog_t)(GLuint count, GLsizei bufSize, GLenum *sources, GLenum *types, GLuint *ids, GLenum *severities, GLsizei *lengths, GLchar *messageLog);
		typedef void (GALGLPROC* glPushDebugGroup_t)(GLenum source, GLuint id, GLsizei length, const GLchar *message);
		typedef void (GALGLPROC* glPopDebugGroup_t)(void);
		typedef void (GALGLPROC* glObjectLabel_t)(GLenum identifier, GLuint name, GLsizei length, const GLchar *label);
		typedef void (GALGLPROC* glGetObjectLabel_t)(GLenum identifier, GLuint name, GLsizei bufSize, GLsizei *length, GLchar *label);
		typedef void (GALGLPROC* glObjectPtrLabel_t)(const void *ptr, GLsizei length, const GLchar *label);
		typedef void (GALGLPROC* glGetObjectPtrLabel_t)(const void *ptr, GLsizei bufSize, GLsizei *length, GLchar *label);
		typedef void (GALGLPROC* glBufferStorage_t)(GLenum target, GLsizeiptr size, const void *data, GLbitfield flags);
		typedef void (GALGLPROC* glClearTexImage_t)(GLuint texture, GLint level, GLenum format, GLenum type, const void *data);
		typedef void (GALGLPROC* glClearTexSubImage_t)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *data);
		typedef void (GALGLPROC* glBindBuffersBase_t)(GLenum target, GLuint first, GLsizei count, const GLuint *buffers);
		typedef void (GALGLPROC* glBindBuffersRange_t)(GLenum target, GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizeiptr *sizes);
		typedef void (GALGLPROC* glBindTextures_t)(GLuint first, GLsizei count, const GLuint *textures);
		typedef void (GALGLPROC* glBindSamplers_t)(GLuint first, GLsizei count, const GLuint *samplers);
		typedef void (GALGLPROC* glBindImageTextures_t)(GLuint first, GLsizei count, const GLuint *textures);
		typedef void (GALGLPROC* glBindVertexBuffers_t)(GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizei *strides);
		typedef void (GALGLPROC* glClipControl_t)(GLenum origin, GLenum depth);
		typedef void (GALGLPROC* glCreateTransformFeedbacks_t)(GLsizei n, GLuint *ids);
		typedef void (GALGLPROC* glTransformFeedbackBufferBase_t)(GLuint xfb, GLuint index, GLuint buffer);
		typedef void (GALGLPROC* glTransformFeedbackBufferRange_t)(GLuint xfb, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
		typedef void (GALGLPROC* glGetTransformFeedbackiv_t)(GLuint xfb, GLenum pname, GLint *param);
		typedef void (GALGLPROC* glGetTransformFeedbacki_v_t)(GLuint xfb, GLenum pname, GLuint index, GLint *param);
		typedef void (GALGLPROC* glGetTransformFeedbacki64_v_t)(GLuint xfb, GLenum pname, GLuint index, GLint64 *param);
		typedef void (GALGLPROC* glCreateBuffers_t)(GLsizei n, GLuint *buffers);
		typedef void (GALGLPROC* glNamedBufferStorage_t)(GLuint buffer, GLsizeiptr size, const void *data, GLbitfield flags);
		typedef void (GALGLPROC* glNamedBufferData_t)(GLuint buffer, GLsizeiptr size, const void *data, GLenum usage);
		typedef void (GALGLPROC* glNamedBufferSubData_t)(GLuint buffer, GLintptr offset, GLsizeiptr size, const void *data);
		typedef void (GALGLPROC* glCopyNamedBufferSubData_t)(GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
		typedef void (GALGLPROC* glClearNamedBufferData_t)(GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void *data);
		typedef void (GALGLPROC* glClearNamedBufferSubData_t)(GLuint buffer, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data);
		typedef void * (GALGLPROC* glMapNamedBuffer_t)(GLuint buffer, GLenum access);
		typedef void * (GALGLPROC* glMapNamedBufferRange_t)(GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access);
		typedef GLboolean (GALGLPROC* glUnmapNamedBuffer_t)(GLuint buffer);
		typedef void (GALGLPROC* glFlushMappedNamedBufferRange_t)(GLuint buffer, GLintptr offset, GLsizeiptr length);
		typedef void (GALGLPROC* glGetNamedBufferParameteriv_t)(GLuint buffer, GLenum pname, GLint *params);
		typedef void (GALGLPROC* glGetNamedBufferParameteri64v_t)(GLuint buffer, GLenum pname, GLint64 *params);
		typedef void (GALGLPROC* glGetNamedBufferPointerv_t)(GLuint buffer, GLenum pname, void **params);
		typedef void (GALGLPROC* glGetNamedBufferSubData_t)(GLuint buffer, GLintptr offset, GLsizeiptr size, void *data);
		typedef void (GALGLPROC* glCreateFramebuffers_t)(GLsizei n, GLuint *framebuffers);
		typedef void (GALGLPROC* glNamedFramebufferRenderbuffer_t)(GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
		typedef void (GALGLPROC* glNamedFramebufferParameteri_t)(GLuint framebuffer, GLenum pname, GLint param);
		typedef void (GALGLPROC* glNamedFramebufferTexture_t)(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level);
		typedef void (GALGLPROC* glNamedFramebufferTextureLayer_t)(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer);
		typedef void (GALGLPROC* glNamedFramebufferDrawBuffer_t)(GLuint framebuffer, GLenum buf);
		typedef void (GALGLPROC* glNamedFramebufferDrawBuffers_t)(GLuint framebuffer, GLsizei n, const GLenum *bufs);
		typedef void (GALGLPROC* glNamedFramebufferReadBuffer_t)(GLuint framebuffer, GLenum src);
		typedef void (GALGLPROC* glInvalidateNamedFramebufferData_t)(GLuint framebuffer, GLsizei numAttachments, const GLenum *attachments);
		typedef void (GALGLPROC* glInvalidateNamedFramebufferSubData_t)(GLuint framebuffer, GLsizei numAttachments, const GLenum *attachments, GLint x, GLint y, GLsizei width, GLsizei height);
		typedef void (GALGLPROC* glClearNamedFramebufferiv_t)(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLint *value);
		typedef void (GALGLPROC* glClearNamedFramebufferuiv_t)(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLuint *value);
		typedef void (GALGLPROC* glClearNamedFramebufferfv_t)(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLfloat *value);
		typedef void (GALGLPROC* glClearNamedFramebufferfi_t)(GLuint framebuffer, GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);
		typedef void (GALGLPROC* glBlitNamedFramebuffer_t)(GLuint readFramebuffer, GLuint drawFramebuffer, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
		typedef GLenum (GALGLPROC* glCheckNamedFramebufferStatus_t)(GLuint framebuffer, GLenum target);
		typedef void (GALGLPROC* glGetNamedFramebufferParameteriv_t)(GLuint framebuffer, GLenum pname, GLint *param);
		typedef void (GALGLPROC* glGetNamedFramebufferAttachmentParameteriv_t)(GLuint framebuffer, GLenum attachment, GLenum pname, GLint *params);
		typedef void (GALGLPROC* glCreateRenderbuffers_t)(GLsizei n, GLuint *renderbuffers);
		typedef void (GALGLPROC* glNamedRenderbufferStorage_t)(GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height);
		typedef void (GALGLPROC* glNamedRenderbufferStorageMultisample_t)(GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
		typedef void (GALGLPROC* glGetNamedRenderbufferParameteriv_t)(GLuint renderbuffer, GLenum pname, GLint *params);
		typedef void (GALGLPROC* glCreateTextures_t)(GLenum target, GLsizei n, GLuint *textures);
		typedef void (GALGLPROC* glTextureBuffer_t)(GLuint texture, GLenum internalformat, GLuint buffer);
		typedef void (GALGLPROC* glTextureBufferRange_t)(GLuint texture, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
		typedef void (GALGLPROC* glTextureStorage1D_t)(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width);
		typedef void (GALGLPROC* glTextureStorage2D_t)(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
		typedef void (GALGLPROC* glTextureStorage3D_t)(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
		typedef void (GALGLPROC* glTextureStorage2DMultisample_t)(GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
		typedef void (GALGLPROC* glTextureStorage3DMultisample_t)(GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
		typedef void (GALGLPROC* glTextureSubImage1D_t)(GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels);
		typedef void (GALGLPROC* glTextureSubImage2D_t)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels);
		typedef void (GALGLPROC* glTextureSubImage3D_t)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels);
		typedef void (GALGLPROC* glCompressedTextureSubImage1D_t)(GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *data);
		typedef void (GALGLPROC* glCompressedTextureSubImage2D_t)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data);
		typedef void (GALGLPROC* glCompressedTextureSubImage3D_t)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data);
		typedef void (GALGLPROC* glCopyTextureSubImage1D_t)(GLuint texture, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
		typedef void (GALGLPROC* glCopyTextureSubImage2D_t)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
		typedef void (GALGLPROC* glCopyTextureSubImage3D_t)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
		typedef void (GALGLPROC* glTextureParameterf_t)(GLuint texture, GLenum pname, GLfloat param);
		typedef void (GALGLPROC* glTextureParameterfv_t)(GLuint texture, GLenum pname, const GLfloat *param);
		typedef void (GALGLPROC* glTextureParameteri_t)(GLuint texture, GLenum pname, GLint param);
		typedef void (GALGLPROC* glTextureParameterIiv_t)(GLuint texture, GLenum pname, const GLint *params);
		typedef void (GALGLPROC* glTextureParameterIuiv_t)(GLuint texture, GLenum pname, const GLuint *params);
		typedef void (GALGLPROC* glTextureParameteriv_t)(GLuint texture, GLenum pname, const GLint *param);
		typedef void (GALGLPROC* glGenerateTextureMipmap_t)(GLuint texture);
		typedef void (GALGLPROC* glBindTextureUnit_t)(GLuint unit, GLuint texture);
		typedef void (GALGLPROC* glGetTextureImage_t)(GLuint texture, GLint level, GLenum format, GLenum type, GLsizei bufSize, void *pixels);
		typedef void (GALGLPROC* glGetCompressedTextureImage_t)(GLuint texture, GLint level, GLsizei bufSize, void *pixels);
		typedef void (GALGLPROC* glGetTextureLevelParameterfv_t)(GLuint texture, GLint level, GLenum pname, GLfloat *params);
		typedef void (GALGLPROC* glGetTextureLevelParameteriv_t)(GLuint texture, GLint level, GLenum pname, GLint *params);
		typedef void (GALGLPROC* glGetTextureParameterfv_t)(GLuint texture, GLenum pname, GLfloat *params);
		typedef void (GALGLPROC* glGetTextureParameterIiv_t)(GLuint texture, GLenum pname, GLint *params);
		typedef void (GALGLPROC* glGetTextureParameterIuiv_t)(GLuint texture, GLenum pname, GLuint *params);
		typedef void (GALGLPROC* glGetTextureParameteriv_t)(GLuint texture, GLenum pname, GLint *params);
		typedef void (GALGLPROC* glCreateVertexArrays_t)(GLsizei n, GLuint *arrays);
		typedef void (GALGLPROC* glDisableVertexArrayAttrib_t)(GLuint vaobj, GLuint index);
		typedef void (GALGLPROC* glEnableVertexArrayAttrib_t)(GLuint vaobj, GLuint index);
		typedef void (GALGLPROC* glVertexArrayElementBuffer_t)(GLuint vaobj, GLuint buffer);
		typedef void (GALGLPROC* glVertexArrayVertexBuffer_t)(GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
		typedef void (GALGLPROC* glVertexArrayVertexBuffers_t)(GLuint vaobj, GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizei *strides);
		typedef void (GALGLPROC* glVertexArrayAttribBinding_t)(GLuint vaobj, GLuint attribindex, GLuint bindingindex);
		typedef void (GALGLPROC* glVertexArrayAttribFormat_t)(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
		typedef void (GALGLPROC* glVertexArrayAttribIFormat_t)(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
		typedef void (GALGLPROC* glVertexArrayAttribLFormat_t)(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
		typedef void (GALGLPROC* glVertexArrayBindingDivisor_t)(GLuint vaobj, GLuint bindingindex, GLuint divisor);
		typedef void (GALGLPROC* glGetVertexArrayiv_t)(GLuint vaobj, GLenum pname, GLint *param);
		typedef void (GALGLPROC* glGetVertexArrayIndexediv_t)(GLuint vaobj, GLuint index, GLenum pname, GLint *param);
		typedef void (GALGLPROC* glGetVertexArrayIndexed64iv_t)(GLuint vaobj, GLuint index, GLenum pname, GLint64 *param);
		typedef void (GALGLPROC* glCreateSamplers_t)(GLsizei n, GLuint *samplers);
		typedef void (GALGLPROC* glCreateProgramPipelines_t)(GLsizei n, GLuint *pipelines);
		typedef void (GALGLPROC* glCreateQueries_t)(GLenum target, GLsizei n, GLuint *ids);
		typedef void (GALGLPROC* glGetQueryBufferObjecti64v_t)(GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
		typedef void (GALGLPROC* glGetQueryBufferObjectiv_t)(GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
		typedef void (GALGLPROC* glGetQueryBufferObjectui64v_t)(GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
		typedef void (GALGLPROC* glGetQueryBufferObjectuiv_t)(GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
		typedef void (GALGLPROC* glMemoryBarrierByRegion_t)(GLbitfield barriers);
		typedef void (GALGLPROC* glGetTextureSubImage_t)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLsizei bufSize, void *pixels);
		typedef void (GALGLPROC* glGetCompressedTextureSubImage_t)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei bufSize, void *pixels);
		typedef GLenum (GALGLPROC* glGetGraphicsResetStatus_t)(void);
		typedef void (GALGLPROC* glGetnCompressedTexImage_t)(GLenum target, GLint lod, GLsizei bufSize, void *pixels);
		typedef void (GALGLPROC* glGetnTexImage_t)(GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void *pixels);
		typedef void (GALGLPROC* glGetnUniformdv_t)(GLuint program, GLint location, GLsizei bufSize, GLdouble *params);
		typedef void (GALGLPROC* glGetnUniformfv_t)(GLuint program, GLint location, GLsizei bufSize, GLfloat *params);
		typedef void (GALGLPROC* glGetnUniformiv_t)(GLuint program, GLint location, GLsizei bufSize, GLint *params);
		typedef void (GALGLPROC* glGetnUniformuiv_t)(GLuint program, GLint location, GLsizei bufSize, GLuint *params);
		typedef void (GALGLPROC* glReadnPixels_t)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void *data);
		typedef void (GALGLPROC* glTextureBarrier_t)(void);
		typedef void (GALGLPROC* glSpecializeShader_t)(GLuint shader, const GLchar *pEntryPoint, GLuint numSpecializationConstants, const GLuint *pConstantIndex, const GLuint *pConstantValue);
		typedef void (GALGLPROC* glMultiDrawArraysIndirectCount_t)(GLenum mode, const void *indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
		typedef void (GALGLPROC* glMultiDrawElementsIndirectCount_t)(GLenum mode, GLenum type, const void *indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
		typedef void (GALGLPROC* glPolygonOffsetClamp_t)(GLfloat factor, GLfloat units, GLfloat clamp);
		typedef void (GALGLPROC* glPrimitiveBoundingBoxARB_t)(GLfloat minX, GLfloat minY, GLfloat minZ, GLfloat minW, GLfloat maxX, GLfloat maxY, GLfloat maxZ, GLfloat maxW);
		typedef GLuint64 (GALGLPROC* glGetTextureHandleARB_t)(GLuint texture);
		typedef GLuint64 (GALGLPROC* glGetTextureSamplerHandleARB_t)(GLuint texture, GLuint sampler);
		typedef void (GALGLPROC* glMakeTextureHandleResidentARB_t)(GLuint64 handle);
		typedef void (GALGLPROC* glMakeTextureHandleNonResidentARB_t)(GLuint64 handle);
		typedef GLuint64 (GALGLPROC* glGetImageHandleARB_t)(GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format);
		typedef void (GALGLPROC* glMakeImageHandleResidentARB_t)(GLuint64 handle, GLenum access);
		typedef void (GALGLPROC* glMakeImageHandleNonResidentARB_t)(GLuint64 handle);
		typedef void (GALGLPROC* glUniformHandleui64ARB_t)(GLint location, GLuint64 value);
		typedef void (GALGLPROC* glUniformHandleui64vARB_t)(GLint location, GLsizei count, const GLuint64 *value);
		typedef void (GALGLPROC* glProgramUniformHandleui64ARB_t)(GLuint program, GLint location, GLuint64 value);
		typedef void (GALGLPROC* glProgramUniformHandleui64vARB_t)(GLuint program, GLint location, GLsizei count, const GLuint64 *values);
		typedef GLboolean (GALGLPROC* glIsTextureHandleResidentARB_t)(GLuint64 handle);
		typedef GLboolean (GALGLPROC* glIsImageHandleResidentARB_t)(GLuint64 handle);
		typedef void (GALGLPROC* glVertexAttribL1ui64ARB_t)(GLuint index, GLuint64EXT x);
		typedef void (GALGLPROC* glVertexAttribL1ui64vARB_t)(GLuint index, const GLuint64EXT *v);
		typedef void (GALGLPROC* glGetVertexAttribLui64vARB_t)(GLuint index, GLenum pname, GLuint64EXT *params);
		typedef GLsync (GALGLPROC* glCreateSyncFromCLeventARB_t)(struct _cl_context *context, struct _cl_event *event, GLbitfield flags);
		typedef void (GALGLPROC* glDispatchComputeGroupSizeARB_t)(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z, GLuint group_size_x, GLuint group_size_y, GLuint group_size_z);
		typedef void (GALGLPROC* glDebugMessageControlARB_t)(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled);
		typedef void (GALGLPROC* glDebugMessageInsertARB_t)(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar *buf);
		typedef void (GALGLPROC* glDebugMessageCallbackARB_t)(GLDEBUGPROCARB callback, const void *userParam);
		typedef GLuint (GALGLPROC* glGetDebugMessageLogARB_t)(GLuint count, GLsizei bufSize, GLenum *sources, GLenum *types, GLuint *ids, GLenum *severities, GLsizei *lengths, GLchar *messageLog);
		typedef void (GALGLPROC* glBlendEquationiARB_t)(GLuint buf, GLenum mode);
		typedef void (GALGLPROC* glBlendEquationSeparateiARB_t)(GLuint buf, GLenum modeRGB, GLenum modeAlpha);
		typedef void (GALGLPROC* glBlendFunciARB_t)(GLuint buf, GLenum src, GLenum dst);
		typedef void (GALGLPROC* glBlendFuncSeparateiARB_t)(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
		typedef void (GALGLPROC* glDrawArraysInstancedARB_t)(GLenum mode, GLint first, GLsizei count, GLsizei primcount);
		typedef void (GALGLPROC* glDrawElementsInstancedARB_t)(GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei primcount);
		typedef void (GALGLPROC* glProgramParameteriARB_t)(GLuint program, GLenum pname, GLint value);
		typedef void (GALGLPROC* glFramebufferTextureARB_t)(GLenum target, GLenum attachment, GLuint texture, GLint level);
		typedef void (GALGLPROC* glFramebufferTextureLayerARB_t)(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
		typedef void (GALGLPROC* glFramebufferTextureFaceARB_t)(GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face);
		typedef void (GALGLPROC* glSpecializeShaderARB_t)(GLuint shader, const GLchar *pEntryPoint, GLuint numSpecializationConstants, const GLuint *pConstantIndex, const GLuint *pConstantValue);
		typedef void (GALGLPROC* glUniform1i64ARB_t)(GLint location, GLint64 x);
		typedef void (GALGLPROC* glUniform2i64ARB_t)(GLint location, GLint64 x, GLint64 y);
		typedef void (GALGLPROC* glUniform3i64ARB_t)(GLint location, GLint64 x, GLint64 y, GLint64 z);
		typedef void (GALGLPROC* glUniform4i64ARB_t)(GLint location, GLint64 x, GLint64 y, GLint64 z, GLint64 w);
		typedef void (GALGLPROC* glUniform1i64vARB_t)(GLint location, GLsizei count, const GLint64 *value);
		typedef void (GALGLPROC* glUniform2i64vARB_t)(GLint location, GLsizei count, const GLint64 *value);
		typedef void (GALGLPROC* glUniform3i64vARB_t)(GLint location, GLsizei count, const GLint64 *value);
		typedef void (GALGLPROC* glUniform4i64vARB_t)(GLint location, GLsizei count, const GLint64 *value);
		typedef void (GALGLPROC* glUniform1ui64ARB_t)(GLint location, GLuint64 x);
		typedef void (GALGLPROC* glUniform2ui64ARB_t)(GLint location, GLuint64 x, GLuint64 y);
		typedef void (GALGLPROC* glUniform3ui64ARB_t)(GLint location, GLuint64 x, GLuint64 y, GLuint64 z);
		typedef void (GALGLPROC* glUniform4ui64ARB_t)(GLint location, GLuint64 x, GLuint64 y, GLuint64 z, GLuint64 w);
		typedef void (GALGLPROC* glUniform1ui64vARB_t)(GLint location, GLsizei count, const GLuint64 *value);
		typedef void (GALGLPROC* glUniform2ui64vARB_t)(GLint location, GLsizei count, const GLuint64 *value);
		typedef void (GALGLPROC* glUniform3ui64vARB_t)(GLint location, GLsizei count, const GLuint64 *value);
		typedef void (GALGLPROC* glUniform4ui64vARB_t)(GLint location, GLsizei count, const GLuint64 *value);
		typedef void (GALGLPROC* glGetUniformi64vARB_t)(GLuint program, GLint location, GLint64 *params);
		typedef void (GALGLPROC* glGetUniformui64vARB_t)(GLuint program, GLint location, GLuint64 *params);
		typedef void (GALGLPROC* glGetnUniformi64vARB_t)(GLuint program, GLint location, GLsizei bufSize, GLint64 *params);
		typedef void (GALGLPROC* glGetnUniformui64vARB_t)(GLuint program, GLint location, GLsizei bufSize, GLuint64 *params);
		typedef void (GALGLPROC* glProgramUniform1i64ARB_t)(GLuint program, GLint location, GLint64 x);
		typedef void (GALGLPROC* glProgramUniform2i64ARB_t)(GLuint program, GLint location, GLint64 x, GLint64 y);
		typedef void (GALGLPROC* glProgramUniform3i64ARB_t)(GLuint program, GLint location, GLint64 x, GLint64 y, GLint64 z);
		typedef void (GALGLPROC* glProgramUniform4i64ARB_t)(GLuint program, GLint location, GLint64 x, GLint64 y, GLint64 z, GLint64 w);
		typedef void (GALGLPROC* glProgramUniform1i64vARB_t)(GLuint program, GLint location, GLsizei count, const GLint64 *value);
		typedef void (GALGLPROC* glProgramUniform2i64vARB_t)(GLuint program, GLint location, GLsizei count, const GLint64 *value);
		typedef void (GALGLPROC* glProgramUniform3i64vARB_t)(GLuint program, GLint location, GLsizei count, const GLint64 *value);
		typedef void (GALGLPROC* glProgramUniform4i64vARB_t)(GLuint program, GLint location, GLsizei count, const GLint64 *value);
		typedef void (GALGLPROC* glProgramUniform1ui64ARB_t)(GLuint program, GLint location, GLuint64 x);
		typedef void (GALGLPROC* glProgramUniform2ui64ARB_t)(GLuint program, GLint location, GLuint64 x, GLuint64 y);
		typedef void (GALGLPROC* glProgramUniform3ui64ARB_t)(GLuint program, GLint location, GLuint64 x, GLuint64 y, GLuint64 z);
		typedef void (GALGLPROC* glProgramUniform4ui64ARB_t)(GLuint program, GLint location, GLuint64 x, GLuint64 y, GLuint64 z, GLuint64 w);
		typedef void (GALGLPROC* glProgramUniform1ui64vARB_t)(GLuint program, GLint location, GLsizei count, const GLuint64 *value);
		typedef void (GALGLPROC* glProgramUniform2ui64vARB_t)(GLuint program, GLint location, GLsizei count, const GLuint64 *value);
		typedef void (GALGLPROC* glProgramUniform3ui64vARB_t)(GLuint program, GLint location, GLsizei count, const GLuint64 *value);
		typedef void (GALGLPROC* glProgramUniform4ui64vARB_t)(GLuint program, GLint location, GLsizei count, const GLuint64 *value);
		typedef void (GALGLPROC* glMultiDrawArraysIndirectCountARB_t)(GLenum mode, const void *indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
		typedef void (GALGLPROC* glMultiDrawElementsIndirectCountARB_t)(GLenum mode, GLenum type, const void *indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
		typedef void (GALGLPROC* glVertexAttribDivisorARB_t)(GLuint index, GLuint divisor);
		typedef void (GALGLPROC* glMaxShaderCompilerThreadsARB_t)(GLuint count);
		typedef GLenum (GALGLPROC* glGetGraphicsResetStatusARB_t)(void);
		typedef void (GALGLPROC* glGetnTexImageARB_t)(GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void *img);
		typedef void (GALGLPROC* glReadnPixelsARB_t)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void *data);
		typedef void (GALGLPROC* glGetnCompressedTexImageARB_t)(GLenum target, GLint lod, GLsizei bufSize, void *img);
		typedef void (GALGLPROC* glGetnUniformfvARB_t)(GLuint program, GLint location, GLsizei bufSize, GLfloat *params);
		typedef void (GALGLPROC* glGetnUniformivARB_t)(GLuint program, GLint location, GLsizei bufSize, GLint *params);
		typedef void (GALGLPROC* glGetnUniformuivARB_t)(GLuint program, GLint location, GLsizei bufSize, GLuint *params);
		typedef void (GALGLPROC* glGetnUniformdvARB_t)(GLuint program, GLint location, GLsizei bufSize, GLdouble *params);
		typedef void (GALGLPROC* glFramebufferSampleLocationsfvARB_t)(GLenum target, GLuint start, GLsizei count, const GLfloat *v);
		typedef void (GALGLPROC* glNamedFramebufferSampleLocationsfvARB_t)(GLuint framebuffer, GLuint start, GLsizei count, const GLfloat *v);
		typedef void (GALGLPROC* glEvaluateDepthValuesARB_t)(void);
		typedef void (GALGLPROC* glMinSampleShadingARB_t)(GLfloat value);
		typedef void (GALGLPROC* glNamedStringARB_t)(GLenum type, GLint namelen, const GLchar *name, GLint stringlen, const GLchar *string);
		typedef void (GALGLPROC* glDeleteNamedStringARB_t)(GLint namelen, const GLchar *name);
		typedef void (GALGLPROC* glCompileShaderIncludeARB_t)(GLuint shader, GLsizei count, const GLchar *const*path, const GLint *length);
		typedef GLboolean (GALGLPROC* glIsNamedStringARB_t)(GLint namelen, const GLchar *name);
		typedef void (GALGLPROC* glGetNamedStringARB_t)(GLint namelen, const GLchar *name, GLsizei bufSize, GLint *stringlen, GLchar *string);
		typedef void (GALGLPROC* glGetNamedStringivARB_t)(GLint namelen, const GLchar *name, GLenum pname, GLint *params);
		typedef void (GALGLPROC* glBufferPageCommitmentARB_t)(GLenum target, GLintptr offset, GLsizeiptr size, GLboolean commit);
		typedef void (GALGLPROC* glNamedBufferPageCommitmentEXT_t)(GLuint buffer, GLintptr offset, GLsizeiptr size, GLboolean commit);
		typedef void (GALGLPROC* glNamedBufferPageCommitmentARB_t)(GLuint buffer, GLintptr offset, GLsizeiptr size, GLboolean commit);
		typedef void (GALGLPROC* glTexPageCommitmentARB_t)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean commit);
		typedef void (GALGLPROC* glTexBufferARB_t)(GLenum target, GLenum internalformat, GLuint buffer);
		typedef void (GALGLPROC* glDepthRangeArraydvNV_t)(GLuint first, GLsizei count, const GLdouble *v);
		typedef void (GALGLPROC* glDepthRangeIndexeddNV_t)(GLuint index, GLdouble n, GLdouble f);
		typedef void (GALGLPROC* glBlendBarrierKHR_t)(void);
		typedef void (GALGLPROC* glMaxShaderCompilerThreadsKHR_t)(GLuint count);
		typedef void (GALGLPROC* glRenderbufferStorageMultisampleAdvancedAMD_t)(GLenum target, GLsizei samples, GLsizei storageSamples, GLenum internalformat, GLsizei width, GLsizei height);
		typedef void (GALGLPROC* glNamedRenderbufferStorageMultisampleAdvancedAMD_t)(GLuint renderbuffer, GLsizei samples, GLsizei storageSamples, GLenum internalformat, GLsizei width, GLsizei height);
		typedef void (GALGLPROC* glGetPerfMonitorGroupsAMD_t)(GLint *numGroups, GLsizei groupsSize, GLuint *groups);
		typedef void (GALGLPROC* glGetPerfMonitorCountersAMD_t)(GLuint group, GLint *numCounters, GLint *maxActiveCounters, GLsizei counterSize, GLuint *counters);
		typedef void (GALGLPROC* glGetPerfMonitorGroupStringAMD_t)(GLuint group, GLsizei bufSize, GLsizei *length, GLchar *groupString);
		typedef void (GALGLPROC* glGetPerfMonitorCounterStringAMD_t)(GLuint group, GLuint counter, GLsizei bufSize, GLsizei *length, GLchar *counterString);
		typedef void (GALGLPROC* glGetPerfMonitorCounterInfoAMD_t)(GLuint group, GLuint counter, GLenum pname, void *data);
		typedef void (GALGLPROC* glGenPerfMonitorsAMD_t)(GLsizei n, GLuint *monitors);
		typedef void (GALGLPROC* glDeletePerfMonitorsAMD_t)(GLsizei n, GLuint *monitors);
		typedef void (GALGLPROC* glSelectPerfMonitorCountersAMD_t)(GLuint monitor, GLboolean enable, GLuint group, GLint numCounters, GLuint *counterList);
		typedef void (GALGLPROC* glBeginPerfMonitorAMD_t)(GLuint monitor);
		typedef void (GALGLPROC* glEndPerfMonitorAMD_t)(GLuint monitor);
		typedef void (GALGLPROC* glGetPerfMonitorCounterDataAMD_t)(GLuint monitor, GLenum pname, GLsizei dataSize, GLuint *data, GLint *bytesWritten);
		typedef void (GALGLPROC* glEGLImageTargetTexStorageEXT_t)(GLenum target, GLeglImageOES image, const GLint* attrib_list);
		typedef void (GALGLPROC* glEGLImageTargetTextureStorageEXT_t)(GLuint texture, GLeglImageOES image, const GLint* attrib_list);
		typedef void (GALGLPROC* glLabelObjectEXT_t)(GLenum type, GLuint object, GLsizei length, const GLchar *label);
		typedef void (GALGLPROC* glGetObjectLabelEXT_t)(GLenum type, GLuint object, GLsizei bufSize, GLsizei *length, GLchar *label);
		typedef void (GALGLPROC* glInsertEventMarkerEXT_t)(GLsizei length, const GLchar *marker);
		typedef void (GALGLPROC* glPushGroupMarkerEXT_t)(GLsizei length, const GLchar *marker);
		typedef void (GALGLPROC* glPopGroupMarkerEXT_t)(void);
		typedef void (GALGLPROC* glMatrixLoadfEXT_t)(GLenum mode, const GLfloat *m);
		typedef void (GALGLPROC* glMatrixLoaddEXT_t)(GLenum mode, const GLdouble *m);
		typedef void (GALGLPROC* glMatrixMultfEXT_t)(GLenum mode, const GLfloat *m);
		typedef void (GALGLPROC* glMatrixMultdEXT_t)(GLenum mode, const GLdouble *m);
		typedef void (GALGLPROC* glMatrixLoadIdentityEXT_t)(GLenum mode);
		typedef void (GALGLPROC* glMatrixRotatefEXT_t)(GLenum mode, GLfloat angle, GLfloat x, GLfloat y, GLfloat z);
		typedef void (GALGLPROC* glMatrixRotatedEXT_t)(GLenum mode, GLdouble angle, GLdouble x, GLdouble y, GLdouble z);
		typedef void (GALGLPROC* glMatrixScalefEXT_t)(GLenum mode, GLfloat x, GLfloat y, GLfloat z);
		typedef void (GALGLPROC* glMatrixScaledEXT_t)(GLenum mode, GLdouble x, GLdouble y, GLdouble z);
		typedef void (GALGLPROC* glMatrixTranslatefEXT_t)(GLenum mode, GLfloat x, GLfloat y, GLfloat z);
		typedef void (GALGLPROC* glMatrixTranslatedEXT_t)(GLenum mode, GLdouble x, GLdouble y, GLdouble z);
		typedef void (GALGLPROC* glMatrixFrustumEXT_t)(GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
		typedef void (GALGLPROC* glMatrixOrthoEXT_t)(GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
		typedef void (GALGLPROC* glMatrixPopEXT_t)(GLenum mode);
		typedef void (GALGLPROC* glMatrixPushEXT_t)(GLenum mode);
		typedef void (GALGLPROC* glClientAttribDefaultEXT_t)(GLbitfield mask);
		typedef void (GALGLPROC* glPushClientAttribDefaultEXT_t)(GLbitfield mask);
		typedef void (GALGLPROC* glTextureParameterfEXT_t)(GLuint texture, GLenum target, GLenum pname, GLfloat param);
		typedef void (GALGLPROC* glTextureParameterfvEXT_t)(GLuint texture, GLenum target, GLenum pname, const GLfloat *params);
		typedef void (GALGLPROC* glTextureParameteriEXT_t)(GLuint texture, GLenum target, GLenum pname, GLint param);
		typedef void (GALGLPROC* glTextureParameterivEXT_t)(GLuint texture, GLenum target, GLenum pname, const GLint *params);
		typedef void (GALGLPROC* glTextureImage1DEXT_t)(GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void *pixels);
		typedef void (GALGLPROC* glTextureImage2DEXT_t)(GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void *pixels);
		typedef void (GALGLPROC* glTextureSubImage1DEXT_t)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels);
		typedef void (GALGLPROC* glTextureSubImage2DEXT_t)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels);
		typedef void (GALGLPROC* glCopyTextureImage1DEXT_t)(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
		typedef void (GALGLPROC* glCopyTextureImage2DEXT_t)(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
		typedef void (GALGLPROC* glCopyTextureSubImage1DEXT_t)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
		typedef void (GALGLPROC* glCopyTextureSubImage2DEXT_t)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
		typedef void (GALGLPROC* glGetTextureImageEXT_t)(GLuint texture, GLenum target, GLint level, GLenum format, GLenum type, void *pixels);
		typedef void (GALGLPROC* glGetTextureParameterfvEXT_t)(GLuint texture, GLenum target, GLenum pname, GLfloat *params);
		typedef void (GALGLPROC* glGetTextureParameterivEXT_t)(GLuint texture, GLenum target, GLenum pname, GLint *params);
		typedef void (GALGLPROC* glGetTextureLevelParameterfvEXT_t)(GLuint texture, GLenum target, GLint level, GLenum pname, GLfloat *params);
		typedef void (GALGLPROC* glGetTextureLevelParameterivEXT_t)(GLuint texture, GLenum target, GLint level, GLenum pname, GLint *params);
		typedef void (GALGLPROC* glTextureImage3DEXT_t)(GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels);
		typedef void (GALGLPROC* glTextureSubImage3DEXT_t)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels);
		typedef void (GALGLPROC* glCopyTextureSubImage3DEXT_t)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
		typedef void (GALGLPROC* glBindMultiTextureEXT_t)(GLenum texunit, GLenum target, GLuint texture);
		typedef void (GALGLPROC* glMultiTexCoordPointerEXT_t)(GLenum texunit, GLint size, GLenum type, GLsizei stride, const void *pointer);
		typedef void (GALGLPROC* glMultiTexEnvfEXT_t)(GLenum texunit, GLenum target, GLenum pname, GLfloat param);
		typedef void (GALGLPROC* glMultiTexEnvfvEXT_t)(GLenum texunit, GLenum target, GLenum pname, const GLfloat *params);
		typedef void (GALGLPROC* glMultiTexEnviEXT_t)(GLenum texunit, GLenum target, GLenum pname, GLint param);
		typedef void (GALGLPROC* glMultiTexEnvivEXT_t)(GLenum texunit, GLenum target, GLenum pname, const GLint *params);
		typedef void (GALGLPROC* glMultiTexGendEXT_t)(GLenum texunit, GLenum coord, GLenum pname, GLdouble param);
		typedef void (GALGLPROC* glMultiTexGendvEXT_t)(GLenum texunit, GLenum coord, GLenum pname, const GLdouble *params);
		typedef void (GALGLPROC* glMultiTexGenfEXT_t)(GLenum texunit, GLenum coord, GLenum pname, GLfloat param);
		typedef void (GALGLPROC* glMultiTexGenfvEXT_t)(GLenum texunit, GLenum coord, GLenum pname, const GLfloat *params);
		typedef void (GALGLPROC* glMultiTexGeniEXT_t)(GLenum texunit, GLenum coord, GLenum pname, GLint param);
		typedef void (GALGLPROC* glMultiTexGenivEXT_t)(GLenum texunit, GLenum coord, GLenum pname, const GLint *params);
		typedef void (GALGLPROC* glGetMultiTexEnvfvEXT_t)(GLenum texunit, GLenum target, GLenum pname, GLfloat *params);
		typedef void (GALGLPROC* glGetMultiTexEnvivEXT_t)(GLenum texunit, GLenum target, GLenum pname, GLint *params);
		typedef void (GALGLPROC* glGetMultiTexGendvEXT_t)(GLenum texunit, GLenum coord, GLenum pname, GLdouble *params);
		typedef void (GALGLPROC* glGetMultiTexGenfvEXT_t)(GLenum texunit, GLenum coord, GLenum pname, GLfloat *params);
		typedef void (GALGLPROC* glGetMultiTexGenivEXT_t)(GLenum texunit, GLenum coord, GLenum pname, GLint *params);
		typedef void (GALGLPROC* glMultiTexParameteriEXT_t)(GLenum texunit, GLenum target, GLenum pname, GLint param);
		typedef void (GALGLPROC* glMultiTexParameterivEXT_t)(GLenum texunit, GLenum target, GLenum pname, const GLint *params);
		typedef void (GALGLPROC* glMultiTexParameterfEXT_t)(GLenum texunit, GLenum target, GLenum pname, GLfloat param);
		typedef void (GALGLPROC* glMultiTexParameterfvEXT_t)(GLenum texunit, GLenum target, GLenum pname, const GLfloat *params);
		typedef void (GALGLPROC* glMultiTexImage1DEXT_t)(GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void *pixels);
		typedef void (GALGLPROC* glMultiTexImage2DEXT_t)(GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void *pixels);
		typedef void (GALGLPROC* glMultiTexSubImage1DEXT_t)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels);
		typedef void (GALGLPROC* glMultiTexSubImage2DEXT_t)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels);
		typedef void (GALGLPROC* glCopyMultiTexImage1DEXT_t)(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
		typedef void (GALGLPROC* glCopyMultiTexImage2DEXT_t)(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
		typedef void (GALGLPROC* glCopyMultiTexSubImage1DEXT_t)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
		typedef void (GALGLPROC* glCopyMultiTexSubImage2DEXT_t)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
		typedef void (GALGLPROC* glGetMultiTexImageEXT_t)(GLenum texunit, GLenum target, GLint level, GLenum format, GLenum type, void *pixels);
		typedef void (GALGLPROC* glGetMultiTexParameterfvEXT_t)(GLenum texunit, GLenum target, GLenum pname, GLfloat *params);
		typedef void (GALGLPROC* glGetMultiTexParameterivEXT_t)(GLenum texunit, GLenum target, GLenum pname, GLint *params);
		typedef void (GALGLPROC* glGetMultiTexLevelParameterfvEXT_t)(GLenum texunit, GLenum target, GLint level, GLenum pname, GLfloat *params);
		typedef void (GALGLPROC* glGetMultiTexLevelParameterivEXT_t)(GLenum texunit, GLenum target, GLint level, GLenum pname, GLint *params);
		typedef void (GALGLPROC* glMultiTexImage3DEXT_t)(GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels);
		typedef void (GALGLPROC* glMultiTexSubImage3DEXT_t)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels);
		typedef void (GALGLPROC* glCopyMultiTexSubImage3DEXT_t)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
		typedef void (GALGLPROC* glEnableClientStateIndexedEXT_t)(GLenum array, GLuint index);
		typedef void (GALGLPROC* glDisableClientStateIndexedEXT_t)(GLenum array, GLuint index);
		typedef void (GALGLPROC* glGetFloatIndexedvEXT_t)(GLenum target, GLuint index, GLfloat *data);
		typedef void (GALGLPROC* glGetDoubleIndexedvEXT_t)(GLenum target, GLuint index, GLdouble *data);
		typedef void (GALGLPROC* glGetPointerIndexedvEXT_t)(GLenum target, GLuint index, void **data);
		typedef void (GALGLPROC* glEnableIndexedEXT_t)(GLenum target, GLuint index);
		typedef void (GALGLPROC* glDisableIndexedEXT_t)(GLenum target, GLuint index);
		typedef GLboolean (GALGLPROC* glIsEnabledIndexedEXT_t)(GLenum target, GLuint index);
		typedef void (GALGLPROC* glGetIntegerIndexedvEXT_t)(GLenum target, GLuint index, GLint *data);
		typedef void (GALGLPROC* glGetBooleanIndexedvEXT_t)(GLenum target, GLuint index, GLboolean *data);
		typedef void (GALGLPROC* glCompressedTextureImage3DEXT_t)(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *bits);
		typedef void (GALGLPROC* glCompressedTextureImage2DEXT_t)(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *bits);
		typedef void (GALGLPROC* glCompressedTextureImage1DEXT_t)(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void *bits);
		typedef void (GALGLPROC* glCompressedTextureSubImage3DEXT_t)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *bits);
		typedef void (GALGLPROC* glCompressedTextureSubImage2DEXT_t)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *bits);
		typedef void (GALGLPROC* glCompressedTextureSubImage1DEXT_t)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *bits);
		typedef void (GALGLPROC* glGetCompressedTextureImageEXT_t)(GLuint texture, GLenum target, GLint lod, void *img);
		typedef void (GALGLPROC* glCompressedMultiTexImage3DEXT_t)(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *bits);
		typedef void (GALGLPROC* glCompressedMultiTexImage2DEXT_t)(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *bits);
		typedef void (GALGLPROC* glCompressedMultiTexImage1DEXT_t)(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void *bits);
		typedef void (GALGLPROC* glCompressedMultiTexSubImage3DEXT_t)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *bits);
		typedef void (GALGLPROC* glCompressedMultiTexSubImage2DEXT_t)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *bits);
		typedef void (GALGLPROC* glCompressedMultiTexSubImage1DEXT_t)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *bits);
		typedef void (GALGLPROC* glGetCompressedMultiTexImageEXT_t)(GLenum texunit, GLenum target, GLint lod, void *img);
		typedef void (GALGLPROC* glMatrixLoadTransposefEXT_t)(GLenum mode, const GLfloat *m);
		typedef void (GALGLPROC* glMatrixLoadTransposedEXT_t)(GLenum mode, const GLdouble *m);
		typedef void (GALGLPROC* glMatrixMultTransposefEXT_t)(GLenum mode, const GLfloat *m);
		typedef void (GALGLPROC* glMatrixMultTransposedEXT_t)(GLenum mode, const GLdouble *m);
		typedef void (GALGLPROC* glNamedBufferDataEXT_t)(GLuint buffer, GLsizeiptr size, const void *data, GLenum usage);
		typedef void (GALGLPROC* glNamedBufferSubDataEXT_t)(GLuint buffer, GLintptr offset, GLsizeiptr size, const void *data);
		typedef void * (GALGLPROC* glMapNamedBufferEXT_t)(GLuint buffer, GLenum access);
		typedef GLboolean (GALGLPROC* glUnmapNamedBufferEXT_t)(GLuint buffer);
		typedef void (GALGLPROC* glGetNamedBufferParameterivEXT_t)(GLuint buffer, GLenum pname, GLint *params);
		typedef void (GALGLPROC* glGetNamedBufferPointervEXT_t)(GLuint buffer, GLenum pname, void **params);
		typedef void (GALGLPROC* glGetNamedBufferSubDataEXT_t)(GLuint buffer, GLintptr offset, GLsizeiptr size, void *data);
		typedef void (GALGLPROC* glProgramUniform1fEXT_t)(GLuint program, GLint location, GLfloat v0);
		typedef void (GALGLPROC* glProgramUniform2fEXT_t)(GLuint program, GLint location, GLfloat v0, GLfloat v1);
		typedef void (GALGLPROC* glProgramUniform3fEXT_t)(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
		typedef void (GALGLPROC* glProgramUniform4fEXT_t)(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
		typedef void (GALGLPROC* glProgramUniform1iEXT_t)(GLuint program, GLint location, GLint v0);
		typedef void (GALGLPROC* glProgramUniform2iEXT_t)(GLuint program, GLint location, GLint v0, GLint v1);
		typedef void (GALGLPROC* glProgramUniform3iEXT_t)(GLuint program, GLint location, GLint v0, GLint v1, GLint v2);
		typedef void (GALGLPROC* glProgramUniform4iEXT_t)(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
		typedef void (GALGLPROC* glProgramUniform1fvEXT_t)(GLuint program, GLint location, GLsizei count, const GLfloat *value);
		typedef void (GALGLPROC* glProgramUniform2fvEXT_t)(GLuint program, GLint location, GLsizei count, const GLfloat *value);
		typedef void (GALGLPROC* glProgramUniform3fvEXT_t)(GLuint program, GLint location, GLsizei count, const GLfloat *value);
		typedef void (GALGLPROC* glProgramUniform4fvEXT_t)(GLuint program, GLint location, GLsizei count, const GLfloat *value);
		typedef void (GALGLPROC* glProgramUniform1ivEXT_t)(GLuint program, GLint location, GLsizei count, const GLint *value);
		typedef void (GALGLPROC* glProgramUniform2ivEXT_t)(GLuint program, GLint location, GLsizei count, const GLint *value);
		typedef void (GALGLPROC* glProgramUniform3ivEXT_t)(GLuint program, GLint location, GLsizei count, const GLint *value);
		typedef void (GALGLPROC* glProgramUniform4ivEXT_t)(GLuint program, GLint location, GLsizei count, const GLint *value);
		typedef void (GALGLPROC* glProgramUniformMatrix2fvEXT_t)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
		typedef void (GALGLPROC* glProgramUniformMatrix3fvEXT_t)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
		typedef void (GALGLPROC* glProgramUniformMatrix4fvEXT_t)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
		typedef void (GALGLPROC* glProgramUniformMatrix2x3fvEXT_t)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
		typedef void (GALGLPROC* glProgramUniformMatrix3x2fvEXT_t)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
		typedef void (GALGLPROC* glProgramUniformMatrix2x4fvEXT_t)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
		typedef void (GALGLPROC* glProgramUniformMatrix4x2fvEXT_t)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
		typedef void (GALGLPROC* glProgramUniformMatrix3x4fvEXT_t)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
		typedef void (GALGLPROC* glProgramUniformMatrix4x3fvEXT_t)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
		typedef void (GALGLPROC* glTextureBufferEXT_t)(GLuint texture, GLenum target, GLenum internalformat, GLuint buffer);
		typedef void (GALGLPROC* glMultiTexBufferEXT_t)(GLenum texunit, GLenum target, GLenum internalformat, GLuint buffer);
		typedef void (GALGLPROC* glTextureParameterIivEXT_t)(GLuint texture, GLenum target, GLenum pname, const GLint *params);
		typedef void (GALGLPROC* glTextureParameterIuivEXT_t)(GLuint texture, GLenum target, GLenum pname, const GLuint *params);
		typedef void (GALGLPROC* glGetTextureParameterIivEXT_t)(GLuint texture, GLenum target, GLenum pname, GLint *params);
		typedef void (GALGLPROC* glGetTextureParameterIuivEXT_t)(GLuint texture, GLenum target, GLenum pname, GLuint *params);
		typedef void (GALGLPROC* glMultiTexParameterIivEXT_t)(GLenum texunit, GLenum target, GLenum pname, const GLint *params);
		typedef void (GALGLPROC* glMultiTexParameterIuivEXT_t)(GLenum texunit, GLenum target, GLenum pname, const GLuint *params);
		typedef void (GALGLPROC* glGetMultiTexParameterIivEXT_t)(GLenum texunit, GLenum target, GLenum pname, GLint *params);
		typedef void (GALGLPROC* glGetMultiTexParameterIuivEXT_t)(GLenum texunit, GLenum target, GLenum pname, GLuint *params);
		typedef void (GALGLPROC* glProgramUniform1uiEXT_t)(GLuint program, GLint location, GLuint v0);
		typedef void (GALGLPROC* glProgramUniform2uiEXT_t)(GLuint program, GLint location, GLuint v0, GLuint v1);
		typedef void (GALGLPROC* glProgramUniform3uiEXT_t)(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2);
		typedef void (GALGLPROC* glProgramUniform4uiEXT_t)(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
		typedef void (GALGLPROC* glProgramUniform1uivEXT_t)(GLuint program, GLint location, GLsizei count, const GLuint *value);
		typedef void (GALGLPROC* glProgramUniform2uivEXT_t)(GLuint program, GLint location, GLsizei count, const GLuint *value);
		typedef void (GALGLPROC* glProgramUniform3uivEXT_t)(GLuint program, GLint location, GLsizei count, const GLuint *value);
		typedef void (GALGLPROC* glProgramUniform4uivEXT_t)(GLuint program, GLint location, GLsizei count, const GLuint *value);
		typedef void (GALGLPROC* glNamedProgramLocalParameters4fvEXT_t)(GLuint program, GLenum target, GLuint index, GLsizei count, const GLfloat *params);
		typedef void (GALGLPROC* glNamedProgramLocalParameterI4iEXT_t)(GLuint program, GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w);
		typedef void (GALGLPROC* glNamedProgramLocalParameterI4ivEXT_t)(GLuint program, GLenum target, GLuint index, const GLint *params);
		typedef void (GALGLPROC* glNamedProgramLocalParametersI4ivEXT_t)(GLuint program, GLenum target, GLuint index, GLsizei count, const GLint *params);
		typedef void (GALGLPROC* glNamedProgramLocalParameterI4uiEXT_t)(GLuint program, GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
		typedef void (GALGLPROC* glNamedProgramLocalParameterI4uivEXT_t)(GLuint program, GLenum target, GLuint index, const GLuint *params);
		typedef void (GALGLPROC* glNamedProgramLocalParametersI4uivEXT_t)(GLuint program, GLenum target, GLuint index, GLsizei count, const GLuint *params);
		typedef void (GALGLPROC* glGetNamedProgramLocalParameterIivEXT_t)(GLuint program, GLenum target, GLuint index, GLint *params);
		typedef void (GALGLPROC* glGetNamedProgramLocalParameterIuivEXT_t)(GLuint program, GLenum target, GLuint index, GLuint *params);
		typedef void (GALGLPROC* glEnableClientStateiEXT_t)(GLenum array, GLuint index);
		typedef void (GALGLPROC* glDisableClientStateiEXT_t)(GLenum array, GLuint index);
		typedef void (GALGLPROC* glGetFloati_vEXT_t)(GLenum pname, GLuint index, GLfloat *params);
		typedef void (GALGLPROC* glGetDoublei_vEXT_t)(GLenum pname, GLuint index, GLdouble *params);
		typedef void (GALGLPROC* glGetPointeri_vEXT_t)(GLenum pname, GLuint index, void **params);
		typedef void (GALGLPROC* glNamedProgramStringEXT_t)(GLuint program, GLenum target, GLenum format, GLsizei len, const void *string);
		typedef void (GALGLPROC* glNamedProgramLocalParameter4dEXT_t)(GLuint program, GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
		typedef void (GALGLPROC* glNamedProgramLocalParameter4dvEXT_t)(GLuint program, GLenum target, GLuint index, const GLdouble *params);
		typedef void (GALGLPROC* glNamedProgramLocalParameter4fEXT_t)(GLuint program, GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
		typedef void (GALGLPROC* glNamedProgramLocalParameter4fvEXT_t)(GLuint program, GLenum target, GLuint index, const GLfloat *params);
		typedef void (GALGLPROC* glGetNamedProgramLocalParameterdvEXT_t)(GLuint program, GLenum target, GLuint index, GLdouble *params);
		typedef void (GALGLPROC* glGetNamedProgramLocalParameterfvEXT_t)(GLuint program, GLenum target, GLuint index, GLfloat *params);
		typedef void (GALGLPROC* glGetNamedProgramivEXT_t)(GLuint program, GLenum target, GLenum pname, GLint *params);
		typedef void (GALGLPROC* glGetNamedProgramStringEXT_t)(GLuint program, GLenum target, GLenum pname, void *string);
		typedef void (GALGLPROC* glNamedRenderbufferStorageEXT_t)(GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height);
		typedef void (GALGLPROC* glGetNamedRenderbufferParameterivEXT_t)(GLuint renderbuffer, GLenum pname, GLint *params);
		typedef void (GALGLPROC* glNamedRenderbufferStorageMultisampleEXT_t)(GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
		typedef void (GALGLPROC* glNamedRenderbufferStorageMultisampleCoverageEXT_t)(GLuint renderbuffer, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height);
		typedef GLenum (GALGLPROC* glCheckNamedFramebufferStatusEXT_t)(GLuint framebuffer, GLenum target);
		typedef void (GALGLPROC* glNamedFramebufferTexture1DEXT_t)(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
		typedef void (GALGLPROC* glNamedFramebufferTexture2DEXT_t)(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
		typedef void (GALGLPROC* glNamedFramebufferTexture3DEXT_t)(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
		typedef void (GALGLPROC* glNamedFramebufferRenderbufferEXT_t)(GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
		typedef void (GALGLPROC* glGetNamedFramebufferAttachmentParameterivEXT_t)(GLuint framebuffer, GLenum attachment, GLenum pname, GLint *params);
		typedef void (GALGLPROC* glGenerateTextureMipmapEXT_t)(GLuint texture, GLenum target);
		typedef void (GALGLPROC* glGenerateMultiTexMipmapEXT_t)(GLenum texunit, GLenum target);
		typedef void (GALGLPROC* glFramebufferDrawBufferEXT_t)(GLuint framebuffer, GLenum mode);
		typedef void (GALGLPROC* glFramebufferDrawBuffersEXT_t)(GLuint framebuffer, GLsizei n, const GLenum *bufs);
		typedef void (GALGLPROC* glFramebufferReadBufferEXT_t)(GLuint framebuffer, GLenum mode);
		typedef void (GALGLPROC* glGetFramebufferParameterivEXT_t)(GLuint framebuffer, GLenum pname, GLint *params);
		typedef void (GALGLPROC* glNamedCopyBufferSubDataEXT_t)(GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
		typedef void (GALGLPROC* glNamedFramebufferTextureEXT_t)(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level);
		typedef void (GALGLPROC* glNamedFramebufferTextureLayerEXT_t)(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer);
		typedef void (GALGLPROC* glNamedFramebufferTextureFaceEXT_t)(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLenum face);
		typedef void (GALGLPROC* glTextureRenderbufferEXT_t)(GLuint texture, GLenum target, GLuint renderbuffer);
		typedef void (GALGLPROC* glMultiTexRenderbufferEXT_t)(GLenum texunit, GLenum target, GLuint renderbuffer);
		typedef void (GALGLPROC* glVertexArrayVertexOffsetEXT_t)(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset);
		typedef void (GALGLPROC* glVertexArrayColorOffsetEXT_t)(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset);
		typedef void (GALGLPROC* glVertexArrayEdgeFlagOffsetEXT_t)(GLuint vaobj, GLuint buffer, GLsizei stride, GLintptr offset);
		typedef void (GALGLPROC* glVertexArrayIndexOffsetEXT_t)(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset);
		typedef void (GALGLPROC* glVertexArrayNormalOffsetEXT_t)(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset);
		typedef void (GALGLPROC* glVertexArrayTexCoordOffsetEXT_t)(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset);
		typedef void (GALGLPROC* glVertexArrayMultiTexCoordOffsetEXT_t)(GLuint vaobj, GLuint buffer, GLenum texunit, GLint size, GLenum type, GLsizei stride, GLintptr offset);
		typedef void (GALGLPROC* glVertexArrayFogCoordOffsetEXT_t)(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset);
		typedef void (GALGLPROC* glVertexArraySecondaryColorOffsetEXT_t)(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset);
		typedef void (GALGLPROC* glVertexArrayVertexAttribOffsetEXT_t)(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, GLintptr offset);
		typedef void (GALGLPROC* glVertexArrayVertexAttribIOffsetEXT_t)(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset);
		typedef void (GALGLPROC* glEnableVertexArrayEXT_t)(GLuint vaobj, GLenum array);
		typedef void (GALGLPROC* glDisableVertexArrayEXT_t)(GLuint vaobj, GLenum array);
		typedef void (GALGLPROC* glEnableVertexArrayAttribEXT_t)(GLuint vaobj, GLuint index);
		typedef void (GALGLPROC* glDisableVertexArrayAttribEXT_t)(GLuint vaobj, GLuint index);
		typedef void (GALGLPROC* glGetVertexArrayIntegervEXT_t)(GLuint vaobj, GLenum pname, GLint *param);
		typedef void (GALGLPROC* glGetVertexArrayPointervEXT_t)(GLuint vaobj, GLenum pname, void **param);
		typedef void (GALGLPROC* glGetVertexArrayIntegeri_vEXT_t)(GLuint vaobj, GLuint index, GLenum pname, GLint *param);
		typedef void (GALGLPROC* glGetVertexArrayPointeri_vEXT_t)(GLuint vaobj, GLuint index, GLenum pname, void **param);
		typedef void * (GALGLPROC* glMapNamedBufferRangeEXT_t)(GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access);
		typedef void (GALGLPROC* glFlushMappedNamedBufferRangeEXT_t)(GLuint buffer, GLintptr offset, GLsizeiptr length);
		typedef void (GALGLPROC* glNamedBufferStorageEXT_t)(GLuint buffer, GLsizeiptr size, const void *data, GLbitfield flags);
		typedef void (GALGLPROC* glClearNamedBufferDataEXT_t)(GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void *data);
		typedef void (GALGLPROC* glClearNamedBufferSubDataEXT_t)(GLuint buffer, GLenum internalformat, GLsizeiptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data);
		typedef void (GALGLPROC* glNamedFramebufferParameteriEXT_t)(GLuint framebuffer, GLenum pname, GLint param);
		typedef void (GALGLPROC* glGetNamedFramebufferParameterivEXT_t)(GLuint framebuffer, GLenum pname, GLint *params);
		typedef void (GALGLPROC* glProgramUniform1dEXT_t)(GLuint program, GLint location, GLdouble x);
		typedef void (GALGLPROC* glProgramUniform2dEXT_t)(GLuint program, GLint location, GLdouble x, GLdouble y);
		typedef void (GALGLPROC* glProgramUniform3dEXT_t)(GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z);
		typedef void (GALGLPROC* glProgramUniform4dEXT_t)(GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
		typedef void (GALGLPROC* glProgramUniform1dvEXT_t)(GLuint program, GLint location, GLsizei count, const GLdouble *value);
		typedef void (GALGLPROC* glProgramUniform2dvEXT_t)(GLuint program, GLint location, GLsizei count, const GLdouble *value);
		typedef void (GALGLPROC* glProgramUniform3dvEXT_t)(GLuint program, GLint location, GLsizei count, const GLdouble *value);
		typedef void (GALGLPROC* glProgramUniform4dvEXT_t)(GLuint program, GLint location, GLsizei count, const GLdouble *value);
		typedef void (GALGLPROC* glProgramUniformMatrix2dvEXT_t)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
		typedef void (GALGLPROC* glProgramUniformMatrix3dvEXT_t)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
		typedef void (GALGLPROC* glProgramUniformMatrix4dvEXT_t)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
		typedef void (GALGLPROC* glProgramUniformMatrix2x3dvEXT_t)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
		typedef void (GALGLPROC* glProgramUniformMatrix2x4dvEXT_t)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
		typedef void (GALGLPROC* glProgramUniformMatrix3x2dvEXT_t)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
		typedef void (GALGLPROC* glProgramUniformMatrix3x4dvEXT_t)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
		typedef void (GALGLPROC* glProgramUniformMatrix4x2dvEXT_t)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
		typedef void (GALGLPROC* glProgramUniformMatrix4x3dvEXT_t)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
		typedef void (GALGLPROC* glTextureBufferRangeEXT_t)(GLuint texture, GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
		typedef void (GALGLPROC* glTextureStorage1DEXT_t)(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);
		typedef void (GALGLPROC* glTextureStorage2DEXT_t)(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
		typedef void (GALGLPROC* glTextureStorage3DEXT_t)(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
		typedef void (GALGLPROC* glTextureStorage2DMultisampleEXT_t)(GLuint texture, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
		typedef void (GALGLPROC* glTextureStorage3DMultisampleEXT_t)(GLuint texture, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
		typedef void (GALGLPROC* glVertexArrayBindVertexBufferEXT_t)(GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
		typedef void (GALGLPROC* glVertexArrayVertexAttribFormatEXT_t)(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
		typedef void (GALGLPROC* glVertexArrayVertexAttribIFormatEXT_t)(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
		typedef void (GALGLPROC* glVertexArrayVertexAttribLFormatEXT_t)(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
		typedef void (GALGLPROC* glVertexArrayVertexAttribBindingEXT_t)(GLuint vaobj, GLuint attribindex, GLuint bindingindex);
		typedef void (GALGLPROC* glVertexArrayVertexBindingDivisorEXT_t)(GLuint vaobj, GLuint bindingindex, GLuint divisor);
		typedef void (GALGLPROC* glVertexArrayVertexAttribLOffsetEXT_t)(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset);
		typedef void (GALGLPROC* glTexturePageCommitmentEXT_t)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean commit);
		typedef void (GALGLPROC* glVertexArrayVertexAttribDivisorEXT_t)(GLuint vaobj, GLuint index, GLuint divisor);
		typedef void (GALGLPROC* glDrawArraysInstancedEXT_t)(GLenum mode, GLint start, GLsizei count, GLsizei primcount);
		typedef void (GALGLPROC* glDrawElementsInstancedEXT_t)(GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei primcount);
		typedef void (GALGLPROC* glPolygonOffsetClampEXT_t)(GLfloat factor, GLfloat units, GLfloat clamp);
		typedef void (GALGLPROC* glRasterSamplesEXT_t)(GLuint samples, GLboolean fixedsamplelocations);
		typedef void (GALGLPROC* glUseShaderProgramEXT_t)(GLenum type, GLuint program);
		typedef void (GALGLPROC* glActiveProgramEXT_t)(GLuint program);
		typedef GLuint (GALGLPROC* glCreateShaderProgramEXT_t)(GLenum type, const GLchar *string);
		typedef void (GALGLPROC* glFramebufferFetchBarrierEXT_t)(void);
		typedef void (GALGLPROC* glTexStorage1DEXT_t)(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);
		typedef void (GALGLPROC* glTexStorage2DEXT_t)(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
		typedef void (GALGLPROC* glTexStorage3DEXT_t)(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
		typedef void (GALGLPROC* glWindowRectanglesEXT_t)(GLenum mode, GLsizei count, const GLint *box);
		typedef void (GALGLPROC* glApplyFramebufferAttachmentCMAAINTEL_t)(void);
		typedef void (GALGLPROC* glBeginPerfQueryINTEL_t)(GLuint queryHandle);
		typedef void (GALGLPROC* glCreatePerfQueryINTEL_t)(GLuint queryId, GLuint *queryHandle);
		typedef void (GALGLPROC* glDeletePerfQueryINTEL_t)(GLuint queryHandle);
		typedef void (GALGLPROC* glEndPerfQueryINTEL_t)(GLuint queryHandle);
		typedef void (GALGLPROC* glGetFirstPerfQueryIdINTEL_t)(GLuint *queryId);
		typedef void (GALGLPROC* glGetNextPerfQueryIdINTEL_t)(GLuint queryId, GLuint *nextQueryId);
		typedef void (GALGLPROC* glGetPerfCounterInfoINTEL_t)(GLuint queryId, GLuint counterId, GLuint counterNameLength, GLchar *counterName, GLuint counterDescLength, GLchar *counterDesc, GLuint *counterOffset, GLuint *counterDataSize, GLuint *counterTypeEnum, GLuint *counterDataTypeEnum, GLuint64 *rawCounterMaxValue);
		typedef void (GALGLPROC* glGetPerfQueryDataINTEL_t)(GLuint queryHandle, GLuint flags, GLsizei dataSize, void *data, GLuint *bytesWritten);
		typedef void (GALGLPROC* glGetPerfQueryIdByNameINTEL_t)(GLchar *queryName, GLuint *queryId);
		typedef void (GALGLPROC* glGetPerfQueryInfoINTEL_t)(GLuint queryId, GLuint queryNameLength, GLchar *queryName, GLuint *dataSize, GLuint *noCounters, GLuint *noInstances, GLuint *capsMask);
		typedef void (GALGLPROC* glFramebufferParameteriMESA_t)(GLenum target, GLenum pname, GLint param);
		typedef void (GALGLPROC* glGetFramebufferParameterivMESA_t)(GLenum target, GLenum pname, GLint *params);
		typedef void (GALGLPROC* glMultiDrawArraysIndirectBindlessNV_t)(GLenum mode, const void *indirect, GLsizei drawCount, GLsizei stride, GLint vertexBufferCount);
		typedef void (GALGLPROC* glMultiDrawElementsIndirectBindlessNV_t)(GLenum mode, GLenum type, const void *indirect, GLsizei drawCount, GLsizei stride, GLint vertexBufferCount);
		typedef void (GALGLPROC* glMultiDrawArraysIndirectBindlessCountNV_t)(GLenum mode, const void *indirect, GLsizei drawCount, GLsizei maxDrawCount, GLsizei stride, GLint vertexBufferCount);
		typedef void (GALGLPROC* glMultiDrawElementsIndirectBindlessCountNV_t)(GLenum mode, GLenum type, const void *indirect, GLsizei drawCount, GLsizei maxDrawCount, GLsizei stride, GLint vertexBufferCount);
		typedef GLuint64 (GALGLPROC* glGetTextureHandleNV_t)(GLuint texture);
		typedef GLuint64 (GALGLPROC* glGetTextureSamplerHandleNV_t)(GLuint texture, GLuint sampler);
		typedef void (GALGLPROC* glMakeTextureHandleResidentNV_t)(GLuint64 handle);
		typedef void (GALGLPROC* glMakeTextureHandleNonResidentNV_t)(GLuint64 handle);
		typedef GLuint64 (GALGLPROC* glGetImageHandleNV_t)(GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format);
		typedef void (GALGLPROC* glMakeImageHandleResidentNV_t)(GLuint64 handle, GLenum access);
		typedef void (GALGLPROC* glMakeImageHandleNonResidentNV_t)(GLuint64 handle);
		typedef void (GALGLPROC* glUniformHandleui64NV_t)(GLint location, GLuint64 value);
		typedef void (GALGLPROC* glUniformHandleui64vNV_t)(GLint location, GLsizei count, const GLuint64 *value);
		typedef void (GALGLPROC* glProgramUniformHandleui64NV_t)(GLuint program, GLint location, GLuint64 value);
		typedef void (GALGLPROC* glProgramUniformHandleui64vNV_t)(GLuint program, GLint location, GLsizei count, const GLuint64 *values);
		typedef GLboolean (GALGLPROC* glIsTextureHandleResidentNV_t)(GLuint64 handle);
		typedef GLboolean (GALGLPROC* glIsImageHandleResidentNV_t)(GLuint64 handle);
		typedef void (GALGLPROC* glBlendParameteriNV_t)(GLenum pname, GLint value);
		typedef void (GALGLPROC* glBlendBarrierNV_t)(void);
		typedef void (GALGLPROC* glViewportPositionWScaleNV_t)(GLuint index, GLfloat xcoeff, GLfloat ycoeff);
		typedef void (GALGLPROC* glCreateStatesNV_t)(GLsizei n, GLuint *states);
		typedef void (GALGLPROC* glDeleteStatesNV_t)(GLsizei n, const GLuint *states);
		typedef GLboolean (GALGLPROC* glIsStateNV_t)(GLuint state);
		typedef void (GALGLPROC* glStateCaptureNV_t)(GLuint state, GLenum mode);
		typedef GLuint (GALGLPROC* glGetCommandHeaderNV_t)(GLenum tokenID, GLuint size);
		typedef GLushort (GALGLPROC* glGetStageIndexNV_t)(GLenum shadertype);
		typedef void (GALGLPROC* glDrawCommandsNV_t)(GLenum primitiveMode, GLuint buffer, const GLintptr *indirects, const GLsizei *sizes, GLuint count);
		typedef void (GALGLPROC* glDrawCommandsAddressNV_t)(GLenum primitiveMode, const GLuint64 *indirects, const GLsizei *sizes, GLuint count);
		typedef void (GALGLPROC* glDrawCommandsStatesNV_t)(GLuint buffer, const GLintptr *indirects, const GLsizei *sizes, const GLuint *states, const GLuint *fbos, GLuint count);
		typedef void (GALGLPROC* glDrawCommandsStatesAddressNV_t)(const GLuint64 *indirects, const GLsizei *sizes, const GLuint *states, const GLuint *fbos, GLuint count);
		typedef void (GALGLPROC* glCreateCommandListsNV_t)(GLsizei n, GLuint *lists);
		typedef void (GALGLPROC* glDeleteCommandListsNV_t)(GLsizei n, const GLuint *lists);
		typedef GLboolean (GALGLPROC* glIsCommandListNV_t)(GLuint list);
		typedef void (GALGLPROC* glListDrawCommandsStatesClientNV_t)(GLuint list, GLuint segment, const void **indirects, const GLsizei *sizes, const GLuint *states, const GLuint *fbos, GLuint count);
		typedef void (GALGLPROC* glCommandListSegmentsNV_t)(GLuint list, GLuint segments);
		typedef void (GALGLPROC* glCompileCommandListNV_t)(GLuint list);
		typedef void (GALGLPROC* glCallCommandListNV_t)(GLuint list);
		typedef void (GALGLPROC* glBeginConditionalRenderNV_t)(GLuint id, GLenum mode);
		typedef void (GALGLPROC* glEndConditionalRenderNV_t)(void);
		typedef void (GALGLPROC* glSubpixelPrecisionBiasNV_t)(GLuint xbits, GLuint ybits);
		typedef void (GALGLPROC* glConservativeRasterParameterfNV_t)(GLenum pname, GLfloat value);
		typedef void (GALGLPROC* glConservativeRasterParameteriNV_t)(GLenum pname, GLint param);
		typedef void (GALGLPROC* glDepthRangedNV_t)(GLdouble zNear, GLdouble zFar);
		typedef void (GALGLPROC* glClearDepthdNV_t)(GLdouble depth);
		typedef void (GALGLPROC* glDepthBoundsdNV_t)(GLdouble zmin, GLdouble zmax);
		typedef void (GALGLPROC* glDrawVkImageNV_t)(GLuint64 vkImage, GLuint sampler, GLfloat x0, GLfloat y0, GLfloat x1, GLfloat y1, GLfloat z, GLfloat s0, GLfloat t0, GLfloat s1, GLfloat t1);
		typedef GLVULKANPROCNV (GALGLPROC* glGetVkProcAddrNV_t)(const GLchar *name);
		typedef void (GALGLPROC* glWaitVkSemaphoreNV_t)(GLuint64 vkSemaphore);
		typedef void (GALGLPROC* glSignalVkSemaphoreNV_t)(GLuint64 vkSemaphore);
		typedef void (GALGLPROC* glSignalVkFenceNV_t)(GLuint64 vkFence);
		typedef void (GALGLPROC* glFragmentCoverageColorNV_t)(GLuint color);
		typedef void (GALGLPROC* glCoverageModulationTableNV_t)(GLsizei n, const GLfloat *v);
		typedef void (GALGLPROC* glGetCoverageModulationTableNV_t)(GLsizei bufSize, GLfloat *v);
		typedef void (GALGLPROC* glCoverageModulationNV_t)(GLenum components);
		typedef void (GALGLPROC* glRenderbufferStorageMultisampleCoverageNV_t)(GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height);
		typedef void (GALGLPROC* glUniform1i64NV_t)(GLint location, GLint64EXT x);
		typedef void (GALGLPROC* glUniform2i64NV_t)(GLint location, GLint64EXT x, GLint64EXT y);
		typedef void (GALGLPROC* glUniform3i64NV_t)(GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z);
		typedef void (GALGLPROC* glUniform4i64NV_t)(GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w);
		typedef void (GALGLPROC* glUniform1i64vNV_t)(GLint location, GLsizei count, const GLint64EXT *value);
		typedef void (GALGLPROC* glUniform2i64vNV_t)(GLint location, GLsizei count, const GLint64EXT *value);
		typedef void (GALGLPROC* glUniform3i64vNV_t)(GLint location, GLsizei count, const GLint64EXT *value);
		typedef void (GALGLPROC* glUniform4i64vNV_t)(GLint location, GLsizei count, const GLint64EXT *value);
		typedef void (GALGLPROC* glUniform1ui64NV_t)(GLint location, GLuint64EXT x);
		typedef void (GALGLPROC* glUniform2ui64NV_t)(GLint location, GLuint64EXT x, GLuint64EXT y);
		typedef void (GALGLPROC* glUniform3ui64NV_t)(GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z);
		typedef void (GALGLPROC* glUniform4ui64NV_t)(GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w);
		typedef void (GALGLPROC* glUniform1ui64vNV_t)(GLint location, GLsizei count, const GLuint64EXT *value);
		typedef void (GALGLPROC* glUniform2ui64vNV_t)(GLint location, GLsizei count, const GLuint64EXT *value);
		typedef void (GALGLPROC* glUniform3ui64vNV_t)(GLint location, GLsizei count, const GLuint64EXT *value);
		typedef void (GALGLPROC* glUniform4ui64vNV_t)(GLint location, GLsizei count, const GLuint64EXT *value);
		typedef void (GALGLPROC* glGetUniformi64vNV_t)(GLuint program, GLint location, GLint64EXT *params);
		typedef void (GALGLPROC* glProgramUniform1i64NV_t)(GLuint program, GLint location, GLint64EXT x);
		typedef void (GALGLPROC* glProgramUniform2i64NV_t)(GLuint program, GLint location, GLint64EXT x, GLint64EXT y);
		typedef void (GALGLPROC* glProgramUniform3i64NV_t)(GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z);
		typedef void (GALGLPROC* glProgramUniform4i64NV_t)(GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w);
		typedef void (GALGLPROC* glProgramUniform1i64vNV_t)(GLuint program, GLint location, GLsizei count, const GLint64EXT *value);
		typedef void (GALGLPROC* glProgramUniform2i64vNV_t)(GLuint program, GLint location, GLsizei count, const GLint64EXT *value);
		typedef void (GALGLPROC* glProgramUniform3i64vNV_t)(GLuint program, GLint location, GLsizei count, const GLint64EXT *value);
		typedef void (GALGLPROC* glProgramUniform4i64vNV_t)(GLuint program, GLint location, GLsizei count, const GLint64EXT *value);
		typedef void (GALGLPROC* glProgramUniform1ui64NV_t)(GLuint program, GLint location, GLuint64EXT x);
		typedef void (GALGLPROC* glProgramUniform2ui64NV_t)(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y);
		typedef void (GALGLPROC* glProgramUniform3ui64NV_t)(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z);
		typedef void (GALGLPROC* glProgramUniform4ui64NV_t)(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w);
		typedef void (GALGLPROC* glProgramUniform1ui64vNV_t)(GLuint program, GLint location, GLsizei count, const GLuint64EXT *value);
		typedef void (GALGLPROC* glProgramUniform2ui64vNV_t)(GLuint program, GLint location, GLsizei count, const GLuint64EXT *value);
		typedef void (GALGLPROC* glProgramUniform3ui64vNV_t)(GLuint program, GLint location, GLsizei count, const GLuint64EXT *value);
		typedef void (GALGLPROC* glProgramUniform4ui64vNV_t)(GLuint program, GLint location, GLsizei count, const GLuint64EXT *value);
		typedef void (GALGLPROC* glGetInternalformatSampleivNV_t)(GLenum target, GLenum internalformat, GLsizei samples, GLenum pname, GLsizei count, GLint *params);
		typedef void (GALGLPROC* glGetMemoryObjectDetachedResourcesuivNV_t)(GLuint memory, GLenum pname, GLint first, GLsizei count, GLuint *params);
		typedef void (GALGLPROC* glResetMemoryObjectParameterNV_t)(GLuint memory, GLenum pname);
		typedef void (GALGLPROC* glTexAttachMemoryNV_t)(GLenum target, GLuint memory, GLuint64 offset);
		typedef void (GALGLPROC* glBufferAttachMemoryNV_t)(GLenum target, GLuint memory, GLuint64 offset);
		typedef void (GALGLPROC* glTextureAttachMemoryNV_t)(GLuint texture, GLuint memory, GLuint64 offset);
		typedef void (GALGLPROC* glNamedBufferAttachMemoryNV_t)(GLuint buffer, GLuint memory, GLuint64 offset);
		typedef void (GALGLPROC* glBufferPageCommitmentMemNV_t)(GLenum target, GLintptr offset, GLsizeiptr size, GLuint memory, GLuint64 memOffset, GLboolean commit);
		typedef void (GALGLPROC* glTexPageCommitmentMemNV_t)(GLenum target, GLint layer, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLuint memory, GLuint64 offset, GLboolean commit);
		typedef void (GALGLPROC* glNamedBufferPageCommitmentMemNV_t)(GLuint buffer, GLintptr offset, GLsizeiptr size, GLuint memory, GLuint64 memOffset, GLboolean commit);
		typedef void (GALGLPROC* glTexturePageCommitmentMemNV_t)(GLuint texture, GLint layer, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLuint memory, GLuint64 offset, GLboolean commit);
		typedef void (GALGLPROC* glDrawMeshTasksNV_t)(GLuint first, GLuint count);
		typedef void (GALGLPROC* glDrawMeshTasksIndirectNV_t)(GLintptr indirect);
		typedef void (GALGLPROC* glMultiDrawMeshTasksIndirectNV_t)(GLintptr indirect, GLsizei drawcount, GLsizei stride);
		typedef void (GALGLPROC* glMultiDrawMeshTasksIndirectCountNV_t)(GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
		typedef GLuint (GALGLPROC* glGenPathsNV_t)(GLsizei range);
		typedef void (GALGLPROC* glDeletePathsNV_t)(GLuint path, GLsizei range);
		typedef GLboolean (GALGLPROC* glIsPathNV_t)(GLuint path);
		typedef void (GALGLPROC* glPathCommandsNV_t)(GLuint path, GLsizei numCommands, const GLubyte *commands, GLsizei numCoords, GLenum coordType, const void *coords);
		typedef void (GALGLPROC* glPathCoordsNV_t)(GLuint path, GLsizei numCoords, GLenum coordType, const void *coords);
		typedef void (GALGLPROC* glPathSubCommandsNV_t)(GLuint path, GLsizei commandStart, GLsizei commandsToDelete, GLsizei numCommands, const GLubyte *commands, GLsizei numCoords, GLenum coordType, const void *coords);
		typedef void (GALGLPROC* glPathSubCoordsNV_t)(GLuint path, GLsizei coordStart, GLsizei numCoords, GLenum coordType, const void *coords);
		typedef void (GALGLPROC* glPathStringNV_t)(GLuint path, GLenum format, GLsizei length, const void *pathString);
		typedef void (GALGLPROC* glPathGlyphsNV_t)(GLuint firstPathName, GLenum fontTarget, const void *fontName, GLbitfield fontStyle, GLsizei numGlyphs, GLenum type, const void *charcodes, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale);
		typedef void (GALGLPROC* glPathGlyphRangeNV_t)(GLuint firstPathName, GLenum fontTarget, const void *fontName, GLbitfield fontStyle, GLuint firstGlyph, GLsizei numGlyphs, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale);
		typedef void (GALGLPROC* glWeightPathsNV_t)(GLuint resultPath, GLsizei numPaths, const GLuint *paths, const GLfloat *weights);
		typedef void (GALGLPROC* glCopyPathNV_t)(GLuint resultPath, GLuint srcPath);
		typedef void (GALGLPROC* glInterpolatePathsNV_t)(GLuint resultPath, GLuint pathA, GLuint pathB, GLfloat weight);
		typedef void (GALGLPROC* glTransformPathNV_t)(GLuint resultPath, GLuint srcPath, GLenum transformType, const GLfloat *transformValues);
		typedef void (GALGLPROC* glPathParameterivNV_t)(GLuint path, GLenum pname, const GLint *value);
		typedef void (GALGLPROC* glPathParameteriNV_t)(GLuint path, GLenum pname, GLint value);
		typedef void (GALGLPROC* glPathParameterfvNV_t)(GLuint path, GLenum pname, const GLfloat *value);
		typedef void (GALGLPROC* glPathParameterfNV_t)(GLuint path, GLenum pname, GLfloat value);
		typedef void (GALGLPROC* glPathDashArrayNV_t)(GLuint path, GLsizei dashCount, const GLfloat *dashArray);
		typedef void (GALGLPROC* glPathStencilFuncNV_t)(GLenum func, GLint ref, GLuint mask);
		typedef void (GALGLPROC* glPathStencilDepthOffsetNV_t)(GLfloat factor, GLfloat units);
		typedef void (GALGLPROC* glStencilFillPathNV_t)(GLuint path, GLenum fillMode, GLuint mask);
		typedef void (GALGLPROC* glStencilStrokePathNV_t)(GLuint path, GLint reference, GLuint mask);
		typedef void (GALGLPROC* glStencilFillPathInstancedNV_t)(GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum transformType, const GLfloat *transformValues);
		typedef void (GALGLPROC* glStencilStrokePathInstancedNV_t)(GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLint reference, GLuint mask, GLenum transformType, const GLfloat *transformValues);
		typedef void (GALGLPROC* glPathCoverDepthFuncNV_t)(GLenum func);
		typedef void (GALGLPROC* glCoverFillPathNV_t)(GLuint path, GLenum coverMode);
		typedef void (GALGLPROC* glCoverStrokePathNV_t)(GLuint path, GLenum coverMode);
		typedef void (GALGLPROC* glCoverFillPathInstancedNV_t)(GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat *transformValues);
		typedef void (GALGLPROC* glCoverStrokePathInstancedNV_t)(GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat *transformValues);
		typedef void (GALGLPROC* glGetPathParameterivNV_t)(GLuint path, GLenum pname, GLint *value);
		typedef void (GALGLPROC* glGetPathParameterfvNV_t)(GLuint path, GLenum pname, GLfloat *value);
		typedef void (GALGLPROC* glGetPathCommandsNV_t)(GLuint path, GLubyte *commands);
		typedef void (GALGLPROC* glGetPathCoordsNV_t)(GLuint path, GLfloat *coords);
		typedef void (GALGLPROC* glGetPathDashArrayNV_t)(GLuint path, GLfloat *dashArray);
		typedef void (GALGLPROC* glGetPathMetricsNV_t)(GLbitfield metricQueryMask, GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLsizei stride, GLfloat *metrics);
		typedef void (GALGLPROC* glGetPathMetricRangeNV_t)(GLbitfield metricQueryMask, GLuint firstPathName, GLsizei numPaths, GLsizei stride, GLfloat *metrics);
		typedef void (GALGLPROC* glGetPathSpacingNV_t)(GLenum pathListMode, GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLfloat advanceScale, GLfloat kerningScale, GLenum transformType, GLfloat *returnedSpacing);
		typedef GLboolean (GALGLPROC* glIsPointInFillPathNV_t)(GLuint path, GLuint mask, GLfloat x, GLfloat y);
		typedef GLboolean (GALGLPROC* glIsPointInStrokePathNV_t)(GLuint path, GLfloat x, GLfloat y);
		typedef GLfloat (GALGLPROC* glGetPathLengthNV_t)(GLuint path, GLsizei startSegment, GLsizei numSegments);
		typedef GLboolean (GALGLPROC* glPointAlongPathNV_t)(GLuint path, GLsizei startSegment, GLsizei numSegments, GLfloat distance, GLfloat *x, GLfloat *y, GLfloat *tangentX, GLfloat *tangentY);
		typedef void (GALGLPROC* glMatrixLoad3x2fNV_t)(GLenum matrixMode, const GLfloat *m);
		typedef void (GALGLPROC* glMatrixLoad3x3fNV_t)(GLenum matrixMode, const GLfloat *m);
		typedef void (GALGLPROC* glMatrixLoadTranspose3x3fNV_t)(GLenum matrixMode, const GLfloat *m);
		typedef void (GALGLPROC* glMatrixMult3x2fNV_t)(GLenum matrixMode, const GLfloat *m);
		typedef void (GALGLPROC* glMatrixMult3x3fNV_t)(GLenum matrixMode, const GLfloat *m);
		typedef void (GALGLPROC* glMatrixMultTranspose3x3fNV_t)(GLenum matrixMode, const GLfloat *m);
		typedef void (GALGLPROC* glStencilThenCoverFillPathNV_t)(GLuint path, GLenum fillMode, GLuint mask, GLenum coverMode);
		typedef void (GALGLPROC* glStencilThenCoverStrokePathNV_t)(GLuint path, GLint reference, GLuint mask, GLenum coverMode);
		typedef void (GALGLPROC* glStencilThenCoverFillPathInstancedNV_t)(GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat *transformValues);
		typedef void (GALGLPROC* glStencilThenCoverStrokePathInstancedNV_t)(GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLint reference, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat *transformValues);
		typedef GLenum (GALGLPROC* glPathGlyphIndexRangeNV_t)(GLenum fontTarget, const void *fontName, GLbitfield fontStyle, GLuint pathParameterTemplate, GLfloat emScale, GLuint *baseAndCount);
		typedef GLenum (GALGLPROC* glPathGlyphIndexArrayNV_t)(GLuint firstPathName, GLenum fontTarget, const void *fontName, GLbitfield fontStyle, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale);
		typedef GLenum (GALGLPROC* glPathMemoryGlyphIndexArrayNV_t)(GLuint firstPathName, GLenum fontTarget, GLsizeiptr fontSize, const void *fontData, GLsizei faceIndex, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale);
		typedef void (GALGLPROC* glProgramPathFragmentInputGenNV_t)(GLuint program, GLint location, GLenum genMode, GLint components, const GLfloat *coeffs);
		typedef void (GALGLPROC* glGetProgramResourcefvNV_t)(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum *props, GLsizei count, GLsizei *length, GLfloat *params);
		typedef void (GALGLPROC* glFramebufferSampleLocationsfvNV_t)(GLenum target, GLuint start, GLsizei count, const GLfloat *v);
		typedef void (GALGLPROC* glNamedFramebufferSampleLocationsfvNV_t)(GLuint framebuffer, GLuint start, GLsizei count, const GLfloat *v);
		typedef void (GALGLPROC* glResolveDepthValuesNV_t)(void);
		typedef void (GALGLPROC* glScissorExclusiveNV_t)(GLint x, GLint y, GLsizei width, GLsizei height);
		typedef void (GALGLPROC* glScissorExclusiveArrayvNV_t)(GLuint first, GLsizei count, const GLint *v);
		typedef void (GALGLPROC* glMakeBufferResidentNV_t)(GLenum target, GLenum access);
		typedef void (GALGLPROC* glMakeBufferNonResidentNV_t)(GLenum target);
		typedef GLboolean (GALGLPROC* glIsBufferResidentNV_t)(GLenum target);
		typedef void (GALGLPROC* glMakeNamedBufferResidentNV_t)(GLuint buffer, GLenum access);
		typedef void (GALGLPROC* glMakeNamedBufferNonResidentNV_t)(GLuint buffer);
		typedef GLboolean (GALGLPROC* glIsNamedBufferResidentNV_t)(GLuint buffer);
		typedef void (GALGLPROC* glGetBufferParameterui64vNV_t)(GLenum target, GLenum pname, GLuint64EXT *params);
		typedef void (GALGLPROC* glGetNamedBufferParameterui64vNV_t)(GLuint buffer, GLenum pname, GLuint64EXT *params);
		typedef void (GALGLPROC* glGetIntegerui64vNV_t)(GLenum value, GLuint64EXT *result);
		typedef void (GALGLPROC* glUniformui64NV_t)(GLint location, GLuint64EXT value);
		typedef void (GALGLPROC* glUniformui64vNV_t)(GLint location, GLsizei count, const GLuint64EXT *value);
		typedef void (GALGLPROC* glGetUniformui64vNV_t)(GLuint program, GLint location, GLuint64EXT *params);
		typedef void (GALGLPROC* glProgramUniformui64NV_t)(GLuint program, GLint location, GLuint64EXT value);
		typedef void (GALGLPROC* glProgramUniformui64vNV_t)(GLuint program, GLint location, GLsizei count, const GLuint64EXT *value);
		typedef void (GALGLPROC* glBindShadingRateImageNV_t)(GLuint texture);
		typedef void (GALGLPROC* glGetShadingRateImagePaletteNV_t)(GLuint viewport, GLuint entry, GLenum *rate);
		typedef void (GALGLPROC* glGetShadingRateSampleLocationivNV_t)(GLenum rate, GLuint samples, GLuint index, GLint *location);
		typedef void (GALGLPROC* glShadingRateImageBarrierNV_t)(GLboolean synchronize);
		typedef void (GALGLPROC* glShadingRateImagePaletteNV_t)(GLuint viewport, GLuint first, GLsizei count, const GLenum *rates);
		typedef void (GALGLPROC* glShadingRateSampleOrderNV_t)(GLenum order);
		typedef void (GALGLPROC* glShadingRateSampleOrderCustomNV_t)(GLenum rate, GLuint samples, const GLint *locations);
		typedef void (GALGLPROC* glTextureBarrierNV_t)(void);
		typedef void (GALGLPROC* glVertexAttribL1i64NV_t)(GLuint index, GLint64EXT x);
		typedef void (GALGLPROC* glVertexAttribL2i64NV_t)(GLuint index, GLint64EXT x, GLint64EXT y);
		typedef void (GALGLPROC* glVertexAttribL3i64NV_t)(GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z);
		typedef void (GALGLPROC* glVertexAttribL4i64NV_t)(GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w);
		typedef void (GALGLPROC* glVertexAttribL1i64vNV_t)(GLuint index, const GLint64EXT *v);
		typedef void (GALGLPROC* glVertexAttribL2i64vNV_t)(GLuint index, const GLint64EXT *v);
		typedef void (GALGLPROC* glVertexAttribL3i64vNV_t)(GLuint index, const GLint64EXT *v);
		typedef void (GALGLPROC* glVertexAttribL4i64vNV_t)(GLuint index, const GLint64EXT *v);
		typedef void (GALGLPROC* glVertexAttribL1ui64NV_t)(GLuint index, GLuint64EXT x);
		typedef void (GALGLPROC* glVertexAttribL2ui64NV_t)(GLuint index, GLuint64EXT x, GLuint64EXT y);
		typedef void (GALGLPROC* glVertexAttribL3ui64NV_t)(GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z);
		typedef void (GALGLPROC* glVertexAttribL4ui64NV_t)(GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w);
		typedef void (GALGLPROC* glVertexAttribL1ui64vNV_t)(GLuint index, const GLuint64EXT *v);
		typedef void (GALGLPROC* glVertexAttribL2ui64vNV_t)(GLuint index, const GLuint64EXT *v);
		typedef void (GALGLPROC* glVertexAttribL3ui64vNV_t)(GLuint index, const GLuint64EXT *v);
		typedef void (GALGLPROC* glVertexAttribL4ui64vNV_t)(GLuint index, const GLuint64EXT *v);
		typedef void (GALGLPROC* glGetVertexAttribLi64vNV_t)(GLuint index, GLenum pname, GLint64EXT *params);
		typedef void (GALGLPROC* glGetVertexAttribLui64vNV_t)(GLuint index, GLenum pname, GLuint64EXT *params);
		typedef void (GALGLPROC* glVertexAttribLFormatNV_t)(GLuint index, GLint size, GLenum type, GLsizei stride);
		typedef void (GALGLPROC* glBufferAddressRangeNV_t)(GLenum pname, GLuint index, GLuint64EXT address, GLsizeiptr length);
		typedef void (GALGLPROC* glVertexFormatNV_t)(GLint size, GLenum type, GLsizei stride);
		typedef void (GALGLPROC* glNormalFormatNV_t)(GLenum type, GLsizei stride);
		typedef void (GALGLPROC* glColorFormatNV_t)(GLint size, GLenum type, GLsizei stride);
		typedef void (GALGLPROC* glIndexFormatNV_t)(GLenum type, GLsizei stride);
		typedef void (GALGLPROC* glTexCoordFormatNV_t)(GLint size, GLenum type, GLsizei stride);
		typedef void (GALGLPROC* glEdgeFlagFormatNV_t)(GLsizei stride);
		typedef void (GALGLPROC* glSecondaryColorFormatNV_t)(GLint size, GLenum type, GLsizei stride);
		typedef void (GALGLPROC* glFogCoordFormatNV_t)(GLenum type, GLsizei stride);
		typedef void (GALGLPROC* glVertexAttribFormatNV_t)(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride);
		typedef void (GALGLPROC* glVertexAttribIFormatNV_t)(GLuint index, GLint size, GLenum type, GLsizei stride);
		typedef void (GALGLPROC* glGetIntegerui64i_vNV_t)(GLenum value, GLuint index, GLuint64EXT *result);
		typedef void (GALGLPROC* glViewportSwizzleNV_t)(GLuint index, GLenum swizzlex, GLenum swizzley, GLenum swizzlez, GLenum swizzlew);
		typedef void (GALGLPROC* glFramebufferTextureMultiviewOVR_t)(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint baseViewIndex, GLsizei numViews);
	};

	struct {
		FuncDef::glCullFace_t CullFace;
		FuncDef::glFrontFace_t FrontFace;
		FuncDef::glHint_t Hint;
		FuncDef::glLineWidth_t LineWidth;
		FuncDef::glPointSize_t PointSize;
		FuncDef::glPolygonMode_t PolygonMode;
		FuncDef::glScissor_t Scissor;
		FuncDef::glTexParameterf_t TexParameterf;
		FuncDef::glTexParameterfv_t TexParameterfv;
		FuncDef::glTexParameteri_t TexParameteri;
		FuncDef::glTexParameteriv_t TexParameteriv;
		FuncDef::glTexImage1D_t TexImage1D;
		FuncDef::glTexImage2D_t TexImage2D;
		FuncDef::glDrawBuffer_t DrawBuffer;
		FuncDef::glClear_t Clear;
		FuncDef::glClearColor_t ClearColor;
		FuncDef::glClearStencil_t ClearStencil;
		FuncDef::glClearDepth_t ClearDepth;
		FuncDef::glStencilMask_t StencilMask;
		FuncDef::glColorMask_t ColorMask;
		FuncDef::glDepthMask_t DepthMask;
		FuncDef::glDisable_t Disable;
		FuncDef::glEnable_t Enable;
		FuncDef::glFinish_t Finish;
		FuncDef::glFlush_t Flush;
		FuncDef::glBlendFunc_t BlendFunc;
		FuncDef::glLogicOp_t LogicOp;
		FuncDef::glStencilFunc_t StencilFunc;
		FuncDef::glStencilOp_t StencilOp;
		FuncDef::glDepthFunc_t DepthFunc;
		FuncDef::glPixelStoref_t PixelStoref;
		FuncDef::glPixelStorei_t PixelStorei;
		FuncDef::glReadBuffer_t ReadBuffer;
		FuncDef::glReadPixels_t ReadPixels;
		FuncDef::glGetBooleanv_t GetBooleanv;
		FuncDef::glGetDoublev_t GetDoublev;
		FuncDef::glGetError_t GetError;
		FuncDef::glGetFloatv_t GetFloatv;
		FuncDef::glGetIntegerv_t GetIntegerv;
		FuncDef::glGetString_t GetString;
		FuncDef::glGetTexImage_t GetTexImage;
		FuncDef::glGetTexParameterfv_t GetTexParameterfv;
		FuncDef::glGetTexParameteriv_t GetTexParameteriv;
		FuncDef::glGetTexLevelParameterfv_t GetTexLevelParameterfv;
		FuncDef::glGetTexLevelParameteriv_t GetTexLevelParameteriv;
		FuncDef::glIsEnabled_t IsEnabled;
		FuncDef::glDepthRange_t DepthRange;
		FuncDef::glViewport_t Viewport;
		FuncDef::glDrawArrays_t DrawArrays;
		FuncDef::glDrawElements_t DrawElements;
		FuncDef::glGetPointerv_t GetPointerv;
		FuncDef::glPolygonOffset_t PolygonOffset;
		FuncDef::glCopyTexImage1D_t CopyTexImage1D;
		FuncDef::glCopyTexImage2D_t CopyTexImage2D;
		FuncDef::glCopyTexSubImage1D_t CopyTexSubImage1D;
		FuncDef::glCopyTexSubImage2D_t CopyTexSubImage2D;
		FuncDef::glTexSubImage1D_t TexSubImage1D;
		FuncDef::glTexSubImage2D_t TexSubImage2D;
		FuncDef::glBindTexture_t BindTexture;
		FuncDef::glDeleteTextures_t DeleteTextures;
		FuncDef::glGenTextures_t GenTextures;
		FuncDef::glIsTexture_t IsTexture;
		FuncDef::glDrawRangeElements_t DrawRangeElements;
		FuncDef::glTexImage3D_t TexImage3D;
		FuncDef::glTexSubImage3D_t TexSubImage3D;
		FuncDef::glCopyTexSubImage3D_t CopyTexSubImage3D;
		FuncDef::glActiveTexture_t ActiveTexture;
		FuncDef::glSampleCoverage_t SampleCoverage;
		FuncDef::glCompressedTexImage3D_t CompressedTexImage3D;
		FuncDef::glCompressedTexImage2D_t CompressedTexImage2D;
		FuncDef::glCompressedTexImage1D_t CompressedTexImage1D;
		FuncDef::glCompressedTexSubImage3D_t CompressedTexSubImage3D;
		FuncDef::glCompressedTexSubImage2D_t CompressedTexSubImage2D;
		FuncDef::glCompressedTexSubImage1D_t CompressedTexSubImage1D;
		FuncDef::glGetCompressedTexImage_t GetCompressedTexImage;
		FuncDef::glBlendFuncSeparate_t BlendFuncSeparate;
		FuncDef::glMultiDrawArrays_t MultiDrawArrays;
		FuncDef::glMultiDrawElements_t MultiDrawElements;
		FuncDef::glPointParameterf_t PointParameterf;
		FuncDef::glPointParameterfv_t PointParameterfv;
		FuncDef::glPointParameteri_t PointParameteri;
		FuncDef::glPointParameteriv_t PointParameteriv;
		FuncDef::glBlendColor_t BlendColor;
		FuncDef::glBlendEquation_t BlendEquation;
		FuncDef::glGenQueries_t GenQueries;
		FuncDef::glDeleteQueries_t DeleteQueries;
		FuncDef::glIsQuery_t IsQuery;
		FuncDef::glBeginQuery_t BeginQuery;
		FuncDef::glEndQuery_t EndQuery;
		FuncDef::glGetQueryiv_t GetQueryiv;
		FuncDef::glGetQueryObjectiv_t GetQueryObjectiv;
		FuncDef::glGetQueryObjectuiv_t GetQueryObjectuiv;
		FuncDef::glBindBuffer_t BindBuffer;
		FuncDef::glDeleteBuffers_t DeleteBuffers;
		FuncDef::glGenBuffers_t GenBuffers;
		FuncDef::glIsBuffer_t IsBuffer;
		FuncDef::glBufferData_t BufferData;
		FuncDef::glBufferSubData_t BufferSubData;
		FuncDef::glGetBufferSubData_t GetBufferSubData;
		FuncDef::glMapBuffer_t MapBuffer;
		FuncDef::glUnmapBuffer_t UnmapBuffer;
		FuncDef::glGetBufferParameteriv_t GetBufferParameteriv;
		FuncDef::glGetBufferPointerv_t GetBufferPointerv;
		FuncDef::glBlendEquationSeparate_t BlendEquationSeparate;
		FuncDef::glDrawBuffers_t DrawBuffers;
		FuncDef::glStencilOpSeparate_t StencilOpSeparate;
		FuncDef::glStencilFuncSeparate_t StencilFuncSeparate;
		FuncDef::glStencilMaskSeparate_t StencilMaskSeparate;
		FuncDef::glAttachShader_t AttachShader;
		FuncDef::glBindAttribLocation_t BindAttribLocation;
		FuncDef::glCompileShader_t CompileShader;
		FuncDef::glCreateProgram_t CreateProgram;
		FuncDef::glCreateShader_t CreateShader;
		FuncDef::glDeleteProgram_t DeleteProgram;
		FuncDef::glDeleteShader_t DeleteShader;
		FuncDef::glDetachShader_t DetachShader;
		FuncDef::glDisableVertexAttribArray_t DisableVertexAttribArray;
		FuncDef::glEnableVertexAttribArray_t EnableVertexAttribArray;
		FuncDef::glGetActiveAttrib_t GetActiveAttrib;
		FuncDef::glGetActiveUniform_t GetActiveUniform;
		FuncDef::glGetAttachedShaders_t GetAttachedShaders;
		FuncDef::glGetAttribLocation_t GetAttribLocation;
		FuncDef::glGetProgramiv_t GetProgramiv;
		FuncDef::glGetProgramInfoLog_t GetProgramInfoLog;
		FuncDef::glGetShaderiv_t GetShaderiv;
		FuncDef::glGetShaderInfoLog_t GetShaderInfoLog;
		FuncDef::glGetShaderSource_t GetShaderSource;
		FuncDef::glGetUniformLocation_t GetUniformLocation;
		FuncDef::glGetUniformfv_t GetUniformfv;
		FuncDef::glGetUniformiv_t GetUniformiv;
		FuncDef::glGetVertexAttribdv_t GetVertexAttribdv;
		FuncDef::glGetVertexAttribfv_t GetVertexAttribfv;
		FuncDef::glGetVertexAttribiv_t GetVertexAttribiv;
		FuncDef::glGetVertexAttribPointerv_t GetVertexAttribPointerv;
		FuncDef::glIsProgram_t IsProgram;
		FuncDef::glIsShader_t IsShader;
		FuncDef::glLinkProgram_t LinkProgram;
		FuncDef::glShaderSource_t ShaderSource;
		FuncDef::glUseProgram_t UseProgram;
		FuncDef::glUniform1f_t Uniform1f;
		FuncDef::glUniform2f_t Uniform2f;
		FuncDef::glUniform3f_t Uniform3f;
		FuncDef::glUniform4f_t Uniform4f;
		FuncDef::glUniform1i_t Uniform1i;
		FuncDef::glUniform2i_t Uniform2i;
		FuncDef::glUniform3i_t Uniform3i;
		FuncDef::glUniform4i_t Uniform4i;
		FuncDef::glUniform1fv_t Uniform1fv;
		FuncDef::glUniform2fv_t Uniform2fv;
		FuncDef::glUniform3fv_t Uniform3fv;
		FuncDef::glUniform4fv_t Uniform4fv;
		FuncDef::glUniform1iv_t Uniform1iv;
		FuncDef::glUniform2iv_t Uniform2iv;
		FuncDef::glUniform3iv_t Uniform3iv;
		FuncDef::glUniform4iv_t Uniform4iv;
		FuncDef::glUniformMatrix2fv_t UniformMatrix2fv;
		FuncDef::glUniformMatrix3fv_t UniformMatrix3fv;
		FuncDef::glUniformMatrix4fv_t UniformMatrix4fv;
		FuncDef::glValidateProgram_t ValidateProgram;
		FuncDef::glVertexAttrib1d_t VertexAttrib1d;
		FuncDef::glVertexAttrib1dv_t VertexAttrib1dv;
		FuncDef::glVertexAttrib1f_t VertexAttrib1f;
		FuncDef::glVertexAttrib1fv_t VertexAttrib1fv;
		FuncDef::glVertexAttrib1s_t VertexAttrib1s;
		FuncDef::glVertexAttrib1sv_t VertexAttrib1sv;
		FuncDef::glVertexAttrib2d_t VertexAttrib2d;
		FuncDef::glVertexAttrib2dv_t VertexAttrib2dv;
		FuncDef::glVertexAttrib2f_t VertexAttrib2f;
		FuncDef::glVertexAttrib2fv_t VertexAttrib2fv;
		FuncDef::glVertexAttrib2s_t VertexAttrib2s;
		FuncDef::glVertexAttrib2sv_t VertexAttrib2sv;
		FuncDef::glVertexAttrib3d_t VertexAttrib3d;
		FuncDef::glVertexAttrib3dv_t VertexAttrib3dv;
		FuncDef::glVertexAttrib3f_t VertexAttrib3f;
		FuncDef::glVertexAttrib3fv_t VertexAttrib3fv;
		FuncDef::glVertexAttrib3s_t VertexAttrib3s;
		FuncDef::glVertexAttrib3sv_t VertexAttrib3sv;
		FuncDef::glVertexAttrib4Nbv_t VertexAttrib4Nbv;
		FuncDef::glVertexAttrib4Niv_t VertexAttrib4Niv;
		FuncDef::glVertexAttrib4Nsv_t VertexAttrib4Nsv;
		FuncDef::glVertexAttrib4Nub_t VertexAttrib4Nub;
		FuncDef::glVertexAttrib4Nubv_t VertexAttrib4Nubv;
		FuncDef::glVertexAttrib4Nuiv_t VertexAttrib4Nuiv;
		FuncDef::glVertexAttrib4Nusv_t VertexAttrib4Nusv;
		FuncDef::glVertexAttrib4bv_t VertexAttrib4bv;
		FuncDef::glVertexAttrib4d_t VertexAttrib4d;
		FuncDef::glVertexAttrib4dv_t VertexAttrib4dv;
		FuncDef::glVertexAttrib4f_t VertexAttrib4f;
		FuncDef::glVertexAttrib4fv_t VertexAttrib4fv;
		FuncDef::glVertexAttrib4iv_t VertexAttrib4iv;
		FuncDef::glVertexAttrib4s_t VertexAttrib4s;
		FuncDef::glVertexAttrib4sv_t VertexAttrib4sv;
		FuncDef::glVertexAttrib4ubv_t VertexAttrib4ubv;
		FuncDef::glVertexAttrib4uiv_t VertexAttrib4uiv;
		FuncDef::glVertexAttrib4usv_t VertexAttrib4usv;
		FuncDef::glVertexAttribPointer_t VertexAttribPointer;
		FuncDef::glUniformMatrix2x3fv_t UniformMatrix2x3fv;
		FuncDef::glUniformMatrix3x2fv_t UniformMatrix3x2fv;
		FuncDef::glUniformMatrix2x4fv_t UniformMatrix2x4fv;
		FuncDef::glUniformMatrix4x2fv_t UniformMatrix4x2fv;
		FuncDef::glUniformMatrix3x4fv_t UniformMatrix3x4fv;
		FuncDef::glUniformMatrix4x3fv_t UniformMatrix4x3fv;
		FuncDef::glColorMaski_t ColorMaski;
		FuncDef::glGetBooleani_v_t GetBooleani_v;
		FuncDef::glGetIntegeri_v_t GetIntegeri_v;
		FuncDef::glEnablei_t Enablei;
		FuncDef::glDisablei_t Disablei;
		FuncDef::glIsEnabledi_t IsEnabledi;
		FuncDef::glBeginTransformFeedback_t BeginTransformFeedback;
		FuncDef::glEndTransformFeedback_t EndTransformFeedback;
		FuncDef::glBindBufferRange_t BindBufferRange;
		FuncDef::glBindBufferBase_t BindBufferBase;
		FuncDef::glTransformFeedbackVaryings_t TransformFeedbackVaryings;
		FuncDef::glGetTransformFeedbackVarying_t GetTransformFeedbackVarying;
		FuncDef::glClampColor_t ClampColor;
		FuncDef::glBeginConditionalRender_t BeginConditionalRender;
		FuncDef::glEndConditionalRender_t EndConditionalRender;
		FuncDef::glVertexAttribIPointer_t VertexAttribIPointer;
		FuncDef::glGetVertexAttribIiv_t GetVertexAttribIiv;
		FuncDef::glGetVertexAttribIuiv_t GetVertexAttribIuiv;
		FuncDef::glVertexAttribI1i_t VertexAttribI1i;
		FuncDef::glVertexAttribI2i_t VertexAttribI2i;
		FuncDef::glVertexAttribI3i_t VertexAttribI3i;
		FuncDef::glVertexAttribI4i_t VertexAttribI4i;
		FuncDef::glVertexAttribI1ui_t VertexAttribI1ui;
		FuncDef::glVertexAttribI2ui_t VertexAttribI2ui;
		FuncDef::glVertexAttribI3ui_t VertexAttribI3ui;
		FuncDef::glVertexAttribI4ui_t VertexAttribI4ui;
		FuncDef::glVertexAttribI1iv_t VertexAttribI1iv;
		FuncDef::glVertexAttribI2iv_t VertexAttribI2iv;
		FuncDef::glVertexAttribI3iv_t VertexAttribI3iv;
		FuncDef::glVertexAttribI4iv_t VertexAttribI4iv;
		FuncDef::glVertexAttribI1uiv_t VertexAttribI1uiv;
		FuncDef::glVertexAttribI2uiv_t VertexAttribI2uiv;
		FuncDef::glVertexAttribI3uiv_t VertexAttribI3uiv;
		FuncDef::glVertexAttribI4uiv_t VertexAttribI4uiv;
		FuncDef::glVertexAttribI4bv_t VertexAttribI4bv;
		FuncDef::glVertexAttribI4sv_t VertexAttribI4sv;
		FuncDef::glVertexAttribI4ubv_t VertexAttribI4ubv;
		FuncDef::glVertexAttribI4usv_t VertexAttribI4usv;
		FuncDef::glGetUniformuiv_t GetUniformuiv;
		FuncDef::glBindFragDataLocation_t BindFragDataLocation;
		FuncDef::glGetFragDataLocation_t GetFragDataLocation;
		FuncDef::glUniform1ui_t Uniform1ui;
		FuncDef::glUniform2ui_t Uniform2ui;
		FuncDef::glUniform3ui_t Uniform3ui;
		FuncDef::glUniform4ui_t Uniform4ui;
		FuncDef::glUniform1uiv_t Uniform1uiv;
		FuncDef::glUniform2uiv_t Uniform2uiv;
		FuncDef::glUniform3uiv_t Uniform3uiv;
		FuncDef::glUniform4uiv_t Uniform4uiv;
		FuncDef::glTexParameterIiv_t TexParameterIiv;
		FuncDef::glTexParameterIuiv_t TexParameterIuiv;
		FuncDef::glGetTexParameterIiv_t GetTexParameterIiv;
		FuncDef::glGetTexParameterIuiv_t GetTexParameterIuiv;
		FuncDef::glClearBufferiv_t ClearBufferiv;
		FuncDef::glClearBufferuiv_t ClearBufferuiv;
		FuncDef::glClearBufferfv_t ClearBufferfv;
		FuncDef::glClearBufferfi_t ClearBufferfi;
		FuncDef::glGetStringi_t GetStringi;
		FuncDef::glIsRenderbuffer_t IsRenderbuffer;
		FuncDef::glBindRenderbuffer_t BindRenderbuffer;
		FuncDef::glDeleteRenderbuffers_t DeleteRenderbuffers;
		FuncDef::glGenRenderbuffers_t GenRenderbuffers;
		FuncDef::glRenderbufferStorage_t RenderbufferStorage;
		FuncDef::glGetRenderbufferParameteriv_t GetRenderbufferParameteriv;
		FuncDef::glIsFramebuffer_t IsFramebuffer;
		FuncDef::glBindFramebuffer_t BindFramebuffer;
		FuncDef::glDeleteFramebuffers_t DeleteFramebuffers;
		FuncDef::glGenFramebuffers_t GenFramebuffers;
		FuncDef::glCheckFramebufferStatus_t CheckFramebufferStatus;
		FuncDef::glFramebufferTexture1D_t FramebufferTexture1D;
		FuncDef::glFramebufferTexture2D_t FramebufferTexture2D;
		FuncDef::glFramebufferTexture3D_t FramebufferTexture3D;
		FuncDef::glFramebufferRenderbuffer_t FramebufferRenderbuffer;
		FuncDef::glGetFramebufferAttachmentParameteriv_t GetFramebufferAttachmentParameteriv;
		FuncDef::glGenerateMipmap_t GenerateMipmap;
		FuncDef::glBlitFramebuffer_t BlitFramebuffer;
		FuncDef::glRenderbufferStorageMultisample_t RenderbufferStorageMultisample;
		FuncDef::glFramebufferTextureLayer_t FramebufferTextureLayer;
		FuncDef::glMapBufferRange_t MapBufferRange;
		FuncDef::glFlushMappedBufferRange_t FlushMappedBufferRange;
		FuncDef::glBindVertexArray_t BindVertexArray;
		FuncDef::glDeleteVertexArrays_t DeleteVertexArrays;
		FuncDef::glGenVertexArrays_t GenVertexArrays;
		FuncDef::glIsVertexArray_t IsVertexArray;
		FuncDef::glDrawArraysInstanced_t DrawArraysInstanced;
		FuncDef::glDrawElementsInstanced_t DrawElementsInstanced;
		FuncDef::glTexBuffer_t TexBuffer;
		FuncDef::glPrimitiveRestartIndex_t PrimitiveRestartIndex;
		FuncDef::glCopyBufferSubData_t CopyBufferSubData;
		FuncDef::glGetUniformIndices_t GetUniformIndices;
		FuncDef::glGetActiveUniformsiv_t GetActiveUniformsiv;
		FuncDef::glGetActiveUniformName_t GetActiveUniformName;
		FuncDef::glGetUniformBlockIndex_t GetUniformBlockIndex;
		FuncDef::glGetActiveUniformBlockiv_t GetActiveUniformBlockiv;
		FuncDef::glGetActiveUniformBlockName_t GetActiveUniformBlockName;
		FuncDef::glUniformBlockBinding_t UniformBlockBinding;
		FuncDef::glDrawElementsBaseVertex_t DrawElementsBaseVertex;
		FuncDef::glDrawRangeElementsBaseVertex_t DrawRangeElementsBaseVertex;
		FuncDef::glDrawElementsInstancedBaseVertex_t DrawElementsInstancedBaseVertex;
		FuncDef::glMultiDrawElementsBaseVertex_t MultiDrawElementsBaseVertex;
		FuncDef::glProvokingVertex_t ProvokingVertex;
		FuncDef::glFenceSync_t FenceSync;
		FuncDef::glIsSync_t IsSync;
		FuncDef::glDeleteSync_t DeleteSync;
		FuncDef::glClientWaitSync_t ClientWaitSync;
		FuncDef::glWaitSync_t WaitSync;
		FuncDef::glGetInteger64v_t GetInteger64v;
		FuncDef::glGetSynciv_t GetSynciv;
		FuncDef::glGetInteger64i_v_t GetInteger64i_v;
		FuncDef::glGetBufferParameteri64v_t GetBufferParameteri64v;
		FuncDef::glFramebufferTexture_t FramebufferTexture;
		FuncDef::glTexImage2DMultisample_t TexImage2DMultisample;
		FuncDef::glTexImage3DMultisample_t TexImage3DMultisample;
		FuncDef::glGetMultisamplefv_t GetMultisamplefv;
		FuncDef::glSampleMaski_t SampleMaski;
		FuncDef::glBindFragDataLocationIndexed_t BindFragDataLocationIndexed;
		FuncDef::glGetFragDataIndex_t GetFragDataIndex;
		FuncDef::glGenSamplers_t GenSamplers;
		FuncDef::glDeleteSamplers_t DeleteSamplers;
		FuncDef::glIsSampler_t IsSampler;
		FuncDef::glBindSampler_t BindSampler;
		FuncDef::glSamplerParameteri_t SamplerParameteri;
		FuncDef::glSamplerParameteriv_t SamplerParameteriv;
		FuncDef::glSamplerParameterf_t SamplerParameterf;
		FuncDef::glSamplerParameterfv_t SamplerParameterfv;
		FuncDef::glSamplerParameterIiv_t SamplerParameterIiv;
		FuncDef::glSamplerParameterIuiv_t SamplerParameterIuiv;
		FuncDef::glGetSamplerParameteriv_t GetSamplerParameteriv;
		FuncDef::glGetSamplerParameterIiv_t GetSamplerParameterIiv;
		FuncDef::glGetSamplerParameterfv_t GetSamplerParameterfv;
		FuncDef::glGetSamplerParameterIuiv_t GetSamplerParameterIuiv;
		FuncDef::glQueryCounter_t QueryCounter;
		FuncDef::glGetQueryObjecti64v_t GetQueryObjecti64v;
		FuncDef::glGetQueryObjectui64v_t GetQueryObjectui64v;
		FuncDef::glVertexAttribDivisor_t VertexAttribDivisor;
		FuncDef::glVertexAttribP1ui_t VertexAttribP1ui;
		FuncDef::glVertexAttribP1uiv_t VertexAttribP1uiv;
		FuncDef::glVertexAttribP2ui_t VertexAttribP2ui;
		FuncDef::glVertexAttribP2uiv_t VertexAttribP2uiv;
		FuncDef::glVertexAttribP3ui_t VertexAttribP3ui;
		FuncDef::glVertexAttribP3uiv_t VertexAttribP3uiv;
		FuncDef::glVertexAttribP4ui_t VertexAttribP4ui;
		FuncDef::glVertexAttribP4uiv_t VertexAttribP4uiv;
		FuncDef::glMinSampleShading_t MinSampleShading;
		FuncDef::glBlendEquationi_t BlendEquationi;
		FuncDef::glBlendEquationSeparatei_t BlendEquationSeparatei;
		FuncDef::glBlendFunci_t BlendFunci;
		FuncDef::glBlendFuncSeparatei_t BlendFuncSeparatei;
		FuncDef::glDrawArraysIndirect_t DrawArraysIndirect;
		FuncDef::glDrawElementsIndirect_t DrawElementsIndirect;
		FuncDef::glUniform1d_t Uniform1d;
		FuncDef::glUniform2d_t Uniform2d;
		FuncDef::glUniform3d_t Uniform3d;
		FuncDef::glUniform4d_t Uniform4d;
		FuncDef::glUniform1dv_t Uniform1dv;
		FuncDef::glUniform2dv_t Uniform2dv;
		FuncDef::glUniform3dv_t Uniform3dv;
		FuncDef::glUniform4dv_t Uniform4dv;
		FuncDef::glUniformMatrix2dv_t UniformMatrix2dv;
		FuncDef::glUniformMatrix3dv_t UniformMatrix3dv;
		FuncDef::glUniformMatrix4dv_t UniformMatrix4dv;
		FuncDef::glUniformMatrix2x3dv_t UniformMatrix2x3dv;
		FuncDef::glUniformMatrix2x4dv_t UniformMatrix2x4dv;
		FuncDef::glUniformMatrix3x2dv_t UniformMatrix3x2dv;
		FuncDef::glUniformMatrix3x4dv_t UniformMatrix3x4dv;
		FuncDef::glUniformMatrix4x2dv_t UniformMatrix4x2dv;
		FuncDef::glUniformMatrix4x3dv_t UniformMatrix4x3dv;
		FuncDef::glGetUniformdv_t GetUniformdv;
		FuncDef::glGetSubroutineUniformLocation_t GetSubroutineUniformLocation;
		FuncDef::glGetSubroutineIndex_t GetSubroutineIndex;
		FuncDef::glGetActiveSubroutineUniformiv_t GetActiveSubroutineUniformiv;
		FuncDef::glGetActiveSubroutineUniformName_t GetActiveSubroutineUniformName;
		FuncDef::glGetActiveSubroutineName_t GetActiveSubroutineName;
		FuncDef::glUniformSubroutinesuiv_t UniformSubroutinesuiv;
		FuncDef::glGetUniformSubroutineuiv_t GetUniformSubroutineuiv;
		FuncDef::glGetProgramStageiv_t GetProgramStageiv;
		FuncDef::glPatchParameteri_t PatchParameteri;
		FuncDef::glPatchParameterfv_t PatchParameterfv;
		FuncDef::glBindTransformFeedback_t BindTransformFeedback;
		FuncDef::glDeleteTransformFeedbacks_t DeleteTransformFeedbacks;
		FuncDef::glGenTransformFeedbacks_t GenTransformFeedbacks;
		FuncDef::glIsTransformFeedback_t IsTransformFeedback;
		FuncDef::glPauseTransformFeedback_t PauseTransformFeedback;
		FuncDef::glResumeTransformFeedback_t ResumeTransformFeedback;
		FuncDef::glDrawTransformFeedback_t DrawTransformFeedback;
		FuncDef::glDrawTransformFeedbackStream_t DrawTransformFeedbackStream;
		FuncDef::glBeginQueryIndexed_t BeginQueryIndexed;
		FuncDef::glEndQueryIndexed_t EndQueryIndexed;
		FuncDef::glGetQueryIndexediv_t GetQueryIndexediv;
		FuncDef::glReleaseShaderCompiler_t ReleaseShaderCompiler;
		FuncDef::glShaderBinary_t ShaderBinary;
		FuncDef::glGetShaderPrecisionFormat_t GetShaderPrecisionFormat;
		FuncDef::glDepthRangef_t DepthRangef;
		FuncDef::glClearDepthf_t ClearDepthf;
		FuncDef::glGetProgramBinary_t GetProgramBinary;
		FuncDef::glProgramBinary_t ProgramBinary;
		FuncDef::glProgramParameteri_t ProgramParameteri;
		FuncDef::glUseProgramStages_t UseProgramStages;
		FuncDef::glActiveShaderProgram_t ActiveShaderProgram;
		FuncDef::glCreateShaderProgramv_t CreateShaderProgramv;
		FuncDef::glBindProgramPipeline_t BindProgramPipeline;
		FuncDef::glDeleteProgramPipelines_t DeleteProgramPipelines;
		FuncDef::glGenProgramPipelines_t GenProgramPipelines;
		FuncDef::glIsProgramPipeline_t IsProgramPipeline;
		FuncDef::glGetProgramPipelineiv_t GetProgramPipelineiv;
		FuncDef::glProgramUniform1i_t ProgramUniform1i;
		FuncDef::glProgramUniform1iv_t ProgramUniform1iv;
		FuncDef::glProgramUniform1f_t ProgramUniform1f;
		FuncDef::glProgramUniform1fv_t ProgramUniform1fv;
		FuncDef::glProgramUniform1d_t ProgramUniform1d;
		FuncDef::glProgramUniform1dv_t ProgramUniform1dv;
		FuncDef::glProgramUniform1ui_t ProgramUniform1ui;
		FuncDef::glProgramUniform1uiv_t ProgramUniform1uiv;
		FuncDef::glProgramUniform2i_t ProgramUniform2i;
		FuncDef::glProgramUniform2iv_t ProgramUniform2iv;
		FuncDef::glProgramUniform2f_t ProgramUniform2f;
		FuncDef::glProgramUniform2fv_t ProgramUniform2fv;
		FuncDef::glProgramUniform2d_t ProgramUniform2d;
		FuncDef::glProgramUniform2dv_t ProgramUniform2dv;
		FuncDef::glProgramUniform2ui_t ProgramUniform2ui;
		FuncDef::glProgramUniform2uiv_t ProgramUniform2uiv;
		FuncDef::glProgramUniform3i_t ProgramUniform3i;
		FuncDef::glProgramUniform3iv_t ProgramUniform3iv;
		FuncDef::glProgramUniform3f_t ProgramUniform3f;
		FuncDef::glProgramUniform3fv_t ProgramUniform3fv;
		FuncDef::glProgramUniform3d_t ProgramUniform3d;
		FuncDef::glProgramUniform3dv_t ProgramUniform3dv;
		FuncDef::glProgramUniform3ui_t ProgramUniform3ui;
		FuncDef::glProgramUniform3uiv_t ProgramUniform3uiv;
		FuncDef::glProgramUniform4i_t ProgramUniform4i;
		FuncDef::glProgramUniform4iv_t ProgramUniform4iv;
		FuncDef::glProgramUniform4f_t ProgramUniform4f;
		FuncDef::glProgramUniform4fv_t ProgramUniform4fv;
		FuncDef::glProgramUniform4d_t ProgramUniform4d;
		FuncDef::glProgramUniform4dv_t ProgramUniform4dv;
		FuncDef::glProgramUniform4ui_t ProgramUniform4ui;
		FuncDef::glProgramUniform4uiv_t ProgramUniform4uiv;
		FuncDef::glProgramUniformMatrix2fv_t ProgramUniformMatrix2fv;
		FuncDef::glProgramUniformMatrix3fv_t ProgramUniformMatrix3fv;
		FuncDef::glProgramUniformMatrix4fv_t ProgramUniformMatrix4fv;
		FuncDef::glProgramUniformMatrix2dv_t ProgramUniformMatrix2dv;
		FuncDef::glProgramUniformMatrix3dv_t ProgramUniformMatrix3dv;
		FuncDef::glProgramUniformMatrix4dv_t ProgramUniformMatrix4dv;
		FuncDef::glProgramUniformMatrix2x3fv_t ProgramUniformMatrix2x3fv;
		FuncDef::glProgramUniformMatrix3x2fv_t ProgramUniformMatrix3x2fv;
		FuncDef::glProgramUniformMatrix2x4fv_t ProgramUniformMatrix2x4fv;
		FuncDef::glProgramUniformMatrix4x2fv_t ProgramUniformMatrix4x2fv;
		FuncDef::glProgramUniformMatrix3x4fv_t ProgramUniformMatrix3x4fv;
		FuncDef::glProgramUniformMatrix4x3fv_t ProgramUniformMatrix4x3fv;
		FuncDef::glProgramUniformMatrix2x3dv_t ProgramUniformMatrix2x3dv;
		FuncDef::glProgramUniformMatrix3x2dv_t ProgramUniformMatrix3x2dv;
		FuncDef::glProgramUniformMatrix2x4dv_t ProgramUniformMatrix2x4dv;
		FuncDef::glProgramUniformMatrix4x2dv_t ProgramUniformMatrix4x2dv;
		FuncDef::glProgramUniformMatrix3x4dv_t ProgramUniformMatrix3x4dv;
		FuncDef::glProgramUniformMatrix4x3dv_t ProgramUniformMatrix4x3dv;
		FuncDef::glValidateProgramPipeline_t ValidateProgramPipeline;
		FuncDef::glGetProgramPipelineInfoLog_t GetProgramPipelineInfoLog;
		FuncDef::glVertexAttribL1d_t VertexAttribL1d;
		FuncDef::glVertexAttribL2d_t VertexAttribL2d;
		FuncDef::glVertexAttribL3d_t VertexAttribL3d;
		FuncDef::glVertexAttribL4d_t VertexAttribL4d;
		FuncDef::glVertexAttribL1dv_t VertexAttribL1dv;
		FuncDef::glVertexAttribL2dv_t VertexAttribL2dv;
		FuncDef::glVertexAttribL3dv_t VertexAttribL3dv;
		FuncDef::glVertexAttribL4dv_t VertexAttribL4dv;
		FuncDef::glVertexAttribLPointer_t VertexAttribLPointer;
		FuncDef::glGetVertexAttribLdv_t GetVertexAttribLdv;
		FuncDef::glViewportArrayv_t ViewportArrayv;
		FuncDef::glViewportIndexedf_t ViewportIndexedf;
		FuncDef::glViewportIndexedfv_t ViewportIndexedfv;
		FuncDef::glScissorArrayv_t ScissorArrayv;
		FuncDef::glScissorIndexed_t ScissorIndexed;
		FuncDef::glScissorIndexedv_t ScissorIndexedv;
		FuncDef::glDepthRangeArrayv_t DepthRangeArrayv;
		FuncDef::glDepthRangeIndexed_t DepthRangeIndexed;
		FuncDef::glGetFloati_v_t GetFloati_v;
		FuncDef::glGetDoublei_v_t GetDoublei_v;
		FuncDef::glDrawArraysInstancedBaseInstance_t DrawArraysInstancedBaseInstance;
		FuncDef::glDrawElementsInstancedBaseInstance_t DrawElementsInstancedBaseInstance;
		FuncDef::glDrawElementsInstancedBaseVertexBaseInstance_t DrawElementsInstancedBaseVertexBaseInstance;
		FuncDef::glGetInternalformativ_t GetInternalformativ;
		FuncDef::glGetActiveAtomicCounterBufferiv_t GetActiveAtomicCounterBufferiv;
		FuncDef::glBindImageTexture_t BindImageTexture;
		FuncDef::glMemoryBarrier_t MemoryBarrier;
		FuncDef::glTexStorage1D_t TexStorage1D;
		FuncDef::glTexStorage2D_t TexStorage2D;
		FuncDef::glTexStorage3D_t TexStorage3D;
		FuncDef::glDrawTransformFeedbackInstanced_t DrawTransformFeedbackInstanced;
		FuncDef::glDrawTransformFeedbackStreamInstanced_t DrawTransformFeedbackStreamInstanced;
		FuncDef::glClearBufferData_t ClearBufferData;
		FuncDef::glClearBufferSubData_t ClearBufferSubData;
		FuncDef::glDispatchCompute_t DispatchCompute;
		FuncDef::glDispatchComputeIndirect_t DispatchComputeIndirect;
		FuncDef::glCopyImageSubData_t CopyImageSubData;
		FuncDef::glFramebufferParameteri_t FramebufferParameteri;
		FuncDef::glGetFramebufferParameteriv_t GetFramebufferParameteriv;
		FuncDef::glGetInternalformati64v_t GetInternalformati64v;
		FuncDef::glInvalidateTexSubImage_t InvalidateTexSubImage;
		FuncDef::glInvalidateTexImage_t InvalidateTexImage;
		FuncDef::glInvalidateBufferSubData_t InvalidateBufferSubData;
		FuncDef::glInvalidateBufferData_t InvalidateBufferData;
		FuncDef::glInvalidateFramebuffer_t InvalidateFramebuffer;
		FuncDef::glInvalidateSubFramebuffer_t InvalidateSubFramebuffer;
		FuncDef::glMultiDrawArraysIndirect_t MultiDrawArraysIndirect;
		FuncDef::glMultiDrawElementsIndirect_t MultiDrawElementsIndirect;
		FuncDef::glGetProgramInterfaceiv_t GetProgramInterfaceiv;
		FuncDef::glGetProgramResourceIndex_t GetProgramResourceIndex;
		FuncDef::glGetProgramResourceName_t GetProgramResourceName;
		FuncDef::glGetProgramResourceiv_t GetProgramResourceiv;
		FuncDef::glGetProgramResourceLocation_t GetProgramResourceLocation;
		FuncDef::glGetProgramResourceLocationIndex_t GetProgramResourceLocationIndex;
		FuncDef::glShaderStorageBlockBinding_t ShaderStorageBlockBinding;
		FuncDef::glTexBufferRange_t TexBufferRange;
		FuncDef::glTexStorage2DMultisample_t TexStorage2DMultisample;
		FuncDef::glTexStorage3DMultisample_t TexStorage3DMultisample;
		FuncDef::glTextureView_t TextureView;
		FuncDef::glBindVertexBuffer_t BindVertexBuffer;
		FuncDef::glVertexAttribFormat_t VertexAttribFormat;
		FuncDef::glVertexAttribIFormat_t VertexAttribIFormat;
		FuncDef::glVertexAttribLFormat_t VertexAttribLFormat;
		FuncDef::glVertexAttribBinding_t VertexAttribBinding;
		FuncDef::glVertexBindingDivisor_t VertexBindingDivisor;
		FuncDef::glDebugMessageControl_t DebugMessageControl;
		FuncDef::glDebugMessageInsert_t DebugMessageInsert;
		FuncDef::glDebugMessageCallback_t DebugMessageCallback;
		FuncDef::glGetDebugMessageLog_t GetDebugMessageLog;
		FuncDef::glPushDebugGroup_t PushDebugGroup;
		FuncDef::glPopDebugGroup_t PopDebugGroup;
		FuncDef::glObjectLabel_t ObjectLabel;
		FuncDef::glGetObjectLabel_t GetObjectLabel;
		FuncDef::glObjectPtrLabel_t ObjectPtrLabel;
		FuncDef::glGetObjectPtrLabel_t GetObjectPtrLabel;
		FuncDef::glBufferStorage_t BufferStorage;
		FuncDef::glClearTexImage_t ClearTexImage;
		FuncDef::glClearTexSubImage_t ClearTexSubImage;
		FuncDef::glBindBuffersBase_t BindBuffersBase;
		FuncDef::glBindBuffersRange_t BindBuffersRange;
		FuncDef::glBindTextures_t BindTextures;
		FuncDef::glBindSamplers_t BindSamplers;
		FuncDef::glBindImageTextures_t BindImageTextures;
		FuncDef::glBindVertexBuffers_t BindVertexBuffers;
		FuncDef::glClipControl_t ClipControl;
		FuncDef::glCreateTransformFeedbacks_t CreateTransformFeedbacks;
		FuncDef::glTransformFeedbackBufferBase_t TransformFeedbackBufferBase;
		FuncDef::glTransformFeedbackBufferRange_t TransformFeedbackBufferRange;
		FuncDef::glGetTransformFeedbackiv_t GetTransformFeedbackiv;
		FuncDef::glGetTransformFeedbacki_v_t GetTransformFeedbacki_v;
		FuncDef::glGetTransformFeedbacki64_v_t GetTransformFeedbacki64_v;
		FuncDef::glCreateBuffers_t CreateBuffers;
		FuncDef::glNamedBufferStorage_t NamedBufferStorage;
		FuncDef::glNamedBufferData_t NamedBufferData;
		FuncDef::glNamedBufferSubData_t NamedBufferSubData;
		FuncDef::glCopyNamedBufferSubData_t CopyNamedBufferSubData;
		FuncDef::glClearNamedBufferData_t ClearNamedBufferData;
		FuncDef::glClearNamedBufferSubData_t ClearNamedBufferSubData;
		FuncDef::glMapNamedBuffer_t MapNamedBuffer;
		FuncDef::glMapNamedBufferRange_t MapNamedBufferRange;
		FuncDef::glUnmapNamedBuffer_t UnmapNamedBuffer;
		FuncDef::glFlushMappedNamedBufferRange_t FlushMappedNamedBufferRange;
		FuncDef::glGetNamedBufferParameteriv_t GetNamedBufferParameteriv;
		FuncDef::glGetNamedBufferParameteri64v_t GetNamedBufferParameteri64v;
		FuncDef::glGetNamedBufferPointerv_t GetNamedBufferPointerv;
		FuncDef::glGetNamedBufferSubData_t GetNamedBufferSubData;
		FuncDef::glCreateFramebuffers_t CreateFramebuffers;
		FuncDef::glNamedFramebufferRenderbuffer_t NamedFramebufferRenderbuffer;
		FuncDef::glNamedFramebufferParameteri_t NamedFramebufferParameteri;
		FuncDef::glNamedFramebufferTexture_t NamedFramebufferTexture;
		FuncDef::glNamedFramebufferTextureLayer_t NamedFramebufferTextureLayer;
		FuncDef::glNamedFramebufferDrawBuffer_t NamedFramebufferDrawBuffer;
		FuncDef::glNamedFramebufferDrawBuffers_t NamedFramebufferDrawBuffers;
		FuncDef::glNamedFramebufferReadBuffer_t NamedFramebufferReadBuffer;
		FuncDef::glInvalidateNamedFramebufferData_t InvalidateNamedFramebufferData;
		FuncDef::glInvalidateNamedFramebufferSubData_t InvalidateNamedFramebufferSubData;
		FuncDef::glClearNamedFramebufferiv_t ClearNamedFramebufferiv;
		FuncDef::glClearNamedFramebufferuiv_t ClearNamedFramebufferuiv;
		FuncDef::glClearNamedFramebufferfv_t ClearNamedFramebufferfv;
		FuncDef::glClearNamedFramebufferfi_t ClearNamedFramebufferfi;
		FuncDef::glBlitNamedFramebuffer_t BlitNamedFramebuffer;
		FuncDef::glCheckNamedFramebufferStatus_t CheckNamedFramebufferStatus;
		FuncDef::glGetNamedFramebufferParameteriv_t GetNamedFramebufferParameteriv;
		FuncDef::glGetNamedFramebufferAttachmentParameteriv_t GetNamedFramebufferAttachmentParameteriv;
		FuncDef::glCreateRenderbuffers_t CreateRenderbuffers;
		FuncDef::glNamedRenderbufferStorage_t NamedRenderbufferStorage;
		FuncDef::glNamedRenderbufferStorageMultisample_t NamedRenderbufferStorageMultisample;
		FuncDef::glGetNamedRenderbufferParameteriv_t GetNamedRenderbufferParameteriv;
		FuncDef::glCreateTextures_t CreateTextures;
		FuncDef::glTextureBuffer_t TextureBuffer;
		FuncDef::glTextureBufferRange_t TextureBufferRange;
		FuncDef::glTextureStorage1D_t TextureStorage1D;
		FuncDef::glTextureStorage2D_t TextureStorage2D;
		FuncDef::glTextureStorage3D_t TextureStorage3D;
		FuncDef::glTextureStorage2DMultisample_t TextureStorage2DMultisample;
		FuncDef::glTextureStorage3DMultisample_t TextureStorage3DMultisample;
		FuncDef::glTextureSubImage1D_t TextureSubImage1D;
		FuncDef::glTextureSubImage2D_t TextureSubImage2D;
		FuncDef::glTextureSubImage3D_t TextureSubImage3D;
		FuncDef::glCompressedTextureSubImage1D_t CompressedTextureSubImage1D;
		FuncDef::glCompressedTextureSubImage2D_t CompressedTextureSubImage2D;
		FuncDef::glCompressedTextureSubImage3D_t CompressedTextureSubImage3D;
		FuncDef::glCopyTextureSubImage1D_t CopyTextureSubImage1D;
		FuncDef::glCopyTextureSubImage2D_t CopyTextureSubImage2D;
		FuncDef::glCopyTextureSubImage3D_t CopyTextureSubImage3D;
		FuncDef::glTextureParameterf_t TextureParameterf;
		FuncDef::glTextureParameterfv_t TextureParameterfv;
		FuncDef::glTextureParameteri_t TextureParameteri;
		FuncDef::glTextureParameterIiv_t TextureParameterIiv;
		FuncDef::glTextureParameterIuiv_t TextureParameterIuiv;
		FuncDef::glTextureParameteriv_t TextureParameteriv;
		FuncDef::glGenerateTextureMipmap_t GenerateTextureMipmap;
		FuncDef::glBindTextureUnit_t BindTextureUnit;
		FuncDef::glGetTextureImage_t GetTextureImage;
		FuncDef::glGetCompressedTextureImage_t GetCompressedTextureImage;
		FuncDef::glGetTextureLevelParameterfv_t GetTextureLevelParameterfv;
		FuncDef::glGetTextureLevelParameteriv_t GetTextureLevelParameteriv;
		FuncDef::glGetTextureParameterfv_t GetTextureParameterfv;
		FuncDef::glGetTextureParameterIiv_t GetTextureParameterIiv;
		FuncDef::glGetTextureParameterIuiv_t GetTextureParameterIuiv;
		FuncDef::glGetTextureParameteriv_t GetTextureParameteriv;
		FuncDef::glCreateVertexArrays_t CreateVertexArrays;
		FuncDef::glDisableVertexArrayAttrib_t DisableVertexArrayAttrib;
		FuncDef::glEnableVertexArrayAttrib_t EnableVertexArrayAttrib;
		FuncDef::glVertexArrayElementBuffer_t VertexArrayElementBuffer;
		FuncDef::glVertexArrayVertexBuffer_t VertexArrayVertexBuffer;
		FuncDef::glVertexArrayVertexBuffers_t VertexArrayVertexBuffers;
		FuncDef::glVertexArrayAttribBinding_t VertexArrayAttribBinding;
		FuncDef::glVertexArrayAttribFormat_t VertexArrayAttribFormat;
		FuncDef::glVertexArrayAttribIFormat_t VertexArrayAttribIFormat;
		FuncDef::glVertexArrayAttribLFormat_t VertexArrayAttribLFormat;
		FuncDef::glVertexArrayBindingDivisor_t VertexArrayBindingDivisor;
		FuncDef::glGetVertexArrayiv_t GetVertexArrayiv;
		FuncDef::glGetVertexArrayIndexediv_t GetVertexArrayIndexediv;
		FuncDef::glGetVertexArrayIndexed64iv_t GetVertexArrayIndexed64iv;
		FuncDef::glCreateSamplers_t CreateSamplers;
		FuncDef::glCreateProgramPipelines_t CreateProgramPipelines;
		FuncDef::glCreateQueries_t CreateQueries;
		FuncDef::glGetQueryBufferObjecti64v_t GetQueryBufferObjecti64v;
		FuncDef::glGetQueryBufferObjectiv_t GetQueryBufferObjectiv;
		FuncDef::glGetQueryBufferObjectui64v_t GetQueryBufferObjectui64v;
		FuncDef::glGetQueryBufferObjectuiv_t GetQueryBufferObjectuiv;
		FuncDef::glMemoryBarrierByRegion_t MemoryBarrierByRegion;
		FuncDef::glGetTextureSubImage_t GetTextureSubImage;
		FuncDef::glGetCompressedTextureSubImage_t GetCompressedTextureSubImage;
		FuncDef::glGetGraphicsResetStatus_t GetGraphicsResetStatus;
		FuncDef::glGetnCompressedTexImage_t GetnCompressedTexImage;
		FuncDef::glGetnTexImage_t GetnTexImage;
		FuncDef::glGetnUniformdv_t GetnUniformdv;
		FuncDef::glGetnUniformfv_t GetnUniformfv;
		FuncDef::glGetnUniformiv_t GetnUniformiv;
		FuncDef::glGetnUniformuiv_t GetnUniformuiv;
		FuncDef::glReadnPixels_t ReadnPixels;
		FuncDef::glTextureBarrier_t TextureBarrier;
		FuncDef::glSpecializeShader_t SpecializeShader;
		FuncDef::glMultiDrawArraysIndirectCount_t MultiDrawArraysIndirectCount;
		FuncDef::glMultiDrawElementsIndirectCount_t MultiDrawElementsIndirectCount;
		FuncDef::glPolygonOffsetClamp_t PolygonOffsetClamp;
		FuncDef::glPrimitiveBoundingBoxARB_t PrimitiveBoundingBoxARB;
		FuncDef::glGetTextureHandleARB_t GetTextureHandleARB;
		FuncDef::glGetTextureSamplerHandleARB_t GetTextureSamplerHandleARB;
		FuncDef::glMakeTextureHandleResidentARB_t MakeTextureHandleResidentARB;
		FuncDef::glMakeTextureHandleNonResidentARB_t MakeTextureHandleNonResidentARB;
		FuncDef::glGetImageHandleARB_t GetImageHandleARB;
		FuncDef::glMakeImageHandleResidentARB_t MakeImageHandleResidentARB;
		FuncDef::glMakeImageHandleNonResidentARB_t MakeImageHandleNonResidentARB;
		FuncDef::glUniformHandleui64ARB_t UniformHandleui64ARB;
		FuncDef::glUniformHandleui64vARB_t UniformHandleui64vARB;
		FuncDef::glProgramUniformHandleui64ARB_t ProgramUniformHandleui64ARB;
		FuncDef::glProgramUniformHandleui64vARB_t ProgramUniformHandleui64vARB;
		FuncDef::glIsTextureHandleResidentARB_t IsTextureHandleResidentARB;
		FuncDef::glIsImageHandleResidentARB_t IsImageHandleResidentARB;
		FuncDef::glVertexAttribL1ui64ARB_t VertexAttribL1ui64ARB;
		FuncDef::glVertexAttribL1ui64vARB_t VertexAttribL1ui64vARB;
		FuncDef::glGetVertexAttribLui64vARB_t GetVertexAttribLui64vARB;
		FuncDef::glCreateSyncFromCLeventARB_t CreateSyncFromCLeventARB;
		FuncDef::glDispatchComputeGroupSizeARB_t DispatchComputeGroupSizeARB;
		FuncDef::glDebugMessageControlARB_t DebugMessageControlARB;
		FuncDef::glDebugMessageInsertARB_t DebugMessageInsertARB;
		FuncDef::glDebugMessageCallbackARB_t DebugMessageCallbackARB;
		FuncDef::glGetDebugMessageLogARB_t GetDebugMessageLogARB;
		FuncDef::glBlendEquationiARB_t BlendEquationiARB;
		FuncDef::glBlendEquationSeparateiARB_t BlendEquationSeparateiARB;
		FuncDef::glBlendFunciARB_t BlendFunciARB;
		FuncDef::glBlendFuncSeparateiARB_t BlendFuncSeparateiARB;
		FuncDef::glDrawArraysInstancedARB_t DrawArraysInstancedARB;
		FuncDef::glDrawElementsInstancedARB_t DrawElementsInstancedARB;
		FuncDef::glProgramParameteriARB_t ProgramParameteriARB;
		FuncDef::glFramebufferTextureARB_t FramebufferTextureARB;
		FuncDef::glFramebufferTextureLayerARB_t FramebufferTextureLayerARB;
		FuncDef::glFramebufferTextureFaceARB_t FramebufferTextureFaceARB;
		FuncDef::glSpecializeShaderARB_t SpecializeShaderARB;
		FuncDef::glUniform1i64ARB_t Uniform1i64ARB;
		FuncDef::glUniform2i64ARB_t Uniform2i64ARB;
		FuncDef::glUniform3i64ARB_t Uniform3i64ARB;
		FuncDef::glUniform4i64ARB_t Uniform4i64ARB;
		FuncDef::glUniform1i64vARB_t Uniform1i64vARB;
		FuncDef::glUniform2i64vARB_t Uniform2i64vARB;
		FuncDef::glUniform3i64vARB_t Uniform3i64vARB;
		FuncDef::glUniform4i64vARB_t Uniform4i64vARB;
		FuncDef::glUniform1ui64ARB_t Uniform1ui64ARB;
		FuncDef::glUniform2ui64ARB_t Uniform2ui64ARB;
		FuncDef::glUniform3ui64ARB_t Uniform3ui64ARB;
		FuncDef::glUniform4ui64ARB_t Uniform4ui64ARB;
		FuncDef::glUniform1ui64vARB_t Uniform1ui64vARB;
		FuncDef::glUniform2ui64vARB_t Uniform2ui64vARB;
		FuncDef::glUniform3ui64vARB_t Uniform3ui64vARB;
		FuncDef::glUniform4ui64vARB_t Uniform4ui64vARB;
		FuncDef::glGetUniformi64vARB_t GetUniformi64vARB;
		FuncDef::glGetUniformui64vARB_t GetUniformui64vARB;
		FuncDef::glGetnUniformi64vARB_t GetnUniformi64vARB;
		FuncDef::glGetnUniformui64vARB_t GetnUniformui64vARB;
		FuncDef::glProgramUniform1i64ARB_t ProgramUniform1i64ARB;
		FuncDef::glProgramUniform2i64ARB_t ProgramUniform2i64ARB;
		FuncDef::glProgramUniform3i64ARB_t ProgramUniform3i64ARB;
		FuncDef::glProgramUniform4i64ARB_t ProgramUniform4i64ARB;
		FuncDef::glProgramUniform1i64vARB_t ProgramUniform1i64vARB;
		FuncDef::glProgramUniform2i64vARB_t ProgramUniform2i64vARB;
		FuncDef::glProgramUniform3i64vARB_t ProgramUniform3i64vARB;
		FuncDef::glProgramUniform4i64vARB_t ProgramUniform4i64vARB;
		FuncDef::glProgramUniform1ui64ARB_t ProgramUniform1ui64ARB;
		FuncDef::glProgramUniform2ui64ARB_t ProgramUniform2ui64ARB;
		FuncDef::glProgramUniform3ui64ARB_t ProgramUniform3ui64ARB;
		FuncDef::glProgramUniform4ui64ARB_t ProgramUniform4ui64ARB;
		FuncDef::glProgramUniform1ui64vARB_t ProgramUniform1ui64vARB;
		FuncDef::glProgramUniform2ui64vARB_t ProgramUniform2ui64vARB;
		FuncDef::glProgramUniform3ui64vARB_t ProgramUniform3ui64vARB;
		FuncDef::glProgramUniform4ui64vARB_t ProgramUniform4ui64vARB;
		FuncDef::glMultiDrawArraysIndirectCountARB_t MultiDrawArraysIndirectCountARB;
		FuncDef::glMultiDrawElementsIndirectCountARB_t MultiDrawElementsIndirectCountARB;
		FuncDef::glVertexAttribDivisorARB_t VertexAttribDivisorARB;
		FuncDef::glMaxShaderCompilerThreadsARB_t MaxShaderCompilerThreadsARB;
		FuncDef::glGetGraphicsResetStatusARB_t GetGraphicsResetStatusARB;
		FuncDef::glGetnTexImageARB_t GetnTexImageARB;
		FuncDef::glReadnPixelsARB_t ReadnPixelsARB;
		FuncDef::glGetnCompressedTexImageARB_t GetnCompressedTexImageARB;
		FuncDef::glGetnUniformfvARB_t GetnUniformfvARB;
		FuncDef::glGetnUniformivARB_t GetnUniformivARB;
		FuncDef::glGetnUniformuivARB_t GetnUniformuivARB;
		FuncDef::glGetnUniformdvARB_t GetnUniformdvARB;
		FuncDef::glFramebufferSampleLocationsfvARB_t FramebufferSampleLocationsfvARB;
		FuncDef::glNamedFramebufferSampleLocationsfvARB_t NamedFramebufferSampleLocationsfvARB;
		FuncDef::glEvaluateDepthValuesARB_t EvaluateDepthValuesARB;
		FuncDef::glMinSampleShadingARB_t MinSampleShadingARB;
		FuncDef::glNamedStringARB_t NamedStringARB;
		FuncDef::glDeleteNamedStringARB_t DeleteNamedStringARB;
		FuncDef::glCompileShaderIncludeARB_t CompileShaderIncludeARB;
		FuncDef::glIsNamedStringARB_t IsNamedStringARB;
		FuncDef::glGetNamedStringARB_t GetNamedStringARB;
		FuncDef::glGetNamedStringivARB_t GetNamedStringivARB;
		FuncDef::glBufferPageCommitmentARB_t BufferPageCommitmentARB;
		FuncDef::glNamedBufferPageCommitmentEXT_t NamedBufferPageCommitmentEXT;
		FuncDef::glNamedBufferPageCommitmentARB_t NamedBufferPageCommitmentARB;
		FuncDef::glTexPageCommitmentARB_t TexPageCommitmentARB;
		FuncDef::glTexBufferARB_t TexBufferARB;
		FuncDef::glDepthRangeArraydvNV_t DepthRangeArraydvNV;
		FuncDef::glDepthRangeIndexeddNV_t DepthRangeIndexeddNV;
		FuncDef::glBlendBarrierKHR_t BlendBarrierKHR;
		FuncDef::glMaxShaderCompilerThreadsKHR_t MaxShaderCompilerThreadsKHR;
		FuncDef::glRenderbufferStorageMultisampleAdvancedAMD_t RenderbufferStorageMultisampleAdvancedAMD;
		FuncDef::glNamedRenderbufferStorageMultisampleAdvancedAMD_t NamedRenderbufferStorageMultisampleAdvancedAMD;
		FuncDef::glGetPerfMonitorGroupsAMD_t GetPerfMonitorGroupsAMD;
		FuncDef::glGetPerfMonitorCountersAMD_t GetPerfMonitorCountersAMD;
		FuncDef::glGetPerfMonitorGroupStringAMD_t GetPerfMonitorGroupStringAMD;
		FuncDef::glGetPerfMonitorCounterStringAMD_t GetPerfMonitorCounterStringAMD;
		FuncDef::glGetPerfMonitorCounterInfoAMD_t GetPerfMonitorCounterInfoAMD;
		FuncDef::glGenPerfMonitorsAMD_t GenPerfMonitorsAMD;
		FuncDef::glDeletePerfMonitorsAMD_t DeletePerfMonitorsAMD;
		FuncDef::glSelectPerfMonitorCountersAMD_t SelectPerfMonitorCountersAMD;
		FuncDef::glBeginPerfMonitorAMD_t BeginPerfMonitorAMD;
		FuncDef::glEndPerfMonitorAMD_t EndPerfMonitorAMD;
		FuncDef::glGetPerfMonitorCounterDataAMD_t GetPerfMonitorCounterDataAMD;
		FuncDef::glEGLImageTargetTexStorageEXT_t EGLImageTargetTexStorageEXT;
		FuncDef::glEGLImageTargetTextureStorageEXT_t EGLImageTargetTextureStorageEXT;
		FuncDef::glLabelObjectEXT_t LabelObjectEXT;
		FuncDef::glGetObjectLabelEXT_t GetObjectLabelEXT;
		FuncDef::glInsertEventMarkerEXT_t InsertEventMarkerEXT;
		FuncDef::glPushGroupMarkerEXT_t PushGroupMarkerEXT;
		FuncDef::glPopGroupMarkerEXT_t PopGroupMarkerEXT;
		FuncDef::glMatrixLoadfEXT_t MatrixLoadfEXT;
		FuncDef::glMatrixLoaddEXT_t MatrixLoaddEXT;
		FuncDef::glMatrixMultfEXT_t MatrixMultfEXT;
		FuncDef::glMatrixMultdEXT_t MatrixMultdEXT;
		FuncDef::glMatrixLoadIdentityEXT_t MatrixLoadIdentityEXT;
		FuncDef::glMatrixRotatefEXT_t MatrixRotatefEXT;
		FuncDef::glMatrixRotatedEXT_t MatrixRotatedEXT;
		FuncDef::glMatrixScalefEXT_t MatrixScalefEXT;
		FuncDef::glMatrixScaledEXT_t MatrixScaledEXT;
		FuncDef::glMatrixTranslatefEXT_t MatrixTranslatefEXT;
		FuncDef::glMatrixTranslatedEXT_t MatrixTranslatedEXT;
		FuncDef::glMatrixFrustumEXT_t MatrixFrustumEXT;
		FuncDef::glMatrixOrthoEXT_t MatrixOrthoEXT;
		FuncDef::glMatrixPopEXT_t MatrixPopEXT;
		FuncDef::glMatrixPushEXT_t MatrixPushEXT;
		FuncDef::glClientAttribDefaultEXT_t ClientAttribDefaultEXT;
		FuncDef::glPushClientAttribDefaultEXT_t PushClientAttribDefaultEXT;
		FuncDef::glTextureParameterfEXT_t TextureParameterfEXT;
		FuncDef::glTextureParameterfvEXT_t TextureParameterfvEXT;
		FuncDef::glTextureParameteriEXT_t TextureParameteriEXT;
		FuncDef::glTextureParameterivEXT_t TextureParameterivEXT;
		FuncDef::glTextureImage1DEXT_t TextureImage1DEXT;
		FuncDef::glTextureImage2DEXT_t TextureImage2DEXT;
		FuncDef::glTextureSubImage1DEXT_t TextureSubImage1DEXT;
		FuncDef::glTextureSubImage2DEXT_t TextureSubImage2DEXT;
		FuncDef::glCopyTextureImage1DEXT_t CopyTextureImage1DEXT;
		FuncDef::glCopyTextureImage2DEXT_t CopyTextureImage2DEXT;
		FuncDef::glCopyTextureSubImage1DEXT_t CopyTextureSubImage1DEXT;
		FuncDef::glCopyTextureSubImage2DEXT_t CopyTextureSubImage2DEXT;
		FuncDef::glGetTextureImageEXT_t GetTextureImageEXT;
		FuncDef::glGetTextureParameterfvEXT_t GetTextureParameterfvEXT;
		FuncDef::glGetTextureParameterivEXT_t GetTextureParameterivEXT;
		FuncDef::glGetTextureLevelParameterfvEXT_t GetTextureLevelParameterfvEXT;
		FuncDef::glGetTextureLevelParameterivEXT_t GetTextureLevelParameterivEXT;
		FuncDef::glTextureImage3DEXT_t TextureImage3DEXT;
		FuncDef::glTextureSubImage3DEXT_t TextureSubImage3DEXT;
		FuncDef::glCopyTextureSubImage3DEXT_t CopyTextureSubImage3DEXT;
		FuncDef::glBindMultiTextureEXT_t BindMultiTextureEXT;
		FuncDef::glMultiTexCoordPointerEXT_t MultiTexCoordPointerEXT;
		FuncDef::glMultiTexEnvfEXT_t MultiTexEnvfEXT;
		FuncDef::glMultiTexEnvfvEXT_t MultiTexEnvfvEXT;
		FuncDef::glMultiTexEnviEXT_t MultiTexEnviEXT;
		FuncDef::glMultiTexEnvivEXT_t MultiTexEnvivEXT;
		FuncDef::glMultiTexGendEXT_t MultiTexGendEXT;
		FuncDef::glMultiTexGendvEXT_t MultiTexGendvEXT;
		FuncDef::glMultiTexGenfEXT_t MultiTexGenfEXT;
		FuncDef::glMultiTexGenfvEXT_t MultiTexGenfvEXT;
		FuncDef::glMultiTexGeniEXT_t MultiTexGeniEXT;
		FuncDef::glMultiTexGenivEXT_t MultiTexGenivEXT;
		FuncDef::glGetMultiTexEnvfvEXT_t GetMultiTexEnvfvEXT;
		FuncDef::glGetMultiTexEnvivEXT_t GetMultiTexEnvivEXT;
		FuncDef::glGetMultiTexGendvEXT_t GetMultiTexGendvEXT;
		FuncDef::glGetMultiTexGenfvEXT_t GetMultiTexGenfvEXT;
		FuncDef::glGetMultiTexGenivEXT_t GetMultiTexGenivEXT;
		FuncDef::glMultiTexParameteriEXT_t MultiTexParameteriEXT;
		FuncDef::glMultiTexParameterivEXT_t MultiTexParameterivEXT;
		FuncDef::glMultiTexParameterfEXT_t MultiTexParameterfEXT;
		FuncDef::glMultiTexParameterfvEXT_t MultiTexParameterfvEXT;
		FuncDef::glMultiTexImage1DEXT_t MultiTexImage1DEXT;
		FuncDef::glMultiTexImage2DEXT_t MultiTexImage2DEXT;
		FuncDef::glMultiTexSubImage1DEXT_t MultiTexSubImage1DEXT;
		FuncDef::glMultiTexSubImage2DEXT_t MultiTexSubImage2DEXT;
		FuncDef::glCopyMultiTexImage1DEXT_t CopyMultiTexImage1DEXT;
		FuncDef::glCopyMultiTexImage2DEXT_t CopyMultiTexImage2DEXT;
		FuncDef::glCopyMultiTexSubImage1DEXT_t CopyMultiTexSubImage1DEXT;
		FuncDef::glCopyMultiTexSubImage2DEXT_t CopyMultiTexSubImage2DEXT;
		FuncDef::glGetMultiTexImageEXT_t GetMultiTexImageEXT;
		FuncDef::glGetMultiTexParameterfvEXT_t GetMultiTexParameterfvEXT;
		FuncDef::glGetMultiTexParameterivEXT_t GetMultiTexParameterivEXT;
		FuncDef::glGetMultiTexLevelParameterfvEXT_t GetMultiTexLevelParameterfvEXT;
		FuncDef::glGetMultiTexLevelParameterivEXT_t GetMultiTexLevelParameterivEXT;
		FuncDef::glMultiTexImage3DEXT_t MultiTexImage3DEXT;
		FuncDef::glMultiTexSubImage3DEXT_t MultiTexSubImage3DEXT;
		FuncDef::glCopyMultiTexSubImage3DEXT_t CopyMultiTexSubImage3DEXT;
		FuncDef::glEnableClientStateIndexedEXT_t EnableClientStateIndexedEXT;
		FuncDef::glDisableClientStateIndexedEXT_t DisableClientStateIndexedEXT;
		FuncDef::glGetFloatIndexedvEXT_t GetFloatIndexedvEXT;
		FuncDef::glGetDoubleIndexedvEXT_t GetDoubleIndexedvEXT;
		FuncDef::glGetPointerIndexedvEXT_t GetPointerIndexedvEXT;
		FuncDef::glEnableIndexedEXT_t EnableIndexedEXT;
		FuncDef::glDisableIndexedEXT_t DisableIndexedEXT;
		FuncDef::glIsEnabledIndexedEXT_t IsEnabledIndexedEXT;
		FuncDef::glGetIntegerIndexedvEXT_t GetIntegerIndexedvEXT;
		FuncDef::glGetBooleanIndexedvEXT_t GetBooleanIndexedvEXT;
		FuncDef::glCompressedTextureImage3DEXT_t CompressedTextureImage3DEXT;
		FuncDef::glCompressedTextureImage2DEXT_t CompressedTextureImage2DEXT;
		FuncDef::glCompressedTextureImage1DEXT_t CompressedTextureImage1DEXT;
		FuncDef::glCompressedTextureSubImage3DEXT_t CompressedTextureSubImage3DEXT;
		FuncDef::glCompressedTextureSubImage2DEXT_t CompressedTextureSubImage2DEXT;
		FuncDef::glCompressedTextureSubImage1DEXT_t CompressedTextureSubImage1DEXT;
		FuncDef::glGetCompressedTextureImageEXT_t GetCompressedTextureImageEXT;
		FuncDef::glCompressedMultiTexImage3DEXT_t CompressedMultiTexImage3DEXT;
		FuncDef::glCompressedMultiTexImage2DEXT_t CompressedMultiTexImage2DEXT;
		FuncDef::glCompressedMultiTexImage1DEXT_t CompressedMultiTexImage1DEXT;
		FuncDef::glCompressedMultiTexSubImage3DEXT_t CompressedMultiTexSubImage3DEXT;
		FuncDef::glCompressedMultiTexSubImage2DEXT_t CompressedMultiTexSubImage2DEXT;
		FuncDef::glCompressedMultiTexSubImage1DEXT_t CompressedMultiTexSubImage1DEXT;
		FuncDef::glGetCompressedMultiTexImageEXT_t GetCompressedMultiTexImageEXT;
		FuncDef::glMatrixLoadTransposefEXT_t MatrixLoadTransposefEXT;
		FuncDef::glMatrixLoadTransposedEXT_t MatrixLoadTransposedEXT;
		FuncDef::glMatrixMultTransposefEXT_t MatrixMultTransposefEXT;
		FuncDef::glMatrixMultTransposedEXT_t MatrixMultTransposedEXT;
		FuncDef::glNamedBufferDataEXT_t NamedBufferDataEXT;
		FuncDef::glNamedBufferSubDataEXT_t NamedBufferSubDataEXT;
		FuncDef::glMapNamedBufferEXT_t MapNamedBufferEXT;
		FuncDef::glUnmapNamedBufferEXT_t UnmapNamedBufferEXT;
		FuncDef::glGetNamedBufferParameterivEXT_t GetNamedBufferParameterivEXT;
		FuncDef::glGetNamedBufferPointervEXT_t GetNamedBufferPointervEXT;
		FuncDef::glGetNamedBufferSubDataEXT_t GetNamedBufferSubDataEXT;
		FuncDef::glProgramUniform1fEXT_t ProgramUniform1fEXT;
		FuncDef::glProgramUniform2fEXT_t ProgramUniform2fEXT;
		FuncDef::glProgramUniform3fEXT_t ProgramUniform3fEXT;
		FuncDef::glProgramUniform4fEXT_t ProgramUniform4fEXT;
		FuncDef::glProgramUniform1iEXT_t ProgramUniform1iEXT;
		FuncDef::glProgramUniform2iEXT_t ProgramUniform2iEXT;
		FuncDef::glProgramUniform3iEXT_t ProgramUniform3iEXT;
		FuncDef::glProgramUniform4iEXT_t ProgramUniform4iEXT;
		FuncDef::glProgramUniform1fvEXT_t ProgramUniform1fvEXT;
		FuncDef::glProgramUniform2fvEXT_t ProgramUniform2fvEXT;
		FuncDef::glProgramUniform3fvEXT_t ProgramUniform3fvEXT;
		FuncDef::glProgramUniform4fvEXT_t ProgramUniform4fvEXT;
		FuncDef::glProgramUniform1ivEXT_t ProgramUniform1ivEXT;
		FuncDef::glProgramUniform2ivEXT_t ProgramUniform2ivEXT;
		FuncDef::glProgramUniform3ivEXT_t ProgramUniform3ivEXT;
		FuncDef::glProgramUniform4ivEXT_t ProgramUniform4ivEXT;
		FuncDef::glProgramUniformMatrix2fvEXT_t ProgramUniformMatrix2fvEXT;
		FuncDef::glProgramUniformMatrix3fvEXT_t ProgramUniformMatrix3fvEXT;
		FuncDef::glProgramUniformMatrix4fvEXT_t ProgramUniformMatrix4fvEXT;
		FuncDef::glProgramUniformMatrix2x3fvEXT_t ProgramUniformMatrix2x3fvEXT;
		FuncDef::glProgramUniformMatrix3x2fvEXT_t ProgramUniformMatrix3x2fvEXT;
		FuncDef::glProgramUniformMatrix2x4fvEXT_t ProgramUniformMatrix2x4fvEXT;
		FuncDef::glProgramUniformMatrix4x2fvEXT_t ProgramUniformMatrix4x2fvEXT;
		FuncDef::glProgramUniformMatrix3x4fvEXT_t ProgramUniformMatrix3x4fvEXT;
		FuncDef::glProgramUniformMatrix4x3fvEXT_t ProgramUniformMatrix4x3fvEXT;
		FuncDef::glTextureBufferEXT_t TextureBufferEXT;
		FuncDef::glMultiTexBufferEXT_t MultiTexBufferEXT;
		FuncDef::glTextureParameterIivEXT_t TextureParameterIivEXT;
		FuncDef::glTextureParameterIuivEXT_t TextureParameterIuivEXT;
		FuncDef::glGetTextureParameterIivEXT_t GetTextureParameterIivEXT;
		FuncDef::glGetTextureParameterIuivEXT_t GetTextureParameterIuivEXT;
		FuncDef::glMultiTexParameterIivEXT_t MultiTexParameterIivEXT;
		FuncDef::glMultiTexParameterIuivEXT_t MultiTexParameterIuivEXT;
		FuncDef::glGetMultiTexParameterIivEXT_t GetMultiTexParameterIivEXT;
		FuncDef::glGetMultiTexParameterIuivEXT_t GetMultiTexParameterIuivEXT;
		FuncDef::glProgramUniform1uiEXT_t ProgramUniform1uiEXT;
		FuncDef::glProgramUniform2uiEXT_t ProgramUniform2uiEXT;
		FuncDef::glProgramUniform3uiEXT_t ProgramUniform3uiEXT;
		FuncDef::glProgramUniform4uiEXT_t ProgramUniform4uiEXT;
		FuncDef::glProgramUniform1uivEXT_t ProgramUniform1uivEXT;
		FuncDef::glProgramUniform2uivEXT_t ProgramUniform2uivEXT;
		FuncDef::glProgramUniform3uivEXT_t ProgramUniform3uivEXT;
		FuncDef::glProgramUniform4uivEXT_t ProgramUniform4uivEXT;
		FuncDef::glNamedProgramLocalParameters4fvEXT_t NamedProgramLocalParameters4fvEXT;
		FuncDef::glNamedProgramLocalParameterI4iEXT_t NamedProgramLocalParameterI4iEXT;
		FuncDef::glNamedProgramLocalParameterI4ivEXT_t NamedProgramLocalParameterI4ivEXT;
		FuncDef::glNamedProgramLocalParametersI4ivEXT_t NamedProgramLocalParametersI4ivEXT;
		FuncDef::glNamedProgramLocalParameterI4uiEXT_t NamedProgramLocalParameterI4uiEXT;
		FuncDef::glNamedProgramLocalParameterI4uivEXT_t NamedProgramLocalParameterI4uivEXT;
		FuncDef::glNamedProgramLocalParametersI4uivEXT_t NamedProgramLocalParametersI4uivEXT;
		FuncDef::glGetNamedProgramLocalParameterIivEXT_t GetNamedProgramLocalParameterIivEXT;
		FuncDef::glGetNamedProgramLocalParameterIuivEXT_t GetNamedProgramLocalParameterIuivEXT;
		FuncDef::glEnableClientStateiEXT_t EnableClientStateiEXT;
		FuncDef::glDisableClientStateiEXT_t DisableClientStateiEXT;
		FuncDef::glGetFloati_vEXT_t GetFloati_vEXT;
		FuncDef::glGetDoublei_vEXT_t GetDoublei_vEXT;
		FuncDef::glGetPointeri_vEXT_t GetPointeri_vEXT;
		FuncDef::glNamedProgramStringEXT_t NamedProgramStringEXT;
		FuncDef::glNamedProgramLocalParameter4dEXT_t NamedProgramLocalParameter4dEXT;
		FuncDef::glNamedProgramLocalParameter4dvEXT_t NamedProgramLocalParameter4dvEXT;
		FuncDef::glNamedProgramLocalParameter4fEXT_t NamedProgramLocalParameter4fEXT;
		FuncDef::glNamedProgramLocalParameter4fvEXT_t NamedProgramLocalParameter4fvEXT;
		FuncDef::glGetNamedProgramLocalParameterdvEXT_t GetNamedProgramLocalParameterdvEXT;
		FuncDef::glGetNamedProgramLocalParameterfvEXT_t GetNamedProgramLocalParameterfvEXT;
		FuncDef::glGetNamedProgramivEXT_t GetNamedProgramivEXT;
		FuncDef::glGetNamedProgramStringEXT_t GetNamedProgramStringEXT;
		FuncDef::glNamedRenderbufferStorageEXT_t NamedRenderbufferStorageEXT;
		FuncDef::glGetNamedRenderbufferParameterivEXT_t GetNamedRenderbufferParameterivEXT;
		FuncDef::glNamedRenderbufferStorageMultisampleEXT_t NamedRenderbufferStorageMultisampleEXT;
		FuncDef::glNamedRenderbufferStorageMultisampleCoverageEXT_t NamedRenderbufferStorageMultisampleCoverageEXT;
		FuncDef::glCheckNamedFramebufferStatusEXT_t CheckNamedFramebufferStatusEXT;
		FuncDef::glNamedFramebufferTexture1DEXT_t NamedFramebufferTexture1DEXT;
		FuncDef::glNamedFramebufferTexture2DEXT_t NamedFramebufferTexture2DEXT;
		FuncDef::glNamedFramebufferTexture3DEXT_t NamedFramebufferTexture3DEXT;
		FuncDef::glNamedFramebufferRenderbufferEXT_t NamedFramebufferRenderbufferEXT;
		FuncDef::glGetNamedFramebufferAttachmentParameterivEXT_t GetNamedFramebufferAttachmentParameterivEXT;
		FuncDef::glGenerateTextureMipmapEXT_t GenerateTextureMipmapEXT;
		FuncDef::glGenerateMultiTexMipmapEXT_t GenerateMultiTexMipmapEXT;
		FuncDef::glFramebufferDrawBufferEXT_t FramebufferDrawBufferEXT;
		FuncDef::glFramebufferDrawBuffersEXT_t FramebufferDrawBuffersEXT;
		FuncDef::glFramebufferReadBufferEXT_t FramebufferReadBufferEXT;
		FuncDef::glGetFramebufferParameterivEXT_t GetFramebufferParameterivEXT;
		FuncDef::glNamedCopyBufferSubDataEXT_t NamedCopyBufferSubDataEXT;
		FuncDef::glNamedFramebufferTextureEXT_t NamedFramebufferTextureEXT;
		FuncDef::glNamedFramebufferTextureLayerEXT_t NamedFramebufferTextureLayerEXT;
		FuncDef::glNamedFramebufferTextureFaceEXT_t NamedFramebufferTextureFaceEXT;
		FuncDef::glTextureRenderbufferEXT_t TextureRenderbufferEXT;
		FuncDef::glMultiTexRenderbufferEXT_t MultiTexRenderbufferEXT;
		FuncDef::glVertexArrayVertexOffsetEXT_t VertexArrayVertexOffsetEXT;
		FuncDef::glVertexArrayColorOffsetEXT_t VertexArrayColorOffsetEXT;
		FuncDef::glVertexArrayEdgeFlagOffsetEXT_t VertexArrayEdgeFlagOffsetEXT;
		FuncDef::glVertexArrayIndexOffsetEXT_t VertexArrayIndexOffsetEXT;
		FuncDef::glVertexArrayNormalOffsetEXT_t VertexArrayNormalOffsetEXT;
		FuncDef::glVertexArrayTexCoordOffsetEXT_t VertexArrayTexCoordOffsetEXT;
		FuncDef::glVertexArrayMultiTexCoordOffsetEXT_t VertexArrayMultiTexCoordOffsetEXT;
		FuncDef::glVertexArrayFogCoordOffsetEXT_t VertexArrayFogCoordOffsetEXT;
		FuncDef::glVertexArraySecondaryColorOffsetEXT_t VertexArraySecondaryColorOffsetEXT;
		FuncDef::glVertexArrayVertexAttribOffsetEXT_t VertexArrayVertexAttribOffsetEXT;
		FuncDef::glVertexArrayVertexAttribIOffsetEXT_t VertexArrayVertexAttribIOffsetEXT;
		FuncDef::glEnableVertexArrayEXT_t EnableVertexArrayEXT;
		FuncDef::glDisableVertexArrayEXT_t DisableVertexArrayEXT;
		FuncDef::glEnableVertexArrayAttribEXT_t EnableVertexArrayAttribEXT;
		FuncDef::glDisableVertexArrayAttribEXT_t DisableVertexArrayAttribEXT;
		FuncDef::glGetVertexArrayIntegervEXT_t GetVertexArrayIntegervEXT;
		FuncDef::glGetVertexArrayPointervEXT_t GetVertexArrayPointervEXT;
		FuncDef::glGetVertexArrayIntegeri_vEXT_t GetVertexArrayIntegeri_vEXT;
		FuncDef::glGetVertexArrayPointeri_vEXT_t GetVertexArrayPointeri_vEXT;
		FuncDef::glMapNamedBufferRangeEXT_t MapNamedBufferRangeEXT;
		FuncDef::glFlushMappedNamedBufferRangeEXT_t FlushMappedNamedBufferRangeEXT;
		FuncDef::glNamedBufferStorageEXT_t NamedBufferStorageEXT;
		FuncDef::glClearNamedBufferDataEXT_t ClearNamedBufferDataEXT;
		FuncDef::glClearNamedBufferSubDataEXT_t ClearNamedBufferSubDataEXT;
		FuncDef::glNamedFramebufferParameteriEXT_t NamedFramebufferParameteriEXT;
		FuncDef::glGetNamedFramebufferParameterivEXT_t GetNamedFramebufferParameterivEXT;
		FuncDef::glProgramUniform1dEXT_t ProgramUniform1dEXT;
		FuncDef::glProgramUniform2dEXT_t ProgramUniform2dEXT;
		FuncDef::glProgramUniform3dEXT_t ProgramUniform3dEXT;
		FuncDef::glProgramUniform4dEXT_t ProgramUniform4dEXT;
		FuncDef::glProgramUniform1dvEXT_t ProgramUniform1dvEXT;
		FuncDef::glProgramUniform2dvEXT_t ProgramUniform2dvEXT;
		FuncDef::glProgramUniform3dvEXT_t ProgramUniform3dvEXT;
		FuncDef::glProgramUniform4dvEXT_t ProgramUniform4dvEXT;
		FuncDef::glProgramUniformMatrix2dvEXT_t ProgramUniformMatrix2dvEXT;
		FuncDef::glProgramUniformMatrix3dvEXT_t ProgramUniformMatrix3dvEXT;
		FuncDef::glProgramUniformMatrix4dvEXT_t ProgramUniformMatrix4dvEXT;
		FuncDef::glProgramUniformMatrix2x3dvEXT_t ProgramUniformMatrix2x3dvEXT;
		FuncDef::glProgramUniformMatrix2x4dvEXT_t ProgramUniformMatrix2x4dvEXT;
		FuncDef::glProgramUniformMatrix3x2dvEXT_t ProgramUniformMatrix3x2dvEXT;
		FuncDef::glProgramUniformMatrix3x4dvEXT_t ProgramUniformMatrix3x4dvEXT;
		FuncDef::glProgramUniformMatrix4x2dvEXT_t ProgramUniformMatrix4x2dvEXT;
		FuncDef::glProgramUniformMatrix4x3dvEXT_t ProgramUniformMatrix4x3dvEXT;
		FuncDef::glTextureBufferRangeEXT_t TextureBufferRangeEXT;
		FuncDef::glTextureStorage1DEXT_t TextureStorage1DEXT;
		FuncDef::glTextureStorage2DEXT_t TextureStorage2DEXT;
		FuncDef::glTextureStorage3DEXT_t TextureStorage3DEXT;
		FuncDef::glTextureStorage2DMultisampleEXT_t TextureStorage2DMultisampleEXT;
		FuncDef::glTextureStorage3DMultisampleEXT_t TextureStorage3DMultisampleEXT;
		FuncDef::glVertexArrayBindVertexBufferEXT_t VertexArrayBindVertexBufferEXT;
		FuncDef::glVertexArrayVertexAttribFormatEXT_t VertexArrayVertexAttribFormatEXT;
		FuncDef::glVertexArrayVertexAttribIFormatEXT_t VertexArrayVertexAttribIFormatEXT;
		FuncDef::glVertexArrayVertexAttribLFormatEXT_t VertexArrayVertexAttribLFormatEXT;
		FuncDef::glVertexArrayVertexAttribBindingEXT_t VertexArrayVertexAttribBindingEXT;
		FuncDef::glVertexArrayVertexBindingDivisorEXT_t VertexArrayVertexBindingDivisorEXT;
		FuncDef::glVertexArrayVertexAttribLOffsetEXT_t VertexArrayVertexAttribLOffsetEXT;
		FuncDef::glTexturePageCommitmentEXT_t TexturePageCommitmentEXT;
		FuncDef::glVertexArrayVertexAttribDivisorEXT_t VertexArrayVertexAttribDivisorEXT;
		FuncDef::glDrawArraysInstancedEXT_t DrawArraysInstancedEXT;
		FuncDef::glDrawElementsInstancedEXT_t DrawElementsInstancedEXT;
		FuncDef::glPolygonOffsetClampEXT_t PolygonOffsetClampEXT;
		FuncDef::glRasterSamplesEXT_t RasterSamplesEXT;
		FuncDef::glUseShaderProgramEXT_t UseShaderProgramEXT;
		FuncDef::glActiveProgramEXT_t ActiveProgramEXT;
		FuncDef::glCreateShaderProgramEXT_t CreateShaderProgramEXT;
		FuncDef::glFramebufferFetchBarrierEXT_t FramebufferFetchBarrierEXT;
		FuncDef::glTexStorage1DEXT_t TexStorage1DEXT;
		FuncDef::glTexStorage2DEXT_t TexStorage2DEXT;
		FuncDef::glTexStorage3DEXT_t TexStorage3DEXT;
		FuncDef::glWindowRectanglesEXT_t WindowRectanglesEXT;
		FuncDef::glApplyFramebufferAttachmentCMAAINTEL_t ApplyFramebufferAttachmentCMAAINTEL;
		FuncDef::glBeginPerfQueryINTEL_t BeginPerfQueryINTEL;
		FuncDef::glCreatePerfQueryINTEL_t CreatePerfQueryINTEL;
		FuncDef::glDeletePerfQueryINTEL_t DeletePerfQueryINTEL;
		FuncDef::glEndPerfQueryINTEL_t EndPerfQueryINTEL;
		FuncDef::glGetFirstPerfQueryIdINTEL_t GetFirstPerfQueryIdINTEL;
		FuncDef::glGetNextPerfQueryIdINTEL_t GetNextPerfQueryIdINTEL;
		FuncDef::glGetPerfCounterInfoINTEL_t GetPerfCounterInfoINTEL;
		FuncDef::glGetPerfQueryDataINTEL_t GetPerfQueryDataINTEL;
		FuncDef::glGetPerfQueryIdByNameINTEL_t GetPerfQueryIdByNameINTEL;
		FuncDef::glGetPerfQueryInfoINTEL_t GetPerfQueryInfoINTEL;
		FuncDef::glFramebufferParameteriMESA_t FramebufferParameteriMESA;
		FuncDef::glGetFramebufferParameterivMESA_t GetFramebufferParameterivMESA;
		FuncDef::glMultiDrawArraysIndirectBindlessNV_t MultiDrawArraysIndirectBindlessNV;
		FuncDef::glMultiDrawElementsIndirectBindlessNV_t MultiDrawElementsIndirectBindlessNV;
		FuncDef::glMultiDrawArraysIndirectBindlessCountNV_t MultiDrawArraysIndirectBindlessCountNV;
		FuncDef::glMultiDrawElementsIndirectBindlessCountNV_t MultiDrawElementsIndirectBindlessCountNV;
		FuncDef::glGetTextureHandleNV_t GetTextureHandleNV;
		FuncDef::glGetTextureSamplerHandleNV_t GetTextureSamplerHandleNV;
		FuncDef::glMakeTextureHandleResidentNV_t MakeTextureHandleResidentNV;
		FuncDef::glMakeTextureHandleNonResidentNV_t MakeTextureHandleNonResidentNV;
		FuncDef::glGetImageHandleNV_t GetImageHandleNV;
		FuncDef::glMakeImageHandleResidentNV_t MakeImageHandleResidentNV;
		FuncDef::glMakeImageHandleNonResidentNV_t MakeImageHandleNonResidentNV;
		FuncDef::glUniformHandleui64NV_t UniformHandleui64NV;
		FuncDef::glUniformHandleui64vNV_t UniformHandleui64vNV;
		FuncDef::glProgramUniformHandleui64NV_t ProgramUniformHandleui64NV;
		FuncDef::glProgramUniformHandleui64vNV_t ProgramUniformHandleui64vNV;
		FuncDef::glIsTextureHandleResidentNV_t IsTextureHandleResidentNV;
		FuncDef::glIsImageHandleResidentNV_t IsImageHandleResidentNV;
		FuncDef::glBlendParameteriNV_t BlendParameteriNV;
		FuncDef::glBlendBarrierNV_t BlendBarrierNV;
		FuncDef::glViewportPositionWScaleNV_t ViewportPositionWScaleNV;
		FuncDef::glCreateStatesNV_t CreateStatesNV;
		FuncDef::glDeleteStatesNV_t DeleteStatesNV;
		FuncDef::glIsStateNV_t IsStateNV;
		FuncDef::glStateCaptureNV_t StateCaptureNV;
		FuncDef::glGetCommandHeaderNV_t GetCommandHeaderNV;
		FuncDef::glGetStageIndexNV_t GetStageIndexNV;
		FuncDef::glDrawCommandsNV_t DrawCommandsNV;
		FuncDef::glDrawCommandsAddressNV_t DrawCommandsAddressNV;
		FuncDef::glDrawCommandsStatesNV_t DrawCommandsStatesNV;
		FuncDef::glDrawCommandsStatesAddressNV_t DrawCommandsStatesAddressNV;
		FuncDef::glCreateCommandListsNV_t CreateCommandListsNV;
		FuncDef::glDeleteCommandListsNV_t DeleteCommandListsNV;
		FuncDef::glIsCommandListNV_t IsCommandListNV;
		FuncDef::glListDrawCommandsStatesClientNV_t ListDrawCommandsStatesClientNV;
		FuncDef::glCommandListSegmentsNV_t CommandListSegmentsNV;
		FuncDef::glCompileCommandListNV_t CompileCommandListNV;
		FuncDef::glCallCommandListNV_t CallCommandListNV;
		FuncDef::glBeginConditionalRenderNV_t BeginConditionalRenderNV;
		FuncDef::glEndConditionalRenderNV_t EndConditionalRenderNV;
		FuncDef::glSubpixelPrecisionBiasNV_t SubpixelPrecisionBiasNV;
		FuncDef::glConservativeRasterParameterfNV_t ConservativeRasterParameterfNV;
		FuncDef::glConservativeRasterParameteriNV_t ConservativeRasterParameteriNV;
		FuncDef::glDepthRangedNV_t DepthRangedNV;
		FuncDef::glClearDepthdNV_t ClearDepthdNV;
		FuncDef::glDepthBoundsdNV_t DepthBoundsdNV;
		FuncDef::glDrawVkImageNV_t DrawVkImageNV;
		FuncDef::glGetVkProcAddrNV_t GetVkProcAddrNV;
		FuncDef::glWaitVkSemaphoreNV_t WaitVkSemaphoreNV;
		FuncDef::glSignalVkSemaphoreNV_t SignalVkSemaphoreNV;
		FuncDef::glSignalVkFenceNV_t SignalVkFenceNV;
		FuncDef::glFragmentCoverageColorNV_t FragmentCoverageColorNV;
		FuncDef::glCoverageModulationTableNV_t CoverageModulationTableNV;
		FuncDef::glGetCoverageModulationTableNV_t GetCoverageModulationTableNV;
		FuncDef::glCoverageModulationNV_t CoverageModulationNV;
		FuncDef::glRenderbufferStorageMultisampleCoverageNV_t RenderbufferStorageMultisampleCoverageNV;
		FuncDef::glUniform1i64NV_t Uniform1i64NV;
		FuncDef::glUniform2i64NV_t Uniform2i64NV;
		FuncDef::glUniform3i64NV_t Uniform3i64NV;
		FuncDef::glUniform4i64NV_t Uniform4i64NV;
		FuncDef::glUniform1i64vNV_t Uniform1i64vNV;
		FuncDef::glUniform2i64vNV_t Uniform2i64vNV;
		FuncDef::glUniform3i64vNV_t Uniform3i64vNV;
		FuncDef::glUniform4i64vNV_t Uniform4i64vNV;
		FuncDef::glUniform1ui64NV_t Uniform1ui64NV;
		FuncDef::glUniform2ui64NV_t Uniform2ui64NV;
		FuncDef::glUniform3ui64NV_t Uniform3ui64NV;
		FuncDef::glUniform4ui64NV_t Uniform4ui64NV;
		FuncDef::glUniform1ui64vNV_t Uniform1ui64vNV;
		FuncDef::glUniform2ui64vNV_t Uniform2ui64vNV;
		FuncDef::glUniform3ui64vNV_t Uniform3ui64vNV;
		FuncDef::glUniform4ui64vNV_t Uniform4ui64vNV;
		FuncDef::glGetUniformi64vNV_t GetUniformi64vNV;
		FuncDef::glProgramUniform1i64NV_t ProgramUniform1i64NV;
		FuncDef::glProgramUniform2i64NV_t ProgramUniform2i64NV;
		FuncDef::glProgramUniform3i64NV_t ProgramUniform3i64NV;
		FuncDef::glProgramUniform4i64NV_t ProgramUniform4i64NV;
		FuncDef::glProgramUniform1i64vNV_t ProgramUniform1i64vNV;
		FuncDef::glProgramUniform2i64vNV_t ProgramUniform2i64vNV;
		FuncDef::glProgramUniform3i64vNV_t ProgramUniform3i64vNV;
		FuncDef::glProgramUniform4i64vNV_t ProgramUniform4i64vNV;
		FuncDef::glProgramUniform1ui64NV_t ProgramUniform1ui64NV;
		FuncDef::glProgramUniform2ui64NV_t ProgramUniform2ui64NV;
		FuncDef::glProgramUniform3ui64NV_t ProgramUniform3ui64NV;
		FuncDef::glProgramUniform4ui64NV_t ProgramUniform4ui64NV;
		FuncDef::glProgramUniform1ui64vNV_t ProgramUniform1ui64vNV;
		FuncDef::glProgramUniform2ui64vNV_t ProgramUniform2ui64vNV;
		FuncDef::glProgramUniform3ui64vNV_t ProgramUniform3ui64vNV;
		FuncDef::glProgramUniform4ui64vNV_t ProgramUniform4ui64vNV;
		FuncDef::glGetInternalformatSampleivNV_t GetInternalformatSampleivNV;
		FuncDef::glGetMemoryObjectDetachedResourcesuivNV_t GetMemoryObjectDetachedResourcesuivNV;
		FuncDef::glResetMemoryObjectParameterNV_t ResetMemoryObjectParameterNV;
		FuncDef::glTexAttachMemoryNV_t TexAttachMemoryNV;
		FuncDef::glBufferAttachMemoryNV_t BufferAttachMemoryNV;
		FuncDef::glTextureAttachMemoryNV_t TextureAttachMemoryNV;
		FuncDef::glNamedBufferAttachMemoryNV_t NamedBufferAttachMemoryNV;
		FuncDef::glBufferPageCommitmentMemNV_t BufferPageCommitmentMemNV;
		FuncDef::glTexPageCommitmentMemNV_t TexPageCommitmentMemNV;
		FuncDef::glNamedBufferPageCommitmentMemNV_t NamedBufferPageCommitmentMemNV;
		FuncDef::glTexturePageCommitmentMemNV_t TexturePageCommitmentMemNV;
		FuncDef::glDrawMeshTasksNV_t DrawMeshTasksNV;
		FuncDef::glDrawMeshTasksIndirectNV_t DrawMeshTasksIndirectNV;
		FuncDef::glMultiDrawMeshTasksIndirectNV_t MultiDrawMeshTasksIndirectNV;
		FuncDef::glMultiDrawMeshTasksIndirectCountNV_t MultiDrawMeshTasksIndirectCountNV;
		FuncDef::glGenPathsNV_t GenPathsNV;
		FuncDef::glDeletePathsNV_t DeletePathsNV;
		FuncDef::glIsPathNV_t IsPathNV;
		FuncDef::glPathCommandsNV_t PathCommandsNV;
		FuncDef::glPathCoordsNV_t PathCoordsNV;
		FuncDef::glPathSubCommandsNV_t PathSubCommandsNV;
		FuncDef::glPathSubCoordsNV_t PathSubCoordsNV;
		FuncDef::glPathStringNV_t PathStringNV;
		FuncDef::glPathGlyphsNV_t PathGlyphsNV;
		FuncDef::glPathGlyphRangeNV_t PathGlyphRangeNV;
		FuncDef::glWeightPathsNV_t WeightPathsNV;
		FuncDef::glCopyPathNV_t CopyPathNV;
		FuncDef::glInterpolatePathsNV_t InterpolatePathsNV;
		FuncDef::glTransformPathNV_t TransformPathNV;
		FuncDef::glPathParameterivNV_t PathParameterivNV;
		FuncDef::glPathParameteriNV_t PathParameteriNV;
		FuncDef::glPathParameterfvNV_t PathParameterfvNV;
		FuncDef::glPathParameterfNV_t PathParameterfNV;
		FuncDef::glPathDashArrayNV_t PathDashArrayNV;
		FuncDef::glPathStencilFuncNV_t PathStencilFuncNV;
		FuncDef::glPathStencilDepthOffsetNV_t PathStencilDepthOffsetNV;
		FuncDef::glStencilFillPathNV_t StencilFillPathNV;
		FuncDef::glStencilStrokePathNV_t StencilStrokePathNV;
		FuncDef::glStencilFillPathInstancedNV_t StencilFillPathInstancedNV;
		FuncDef::glStencilStrokePathInstancedNV_t StencilStrokePathInstancedNV;
		FuncDef::glPathCoverDepthFuncNV_t PathCoverDepthFuncNV;
		FuncDef::glCoverFillPathNV_t CoverFillPathNV;
		FuncDef::glCoverStrokePathNV_t CoverStrokePathNV;
		FuncDef::glCoverFillPathInstancedNV_t CoverFillPathInstancedNV;
		FuncDef::glCoverStrokePathInstancedNV_t CoverStrokePathInstancedNV;
		FuncDef::glGetPathParameterivNV_t GetPathParameterivNV;
		FuncDef::glGetPathParameterfvNV_t GetPathParameterfvNV;
		FuncDef::glGetPathCommandsNV_t GetPathCommandsNV;
		FuncDef::glGetPathCoordsNV_t GetPathCoordsNV;
		FuncDef::glGetPathDashArrayNV_t GetPathDashArrayNV;
		FuncDef::glGetPathMetricsNV_t GetPathMetricsNV;
		FuncDef::glGetPathMetricRangeNV_t GetPathMetricRangeNV;
		FuncDef::glGetPathSpacingNV_t GetPathSpacingNV;
		FuncDef::glIsPointInFillPathNV_t IsPointInFillPathNV;
		FuncDef::glIsPointInStrokePathNV_t IsPointInStrokePathNV;
		FuncDef::glGetPathLengthNV_t GetPathLengthNV;
		FuncDef::glPointAlongPathNV_t PointAlongPathNV;
		FuncDef::glMatrixLoad3x2fNV_t MatrixLoad3x2fNV;
		FuncDef::glMatrixLoad3x3fNV_t MatrixLoad3x3fNV;
		FuncDef::glMatrixLoadTranspose3x3fNV_t MatrixLoadTranspose3x3fNV;
		FuncDef::glMatrixMult3x2fNV_t MatrixMult3x2fNV;
		FuncDef::glMatrixMult3x3fNV_t MatrixMult3x3fNV;
		FuncDef::glMatrixMultTranspose3x3fNV_t MatrixMultTranspose3x3fNV;
		FuncDef::glStencilThenCoverFillPathNV_t StencilThenCoverFillPathNV;
		FuncDef::glStencilThenCoverStrokePathNV_t StencilThenCoverStrokePathNV;
		FuncDef::glStencilThenCoverFillPathInstancedNV_t StencilThenCoverFillPathInstancedNV;
		FuncDef::glStencilThenCoverStrokePathInstancedNV_t StencilThenCoverStrokePathInstancedNV;
		FuncDef::glPathGlyphIndexRangeNV_t PathGlyphIndexRangeNV;
		FuncDef::glPathGlyphIndexArrayNV_t PathGlyphIndexArrayNV;
		FuncDef::glPathMemoryGlyphIndexArrayNV_t PathMemoryGlyphIndexArrayNV;
		FuncDef::glProgramPathFragmentInputGenNV_t ProgramPathFragmentInputGenNV;
		FuncDef::glGetProgramResourcefvNV_t GetProgramResourcefvNV;
		FuncDef::glFramebufferSampleLocationsfvNV_t FramebufferSampleLocationsfvNV;
		FuncDef::glNamedFramebufferSampleLocationsfvNV_t NamedFramebufferSampleLocationsfvNV;
		FuncDef::glResolveDepthValuesNV_t ResolveDepthValuesNV;
		FuncDef::glScissorExclusiveNV_t ScissorExclusiveNV;
		FuncDef::glScissorExclusiveArrayvNV_t ScissorExclusiveArrayvNV;
		FuncDef::glMakeBufferResidentNV_t MakeBufferResidentNV;
		FuncDef::glMakeBufferNonResidentNV_t MakeBufferNonResidentNV;
		FuncDef::glIsBufferResidentNV_t IsBufferResidentNV;
		FuncDef::glMakeNamedBufferResidentNV_t MakeNamedBufferResidentNV;
		FuncDef::glMakeNamedBufferNonResidentNV_t MakeNamedBufferNonResidentNV;
		FuncDef::glIsNamedBufferResidentNV_t IsNamedBufferResidentNV;
		FuncDef::glGetBufferParameterui64vNV_t GetBufferParameterui64vNV;
		FuncDef::glGetNamedBufferParameterui64vNV_t GetNamedBufferParameterui64vNV;
		FuncDef::glGetIntegerui64vNV_t GetIntegerui64vNV;
		FuncDef::glUniformui64NV_t Uniformui64NV;
		FuncDef::glUniformui64vNV_t Uniformui64vNV;
		FuncDef::glGetUniformui64vNV_t GetUniformui64vNV;
		FuncDef::glProgramUniformui64NV_t ProgramUniformui64NV;
		FuncDef::glProgramUniformui64vNV_t ProgramUniformui64vNV;
		FuncDef::glBindShadingRateImageNV_t BindShadingRateImageNV;
		FuncDef::glGetShadingRateImagePaletteNV_t GetShadingRateImagePaletteNV;
		FuncDef::glGetShadingRateSampleLocationivNV_t GetShadingRateSampleLocationivNV;
		FuncDef::glShadingRateImageBarrierNV_t ShadingRateImageBarrierNV;
		FuncDef::glShadingRateImagePaletteNV_t ShadingRateImagePaletteNV;
		FuncDef::glShadingRateSampleOrderNV_t ShadingRateSampleOrderNV;
		FuncDef::glShadingRateSampleOrderCustomNV_t ShadingRateSampleOrderCustomNV;
		FuncDef::glTextureBarrierNV_t TextureBarrierNV;
		FuncDef::glVertexAttribL1i64NV_t VertexAttribL1i64NV;
		FuncDef::glVertexAttribL2i64NV_t VertexAttribL2i64NV;
		FuncDef::glVertexAttribL3i64NV_t VertexAttribL3i64NV;
		FuncDef::glVertexAttribL4i64NV_t VertexAttribL4i64NV;
		FuncDef::glVertexAttribL1i64vNV_t VertexAttribL1i64vNV;
		FuncDef::glVertexAttribL2i64vNV_t VertexAttribL2i64vNV;
		FuncDef::glVertexAttribL3i64vNV_t VertexAttribL3i64vNV;
		FuncDef::glVertexAttribL4i64vNV_t VertexAttribL4i64vNV;
		FuncDef::glVertexAttribL1ui64NV_t VertexAttribL1ui64NV;
		FuncDef::glVertexAttribL2ui64NV_t VertexAttribL2ui64NV;
		FuncDef::glVertexAttribL3ui64NV_t VertexAttribL3ui64NV;
		FuncDef::glVertexAttribL4ui64NV_t VertexAttribL4ui64NV;
		FuncDef::glVertexAttribL1ui64vNV_t VertexAttribL1ui64vNV;
		FuncDef::glVertexAttribL2ui64vNV_t VertexAttribL2ui64vNV;
		FuncDef::glVertexAttribL3ui64vNV_t VertexAttribL3ui64vNV;
		FuncDef::glVertexAttribL4ui64vNV_t VertexAttribL4ui64vNV;
		FuncDef::glGetVertexAttribLi64vNV_t GetVertexAttribLi64vNV;
		FuncDef::glGetVertexAttribLui64vNV_t GetVertexAttribLui64vNV;
		FuncDef::glVertexAttribLFormatNV_t VertexAttribLFormatNV;
		FuncDef::glBufferAddressRangeNV_t BufferAddressRangeNV;
		FuncDef::glVertexFormatNV_t VertexFormatNV;
		FuncDef::glNormalFormatNV_t NormalFormatNV;
		FuncDef::glColorFormatNV_t ColorFormatNV;
		FuncDef::glIndexFormatNV_t IndexFormatNV;
		FuncDef::glTexCoordFormatNV_t TexCoordFormatNV;
		FuncDef::glEdgeFlagFormatNV_t EdgeFlagFormatNV;
		FuncDef::glSecondaryColorFormatNV_t SecondaryColorFormatNV;
		FuncDef::glFogCoordFormatNV_t FogCoordFormatNV;
		FuncDef::glVertexAttribFormatNV_t VertexAttribFormatNV;
		FuncDef::glVertexAttribIFormatNV_t VertexAttribIFormatNV;
		FuncDef::glGetIntegerui64i_vNV_t GetIntegerui64i_vNV;
		FuncDef::glViewportSwizzleNV_t ViewportSwizzleNV;
		FuncDef::glFramebufferTextureMultiviewOVR_t FramebufferTextureMultiviewOVR;
	};

	GLproc ProcList[1278];

	static constexpr const char* ProcList[1278] = {
		"glCullFace",
		"glFrontFace",
		"glHint",
		"glLineWidth",
		"glPointSize",
		"glPolygonMode",
		"glScissor",
		"glTexParameterf",
		"glTexParameterfv",
		"glTexParameteri",
		"glTexParameteriv",
		"glTexImage1D",
		"glTexImage2D",
		"glDrawBuffer",
		"glClear",
		"glClearColor",
		"glClearStencil",
		"glClearDepth",
		"glStencilMask",
		"glColorMask",
		"glDepthMask",
		"glDisable",
		"glEnable",
		"glFinish",
		"glFlush",
		"glBlendFunc",
		"glLogicOp",
		"glStencilFunc",
		"glStencilOp",
		"glDepthFunc",
		"glPixelStoref",
		"glPixelStorei",
		"glReadBuffer",
		"glReadPixels",
		"glGetBooleanv",
		"glGetDoublev",
		"glGetError",
		"glGetFloatv",
		"glGetIntegerv",
		"glGetString",
		"glGetTexImage",
		"glGetTexParameterfv",
		"glGetTexParameteriv",
		"glGetTexLevelParameterfv",
		"glGetTexLevelParameteriv",
		"glIsEnabled",
		"glDepthRange",
		"glViewport",
		"glDrawArrays",
		"glDrawElements",
		"glGetPointerv",
		"glPolygonOffset",
		"glCopyTexImage1D",
		"glCopyTexImage2D",
		"glCopyTexSubImage1D",
		"glCopyTexSubImage2D",
		"glTexSubImage1D",
		"glTexSubImage2D",
		"glBindTexture",
		"glDeleteTextures",
		"glGenTextures",
		"glIsTexture",
		"glDrawRangeElements",
		"glTexImage3D",
		"glTexSubImage3D",
		"glCopyTexSubImage3D",
		"glActiveTexture",
		"glSampleCoverage",
		"glCompressedTexImage3D",
		"glCompressedTexImage2D",
		"glCompressedTexImage1D",
		"glCompressedTexSubImage3D",
		"glCompressedTexSubImage2D",
		"glCompressedTexSubImage1D",
		"glGetCompressedTexImage",
		"glBlendFuncSeparate",
		"glMultiDrawArrays",
		"glMultiDrawElements",
		"glPointParameterf",
		"glPointParameterfv",
		"glPointParameteri",
		"glPointParameteriv",
		"glBlendColor",
		"glBlendEquation",
		"glGenQueries",
		"glDeleteQueries",
		"glIsQuery",
		"glBeginQuery",
		"glEndQuery",
		"glGetQueryiv",
		"glGetQueryObjectiv",
		"glGetQueryObjectuiv",
		"glBindBuffer",
		"glDeleteBuffers",
		"glGenBuffers",
		"glIsBuffer",
		"glBufferData",
		"glBufferSubData",
		"glGetBufferSubData",
		"glMapBuffer",
		"glUnmapBuffer",
		"glGetBufferParameteriv",
		"glGetBufferPointerv",
		"glBlendEquationSeparate",
		"glDrawBuffers",
		"glStencilOpSeparate",
		"glStencilFuncSeparate",
		"glStencilMaskSeparate",
		"glAttachShader",
		"glBindAttribLocation",
		"glCompileShader",
		"glCreateProgram",
		"glCreateShader",
		"glDeleteProgram",
		"glDeleteShader",
		"glDetachShader",
		"glDisableVertexAttribArray",
		"glEnableVertexAttribArray",
		"glGetActiveAttrib",
		"glGetActiveUniform",
		"glGetAttachedShaders",
		"glGetAttribLocation",
		"glGetProgramiv",
		"glGetProgramInfoLog",
		"glGetShaderiv",
		"glGetShaderInfoLog",
		"glGetShaderSource",
		"glGetUniformLocation",
		"glGetUniformfv",
		"glGetUniformiv",
		"glGetVertexAttribdv",
		"glGetVertexAttribfv",
		"glGetVertexAttribiv",
		"glGetVertexAttribPointerv",
		"glIsProgram",
		"glIsShader",
		"glLinkProgram",
		"glShaderSource",
		"glUseProgram",
		"glUniform1f",
		"glUniform2f",
		"glUniform3f",
		"glUniform4f",
		"glUniform1i",
		"glUniform2i",
		"glUniform3i",
		"glUniform4i",
		"glUniform1fv",
		"glUniform2fv",
		"glUniform3fv",
		"glUniform4fv",
		"glUniform1iv",
		"glUniform2iv",
		"glUniform3iv",
		"glUniform4iv",
		"glUniformMatrix2fv",
		"glUniformMatrix3fv",
		"glUniformMatrix4fv",
		"glValidateProgram",
		"glVertexAttrib1d",
		"glVertexAttrib1dv",
		"glVertexAttrib1f",
		"glVertexAttrib1fv",
		"glVertexAttrib1s",
		"glVertexAttrib1sv",
		"glVertexAttrib2d",
		"glVertexAttrib2dv",
		"glVertexAttrib2f",
		"glVertexAttrib2fv",
		"glVertexAttrib2s",
		"glVertexAttrib2sv",
		"glVertexAttrib3d",
		"glVertexAttrib3dv",
		"glVertexAttrib3f",
		"glVertexAttrib3fv",
		"glVertexAttrib3s",
		"glVertexAttrib3sv",
		"glVertexAttrib4Nbv",
		"glVertexAttrib4Niv",
		"glVertexAttrib4Nsv",
		"glVertexAttrib4Nub",
		"glVertexAttrib4Nubv",
		"glVertexAttrib4Nuiv",
		"glVertexAttrib4Nusv",
		"glVertexAttrib4bv",
		"glVertexAttrib4d",
		"glVertexAttrib4dv",
		"glVertexAttrib4f",
		"glVertexAttrib4fv",
		"glVertexAttrib4iv",
		"glVertexAttrib4s",
		"glVertexAttrib4sv",
		"glVertexAttrib4ubv",
		"glVertexAttrib4uiv",
		"glVertexAttrib4usv",
		"glVertexAttribPointer",
		"glUniformMatrix2x3fv",
		"glUniformMatrix3x2fv",
		"glUniformMatrix2x4fv",
		"glUniformMatrix4x2fv",
		"glUniformMatrix3x4fv",
		"glUniformMatrix4x3fv",
		"glColorMaski",
		"glGetBooleani_v",
		"glGetIntegeri_v",
		"glEnablei",
		"glDisablei",
		"glIsEnabledi",
		"glBeginTransformFeedback",
		"glEndTransformFeedback",
		"glBindBufferRange",
		"glBindBufferBase",
		"glTransformFeedbackVaryings",
		"glGetTransformFeedbackVarying",
		"glClampColor",
		"glBeginConditionalRender",
		"glEndConditionalRender",
		"glVertexAttribIPointer",
		"glGetVertexAttribIiv",
		"glGetVertexAttribIuiv",
		"glVertexAttribI1i",
		"glVertexAttribI2i",
		"glVertexAttribI3i",
		"glVertexAttribI4i",
		"glVertexAttribI1ui",
		"glVertexAttribI2ui",
		"glVertexAttribI3ui",
		"glVertexAttribI4ui",
		"glVertexAttribI1iv",
		"glVertexAttribI2iv",
		"glVertexAttribI3iv",
		"glVertexAttribI4iv",
		"glVertexAttribI1uiv",
		"glVertexAttribI2uiv",
		"glVertexAttribI3uiv",
		"glVertexAttribI4uiv",
		"glVertexAttribI4bv",
		"glVertexAttribI4sv",
		"glVertexAttribI4ubv",
		"glVertexAttribI4usv",
		"glGetUniformuiv",
		"glBindFragDataLocation",
		"glGetFragDataLocation",
		"glUniform1ui",
		"glUniform2ui",
		"glUniform3ui",
		"glUniform4ui",
		"glUniform1uiv",
		"glUniform2uiv",
		"glUniform3uiv",
		"glUniform4uiv",
		"glTexParameterIiv",
		"glTexParameterIuiv",
		"glGetTexParameterIiv",
		"glGetTexParameterIuiv",
		"glClearBufferiv",
		"glClearBufferuiv",
		"glClearBufferfv",
		"glClearBufferfi",
		"glGetStringi",
		"glIsRenderbuffer",
		"glBindRenderbuffer",
		"glDeleteRenderbuffers",
		"glGenRenderbuffers",
		"glRenderbufferStorage",
		"glGetRenderbufferParameteriv",
		"glIsFramebuffer",
		"glBindFramebuffer",
		"glDeleteFramebuffers",
		"glGenFramebuffers",
		"glCheckFramebufferStatus",
		"glFramebufferTexture1D",
		"glFramebufferTexture2D",
		"glFramebufferTexture3D",
		"glFramebufferRenderbuffer",
		"glGetFramebufferAttachmentParameteriv",
		"glGenerateMipmap",
		"glBlitFramebuffer",
		"glRenderbufferStorageMultisample",
		"glFramebufferTextureLayer",
		"glMapBufferRange",
		"glFlushMappedBufferRange",
		"glBindVertexArray",
		"glDeleteVertexArrays",
		"glGenVertexArrays",
		"glIsVertexArray",
		"glDrawArraysInstanced",
		"glDrawElementsInstanced",
		"glTexBuffer",
		"glPrimitiveRestartIndex",
		"glCopyBufferSubData",
		"glGetUniformIndices",
		"glGetActiveUniformsiv",
		"glGetActiveUniformName",
		"glGetUniformBlockIndex",
		"glGetActiveUniformBlockiv",
		"glGetActiveUniformBlockName",
		"glUniformBlockBinding",
		"glDrawElementsBaseVertex",
		"glDrawRangeElementsBaseVertex",
		"glDrawElementsInstancedBaseVertex",
		"glMultiDrawElementsBaseVertex",
		"glProvokingVertex",
		"glFenceSync",
		"glIsSync",
		"glDeleteSync",
		"glClientWaitSync",
		"glWaitSync",
		"glGetInteger64v",
		"glGetSynciv",
		"glGetInteger64i_v",
		"glGetBufferParameteri64v",
		"glFramebufferTexture",
		"glTexImage2DMultisample",
		"glTexImage3DMultisample",
		"glGetMultisamplefv",
		"glSampleMaski",
		"glBindFragDataLocationIndexed",
		"glGetFragDataIndex",
		"glGenSamplers",
		"glDeleteSamplers",
		"glIsSampler",
		"glBindSampler",
		"glSamplerParameteri",
		"glSamplerParameteriv",
		"glSamplerParameterf",
		"glSamplerParameterfv",
		"glSamplerParameterIiv",
		"glSamplerParameterIuiv",
		"glGetSamplerParameteriv",
		"glGetSamplerParameterIiv",
		"glGetSamplerParameterfv",
		"glGetSamplerParameterIuiv",
		"glQueryCounter",
		"glGetQueryObjecti64v",
		"glGetQueryObjectui64v",
		"glVertexAttribDivisor",
		"glVertexAttribP1ui",
		"glVertexAttribP1uiv",
		"glVertexAttribP2ui",
		"glVertexAttribP2uiv",
		"glVertexAttribP3ui",
		"glVertexAttribP3uiv",
		"glVertexAttribP4ui",
		"glVertexAttribP4uiv",
		"glMinSampleShading",
		"glBlendEquationi",
		"glBlendEquationSeparatei",
		"glBlendFunci",
		"glBlendFuncSeparatei",
		"glDrawArraysIndirect",
		"glDrawElementsIndirect",
		"glUniform1d",
		"glUniform2d",
		"glUniform3d",
		"glUniform4d",
		"glUniform1dv",
		"glUniform2dv",
		"glUniform3dv",
		"glUniform4dv",
		"glUniformMatrix2dv",
		"glUniformMatrix3dv",
		"glUniformMatrix4dv",
		"glUniformMatrix2x3dv",
		"glUniformMatrix2x4dv",
		"glUniformMatrix3x2dv",
		"glUniformMatrix3x4dv",
		"glUniformMatrix4x2dv",
		"glUniformMatrix4x3dv",
		"glGetUniformdv",
		"glGetSubroutineUniformLocation",
		"glGetSubroutineIndex",
		"glGetActiveSubroutineUniformiv",
		"glGetActiveSubroutineUniformName",
		"glGetActiveSubroutineName",
		"glUniformSubroutinesuiv",
		"glGetUniformSubroutineuiv",
		"glGetProgramStageiv",
		"glPatchParameteri",
		"glPatchParameterfv",
		"glBindTransformFeedback",
		"glDeleteTransformFeedbacks",
		"glGenTransformFeedbacks",
		"glIsTransformFeedback",
		"glPauseTransformFeedback",
		"glResumeTransformFeedback",
		"glDrawTransformFeedback",
		"glDrawTransformFeedbackStream",
		"glBeginQueryIndexed",
		"glEndQueryIndexed",
		"glGetQueryIndexediv",
		"glReleaseShaderCompiler",
		"glShaderBinary",
		"glGetShaderPrecisionFormat",
		"glDepthRangef",
		"glClearDepthf",
		"glGetProgramBinary",
		"glProgramBinary",
		"glProgramParameteri",
		"glUseProgramStages",
		"glActiveShaderProgram",
		"glCreateShaderProgramv",
		"glBindProgramPipeline",
		"glDeleteProgramPipelines",
		"glGenProgramPipelines",
		"glIsProgramPipeline",
		"glGetProgramPipelineiv",
		"glProgramUniform1i",
		"glProgramUniform1iv",
		"glProgramUniform1f",
		"glProgramUniform1fv",
		"glProgramUniform1d",
		"glProgramUniform1dv",
		"glProgramUniform1ui",
		"glProgramUniform1uiv",
		"glProgramUniform2i",
		"glProgramUniform2iv",
		"glProgramUniform2f",
		"glProgramUniform2fv",
		"glProgramUniform2d",
		"glProgramUniform2dv",
		"glProgramUniform2ui",
		"glProgramUniform2uiv",
		"glProgramUniform3i",
		"glProgramUniform3iv",
		"glProgramUniform3f",
		"glProgramUniform3fv",
		"glProgramUniform3d",
		"glProgramUniform3dv",
		"glProgramUniform3ui",
		"glProgramUniform3uiv",
		"glProgramUniform4i",
		"glProgramUniform4iv",
		"glProgramUniform4f",
		"glProgramUniform4fv",
		"glProgramUniform4d",
		"glProgramUniform4dv",
		"glProgramUniform4ui",
		"glProgramUniform4uiv",
		"glProgramUniformMatrix2fv",
		"glProgramUniformMatrix3fv",
		"glProgramUniformMatrix4fv",
		"glProgramUniformMatrix2dv",
		"glProgramUniformMatrix3dv",
		"glProgramUniformMatrix4dv",
		"glProgramUniformMatrix2x3fv",
		"glProgramUniformMatrix3x2fv",
		"glProgramUniformMatrix2x4fv",
		"glProgramUniformMatrix4x2fv",
		"glProgramUniformMatrix3x4fv",
		"glProgramUniformMatrix4x3fv",
		"glProgramUniformMatrix2x3dv",
		"glProgramUniformMatrix3x2dv",
		"glProgramUniformMatrix2x4dv",
		"glProgramUniformMatrix4x2dv",
		"glProgramUniformMatrix3x4dv",
		"glProgramUniformMatrix4x3dv",
		"glValidateProgramPipeline",
		"glGetProgramPipelineInfoLog",
		"glVertexAttribL1d",
		"glVertexAttribL2d",
		"glVertexAttribL3d",
		"glVertexAttribL4d",
		"glVertexAttribL1dv",
		"glVertexAttribL2dv",
		"glVertexAttribL3dv",
		"glVertexAttribL4dv",
		"glVertexAttribLPointer",
		"glGetVertexAttribLdv",
		"glViewportArrayv",
		"glViewportIndexedf",
		"glViewportIndexedfv",
		"glScissorArrayv",
		"glScissorIndexed",
		"glScissorIndexedv",
		"glDepthRangeArrayv",
		"glDepthRangeIndexed",
		"glGetFloati_v",
		"glGetDoublei_v",
		"glDrawArraysInstancedBaseInstance",
		"glDrawElementsInstancedBaseInstance",
		"glDrawElementsInstancedBaseVertexBaseInstance",
		"glGetInternalformativ",
		"glGetActiveAtomicCounterBufferiv",
		"glBindImageTexture",
		"glMemoryBarrier",
		"glTexStorage1D",
		"glTexStorage2D",
		"glTexStorage3D",
		"glDrawTransformFeedbackInstanced",
		"glDrawTransformFeedbackStreamInstanced",
		"glClearBufferData",
		"glClearBufferSubData",
		"glDispatchCompute",
		"glDispatchComputeIndirect",
		"glCopyImageSubData",
		"glFramebufferParameteri",
		"glGetFramebufferParameteriv",
		"glGetInternalformati64v",
		"glInvalidateTexSubImage",
		"glInvalidateTexImage",
		"glInvalidateBufferSubData",
		"glInvalidateBufferData",
		"glInvalidateFramebuffer",
		"glInvalidateSubFramebuffer",
		"glMultiDrawArraysIndirect",
		"glMultiDrawElementsIndirect",
		"glGetProgramInterfaceiv",
		"glGetProgramResourceIndex",
		"glGetProgramResourceName",
		"glGetProgramResourceiv",
		"glGetProgramResourceLocation",
		"glGetProgramResourceLocationIndex",
		"glShaderStorageBlockBinding",
		"glTexBufferRange",
		"glTexStorage2DMultisample",
		"glTexStorage3DMultisample",
		"glTextureView",
		"glBindVertexBuffer",
		"glVertexAttribFormat",
		"glVertexAttribIFormat",
		"glVertexAttribLFormat",
		"glVertexAttribBinding",
		"glVertexBindingDivisor",
		"glDebugMessageControl",
		"glDebugMessageInsert",
		"glDebugMessageCallback",
		"glGetDebugMessageLog",
		"glPushDebugGroup",
		"glPopDebugGroup",
		"glObjectLabel",
		"glGetObjectLabel",
		"glObjectPtrLabel",
		"glGetObjectPtrLabel",
		"glBufferStorage",
		"glClearTexImage",
		"glClearTexSubImage",
		"glBindBuffersBase",
		"glBindBuffersRange",
		"glBindTextures",
		"glBindSamplers",
		"glBindImageTextures",
		"glBindVertexBuffers",
		"glClipControl",
		"glCreateTransformFeedbacks",
		"glTransformFeedbackBufferBase",
		"glTransformFeedbackBufferRange",
		"glGetTransformFeedbackiv",
		"glGetTransformFeedbacki_v",
		"glGetTransformFeedbacki64_v",
		"glCreateBuffers",
		"glNamedBufferStorage",
		"glNamedBufferData",
		"glNamedBufferSubData",
		"glCopyNamedBufferSubData",
		"glClearNamedBufferData",
		"glClearNamedBufferSubData",
		"glMapNamedBuffer",
		"glMapNamedBufferRange",
		"glUnmapNamedBuffer",
		"glFlushMappedNamedBufferRange",
		"glGetNamedBufferParameteriv",
		"glGetNamedBufferParameteri64v",
		"glGetNamedBufferPointerv",
		"glGetNamedBufferSubData",
		"glCreateFramebuffers",
		"glNamedFramebufferRenderbuffer",
		"glNamedFramebufferParameteri",
		"glNamedFramebufferTexture",
		"glNamedFramebufferTextureLayer",
		"glNamedFramebufferDrawBuffer",
		"glNamedFramebufferDrawBuffers",
		"glNamedFramebufferReadBuffer",
		"glInvalidateNamedFramebufferData",
		"glInvalidateNamedFramebufferSubData",
		"glClearNamedFramebufferiv",
		"glClearNamedFramebufferuiv",
		"glClearNamedFramebufferfv",
		"glClearNamedFramebufferfi",
		"glBlitNamedFramebuffer",
		"glCheckNamedFramebufferStatus",
		"glGetNamedFramebufferParameteriv",
		"glGetNamedFramebufferAttachmentParameteriv",
		"glCreateRenderbuffers",
		"glNamedRenderbufferStorage",
		"glNamedRenderbufferStorageMultisample",
		"glGetNamedRenderbufferParameteriv",
		"glCreateTextures",
		"glTextureBuffer",
		"glTextureBufferRange",
		"glTextureStorage1D",
		"glTextureStorage2D",
		"glTextureStorage3D",
		"glTextureStorage2DMultisample",
		"glTextureStorage3DMultisample",
		"glTextureSubImage1D",
		"glTextureSubImage2D",
		"glTextureSubImage3D",
		"glCompressedTextureSubImage1D",
		"glCompressedTextureSubImage2D",
		"glCompressedTextureSubImage3D",
		"glCopyTextureSubImage1D",
		"glCopyTextureSubImage2D",
		"glCopyTextureSubImage3D",
		"glTextureParameterf",
		"glTextureParameterfv",
		"glTextureParameteri",
		"glTextureParameterIiv",
		"glTextureParameterIuiv",
		"glTextureParameteriv",
		"glGenerateTextureMipmap",
		"glBindTextureUnit",
		"glGetTextureImage",
		"glGetCompressedTextureImage",
		"glGetTextureLevelParameterfv",
		"glGetTextureLevelParameteriv",
		"glGetTextureParameterfv",
		"glGetTextureParameterIiv",
		"glGetTextureParameterIuiv",
		"glGetTextureParameteriv",
		"glCreateVertexArrays",
		"glDisableVertexArrayAttrib",
		"glEnableVertexArrayAttrib",
		"glVertexArrayElementBuffer",
		"glVertexArrayVertexBuffer",
		"glVertexArrayVertexBuffers",
		"glVertexArrayAttribBinding",
		"glVertexArrayAttribFormat",
		"glVertexArrayAttribIFormat",
		"glVertexArrayAttribLFormat",
		"glVertexArrayBindingDivisor",
		"glGetVertexArrayiv",
		"glGetVertexArrayIndexediv",
		"glGetVertexArrayIndexed64iv",
		"glCreateSamplers",
		"glCreateProgramPipelines",
		"glCreateQueries",
		"glGetQueryBufferObjecti64v",
		"glGetQueryBufferObjectiv",
		"glGetQueryBufferObjectui64v",
		"glGetQueryBufferObjectuiv",
		"glMemoryBarrierByRegion",
		"glGetTextureSubImage",
		"glGetCompressedTextureSubImage",
		"glGetGraphicsResetStatus",
		"glGetnCompressedTexImage",
		"glGetnTexImage",
		"glGetnUniformdv",
		"glGetnUniformfv",
		"glGetnUniformiv",
		"glGetnUniformuiv",
		"glReadnPixels",
		"glTextureBarrier",
		"glSpecializeShader",
		"glMultiDrawArraysIndirectCount",
		"glMultiDrawElementsIndirectCount",
		"glPolygonOffsetClamp",
		"glPrimitiveBoundingBoxARB",
		"glGetTextureHandleARB",
		"glGetTextureSamplerHandleARB",
		"glMakeTextureHandleResidentARB",
		"glMakeTextureHandleNonResidentARB",
		"glGetImageHandleARB",
		"glMakeImageHandleResidentARB",
		"glMakeImageHandleNonResidentARB",
		"glUniformHandleui64ARB",
		"glUniformHandleui64vARB",
		"glProgramUniformHandleui64ARB",
		"glProgramUniformHandleui64vARB",
		"glIsTextureHandleResidentARB",
		"glIsImageHandleResidentARB",
		"glVertexAttribL1ui64ARB",
		"glVertexAttribL1ui64vARB",
		"glGetVertexAttribLui64vARB",
		"glCreateSyncFromCLeventARB",
		"glDispatchComputeGroupSizeARB",
		"glDebugMessageControlARB",
		"glDebugMessageInsertARB",
		"glDebugMessageCallbackARB",
		"glGetDebugMessageLogARB",
		"glBlendEquationiARB",
		"glBlendEquationSeparateiARB",
		"glBlendFunciARB",
		"glBlendFuncSeparateiARB",
		"glDrawArraysInstancedARB",
		"glDrawElementsInstancedARB",
		"glProgramParameteriARB",
		"glFramebufferTextureARB",
		"glFramebufferTextureLayerARB",
		"glFramebufferTextureFaceARB",
		"glSpecializeShaderARB",
		"glUniform1i64ARB",
		"glUniform2i64ARB",
		"glUniform3i64ARB",
		"glUniform4i64ARB",
		"glUniform1i64vARB",
		"glUniform2i64vARB",
		"glUniform3i64vARB",
		"glUniform4i64vARB",
		"glUniform1ui64ARB",
		"glUniform2ui64ARB",
		"glUniform3ui64ARB",
		"glUniform4ui64ARB",
		"glUniform1ui64vARB",
		"glUniform2ui64vARB",
		"glUniform3ui64vARB",
		"glUniform4ui64vARB",
		"glGetUniformi64vARB",
		"glGetUniformui64vARB",
		"glGetnUniformi64vARB",
		"glGetnUniformui64vARB",
		"glProgramUniform1i64ARB",
		"glProgramUniform2i64ARB",
		"glProgramUniform3i64ARB",
		"glProgramUniform4i64ARB",
		"glProgramUniform1i64vARB",
		"glProgramUniform2i64vARB",
		"glProgramUniform3i64vARB",
		"glProgramUniform4i64vARB",
		"glProgramUniform1ui64ARB",
		"glProgramUniform2ui64ARB",
		"glProgramUniform3ui64ARB",
		"glProgramUniform4ui64ARB",
		"glProgramUniform1ui64vARB",
		"glProgramUniform2ui64vARB",
		"glProgramUniform3ui64vARB",
		"glProgramUniform4ui64vARB",
		"glMultiDrawArraysIndirectCountARB",
		"glMultiDrawElementsIndirectCountARB",
		"glVertexAttribDivisorARB",
		"glMaxShaderCompilerThreadsARB",
		"glGetGraphicsResetStatusARB",
		"glGetnTexImageARB",
		"glReadnPixelsARB",
		"glGetnCompressedTexImageARB",
		"glGetnUniformfvARB",
		"glGetnUniformivARB",
		"glGetnUniformuivARB",
		"glGetnUniformdvARB",
		"glFramebufferSampleLocationsfvARB",
		"glNamedFramebufferSampleLocationsfvARB",
		"glEvaluateDepthValuesARB",
		"glMinSampleShadingARB",
		"glNamedStringARB",
		"glDeleteNamedStringARB",
		"glCompileShaderIncludeARB",
		"glIsNamedStringARB",
		"glGetNamedStringARB",
		"glGetNamedStringivARB",
		"glBufferPageCommitmentARB",
		"glNamedBufferPageCommitmentEXT",
		"glNamedBufferPageCommitmentARB",
		"glTexPageCommitmentARB",
		"glTexBufferARB",
		"glDepthRangeArraydvNV",
		"glDepthRangeIndexeddNV",
		"glBlendBarrierKHR",
		"glMaxShaderCompilerThreadsKHR",
		"glRenderbufferStorageMultisampleAdvancedAMD",
		"glNamedRenderbufferStorageMultisampleAdvancedAMD",
		"glGetPerfMonitorGroupsAMD",
		"glGetPerfMonitorCountersAMD",
		"glGetPerfMonitorGroupStringAMD",
		"glGetPerfMonitorCounterStringAMD",
		"glGetPerfMonitorCounterInfoAMD",
		"glGenPerfMonitorsAMD",
		"glDeletePerfMonitorsAMD",
		"glSelectPerfMonitorCountersAMD",
		"glBeginPerfMonitorAMD",
		"glEndPerfMonitorAMD",
		"glGetPerfMonitorCounterDataAMD",
		"glEGLImageTargetTexStorageEXT",
		"glEGLImageTargetTextureStorageEXT",
		"glLabelObjectEXT",
		"glGetObjectLabelEXT",
		"glInsertEventMarkerEXT",
		"glPushGroupMarkerEXT",
		"glPopGroupMarkerEXT",
		"glMatrixLoadfEXT",
		"glMatrixLoaddEXT",
		"glMatrixMultfEXT",
		"glMatrixMultdEXT",
		"glMatrixLoadIdentityEXT",
		"glMatrixRotatefEXT",
		"glMatrixRotatedEXT",
		"glMatrixScalefEXT",
		"glMatrixScaledEXT",
		"glMatrixTranslatefEXT",
		"glMatrixTranslatedEXT",
		"glMatrixFrustumEXT",
		"glMatrixOrthoEXT",
		"glMatrixPopEXT",
		"glMatrixPushEXT",
		"glClientAttribDefaultEXT",
		"glPushClientAttribDefaultEXT",
		"glTextureParameterfEXT",
		"glTextureParameterfvEXT",
		"glTextureParameteriEXT",
		"glTextureParameterivEXT",
		"glTextureImage1DEXT",
		"glTextureImage2DEXT",
		"glTextureSubImage1DEXT",
		"glTextureSubImage2DEXT",
		"glCopyTextureImage1DEXT",
		"glCopyTextureImage2DEXT",
		"glCopyTextureSubImage1DEXT",
		"glCopyTextureSubImage2DEXT",
		"glGetTextureImageEXT",
		"glGetTextureParameterfvEXT",
		"glGetTextureParameterivEXT",
		"glGetTextureLevelParameterfvEXT",
		"glGetTextureLevelParameterivEXT",
		"glTextureImage3DEXT",
		"glTextureSubImage3DEXT",
		"glCopyTextureSubImage3DEXT",
		"glBindMultiTextureEXT",
		"glMultiTexCoordPointerEXT",
		"glMultiTexEnvfEXT",
		"glMultiTexEnvfvEXT",
		"glMultiTexEnviEXT",
		"glMultiTexEnvivEXT",
		"glMultiTexGendEXT",
		"glMultiTexGendvEXT",
		"glMultiTexGenfEXT",
		"glMultiTexGenfvEXT",
		"glMultiTexGeniEXT",
		"glMultiTexGenivEXT",
		"glGetMultiTexEnvfvEXT",
		"glGetMultiTexEnvivEXT",
		"glGetMultiTexGendvEXT",
		"glGetMultiTexGenfvEXT",
		"glGetMultiTexGenivEXT",
		"glMultiTexParameteriEXT",
		"glMultiTexParameterivEXT",
		"glMultiTexParameterfEXT",
		"glMultiTexParameterfvEXT",
		"glMultiTexImage1DEXT",
		"glMultiTexImage2DEXT",
		"glMultiTexSubImage1DEXT",
		"glMultiTexSubImage2DEXT",
		"glCopyMultiTexImage1DEXT",
		"glCopyMultiTexImage2DEXT",
		"glCopyMultiTexSubImage1DEXT",
		"glCopyMultiTexSubImage2DEXT",
		"glGetMultiTexImageEXT",
		"glGetMultiTexParameterfvEXT",
		"glGetMultiTexParameterivEXT",
		"glGetMultiTexLevelParameterfvEXT",
		"glGetMultiTexLevelParameterivEXT",
		"glMultiTexImage3DEXT",
		"glMultiTexSubImage3DEXT",
		"glCopyMultiTexSubImage3DEXT",
		"glEnableClientStateIndexedEXT",
		"glDisableClientStateIndexedEXT",
		"glGetFloatIndexedvEXT",
		"glGetDoubleIndexedvEXT",
		"glGetPointerIndexedvEXT",
		"glEnableIndexedEXT",
		"glDisableIndexedEXT",
		"glIsEnabledIndexedEXT",
		"glGetIntegerIndexedvEXT",
		"glGetBooleanIndexedvEXT",
		"glCompressedTextureImage3DEXT",
		"glCompressedTextureImage2DEXT",
		"glCompressedTextureImage1DEXT",
		"glCompressedTextureSubImage3DEXT",
		"glCompressedTextureSubImage2DEXT",
		"glCompressedTextureSubImage1DEXT",
		"glGetCompressedTextureImageEXT",
		"glCompressedMultiTexImage3DEXT",
		"glCompressedMultiTexImage2DEXT",
		"glCompressedMultiTexImage1DEXT",
		"glCompressedMultiTexSubImage3DEXT",
		"glCompressedMultiTexSubImage2DEXT",
		"glCompressedMultiTexSubImage1DEXT",
		"glGetCompressedMultiTexImageEXT",
		"glMatrixLoadTransposefEXT",
		"glMatrixLoadTransposedEXT",
		"glMatrixMultTransposefEXT",
		"glMatrixMultTransposedEXT",
		"glNamedBufferDataEXT",
		"glNamedBufferSubDataEXT",
		"glMapNamedBufferEXT",
		"glUnmapNamedBufferEXT",
		"glGetNamedBufferParameterivEXT",
		"glGetNamedBufferPointervEXT",
		"glGetNamedBufferSubDataEXT",
		"glProgramUniform1fEXT",
		"glProgramUniform2fEXT",
		"glProgramUniform3fEXT",
		"glProgramUniform4fEXT",
		"glProgramUniform1iEXT",
		"glProgramUniform2iEXT",
		"glProgramUniform3iEXT",
		"glProgramUniform4iEXT",
		"glProgramUniform1fvEXT",
		"glProgramUniform2fvEXT",
		"glProgramUniform3fvEXT",
		"glProgramUniform4fvEXT",
		"glProgramUniform1ivEXT",
		"glProgramUniform2ivEXT",
		"glProgramUniform3ivEXT",
		"glProgramUniform4ivEXT",
		"glProgramUniformMatrix2fvEXT",
		"glProgramUniformMatrix3fvEXT",
		"glProgramUniformMatrix4fvEXT",
		"glProgramUniformMatrix2x3fvEXT",
		"glProgramUniformMatrix3x2fvEXT",
		"glProgramUniformMatrix2x4fvEXT",
		"glProgramUniformMatrix4x2fvEXT",
		"glProgramUniformMatrix3x4fvEXT",
		"glProgramUniformMatrix4x3fvEXT",
		"glTextureBufferEXT",
		"glMultiTexBufferEXT",
		"glTextureParameterIivEXT",
		"glTextureParameterIuivEXT",
		"glGetTextureParameterIivEXT",
		"glGetTextureParameterIuivEXT",
		"glMultiTexParameterIivEXT",
		"glMultiTexParameterIuivEXT",
		"glGetMultiTexParameterIivEXT",
		"glGetMultiTexParameterIuivEXT",
		"glProgramUniform1uiEXT",
		"glProgramUniform2uiEXT",
		"glProgramUniform3uiEXT",
		"glProgramUniform4uiEXT",
		"glProgramUniform1uivEXT",
		"glProgramUniform2uivEXT",
		"glProgramUniform3uivEXT",
		"glProgramUniform4uivEXT",
		"glNamedProgramLocalParameters4fvEXT",
		"glNamedProgramLocalParameterI4iEXT",
		"glNamedProgramLocalParameterI4ivEXT",
		"glNamedProgramLocalParametersI4ivEXT",
		"glNamedProgramLocalParameterI4uiEXT",
		"glNamedProgramLocalParameterI4uivEXT",
		"glNamedProgramLocalParametersI4uivEXT",
		"glGetNamedProgramLocalParameterIivEXT",
		"glGetNamedProgramLocalParameterIuivEXT",
		"glEnableClientStateiEXT",
		"glDisableClientStateiEXT",
		"glGetFloati_vEXT",
		"glGetDoublei_vEXT",
		"glGetPointeri_vEXT",
		"glNamedProgramStringEXT",
		"glNamedProgramLocalParameter4dEXT",
		"glNamedProgramLocalParameter4dvEXT",
		"glNamedProgramLocalParameter4fEXT",
		"glNamedProgramLocalParameter4fvEXT",
		"glGetNamedProgramLocalParameterdvEXT",
		"glGetNamedProgramLocalParameterfvEXT",
		"glGetNamedProgramivEXT",
		"glGetNamedProgramStringEXT",
		"glNamedRenderbufferStorageEXT",
		"glGetNamedRenderbufferParameterivEXT",
		"glNamedRenderbufferStorageMultisampleEXT",
		"glNamedRenderbufferStorageMultisampleCoverageEXT",
		"glCheckNamedFramebufferStatusEXT",
		"glNamedFramebufferTexture1DEXT",
		"glNamedFramebufferTexture2DEXT",
		"glNamedFramebufferTexture3DEXT",
		"glNamedFramebufferRenderbufferEXT",
		"glGetNamedFramebufferAttachmentParameterivEXT",
		"glGenerateTextureMipmapEXT",
		"glGenerateMultiTexMipmapEXT",
		"glFramebufferDrawBufferEXT",
		"glFramebufferDrawBuffersEXT",
		"glFramebufferReadBufferEXT",
		"glGetFramebufferParameterivEXT",
		"glNamedCopyBufferSubDataEXT",
		"glNamedFramebufferTextureEXT",
		"glNamedFramebufferTextureLayerEXT",
		"glNamedFramebufferTextureFaceEXT",
		"glTextureRenderbufferEXT",
		"glMultiTexRenderbufferEXT",
		"glVertexArrayVertexOffsetEXT",
		"glVertexArrayColorOffsetEXT",
		"glVertexArrayEdgeFlagOffsetEXT",
		"glVertexArrayIndexOffsetEXT",
		"glVertexArrayNormalOffsetEXT",
		"glVertexArrayTexCoordOffsetEXT",
		"glVertexArrayMultiTexCoordOffsetEXT",
		"glVertexArrayFogCoordOffsetEXT",
		"glVertexArraySecondaryColorOffsetEXT",
		"glVertexArrayVertexAttribOffsetEXT",
		"glVertexArrayVertexAttribIOffsetEXT",
		"glEnableVertexArrayEXT",
		"glDisableVertexArrayEXT",
		"glEnableVertexArrayAttribEXT",
		"glDisableVertexArrayAttribEXT",
		"glGetVertexArrayIntegervEXT",
		"glGetVertexArrayPointervEXT",
		"glGetVertexArrayIntegeri_vEXT",
		"glGetVertexArrayPointeri_vEXT",
		"glMapNamedBufferRangeEXT",
		"glFlushMappedNamedBufferRangeEXT",
		"glNamedBufferStorageEXT",
		"glClearNamedBufferDataEXT",
		"glClearNamedBufferSubDataEXT",
		"glNamedFramebufferParameteriEXT",
		"glGetNamedFramebufferParameterivEXT",
		"glProgramUniform1dEXT",
		"glProgramUniform2dEXT",
		"glProgramUniform3dEXT",
		"glProgramUniform4dEXT",
		"glProgramUniform1dvEXT",
		"glProgramUniform2dvEXT",
		"glProgramUniform3dvEXT",
		"glProgramUniform4dvEXT",
		"glProgramUniformMatrix2dvEXT",
		"glProgramUniformMatrix3dvEXT",
		"glProgramUniformMatrix4dvEXT",
		"glProgramUniformMatrix2x3dvEXT",
		"glProgramUniformMatrix2x4dvEXT",
		"glProgramUniformMatrix3x2dvEXT",
		"glProgramUniformMatrix3x4dvEXT",
		"glProgramUniformMatrix4x2dvEXT",
		"glProgramUniformMatrix4x3dvEXT",
		"glTextureBufferRangeEXT",
		"glTextureStorage1DEXT",
		"glTextureStorage2DEXT",
		"glTextureStorage3DEXT",
		"glTextureStorage2DMultisampleEXT",
		"glTextureStorage3DMultisampleEXT",
		"glVertexArrayBindVertexBufferEXT",
		"glVertexArrayVertexAttribFormatEXT",
		"glVertexArrayVertexAttribIFormatEXT",
		"glVertexArrayVertexAttribLFormatEXT",
		"glVertexArrayVertexAttribBindingEXT",
		"glVertexArrayVertexBindingDivisorEXT",
		"glVertexArrayVertexAttribLOffsetEXT",
		"glTexturePageCommitmentEXT",
		"glVertexArrayVertexAttribDivisorEXT",
		"glDrawArraysInstancedEXT",
		"glDrawElementsInstancedEXT",
		"glPolygonOffsetClampEXT",
		"glRasterSamplesEXT",
		"glUseShaderProgramEXT",
		"glActiveProgramEXT",
		"glCreateShaderProgramEXT",
		"glFramebufferFetchBarrierEXT",
		"glTexStorage1DEXT",
		"glTexStorage2DEXT",
		"glTexStorage3DEXT",
		"glWindowRectanglesEXT",
		"glApplyFramebufferAttachmentCMAAINTEL",
		"glBeginPerfQueryINTEL",
		"glCreatePerfQueryINTEL",
		"glDeletePerfQueryINTEL",
		"glEndPerfQueryINTEL",
		"glGetFirstPerfQueryIdINTEL",
		"glGetNextPerfQueryIdINTEL",
		"glGetPerfCounterInfoINTEL",
		"glGetPerfQueryDataINTEL",
		"glGetPerfQueryIdByNameINTEL",
		"glGetPerfQueryInfoINTEL",
		"glFramebufferParameteriMESA",
		"glGetFramebufferParameterivMESA",
		"glMultiDrawArraysIndirectBindlessNV",
		"glMultiDrawElementsIndirectBindlessNV",
		"glMultiDrawArraysIndirectBindlessCountNV",
		"glMultiDrawElementsIndirectBindlessCountNV",
		"glGetTextureHandleNV",
		"glGetTextureSamplerHandleNV",
		"glMakeTextureHandleResidentNV",
		"glMakeTextureHandleNonResidentNV",
		"glGetImageHandleNV",
		"glMakeImageHandleResidentNV",
		"glMakeImageHandleNonResidentNV",
		"glUniformHandleui64NV",
		"glUniformHandleui64vNV",
		"glProgramUniformHandleui64NV",
		"glProgramUniformHandleui64vNV",
		"glIsTextureHandleResidentNV",
		"glIsImageHandleResidentNV",
		"glBlendParameteriNV",
		"glBlendBarrierNV",
		"glViewportPositionWScaleNV",
		"glCreateStatesNV",
		"glDeleteStatesNV",
		"glIsStateNV",
		"glStateCaptureNV",
		"glGetCommandHeaderNV",
		"glGetStageIndexNV",
		"glDrawCommandsNV",
		"glDrawCommandsAddressNV",
		"glDrawCommandsStatesNV",
		"glDrawCommandsStatesAddressNV",
		"glCreateCommandListsNV",
		"glDeleteCommandListsNV",
		"glIsCommandListNV",
		"glListDrawCommandsStatesClientNV",
		"glCommandListSegmentsNV",
		"glCompileCommandListNV",
		"glCallCommandListNV",
		"glBeginConditionalRenderNV",
		"glEndConditionalRenderNV",
		"glSubpixelPrecisionBiasNV",
		"glConservativeRasterParameterfNV",
		"glConservativeRasterParameteriNV",
		"glDepthRangedNV",
		"glClearDepthdNV",
		"glDepthBoundsdNV",
		"glDrawVkImageNV",
		"glGetVkProcAddrNV",
		"glWaitVkSemaphoreNV",
		"glSignalVkSemaphoreNV",
		"glSignalVkFenceNV",
		"glFragmentCoverageColorNV",
		"glCoverageModulationTableNV",
		"glGetCoverageModulationTableNV",
		"glCoverageModulationNV",
		"glRenderbufferStorageMultisampleCoverageNV",
		"glUniform1i64NV",
		"glUniform2i64NV",
		"glUniform3i64NV",
		"glUniform4i64NV",
		"glUniform1i64vNV",
		"glUniform2i64vNV",
		"glUniform3i64vNV",
		"glUniform4i64vNV",
		"glUniform1ui64NV",
		"glUniform2ui64NV",
		"glUniform3ui64NV",
		"glUniform4ui64NV",
		"glUniform1ui64vNV",
		"glUniform2ui64vNV",
		"glUniform3ui64vNV",
		"glUniform4ui64vNV",
		"glGetUniformi64vNV",
		"glProgramUniform1i64NV",
		"glProgramUniform2i64NV",
		"glProgramUniform3i64NV",
		"glProgramUniform4i64NV",
		"glProgramUniform1i64vNV",
		"glProgramUniform2i64vNV",
		"glProgramUniform3i64vNV",
		"glProgramUniform4i64vNV",
		"glProgramUniform1ui64NV",
		"glProgramUniform2ui64NV",
		"glProgramUniform3ui64NV",
		"glProgramUniform4ui64NV",
		"glProgramUniform1ui64vNV",
		"glProgramUniform2ui64vNV",
		"glProgramUniform3ui64vNV",
		"glProgramUniform4ui64vNV",
		"glGetInternalformatSampleivNV",
		"glGetMemoryObjectDetachedResourcesuivNV",
		"glResetMemoryObjectParameterNV",
		"glTexAttachMemoryNV",
		"glBufferAttachMemoryNV",
		"glTextureAttachMemoryNV",
		"glNamedBufferAttachMemoryNV",
		"glBufferPageCommitmentMemNV",
		"glTexPageCommitmentMemNV",
		"glNamedBufferPageCommitmentMemNV",
		"glTexturePageCommitmentMemNV",
		"glDrawMeshTasksNV",
		"glDrawMeshTasksIndirectNV",
		"glMultiDrawMeshTasksIndirectNV",
		"glMultiDrawMeshTasksIndirectCountNV",
		"glGenPathsNV",
		"glDeletePathsNV",
		"glIsPathNV",
		"glPathCommandsNV",
		"glPathCoordsNV",
		"glPathSubCommandsNV",
		"glPathSubCoordsNV",
		"glPathStringNV",
		"glPathGlyphsNV",
		"glPathGlyphRangeNV",
		"glWeightPathsNV",
		"glCopyPathNV",
		"glInterpolatePathsNV",
		"glTransformPathNV",
		"glPathParameterivNV",
		"glPathParameteriNV",
		"glPathParameterfvNV",
		"glPathParameterfNV",
		"glPathDashArrayNV",
		"glPathStencilFuncNV",
		"glPathStencilDepthOffsetNV",
		"glStencilFillPathNV",
		"glStencilStrokePathNV",
		"glStencilFillPathInstancedNV",
		"glStencilStrokePathInstancedNV",
		"glPathCoverDepthFuncNV",
		"glCoverFillPathNV",
		"glCoverStrokePathNV",
		"glCoverFillPathInstancedNV",
		"glCoverStrokePathInstancedNV",
		"glGetPathParameterivNV",
		"glGetPathParameterfvNV",
		"glGetPathCommandsNV",
		"glGetPathCoordsNV",
		"glGetPathDashArrayNV",
		"glGetPathMetricsNV",
		"glGetPathMetricRangeNV",
		"glGetPathSpacingNV",
		"glIsPointInFillPathNV",
		"glIsPointInStrokePathNV",
		"glGetPathLengthNV",
		"glPointAlongPathNV",
		"glMatrixLoad3x2fNV",
		"glMatrixLoad3x3fNV",
		"glMatrixLoadTranspose3x3fNV",
		"glMatrixMult3x2fNV",
		"glMatrixMult3x3fNV",
		"glMatrixMultTranspose3x3fNV",
		"glStencilThenCoverFillPathNV",
		"glStencilThenCoverStrokePathNV",
		"glStencilThenCoverFillPathInstancedNV",
		"glStencilThenCoverStrokePathInstancedNV",
		"glPathGlyphIndexRangeNV",
		"glPathGlyphIndexArrayNV",
		"glPathMemoryGlyphIndexArrayNV",
		"glProgramPathFragmentInputGenNV",
		"glGetProgramResourcefvNV",
		"glFramebufferSampleLocationsfvNV",
		"glNamedFramebufferSampleLocationsfvNV",
		"glResolveDepthValuesNV",
		"glScissorExclusiveNV",
		"glScissorExclusiveArrayvNV",
		"glMakeBufferResidentNV",
		"glMakeBufferNonResidentNV",
		"glIsBufferResidentNV",
		"glMakeNamedBufferResidentNV",
		"glMakeNamedBufferNonResidentNV",
		"glIsNamedBufferResidentNV",
		"glGetBufferParameterui64vNV",
		"glGetNamedBufferParameterui64vNV",
		"glGetIntegerui64vNV",
		"glUniformui64NV",
		"glUniformui64vNV",
		"glGetUniformui64vNV",
		"glProgramUniformui64NV",
		"glProgramUniformui64vNV",
		"glBindShadingRateImageNV",
		"glGetShadingRateImagePaletteNV",
		"glGetShadingRateSampleLocationivNV",
		"glShadingRateImageBarrierNV",
		"glShadingRateImagePaletteNV",
		"glShadingRateSampleOrderNV",
		"glShadingRateSampleOrderCustomNV",
		"glTextureBarrierNV",
		"glVertexAttribL1i64NV",
		"glVertexAttribL2i64NV",
		"glVertexAttribL3i64NV",
		"glVertexAttribL4i64NV",
		"glVertexAttribL1i64vNV",
		"glVertexAttribL2i64vNV",
		"glVertexAttribL3i64vNV",
		"glVertexAttribL4i64vNV",
		"glVertexAttribL1ui64NV",
		"glVertexAttribL2ui64NV",
		"glVertexAttribL3ui64NV",
		"glVertexAttribL4ui64NV",
		"glVertexAttribL1ui64vNV",
		"glVertexAttribL2ui64vNV",
		"glVertexAttribL3ui64vNV",
		"glVertexAttribL4ui64vNV",
		"glGetVertexAttribLi64vNV",
		"glGetVertexAttribLui64vNV",
		"glVertexAttribLFormatNV",
		"glBufferAddressRangeNV",
		"glVertexFormatNV",
		"glNormalFormatNV",
		"glColorFormatNV",
		"glIndexFormatNV",
		"glTexCoordFormatNV",
		"glEdgeFlagFormatNV",
		"glSecondaryColorFormatNV",
		"glFogCoordFormatNV",
		"glVertexAttribFormatNV",
		"glVertexAttribIFormatNV",
		"glGetIntegerui64i_vNV",
		"glViewportSwizzleNV",
		"glFramebufferTextureMultiviewOVR",
	};
};
#endif /* GAL_GL_HEADER_H */
