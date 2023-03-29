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

#ifndef GAL_WGL_HEADER_H
#define GAL_WGL_HEADER_H 1

#include "GALGL.h"

typedef void (GALGLPROC* WGLproc)();

struct _GPU_DEVICE {
    DWORD  cb;
    CHAR   DeviceName[32];
    CHAR   DeviceString[128];
    DWORD  Flags;
    RECT   rcVirtualScreen;
};
typedef struct _GPU_DEVICE *PGPU_DEVICE;

DECLARE_HANDLE(HPBUFFERARB);
DECLARE_HANDLE(HPBUFFEREXT);
DECLARE_HANDLE(HGPUNV);
DECLARE_HANDLE(HVIDEOOUTPUTDEVICENV);
DECLARE_HANDLE(HVIDEOINPUTDEVICENV);
DECLARE_HANDLE(HPVIDEODEV);

union WGL
{
	static constexpr GLenum FONT_LINES = 0;
	static constexpr GLenum FONT_POLYGONS = 1;
	static constexpr GLenum SWAP_MAIN_PLANE = 0x00000001;
	static constexpr GLenum SWAP_OVERLAY1 = 0x00000002;
	static constexpr GLenum SWAP_OVERLAY2 = 0x00000004;
	static constexpr GLenum SWAP_OVERLAY3 = 0x00000008;
	static constexpr GLenum SWAP_OVERLAY4 = 0x00000010;
	static constexpr GLenum SWAP_OVERLAY5 = 0x00000020;
	static constexpr GLenum SWAP_OVERLAY6 = 0x00000040;
	static constexpr GLenum SWAP_OVERLAY7 = 0x00000080;
	static constexpr GLenum SWAP_OVERLAY8 = 0x00000100;
	static constexpr GLenum SWAP_OVERLAY9 = 0x00000200;
	static constexpr GLenum SWAP_OVERLAY10 = 0x00000400;
	static constexpr GLenum SWAP_OVERLAY11 = 0x00000800;
	static constexpr GLenum SWAP_OVERLAY12 = 0x00001000;
	static constexpr GLenum SWAP_OVERLAY13 = 0x00002000;
	static constexpr GLenum SWAP_OVERLAY14 = 0x00004000;
	static constexpr GLenum SWAP_OVERLAY15 = 0x00008000;
	static constexpr GLenum SWAP_UNDERLAY1 = 0x00010000;
	static constexpr GLenum SWAP_UNDERLAY2 = 0x00020000;
	static constexpr GLenum SWAP_UNDERLAY3 = 0x00040000;
	static constexpr GLenum SWAP_UNDERLAY4 = 0x00080000;
	static constexpr GLenum SWAP_UNDERLAY5 = 0x00100000;
	static constexpr GLenum SWAP_UNDERLAY6 = 0x00200000;
	static constexpr GLenum SWAP_UNDERLAY7 = 0x00400000;
	static constexpr GLenum SWAP_UNDERLAY8 = 0x00800000;
	static constexpr GLenum SWAP_UNDERLAY9 = 0x01000000;
	static constexpr GLenum SWAP_UNDERLAY10 = 0x02000000;
	static constexpr GLenum SWAP_UNDERLAY11 = 0x04000000;
	static constexpr GLenum SWAP_UNDERLAY12 = 0x08000000;
	static constexpr GLenum SWAP_UNDERLAY13 = 0x10000000;
	static constexpr GLenum SWAP_UNDERLAY14 = 0x20000000;
	static constexpr GLenum SWAP_UNDERLAY15 = 0x40000000;
	static constexpr GLenum FRONT_COLOR_BUFFER_BIT_ARB = 0x00000001;
	static constexpr GLenum BACK_COLOR_BUFFER_BIT_ARB = 0x00000002;
	static constexpr GLenum DEPTH_BUFFER_BIT_ARB = 0x00000004;
	static constexpr GLenum STENCIL_BUFFER_BIT_ARB = 0x00000008;
	static constexpr GLenum CONTEXT_RELEASE_BEHAVIOR_ARB = 0x2097;
	static constexpr GLenum CONTEXT_RELEASE_BEHAVIOR_NONE_ARB = 0;
	static constexpr GLenum CONTEXT_RELEASE_BEHAVIOR_FLUSH_ARB = 0x2098;
	static constexpr GLenum CONTEXT_DEBUG_BIT_ARB = 0x00000001;
	static constexpr GLenum CONTEXT_FORWARD_COMPATIBLE_BIT_ARB = 0x00000002;
	static constexpr GLenum CONTEXT_MAJOR_VERSION_ARB = 0x2091;
	static constexpr GLenum CONTEXT_MINOR_VERSION_ARB = 0x2092;
	static constexpr GLenum CONTEXT_LAYER_PLANE_ARB = 0x2093;
	static constexpr GLenum CONTEXT_FLAGS_ARB = 0x2094;
	static constexpr GLenum ERROR_INVALID_VERSION_ARB = 0x2095;
	static constexpr GLenum CONTEXT_OPENGL_NO_ERROR_ARB = 0x31B3;
	static constexpr GLenum CONTEXT_PROFILE_MASK_ARB = 0x9126;
	static constexpr GLenum CONTEXT_CORE_PROFILE_BIT_ARB = 0x00000001;
	static constexpr GLenum CONTEXT_COMPATIBILITY_PROFILE_BIT_ARB = 0x00000002;
	static constexpr GLenum ERROR_INVALID_PROFILE_ARB = 0x2096;
	static constexpr GLenum CONTEXT_ROBUST_ACCESS_BIT_ARB = 0x00000004;
	static constexpr GLenum LOSE_CONTEXT_ON_RESET_ARB = 0x8252;
	static constexpr GLenum CONTEXT_RESET_NOTIFICATION_STRATEGY_ARB = 0x8256;
	static constexpr GLenum NO_RESET_NOTIFICATION_ARB = 0x8261;
	static constexpr GLenum FRAMEBUFFER_SRGB_CAPABLE_ARB = 0x20A9;
	static constexpr GLenum ERROR_INVALID_PIXEL_TYPE_ARB = 0x2043;
	static constexpr GLenum ERROR_INCOMPATIBLE_DEVICE_CONTEXTS_ARB = 0x2054;
	static constexpr GLenum SAMPLE_BUFFERS_ARB = 0x2041;
	static constexpr GLenum SAMPLES_ARB = 0x2042;
	static constexpr GLenum DRAW_TO_PBUFFER_ARB = 0x202D;
	static constexpr GLenum MAX_PBUFFER_PIXELS_ARB = 0x202E;
	static constexpr GLenum MAX_PBUFFER_WIDTH_ARB = 0x202F;
	static constexpr GLenum MAX_PBUFFER_HEIGHT_ARB = 0x2030;
	static constexpr GLenum PBUFFER_LARGEST_ARB = 0x2033;
	static constexpr GLenum PBUFFER_WIDTH_ARB = 0x2034;
	static constexpr GLenum PBUFFER_HEIGHT_ARB = 0x2035;
	static constexpr GLenum PBUFFER_LOST_ARB = 0x2036;
	static constexpr GLenum NUMBER_PIXEL_FORMATS_ARB = 0x2000;
	static constexpr GLenum DRAW_TO_WINDOW_ARB = 0x2001;
	static constexpr GLenum DRAW_TO_BITMAP_ARB = 0x2002;
	static constexpr GLenum ACCELERATION_ARB = 0x2003;
	static constexpr GLenum NEED_PALETTE_ARB = 0x2004;
	static constexpr GLenum NEED_SYSTEM_PALETTE_ARB = 0x2005;
	static constexpr GLenum SWAP_LAYER_BUFFERS_ARB = 0x2006;
	static constexpr GLenum SWAP_METHOD_ARB = 0x2007;
	static constexpr GLenum NUMBER_OVERLAYS_ARB = 0x2008;
	static constexpr GLenum NUMBER_UNDERLAYS_ARB = 0x2009;
	static constexpr GLenum TRANSPARENT_ARB = 0x200A;
	static constexpr GLenum TRANSPARENT_RED_VALUE_ARB = 0x2037;
	static constexpr GLenum TRANSPARENT_GREEN_VALUE_ARB = 0x2038;
	static constexpr GLenum TRANSPARENT_BLUE_VALUE_ARB = 0x2039;
	static constexpr GLenum TRANSPARENT_ALPHA_VALUE_ARB = 0x203A;
	static constexpr GLenum TRANSPARENT_INDEX_VALUE_ARB = 0x203B;
	static constexpr GLenum SHARE_DEPTH_ARB = 0x200C;
	static constexpr GLenum SHARE_STENCIL_ARB = 0x200D;
	static constexpr GLenum SHARE_ACCUM_ARB = 0x200E;
	static constexpr GLenum SUPPORT_GDI_ARB = 0x200F;
	static constexpr GLenum SUPPORT_OPENGL_ARB = 0x2010;
	static constexpr GLenum DOUBLE_BUFFER_ARB = 0x2011;
	static constexpr GLenum STEREO_ARB = 0x2012;
	static constexpr GLenum PIXEL_TYPE_ARB = 0x2013;
	static constexpr GLenum COLOR_BITS_ARB = 0x2014;
	static constexpr GLenum RED_BITS_ARB = 0x2015;
	static constexpr GLenum RED_SHIFT_ARB = 0x2016;
	static constexpr GLenum GREEN_BITS_ARB = 0x2017;
	static constexpr GLenum GREEN_SHIFT_ARB = 0x2018;
	static constexpr GLenum BLUE_BITS_ARB = 0x2019;
	static constexpr GLenum BLUE_SHIFT_ARB = 0x201A;
	static constexpr GLenum ALPHA_BITS_ARB = 0x201B;
	static constexpr GLenum ALPHA_SHIFT_ARB = 0x201C;
	static constexpr GLenum ACCUM_BITS_ARB = 0x201D;
	static constexpr GLenum ACCUM_RED_BITS_ARB = 0x201E;
	static constexpr GLenum ACCUM_GREEN_BITS_ARB = 0x201F;
	static constexpr GLenum ACCUM_BLUE_BITS_ARB = 0x2020;
	static constexpr GLenum ACCUM_ALPHA_BITS_ARB = 0x2021;
	static constexpr GLenum DEPTH_BITS_ARB = 0x2022;
	static constexpr GLenum STENCIL_BITS_ARB = 0x2023;
	static constexpr GLenum AUX_BUFFERS_ARB = 0x2024;
	static constexpr GLenum NO_ACCELERATION_ARB = 0x2025;
	static constexpr GLenum GENERIC_ACCELERATION_ARB = 0x2026;
	static constexpr GLenum FULL_ACCELERATION_ARB = 0x2027;
	static constexpr GLenum SWAP_EXCHANGE_ARB = 0x2028;
	static constexpr GLenum SWAP_COPY_ARB = 0x2029;
	static constexpr GLenum SWAP_UNDEFINED_ARB = 0x202A;
	static constexpr GLenum TYPE_RGBA_ARB = 0x202B;
	static constexpr GLenum TYPE_COLORINDEX_ARB = 0x202C;
	static constexpr GLenum TYPE_RGBA_FLOAT_ARB = 0x21A0;
	static constexpr GLenum BIND_TO_TEXTURE_RGB_ARB = 0x2070;
	static constexpr GLenum BIND_TO_TEXTURE_RGBA_ARB = 0x2071;
	static constexpr GLenum TEXTURE_FORMAT_ARB = 0x2072;
	static constexpr GLenum TEXTURE_TARGET_ARB = 0x2073;
	static constexpr GLenum MIPMAP_TEXTURE_ARB = 0x2074;
	static constexpr GLenum TEXTURE_RGB_ARB = 0x2075;
	static constexpr GLenum TEXTURE_RGBA_ARB = 0x2076;
	static constexpr GLenum NO_TEXTURE_ARB = 0x2077;
	static constexpr GLenum TEXTURE_CUBE_MAP_ARB = 0x2078;
	static constexpr GLenum TEXTURE_1D_ARB = 0x2079;
	static constexpr GLenum TEXTURE_2D_ARB = 0x207A;
	static constexpr GLenum MIPMAP_LEVEL_ARB = 0x207B;
	static constexpr GLenum CUBE_MAP_FACE_ARB = 0x207C;
	static constexpr GLenum TEXTURE_CUBE_MAP_POSITIVE_X_ARB = 0x207D;
	static constexpr GLenum TEXTURE_CUBE_MAP_NEGATIVE_X_ARB = 0x207E;
	static constexpr GLenum TEXTURE_CUBE_MAP_POSITIVE_Y_ARB = 0x207F;
	static constexpr GLenum TEXTURE_CUBE_MAP_NEGATIVE_Y_ARB = 0x2080;
	static constexpr GLenum TEXTURE_CUBE_MAP_POSITIVE_Z_ARB = 0x2081;
	static constexpr GLenum TEXTURE_CUBE_MAP_NEGATIVE_Z_ARB = 0x2082;
	static constexpr GLenum FRONT_LEFT_ARB = 0x2083;
	static constexpr GLenum FRONT_RIGHT_ARB = 0x2084;
	static constexpr GLenum BACK_LEFT_ARB = 0x2085;
	static constexpr GLenum BACK_RIGHT_ARB = 0x2086;
	static constexpr GLenum AUX0_ARB = 0x2087;
	static constexpr GLenum AUX1_ARB = 0x2088;
	static constexpr GLenum AUX2_ARB = 0x2089;
	static constexpr GLenum AUX3_ARB = 0x208A;
	static constexpr GLenum AUX4_ARB = 0x208B;
	static constexpr GLenum AUX5_ARB = 0x208C;
	static constexpr GLenum AUX6_ARB = 0x208D;
	static constexpr GLenum AUX7_ARB = 0x208E;
	static constexpr GLenum AUX8_ARB = 0x208F;
	static constexpr GLenum AUX9_ARB = 0x2090;
	static constexpr GLenum CONTEXT_RESET_ISOLATION_BIT_ARB = 0x00000008;
	static constexpr GLenum SAMPLE_BUFFERS_3DFX = 0x2060;
	static constexpr GLenum SAMPLES_3DFX = 0x2061;
	static constexpr GLenum STEREO_EMITTER_ENABLE_3DL = 0x2055;
	static constexpr GLenum STEREO_EMITTER_DISABLE_3DL = 0x2056;
	static constexpr GLenum STEREO_POLARITY_NORMAL_3DL = 0x2057;
	static constexpr GLenum STEREO_POLARITY_INVERT_3DL = 0x2058;
	static constexpr GLenum GPU_VENDOR_AMD = 0x1F00;
	static constexpr GLenum GPU_RENDERER_STRING_AMD = 0x1F01;
	static constexpr GLenum GPU_OPENGL_VERSION_STRING_AMD = 0x1F02;
	static constexpr GLenum GPU_FASTEST_TARGET_GPUS_AMD = 0x21A2;
	static constexpr GLenum GPU_RAM_AMD = 0x21A3;
	static constexpr GLenum GPU_CLOCK_AMD = 0x21A4;
	static constexpr GLenum GPU_NUM_PIPES_AMD = 0x21A5;
	static constexpr GLenum GPU_NUM_SIMD_AMD = 0x21A6;
	static constexpr GLenum GPU_NUM_RB_AMD = 0x21A7;
	static constexpr GLenum GPU_NUM_SPI_AMD = 0x21A8;
	static constexpr GLenum TYPE_RGBA_FLOAT_ATI = 0x21A0;
	static constexpr GLenum TEXTURE_RECTANGLE_ATI = 0x21A5;
	static constexpr GLenum COLORSPACE_EXT = 0x309D;
	static constexpr GLenum COLORSPACE_SRGB_EXT = 0x3089;
	static constexpr GLenum COLORSPACE_LINEAR_EXT = 0x308A;
	static constexpr GLenum CONTEXT_ES2_PROFILE_BIT_EXT = 0x00000004;
	static constexpr GLenum CONTEXT_ES_PROFILE_BIT_EXT = 0x00000004;
	static constexpr GLenum DEPTH_FLOAT_EXT = 0x2040;
	static constexpr GLenum FRAMEBUFFER_SRGB_CAPABLE_EXT = 0x20A9;
	static constexpr GLenum ERROR_INVALID_PIXEL_TYPE_EXT = 0x2043;
	static constexpr GLenum SAMPLE_BUFFERS_EXT = 0x2041;
	static constexpr GLenum SAMPLES_EXT = 0x2042;
	static constexpr GLenum DRAW_TO_PBUFFER_EXT = 0x202D;
	static constexpr GLenum MAX_PBUFFER_PIXELS_EXT = 0x202E;
	static constexpr GLenum MAX_PBUFFER_WIDTH_EXT = 0x202F;
	static constexpr GLenum MAX_PBUFFER_HEIGHT_EXT = 0x2030;
	static constexpr GLenum OPTIMAL_PBUFFER_WIDTH_EXT = 0x2031;
	static constexpr GLenum OPTIMAL_PBUFFER_HEIGHT_EXT = 0x2032;
	static constexpr GLenum PBUFFER_LARGEST_EXT = 0x2033;
	static constexpr GLenum PBUFFER_WIDTH_EXT = 0x2034;
	static constexpr GLenum PBUFFER_HEIGHT_EXT = 0x2035;
	static constexpr GLenum NUMBER_PIXEL_FORMATS_EXT = 0x2000;
	static constexpr GLenum DRAW_TO_WINDOW_EXT = 0x2001;
	static constexpr GLenum DRAW_TO_BITMAP_EXT = 0x2002;
	static constexpr GLenum ACCELERATION_EXT = 0x2003;
	static constexpr GLenum NEED_PALETTE_EXT = 0x2004;
	static constexpr GLenum NEED_SYSTEM_PALETTE_EXT = 0x2005;
	static constexpr GLenum SWAP_LAYER_BUFFERS_EXT = 0x2006;
	static constexpr GLenum SWAP_METHOD_EXT = 0x2007;
	static constexpr GLenum NUMBER_OVERLAYS_EXT = 0x2008;
	static constexpr GLenum NUMBER_UNDERLAYS_EXT = 0x2009;
	static constexpr GLenum TRANSPARENT_EXT = 0x200A;
	static constexpr GLenum TRANSPARENT_VALUE_EXT = 0x200B;
	static constexpr GLenum SHARE_DEPTH_EXT = 0x200C;
	static constexpr GLenum SHARE_STENCIL_EXT = 0x200D;
	static constexpr GLenum SHARE_ACCUM_EXT = 0x200E;
	static constexpr GLenum SUPPORT_GDI_EXT = 0x200F;
	static constexpr GLenum SUPPORT_OPENGL_EXT = 0x2010;
	static constexpr GLenum DOUBLE_BUFFER_EXT = 0x2011;
	static constexpr GLenum STEREO_EXT = 0x2012;
	static constexpr GLenum PIXEL_TYPE_EXT = 0x2013;
	static constexpr GLenum COLOR_BITS_EXT = 0x2014;
	static constexpr GLenum RED_BITS_EXT = 0x2015;
	static constexpr GLenum RED_SHIFT_EXT = 0x2016;
	static constexpr GLenum GREEN_BITS_EXT = 0x2017;
	static constexpr GLenum GREEN_SHIFT_EXT = 0x2018;
	static constexpr GLenum BLUE_BITS_EXT = 0x2019;
	static constexpr GLenum BLUE_SHIFT_EXT = 0x201A;
	static constexpr GLenum ALPHA_BITS_EXT = 0x201B;
	static constexpr GLenum ALPHA_SHIFT_EXT = 0x201C;
	static constexpr GLenum ACCUM_BITS_EXT = 0x201D;
	static constexpr GLenum ACCUM_RED_BITS_EXT = 0x201E;
	static constexpr GLenum ACCUM_GREEN_BITS_EXT = 0x201F;
	static constexpr GLenum ACCUM_BLUE_BITS_EXT = 0x2020;
	static constexpr GLenum ACCUM_ALPHA_BITS_EXT = 0x2021;
	static constexpr GLenum DEPTH_BITS_EXT = 0x2022;
	static constexpr GLenum STENCIL_BITS_EXT = 0x2023;
	static constexpr GLenum AUX_BUFFERS_EXT = 0x2024;
	static constexpr GLenum NO_ACCELERATION_EXT = 0x2025;
	static constexpr GLenum GENERIC_ACCELERATION_EXT = 0x2026;
	static constexpr GLenum FULL_ACCELERATION_EXT = 0x2027;
	static constexpr GLenum SWAP_EXCHANGE_EXT = 0x2028;
	static constexpr GLenum SWAP_COPY_EXT = 0x2029;
	static constexpr GLenum SWAP_UNDEFINED_EXT = 0x202A;
	static constexpr GLenum TYPE_RGBA_EXT = 0x202B;
	static constexpr GLenum TYPE_COLORINDEX_EXT = 0x202C;
	static constexpr GLenum TYPE_RGBA_UNSIGNED_FLOAT_EXT = 0x20A8;
	static constexpr GLenum DIGITAL_VIDEO_CURSOR_ALPHA_FRAMEBUFFER_I3D = 0x2050;
	static constexpr GLenum DIGITAL_VIDEO_CURSOR_ALPHA_VALUE_I3D = 0x2051;
	static constexpr GLenum DIGITAL_VIDEO_CURSOR_INCLUDED_I3D = 0x2052;
	static constexpr GLenum DIGITAL_VIDEO_GAMMA_CORRECTED_I3D = 0x2053;
	static constexpr GLenum GAMMA_TABLE_SIZE_I3D = 0x204E;
	static constexpr GLenum GAMMA_EXCLUDE_DESKTOP_I3D = 0x204F;
	static constexpr GLenum GENLOCK_SOURCE_MULTIVIEW_I3D = 0x2044;
	static constexpr GLenum GENLOCK_SOURCE_EXTERNAL_SYNC_I3D = 0x2045;
	static constexpr GLenum GENLOCK_SOURCE_EXTERNAL_FIELD_I3D = 0x2046;
	static constexpr GLenum GENLOCK_SOURCE_EXTERNAL_TTL_I3D = 0x2047;
	static constexpr GLenum GENLOCK_SOURCE_DIGITAL_SYNC_I3D = 0x2048;
	static constexpr GLenum GENLOCK_SOURCE_DIGITAL_FIELD_I3D = 0x2049;
	static constexpr GLenum GENLOCK_SOURCE_EDGE_FALLING_I3D = 0x204A;
	static constexpr GLenum GENLOCK_SOURCE_EDGE_RISING_I3D = 0x204B;
	static constexpr GLenum GENLOCK_SOURCE_EDGE_BOTH_I3D = 0x204C;
	static constexpr GLenum IMAGE_BUFFER_MIN_ACCESS_I3D = 0x00000001;
	static constexpr GLenum IMAGE_BUFFER_LOCK_I3D = 0x00000002;
	static constexpr GLenum ACCESS_READ_ONLY_NV = 0x00000000;
	static constexpr GLenum ACCESS_READ_WRITE_NV = 0x00000001;
	static constexpr GLenum ACCESS_WRITE_DISCARD_NV = 0x00000002;
	static constexpr GLenum FLOAT_COMPONENTS_NV = 0x20B0;
	static constexpr GLenum BIND_TO_TEXTURE_RECTANGLE_FLOAT_R_NV = 0x20B1;
	static constexpr GLenum BIND_TO_TEXTURE_RECTANGLE_FLOAT_RG_NV = 0x20B2;
	static constexpr GLenum BIND_TO_TEXTURE_RECTANGLE_FLOAT_RGB_NV = 0x20B3;
	static constexpr GLenum BIND_TO_TEXTURE_RECTANGLE_FLOAT_RGBA_NV = 0x20B4;
	static constexpr GLenum TEXTURE_FLOAT_R_NV = 0x20B5;
	static constexpr GLenum TEXTURE_FLOAT_RG_NV = 0x20B6;
	static constexpr GLenum TEXTURE_FLOAT_RGB_NV = 0x20B7;
	static constexpr GLenum TEXTURE_FLOAT_RGBA_NV = 0x20B8;
	static constexpr GLenum ERROR_INCOMPATIBLE_AFFINITY_MASKS_NV = 0x20D0;
	static constexpr GLenum ERROR_MISSING_AFFINITY_MASK_NV = 0x20D1;
	static constexpr GLenum CONTEXT_MULTIGPU_ATTRIB_NV = 0x20AA;
	static constexpr GLenum CONTEXT_MULTIGPU_ATTRIB_SINGLE_NV = 0x20AB;
	static constexpr GLenum CONTEXT_MULTIGPU_ATTRIB_AFR_NV = 0x20AC;
	static constexpr GLenum CONTEXT_MULTIGPU_ATTRIB_MULTICAST_NV = 0x20AD;
	static constexpr GLenum CONTEXT_MULTIGPU_ATTRIB_MULTI_DISPLAY_MULTICAST_NV = 0x20AE;
	static constexpr GLenum COVERAGE_SAMPLES_NV = 0x2042;
	static constexpr GLenum COLOR_SAMPLES_NV = 0x20B9;
	static constexpr GLenum NUM_VIDEO_SLOTS_NV = 0x20F0;
	static constexpr GLenum BIND_TO_TEXTURE_DEPTH_NV = 0x20A3;
	static constexpr GLenum BIND_TO_TEXTURE_RECTANGLE_DEPTH_NV = 0x20A4;
	static constexpr GLenum DEPTH_TEXTURE_FORMAT_NV = 0x20A5;
	static constexpr GLenum TEXTURE_DEPTH_COMPONENT_NV = 0x20A6;
	static constexpr GLenum DEPTH_COMPONENT_NV = 0x20A7;
	static constexpr GLenum BIND_TO_TEXTURE_RECTANGLE_RGB_NV = 0x20A0;
	static constexpr GLenum BIND_TO_TEXTURE_RECTANGLE_RGBA_NV = 0x20A1;
	static constexpr GLenum TEXTURE_RECTANGLE_NV = 0x20A2;
	static constexpr GLenum UNIQUE_ID_NV = 0x20CE;
	static constexpr GLenum NUM_VIDEO_CAPTURE_SLOTS_NV = 0x20CF;
	static constexpr GLenum BIND_TO_VIDEO_RGB_NV = 0x20C0;
	static constexpr GLenum BIND_TO_VIDEO_RGBA_NV = 0x20C1;
	static constexpr GLenum BIND_TO_VIDEO_RGB_AND_DEPTH_NV = 0x20C2;
	static constexpr GLenum VIDEO_OUT_COLOR_NV = 0x20C3;
	static constexpr GLenum VIDEO_OUT_ALPHA_NV = 0x20C4;
	static constexpr GLenum VIDEO_OUT_DEPTH_NV = 0x20C5;
	static constexpr GLenum VIDEO_OUT_COLOR_AND_ALPHA_NV = 0x20C6;
	static constexpr GLenum VIDEO_OUT_COLOR_AND_DEPTH_NV = 0x20C7;
	static constexpr GLenum VIDEO_OUT_FRAME = 0x20C8;
	static constexpr GLenum VIDEO_OUT_FIELD_1 = 0x20C9;
	static constexpr GLenum VIDEO_OUT_FIELD_2 = 0x20CA;
	static constexpr GLenum VIDEO_OUT_STACKED_FIELDS_1_2 = 0x20CB;
	static constexpr GLenum VIDEO_OUT_STACKED_FIELDS_2_1 = 0x20CC;

	struct FuncDef {
		typedef int (GALGLPROC* ChoosePixelFormat_t)(HDC hDc, const PIXELFORMATDESCRIPTOR *pPfd);
		typedef int (GALGLPROC* DescribePixelFormat_t)(HDC hdc, int ipfd, UINT cjpfd, PIXELFORMATDESCRIPTOR *ppfd);
		typedef UINT (GALGLPROC* GetEnhMetaFilePixelFormat_t)(HENHMETAFILE hemf, UINT cbBuffer, PIXELFORMATDESCRIPTOR *ppfd);
		typedef int (GALGLPROC* GetPixelFormat_t)(HDC hdc);
		typedef BOOL (GALGLPROC* SetPixelFormat_t)(HDC hdc, int ipfd, const PIXELFORMATDESCRIPTOR *ppfd);
		typedef BOOL (GALGLPROC* SwapBuffers_t)(HDC hdc);
		typedef BOOL (GALGLPROC* wglCopyContext_t)(HGLRC hglrcSrc, HGLRC hglrcDst, UINT mask);
		typedef HGLRC (GALGLPROC* wglCreateContext_t)(HDC hDc);
		typedef HGLRC (GALGLPROC* wglCreateLayerContext_t)(HDC hDc, int level);
		typedef BOOL (GALGLPROC* wglDeleteContext_t)(HGLRC oldContext);
		typedef BOOL (GALGLPROC* wglDescribeLayerPlane_t)(HDC hDc, int pixelFormat, int layerPlane, UINT nBytes, LAYERPLANEDESCRIPTOR *plpd);
		typedef HGLRC (GALGLPROC* wglGetCurrentContext_t)(void);
		typedef HDC (GALGLPROC* wglGetCurrentDC_t)(void);
		typedef int (GALGLPROC* wglGetLayerPaletteEntries_t)(HDC hdc, int iLayerPlane, int iStart, int cEntries, COLORREF *pcr);
		typedef PROC (GALGLPROC* wglGetProcAddress_t)(LPCSTR lpszProc);
		typedef BOOL (GALGLPROC* wglMakeCurrent_t)(HDC hDc, HGLRC newContext);
		typedef BOOL (GALGLPROC* wglRealizeLayerPalette_t)(HDC hdc, int iLayerPlane, BOOL bRealize);
		typedef int (GALGLPROC* wglSetLayerPaletteEntries_t)(HDC hdc, int iLayerPlane, int iStart, int cEntries, const COLORREF *pcr);
		typedef BOOL (GALGLPROC* wglShareLists_t)(HGLRC hrcSrvShare, HGLRC hrcSrvSource);
		typedef BOOL (GALGLPROC* wglSwapLayerBuffers_t)(HDC hdc, UINT fuFlags);
		typedef BOOL (GALGLPROC* wglUseFontBitmaps_t)(HDC hDC, DWORD first, DWORD count, DWORD listBase);
		typedef BOOL (GALGLPROC* wglUseFontBitmapsA_t)(HDC hDC, DWORD first, DWORD count, DWORD listBase);
		typedef BOOL (GALGLPROC* wglUseFontBitmapsW_t)(HDC hDC, DWORD first, DWORD count, DWORD listBase);
		typedef BOOL (GALGLPROC* wglUseFontOutlines_t)(HDC hDC, DWORD first, DWORD count, DWORD listBase, FLOAT deviation, FLOAT extrusion, int format, LPGLYPHMETRICSFLOAT lpgmf);
		typedef BOOL (GALGLPROC* wglUseFontOutlinesA_t)(HDC hDC, DWORD first, DWORD count, DWORD listBase, FLOAT deviation, FLOAT extrusion, int format, LPGLYPHMETRICSFLOAT lpgmf);
		typedef BOOL (GALGLPROC* wglUseFontOutlinesW_t)(HDC hDC, DWORD first, DWORD count, DWORD listBase, FLOAT deviation, FLOAT extrusion, int format, LPGLYPHMETRICSFLOAT lpgmf);
		typedef HANDLE (GALGLPROC* wglCreateBufferRegionARB_t)(HDC hDC, int iLayerPlane, UINT uType);
		typedef VOID (GALGLPROC* wglDeleteBufferRegionARB_t)(HANDLE hRegion);
		typedef BOOL (GALGLPROC* wglSaveBufferRegionARB_t)(HANDLE hRegion, int x, int y, int width, int height);
		typedef BOOL (GALGLPROC* wglRestoreBufferRegionARB_t)(HANDLE hRegion, int x, int y, int width, int height, int xSrc, int ySrc);
		typedef HGLRC (GALGLPROC* wglCreateContextAttribsARB_t)(HDC hDC, HGLRC hShareContext, const int *attribList);
		typedef const char * (GALGLPROC* wglGetExtensionsStringARB_t)(HDC hdc);
		typedef BOOL (GALGLPROC* wglMakeContextCurrentARB_t)(HDC hDrawDC, HDC hReadDC, HGLRC hglrc);
		typedef HDC (GALGLPROC* wglGetCurrentReadDCARB_t)(void);
		typedef HPBUFFERARB (GALGLPROC* wglCreatePbufferARB_t)(HDC hDC, int iPixelFormat, int iWidth, int iHeight, const int *piAttribList);
		typedef HDC (GALGLPROC* wglGetPbufferDCARB_t)(HPBUFFERARB hPbuffer);
		typedef int (GALGLPROC* wglReleasePbufferDCARB_t)(HPBUFFERARB hPbuffer, HDC hDC);
		typedef BOOL (GALGLPROC* wglDestroyPbufferARB_t)(HPBUFFERARB hPbuffer);
		typedef BOOL (GALGLPROC* wglQueryPbufferARB_t)(HPBUFFERARB hPbuffer, int iAttribute, int *piValue);
		typedef BOOL (GALGLPROC* wglGetPixelFormatAttribivARB_t)(HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes, const int *piAttributes, int *piValues);
		typedef BOOL (GALGLPROC* wglGetPixelFormatAttribfvARB_t)(HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes, const int *piAttributes, FLOAT *pfValues);
		typedef BOOL (GALGLPROC* wglChoosePixelFormatARB_t)(HDC hdc, const int *piAttribIList, const FLOAT *pfAttribFList, UINT nMaxFormats, int *piFormats, UINT *nNumFormats);
		typedef BOOL (GALGLPROC* wglBindTexImageARB_t)(HPBUFFERARB hPbuffer, int iBuffer);
		typedef BOOL (GALGLPROC* wglReleaseTexImageARB_t)(HPBUFFERARB hPbuffer, int iBuffer);
		typedef BOOL (GALGLPROC* wglSetPbufferAttribARB_t)(HPBUFFERARB hPbuffer, const int *piAttribList);
		typedef BOOL (GALGLPROC* wglSetStereoEmitterState3DL_t)(HDC hDC, UINT uState);
		typedef UINT (GALGLPROC* wglGetGPUIDsAMD_t)(UINT maxCount, UINT *ids);
		typedef INT (GALGLPROC* wglGetGPUInfoAMD_t)(UINT id, INT property, GLenum dataType, UINT size, void *data);
		typedef UINT (GALGLPROC* wglGetContextGPUIDAMD_t)(HGLRC hglrc);
		typedef HGLRC (GALGLPROC* wglCreateAssociatedContextAMD_t)(UINT id);
		typedef HGLRC (GALGLPROC* wglCreateAssociatedContextAttribsAMD_t)(UINT id, HGLRC hShareContext, const int *attribList);
		typedef BOOL (GALGLPROC* wglDeleteAssociatedContextAMD_t)(HGLRC hglrc);
		typedef BOOL (GALGLPROC* wglMakeAssociatedContextCurrentAMD_t)(HGLRC hglrc);
		typedef HGLRC (GALGLPROC* wglGetCurrentAssociatedContextAMD_t)(void);
		typedef VOID (GALGLPROC* wglBlitContextFramebufferAMD_t)(HGLRC dstCtx, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
		typedef GLboolean (GALGLPROC* wglCreateDisplayColorTableEXT_t)(GLushort id);
		typedef GLboolean (GALGLPROC* wglLoadDisplayColorTableEXT_t)(const GLushort *table, GLuint length);
		typedef GLboolean (GALGLPROC* wglBindDisplayColorTableEXT_t)(GLushort id);
		typedef VOID (GALGLPROC* wglDestroyDisplayColorTableEXT_t)(GLushort id);
		typedef const char * (GALGLPROC* wglGetExtensionsStringEXT_t)(void);
		typedef BOOL (GALGLPROC* wglMakeContextCurrentEXT_t)(HDC hDrawDC, HDC hReadDC, HGLRC hglrc);
		typedef HDC (GALGLPROC* wglGetCurrentReadDCEXT_t)(void);
		typedef HPBUFFEREXT (GALGLPROC* wglCreatePbufferEXT_t)(HDC hDC, int iPixelFormat, int iWidth, int iHeight, const int *piAttribList);
		typedef HDC (GALGLPROC* wglGetPbufferDCEXT_t)(HPBUFFEREXT hPbuffer);
		typedef int (GALGLPROC* wglReleasePbufferDCEXT_t)(HPBUFFEREXT hPbuffer, HDC hDC);
		typedef BOOL (GALGLPROC* wglDestroyPbufferEXT_t)(HPBUFFEREXT hPbuffer);
		typedef BOOL (GALGLPROC* wglQueryPbufferEXT_t)(HPBUFFEREXT hPbuffer, int iAttribute, int *piValue);
		typedef BOOL (GALGLPROC* wglGetPixelFormatAttribivEXT_t)(HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes, int *piAttributes, int *piValues);
		typedef BOOL (GALGLPROC* wglGetPixelFormatAttribfvEXT_t)(HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes, int *piAttributes, FLOAT *pfValues);
		typedef BOOL (GALGLPROC* wglChoosePixelFormatEXT_t)(HDC hdc, const int *piAttribIList, const FLOAT *pfAttribFList, UINT nMaxFormats, int *piFormats, UINT *nNumFormats);
		typedef BOOL (GALGLPROC* wglSwapIntervalEXT_t)(int interval);
		typedef int (GALGLPROC* wglGetSwapIntervalEXT_t)(void);
		typedef BOOL (GALGLPROC* wglGetDigitalVideoParametersI3D_t)(HDC hDC, int iAttribute, int *piValue);
		typedef BOOL (GALGLPROC* wglSetDigitalVideoParametersI3D_t)(HDC hDC, int iAttribute, const int *piValue);
		typedef BOOL (GALGLPROC* wglGetGammaTableParametersI3D_t)(HDC hDC, int iAttribute, int *piValue);
		typedef BOOL (GALGLPROC* wglSetGammaTableParametersI3D_t)(HDC hDC, int iAttribute, const int *piValue);
		typedef BOOL (GALGLPROC* wglGetGammaTableI3D_t)(HDC hDC, int iEntries, USHORT *puRed, USHORT *puGreen, USHORT *puBlue);
		typedef BOOL (GALGLPROC* wglSetGammaTableI3D_t)(HDC hDC, int iEntries, const USHORT *puRed, const USHORT *puGreen, const USHORT *puBlue);
		typedef BOOL (GALGLPROC* wglEnableGenlockI3D_t)(HDC hDC);
		typedef BOOL (GALGLPROC* wglDisableGenlockI3D_t)(HDC hDC);
		typedef BOOL (GALGLPROC* wglIsEnabledGenlockI3D_t)(HDC hDC, BOOL *pFlag);
		typedef BOOL (GALGLPROC* wglGenlockSourceI3D_t)(HDC hDC, UINT uSource);
		typedef BOOL (GALGLPROC* wglGetGenlockSourceI3D_t)(HDC hDC, UINT *uSource);
		typedef BOOL (GALGLPROC* wglGenlockSourceEdgeI3D_t)(HDC hDC, UINT uEdge);
		typedef BOOL (GALGLPROC* wglGetGenlockSourceEdgeI3D_t)(HDC hDC, UINT *uEdge);
		typedef BOOL (GALGLPROC* wglGenlockSampleRateI3D_t)(HDC hDC, UINT uRate);
		typedef BOOL (GALGLPROC* wglGetGenlockSampleRateI3D_t)(HDC hDC, UINT *uRate);
		typedef BOOL (GALGLPROC* wglGenlockSourceDelayI3D_t)(HDC hDC, UINT uDelay);
		typedef BOOL (GALGLPROC* wglGetGenlockSourceDelayI3D_t)(HDC hDC, UINT *uDelay);
		typedef BOOL (GALGLPROC* wglQueryGenlockMaxSourceDelayI3D_t)(HDC hDC, UINT *uMaxLineDelay, UINT *uMaxPixelDelay);
		typedef LPVOID (GALGLPROC* wglCreateImageBufferI3D_t)(HDC hDC, DWORD dwSize, UINT uFlags);
		typedef BOOL (GALGLPROC* wglDestroyImageBufferI3D_t)(HDC hDC, LPVOID pAddress);
		typedef BOOL (GALGLPROC* wglAssociateImageBufferEventsI3D_t)(HDC hDC, const HANDLE *pEvent, const LPVOID *pAddress, const DWORD *pSize, UINT count);
		typedef BOOL (GALGLPROC* wglReleaseImageBufferEventsI3D_t)(HDC hDC, const LPVOID *pAddress, UINT count);
		typedef BOOL (GALGLPROC* wglEnableFrameLockI3D_t)(void);
		typedef BOOL (GALGLPROC* wglDisableFrameLockI3D_t)(void);
		typedef BOOL (GALGLPROC* wglIsEnabledFrameLockI3D_t)(BOOL *pFlag);
		typedef BOOL (GALGLPROC* wglQueryFrameLockMasterI3D_t)(BOOL *pFlag);
		typedef BOOL (GALGLPROC* wglGetFrameUsageI3D_t)(float *pUsage);
		typedef BOOL (GALGLPROC* wglBeginFrameTrackingI3D_t)(void);
		typedef BOOL (GALGLPROC* wglEndFrameTrackingI3D_t)(void);
		typedef BOOL (GALGLPROC* wglQueryFrameTrackingI3D_t)(DWORD *pFrameCount, DWORD *pMissedFrames, float *pLastMissedUsage);
		typedef BOOL (GALGLPROC* wglDXSetResourceShareHandleNV_t)(void *dxObject, HANDLE shareHandle);
		typedef HANDLE (GALGLPROC* wglDXOpenDeviceNV_t)(void *dxDevice);
		typedef BOOL (GALGLPROC* wglDXCloseDeviceNV_t)(HANDLE hDevice);
		typedef HANDLE (GALGLPROC* wglDXRegisterObjectNV_t)(HANDLE hDevice, void *dxObject, GLuint name, GLenum type, GLenum access);
		typedef BOOL (GALGLPROC* wglDXUnregisterObjectNV_t)(HANDLE hDevice, HANDLE hObject);
		typedef BOOL (GALGLPROC* wglDXObjectAccessNV_t)(HANDLE hObject, GLenum access);
		typedef BOOL (GALGLPROC* wglDXLockObjectsNV_t)(HANDLE hDevice, GLint count, HANDLE *hObjects);
		typedef BOOL (GALGLPROC* wglDXUnlockObjectsNV_t)(HANDLE hDevice, GLint count, HANDLE *hObjects);
		typedef BOOL (GALGLPROC* wglCopyImageSubDataNV_t)(HGLRC hSrcRC, GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, HGLRC hDstRC, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth);
		typedef BOOL (GALGLPROC* wglDelayBeforeSwapNV_t)(HDC hDC, GLfloat seconds);
		typedef BOOL (GALGLPROC* wglEnumGpusNV_t)(UINT iGpuIndex, HGPUNV *phGpu);
		typedef BOOL (GALGLPROC* wglEnumGpuDevicesNV_t)(HGPUNV hGpu, UINT iDeviceIndex, PGPU_DEVICE lpGpuDevice);
		typedef HDC (GALGLPROC* wglCreateAffinityDCNV_t)(const HGPUNV *phGpuList);
		typedef BOOL (GALGLPROC* wglEnumGpusFromAffinityDCNV_t)(HDC hAffinityDC, UINT iGpuIndex, HGPUNV *hGpu);
		typedef BOOL (GALGLPROC* wglDeleteDCNV_t)(HDC hdc);
		typedef int (GALGLPROC* wglEnumerateVideoDevicesNV_t)(HDC hDc, HVIDEOOUTPUTDEVICENV *phDeviceList);
		typedef BOOL (GALGLPROC* wglBindVideoDeviceNV_t)(HDC hDc, unsigned int uVideoSlot, HVIDEOOUTPUTDEVICENV hVideoDevice, const int *piAttribList);
		typedef BOOL (GALGLPROC* wglQueryCurrentContextNV_t)(int iAttribute, int *piValue);
		typedef BOOL (GALGLPROC* wglJoinSwapGroupNV_t)(HDC hDC, GLuint group);
		typedef BOOL (GALGLPROC* wglBindSwapBarrierNV_t)(GLuint group, GLuint barrier);
		typedef BOOL (GALGLPROC* wglQuerySwapGroupNV_t)(HDC hDC, GLuint *group, GLuint *barrier);
		typedef BOOL (GALGLPROC* wglQueryMaxSwapGroupsNV_t)(HDC hDC, GLuint *maxGroups, GLuint *maxBarriers);
		typedef BOOL (GALGLPROC* wglQueryFrameCountNV_t)(HDC hDC, GLuint *count);
		typedef BOOL (GALGLPROC* wglResetFrameCountNV_t)(HDC hDC);
		typedef void * (GALGLPROC* wglAllocateMemoryNV_t)(GLsizei size, GLfloat readfreq, GLfloat writefreq, GLfloat priority);
		typedef void (GALGLPROC* wglFreeMemoryNV_t)(void *pointer);
		typedef BOOL (GALGLPROC* wglBindVideoCaptureDeviceNV_t)(UINT uVideoSlot, HVIDEOINPUTDEVICENV hDevice);
		typedef UINT (GALGLPROC* wglEnumerateVideoCaptureDevicesNV_t)(HDC hDc, HVIDEOINPUTDEVICENV *phDeviceList);
		typedef BOOL (GALGLPROC* wglLockVideoCaptureDeviceNV_t)(HDC hDc, HVIDEOINPUTDEVICENV hDevice);
		typedef BOOL (GALGLPROC* wglQueryVideoCaptureDeviceNV_t)(HDC hDc, HVIDEOINPUTDEVICENV hDevice, int iAttribute, int *piValue);
		typedef BOOL (GALGLPROC* wglReleaseVideoCaptureDeviceNV_t)(HDC hDc, HVIDEOINPUTDEVICENV hDevice);
		typedef BOOL (GALGLPROC* wglGetVideoDeviceNV_t)(HDC hDC, int numDevices, HPVIDEODEV *hVideoDevice);
		typedef BOOL (GALGLPROC* wglReleaseVideoDeviceNV_t)(HPVIDEODEV hVideoDevice);
		typedef BOOL (GALGLPROC* wglBindVideoImageNV_t)(HPVIDEODEV hVideoDevice, HPBUFFERARB hPbuffer, int iVideoBuffer);
		typedef BOOL (GALGLPROC* wglReleaseVideoImageNV_t)(HPBUFFERARB hPbuffer, int iVideoBuffer);
		typedef BOOL (GALGLPROC* wglSendPbufferToVideoNV_t)(HPBUFFERARB hPbuffer, int iBufferType, unsigned long *pulCounterPbuffer, BOOL bBlock);
		typedef BOOL (GALGLPROC* wglGetVideoInfoNV_t)(HPVIDEODEV hpVideoDevice, unsigned long *pulCounterOutputPbuffer, unsigned long *pulCounterOutputVideo);
		typedef BOOL (GALGLPROC* wglGetSyncValuesOML_t)(HDC hdc, INT64 *ust, INT64 *msc, INT64 *sbc);
		typedef BOOL (GALGLPROC* wglGetMscRateOML_t)(HDC hdc, INT32 *numerator, INT32 *denominator);
		typedef INT64 (GALGLPROC* wglSwapBuffersMscOML_t)(HDC hdc, INT64 target_msc, INT64 divisor, INT64 remainder);
		typedef INT64 (GALGLPROC* wglSwapLayerBuffersMscOML_t)(HDC hdc, INT fuPlanes, INT64 target_msc, INT64 divisor, INT64 remainder);
		typedef BOOL (GALGLPROC* wglWaitForMscOML_t)(HDC hdc, INT64 target_msc, INT64 divisor, INT64 remainder, INT64 *ust, INT64 *msc, INT64 *sbc);
		typedef BOOL (GALGLPROC* wglWaitForSbcOML_t)(HDC hdc, INT64 target_sbc, INT64 *ust, INT64 *msc, INT64 *sbc);
	};

	struct {
		FuncDef::ChoosePixelFormat_t ChoosePixelFormat;
		FuncDef::DescribePixelFormat_t DescribePixelFormat;
		FuncDef::GetEnhMetaFilePixelFormat_t GetEnhMetaFilePixelFormat;
		FuncDef::GetPixelFormat_t GetPixelFormat;
		FuncDef::SetPixelFormat_t SetPixelFormat;
		FuncDef::SwapBuffers_t SwapBuffers;
		FuncDef::wglCopyContext_t CopyContext;
		FuncDef::wglCreateContext_t CreateContext;
		FuncDef::wglCreateLayerContext_t CreateLayerContext;
		FuncDef::wglDeleteContext_t DeleteContext;
		FuncDef::wglDescribeLayerPlane_t DescribeLayerPlane;
		FuncDef::wglGetCurrentContext_t GetCurrentContext;
		FuncDef::wglGetCurrentDC_t GetCurrentDC;
		FuncDef::wglGetLayerPaletteEntries_t GetLayerPaletteEntries;
		FuncDef::wglGetProcAddress_t GetProcAddress;
		FuncDef::wglMakeCurrent_t MakeCurrent;
		FuncDef::wglRealizeLayerPalette_t RealizeLayerPalette;
		FuncDef::wglSetLayerPaletteEntries_t SetLayerPaletteEntries;
		FuncDef::wglShareLists_t ShareLists;
		FuncDef::wglSwapLayerBuffers_t SwapLayerBuffers;
		FuncDef::wglUseFontBitmaps_t UseFontBitmaps;
		FuncDef::wglUseFontBitmapsA_t UseFontBitmapsA;
		FuncDef::wglUseFontBitmapsW_t UseFontBitmapsW;
		FuncDef::wglUseFontOutlines_t UseFontOutlines;
		FuncDef::wglUseFontOutlinesA_t UseFontOutlinesA;
		FuncDef::wglUseFontOutlinesW_t UseFontOutlinesW;
		FuncDef::wglCreateBufferRegionARB_t CreateBufferRegionARB;
		FuncDef::wglDeleteBufferRegionARB_t DeleteBufferRegionARB;
		FuncDef::wglSaveBufferRegionARB_t SaveBufferRegionARB;
		FuncDef::wglRestoreBufferRegionARB_t RestoreBufferRegionARB;
		FuncDef::wglCreateContextAttribsARB_t CreateContextAttribsARB;
		FuncDef::wglGetExtensionsStringARB_t GetExtensionsStringARB;
		FuncDef::wglMakeContextCurrentARB_t MakeContextCurrentARB;
		FuncDef::wglGetCurrentReadDCARB_t GetCurrentReadDCARB;
		FuncDef::wglCreatePbufferARB_t CreatePbufferARB;
		FuncDef::wglGetPbufferDCARB_t GetPbufferDCARB;
		FuncDef::wglReleasePbufferDCARB_t ReleasePbufferDCARB;
		FuncDef::wglDestroyPbufferARB_t DestroyPbufferARB;
		FuncDef::wglQueryPbufferARB_t QueryPbufferARB;
		FuncDef::wglGetPixelFormatAttribivARB_t GetPixelFormatAttribivARB;
		FuncDef::wglGetPixelFormatAttribfvARB_t GetPixelFormatAttribfvARB;
		FuncDef::wglChoosePixelFormatARB_t ChoosePixelFormatARB;
		FuncDef::wglBindTexImageARB_t BindTexImageARB;
		FuncDef::wglReleaseTexImageARB_t ReleaseTexImageARB;
		FuncDef::wglSetPbufferAttribARB_t SetPbufferAttribARB;
		FuncDef::wglSetStereoEmitterState3DL_t SetStereoEmitterState3DL;
		FuncDef::wglGetGPUIDsAMD_t GetGPUIDsAMD;
		FuncDef::wglGetGPUInfoAMD_t GetGPUInfoAMD;
		FuncDef::wglGetContextGPUIDAMD_t GetContextGPUIDAMD;
		FuncDef::wglCreateAssociatedContextAMD_t CreateAssociatedContextAMD;
		FuncDef::wglCreateAssociatedContextAttribsAMD_t CreateAssociatedContextAttribsAMD;
		FuncDef::wglDeleteAssociatedContextAMD_t DeleteAssociatedContextAMD;
		FuncDef::wglMakeAssociatedContextCurrentAMD_t MakeAssociatedContextCurrentAMD;
		FuncDef::wglGetCurrentAssociatedContextAMD_t GetCurrentAssociatedContextAMD;
		FuncDef::wglBlitContextFramebufferAMD_t BlitContextFramebufferAMD;
		FuncDef::wglCreateDisplayColorTableEXT_t CreateDisplayColorTableEXT;
		FuncDef::wglLoadDisplayColorTableEXT_t LoadDisplayColorTableEXT;
		FuncDef::wglBindDisplayColorTableEXT_t BindDisplayColorTableEXT;
		FuncDef::wglDestroyDisplayColorTableEXT_t DestroyDisplayColorTableEXT;
		FuncDef::wglGetExtensionsStringEXT_t GetExtensionsStringEXT;
		FuncDef::wglMakeContextCurrentEXT_t MakeContextCurrentEXT;
		FuncDef::wglGetCurrentReadDCEXT_t GetCurrentReadDCEXT;
		FuncDef::wglCreatePbufferEXT_t CreatePbufferEXT;
		FuncDef::wglGetPbufferDCEXT_t GetPbufferDCEXT;
		FuncDef::wglReleasePbufferDCEXT_t ReleasePbufferDCEXT;
		FuncDef::wglDestroyPbufferEXT_t DestroyPbufferEXT;
		FuncDef::wglQueryPbufferEXT_t QueryPbufferEXT;
		FuncDef::wglGetPixelFormatAttribivEXT_t GetPixelFormatAttribivEXT;
		FuncDef::wglGetPixelFormatAttribfvEXT_t GetPixelFormatAttribfvEXT;
		FuncDef::wglChoosePixelFormatEXT_t ChoosePixelFormatEXT;
		FuncDef::wglSwapIntervalEXT_t SwapIntervalEXT;
		FuncDef::wglGetSwapIntervalEXT_t GetSwapIntervalEXT;
		FuncDef::wglGetDigitalVideoParametersI3D_t GetDigitalVideoParametersI3D;
		FuncDef::wglSetDigitalVideoParametersI3D_t SetDigitalVideoParametersI3D;
		FuncDef::wglGetGammaTableParametersI3D_t GetGammaTableParametersI3D;
		FuncDef::wglSetGammaTableParametersI3D_t SetGammaTableParametersI3D;
		FuncDef::wglGetGammaTableI3D_t GetGammaTableI3D;
		FuncDef::wglSetGammaTableI3D_t SetGammaTableI3D;
		FuncDef::wglEnableGenlockI3D_t EnableGenlockI3D;
		FuncDef::wglDisableGenlockI3D_t DisableGenlockI3D;
		FuncDef::wglIsEnabledGenlockI3D_t IsEnabledGenlockI3D;
		FuncDef::wglGenlockSourceI3D_t GenlockSourceI3D;
		FuncDef::wglGetGenlockSourceI3D_t GetGenlockSourceI3D;
		FuncDef::wglGenlockSourceEdgeI3D_t GenlockSourceEdgeI3D;
		FuncDef::wglGetGenlockSourceEdgeI3D_t GetGenlockSourceEdgeI3D;
		FuncDef::wglGenlockSampleRateI3D_t GenlockSampleRateI3D;
		FuncDef::wglGetGenlockSampleRateI3D_t GetGenlockSampleRateI3D;
		FuncDef::wglGenlockSourceDelayI3D_t GenlockSourceDelayI3D;
		FuncDef::wglGetGenlockSourceDelayI3D_t GetGenlockSourceDelayI3D;
		FuncDef::wglQueryGenlockMaxSourceDelayI3D_t QueryGenlockMaxSourceDelayI3D;
		FuncDef::wglCreateImageBufferI3D_t CreateImageBufferI3D;
		FuncDef::wglDestroyImageBufferI3D_t DestroyImageBufferI3D;
		FuncDef::wglAssociateImageBufferEventsI3D_t AssociateImageBufferEventsI3D;
		FuncDef::wglReleaseImageBufferEventsI3D_t ReleaseImageBufferEventsI3D;
		FuncDef::wglEnableFrameLockI3D_t EnableFrameLockI3D;
		FuncDef::wglDisableFrameLockI3D_t DisableFrameLockI3D;
		FuncDef::wglIsEnabledFrameLockI3D_t IsEnabledFrameLockI3D;
		FuncDef::wglQueryFrameLockMasterI3D_t QueryFrameLockMasterI3D;
		FuncDef::wglGetFrameUsageI3D_t GetFrameUsageI3D;
		FuncDef::wglBeginFrameTrackingI3D_t BeginFrameTrackingI3D;
		FuncDef::wglEndFrameTrackingI3D_t EndFrameTrackingI3D;
		FuncDef::wglQueryFrameTrackingI3D_t QueryFrameTrackingI3D;
		FuncDef::wglDXSetResourceShareHandleNV_t DXSetResourceShareHandleNV;
		FuncDef::wglDXOpenDeviceNV_t DXOpenDeviceNV;
		FuncDef::wglDXCloseDeviceNV_t DXCloseDeviceNV;
		FuncDef::wglDXRegisterObjectNV_t DXRegisterObjectNV;
		FuncDef::wglDXUnregisterObjectNV_t DXUnregisterObjectNV;
		FuncDef::wglDXObjectAccessNV_t DXObjectAccessNV;
		FuncDef::wglDXLockObjectsNV_t DXLockObjectsNV;
		FuncDef::wglDXUnlockObjectsNV_t DXUnlockObjectsNV;
		FuncDef::wglCopyImageSubDataNV_t CopyImageSubDataNV;
		FuncDef::wglDelayBeforeSwapNV_t DelayBeforeSwapNV;
		FuncDef::wglEnumGpusNV_t EnumGpusNV;
		FuncDef::wglEnumGpuDevicesNV_t EnumGpuDevicesNV;
		FuncDef::wglCreateAffinityDCNV_t CreateAffinityDCNV;
		FuncDef::wglEnumGpusFromAffinityDCNV_t EnumGpusFromAffinityDCNV;
		FuncDef::wglDeleteDCNV_t DeleteDCNV;
		FuncDef::wglEnumerateVideoDevicesNV_t EnumerateVideoDevicesNV;
		FuncDef::wglBindVideoDeviceNV_t BindVideoDeviceNV;
		FuncDef::wglQueryCurrentContextNV_t QueryCurrentContextNV;
		FuncDef::wglJoinSwapGroupNV_t JoinSwapGroupNV;
		FuncDef::wglBindSwapBarrierNV_t BindSwapBarrierNV;
		FuncDef::wglQuerySwapGroupNV_t QuerySwapGroupNV;
		FuncDef::wglQueryMaxSwapGroupsNV_t QueryMaxSwapGroupsNV;
		FuncDef::wglQueryFrameCountNV_t QueryFrameCountNV;
		FuncDef::wglResetFrameCountNV_t ResetFrameCountNV;
		FuncDef::wglAllocateMemoryNV_t AllocateMemoryNV;
		FuncDef::wglFreeMemoryNV_t FreeMemoryNV;
		FuncDef::wglBindVideoCaptureDeviceNV_t BindVideoCaptureDeviceNV;
		FuncDef::wglEnumerateVideoCaptureDevicesNV_t EnumerateVideoCaptureDevicesNV;
		FuncDef::wglLockVideoCaptureDeviceNV_t LockVideoCaptureDeviceNV;
		FuncDef::wglQueryVideoCaptureDeviceNV_t QueryVideoCaptureDeviceNV;
		FuncDef::wglReleaseVideoCaptureDeviceNV_t ReleaseVideoCaptureDeviceNV;
		FuncDef::wglGetVideoDeviceNV_t GetVideoDeviceNV;
		FuncDef::wglReleaseVideoDeviceNV_t ReleaseVideoDeviceNV;
		FuncDef::wglBindVideoImageNV_t BindVideoImageNV;
		FuncDef::wglReleaseVideoImageNV_t ReleaseVideoImageNV;
		FuncDef::wglSendPbufferToVideoNV_t SendPbufferToVideoNV;
		FuncDef::wglGetVideoInfoNV_t GetVideoInfoNV;
		FuncDef::wglGetSyncValuesOML_t GetSyncValuesOML;
		FuncDef::wglGetMscRateOML_t GetMscRateOML;
		FuncDef::wglSwapBuffersMscOML_t SwapBuffersMscOML;
		FuncDef::wglSwapLayerBuffersMscOML_t SwapLayerBuffersMscOML;
		FuncDef::wglWaitForMscOML_t WaitForMscOML;
		FuncDef::wglWaitForSbcOML_t WaitForSbcOML;
	};

	WGLproc ProcList[145];

	static constexpr const char* ProcNameList[145] = {
		"ChoosePixelFormat",
		"DescribePixelFormat",
		"GetEnhMetaFilePixelFormat",
		"GetPixelFormat",
		"SetPixelFormat",
		"SwapBuffers",
		"wglCopyContext",
		"wglCreateContext",
		"wglCreateLayerContext",
		"wglDeleteContext",
		"wglDescribeLayerPlane",
		"wglGetCurrentContext",
		"wglGetCurrentDC",
		"wglGetLayerPaletteEntries",
		"wglGetProcAddress",
		"wglMakeCurrent",
		"wglRealizeLayerPalette",
		"wglSetLayerPaletteEntries",
		"wglShareLists",
		"wglSwapLayerBuffers",
		"wglUseFontBitmaps",
		"wglUseFontBitmapsA",
		"wglUseFontBitmapsW",
		"wglUseFontOutlines",
		"wglUseFontOutlinesA",
		"wglUseFontOutlinesW",
		"wglCreateBufferRegionARB",
		"wglDeleteBufferRegionARB",
		"wglSaveBufferRegionARB",
		"wglRestoreBufferRegionARB",
		"wglCreateContextAttribsARB",
		"wglGetExtensionsStringARB",
		"wglMakeContextCurrentARB",
		"wglGetCurrentReadDCARB",
		"wglCreatePbufferARB",
		"wglGetPbufferDCARB",
		"wglReleasePbufferDCARB",
		"wglDestroyPbufferARB",
		"wglQueryPbufferARB",
		"wglGetPixelFormatAttribivARB",
		"wglGetPixelFormatAttribfvARB",
		"wglChoosePixelFormatARB",
		"wglBindTexImageARB",
		"wglReleaseTexImageARB",
		"wglSetPbufferAttribARB",
		"wglSetStereoEmitterState3DL",
		"wglGetGPUIDsAMD",
		"wglGetGPUInfoAMD",
		"wglGetContextGPUIDAMD",
		"wglCreateAssociatedContextAMD",
		"wglCreateAssociatedContextAttribsAMD",
		"wglDeleteAssociatedContextAMD",
		"wglMakeAssociatedContextCurrentAMD",
		"wglGetCurrentAssociatedContextAMD",
		"wglBlitContextFramebufferAMD",
		"wglCreateDisplayColorTableEXT",
		"wglLoadDisplayColorTableEXT",
		"wglBindDisplayColorTableEXT",
		"wglDestroyDisplayColorTableEXT",
		"wglGetExtensionsStringEXT",
		"wglMakeContextCurrentEXT",
		"wglGetCurrentReadDCEXT",
		"wglCreatePbufferEXT",
		"wglGetPbufferDCEXT",
		"wglReleasePbufferDCEXT",
		"wglDestroyPbufferEXT",
		"wglQueryPbufferEXT",
		"wglGetPixelFormatAttribivEXT",
		"wglGetPixelFormatAttribfvEXT",
		"wglChoosePixelFormatEXT",
		"wglSwapIntervalEXT",
		"wglGetSwapIntervalEXT",
		"wglGetDigitalVideoParametersI3D",
		"wglSetDigitalVideoParametersI3D",
		"wglGetGammaTableParametersI3D",
		"wglSetGammaTableParametersI3D",
		"wglGetGammaTableI3D",
		"wglSetGammaTableI3D",
		"wglEnableGenlockI3D",
		"wglDisableGenlockI3D",
		"wglIsEnabledGenlockI3D",
		"wglGenlockSourceI3D",
		"wglGetGenlockSourceI3D",
		"wglGenlockSourceEdgeI3D",
		"wglGetGenlockSourceEdgeI3D",
		"wglGenlockSampleRateI3D",
		"wglGetGenlockSampleRateI3D",
		"wglGenlockSourceDelayI3D",
		"wglGetGenlockSourceDelayI3D",
		"wglQueryGenlockMaxSourceDelayI3D",
		"wglCreateImageBufferI3D",
		"wglDestroyImageBufferI3D",
		"wglAssociateImageBufferEventsI3D",
		"wglReleaseImageBufferEventsI3D",
		"wglEnableFrameLockI3D",
		"wglDisableFrameLockI3D",
		"wglIsEnabledFrameLockI3D",
		"wglQueryFrameLockMasterI3D",
		"wglGetFrameUsageI3D",
		"wglBeginFrameTrackingI3D",
		"wglEndFrameTrackingI3D",
		"wglQueryFrameTrackingI3D",
		"wglDXSetResourceShareHandleNV",
		"wglDXOpenDeviceNV",
		"wglDXCloseDeviceNV",
		"wglDXRegisterObjectNV",
		"wglDXUnregisterObjectNV",
		"wglDXObjectAccessNV",
		"wglDXLockObjectsNV",
		"wglDXUnlockObjectsNV",
		"wglCopyImageSubDataNV",
		"wglDelayBeforeSwapNV",
		"wglEnumGpusNV",
		"wglEnumGpuDevicesNV",
		"wglCreateAffinityDCNV",
		"wglEnumGpusFromAffinityDCNV",
		"wglDeleteDCNV",
		"wglEnumerateVideoDevicesNV",
		"wglBindVideoDeviceNV",
		"wglQueryCurrentContextNV",
		"wglJoinSwapGroupNV",
		"wglBindSwapBarrierNV",
		"wglQuerySwapGroupNV",
		"wglQueryMaxSwapGroupsNV",
		"wglQueryFrameCountNV",
		"wglResetFrameCountNV",
		"wglAllocateMemoryNV",
		"wglFreeMemoryNV",
		"wglBindVideoCaptureDeviceNV",
		"wglEnumerateVideoCaptureDevicesNV",
		"wglLockVideoCaptureDeviceNV",
		"wglQueryVideoCaptureDeviceNV",
		"wglReleaseVideoCaptureDeviceNV",
		"wglGetVideoDeviceNV",
		"wglReleaseVideoDeviceNV",
		"wglBindVideoImageNV",
		"wglReleaseVideoImageNV",
		"wglSendPbufferToVideoNV",
		"wglGetVideoInfoNV",
		"wglGetSyncValuesOML",
		"wglGetMscRateOML",
		"wglSwapBuffersMscOML",
		"wglSwapLayerBuffersMscOML",
		"wglWaitForMscOML",
		"wglWaitForSbcOML",
	};
};
#endif /* GAL_WGL_HEADER_H */
