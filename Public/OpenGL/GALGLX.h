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

#ifndef GAL_GLX_HEADER_H
#define GAL_GLX_HEADER_H 1

#include "GALGL.h"

typedef XID GLXContextID;
typedef XID GLXWindow;
typedef XID GLXPbuffer;
typedef XID GLXVideoCaptureDeviceNV;
typedef XID GLXPbufferSGIX;
typedef XID GLXVideoSourceSGIX;
typedef uint32_t GLXVideoDeviceNV;
typedef void (GALGLPROC* GLXproc)();

typedef struct __GLXFBConfigRec *GLXFBConfig;
typedef struct {
    int type;
    unsigned long serial;
    Bool send_event;
    Display *display;
    int extension;
    int evtype;
    GLXDrawable window;
    Bool stereo_tree;
} GLXStereoNotifyEventEXT;
typedef struct __GLXFBConfigRec *GLXFBConfigSGIX;
typedef struct {
    char    pipeName[80]; /* Should be [GLX_HYPERPIPE_PIPE_NAME_LENGTH_SGIX] */
    int     networkId;
} GLXHyperpipeNetworkSGIX;
typedef struct {
    char    pipeName[80]; /* Should be [GLX_HYPERPIPE_PIPE_NAME_LENGTH_SGIX] */
    int     channel;
    unsigned int participationType;
    int     timeSlice;
} GLXHyperpipeConfigSGIX;
typedef struct {
    char pipeName[80]; /* Should be [GLX_HYPERPIPE_PIPE_NAME_LENGTH_SGIX] */
    int srcXOrigin, srcYOrigin, srcWidth, srcHeight;
    int destXOrigin, destYOrigin, destWidth, destHeight;
} GLXPipeRect;
typedef struct {
    char pipeName[80]; /* Should be [GLX_HYPERPIPE_PIPE_NAME_LENGTH_SGIX] */
    int XOrigin, YOrigin, maxHeight, maxWidth;
} GLXPipeRectLimits;

union GLX
{
	typedef void (GALGLPROC* __GLXextFuncPtr)(void);

	static constexpr auto WINDOW_BIT = 0x00000001;
	static constexpr auto PIXMAP_BIT = 0x00000002;
	static constexpr auto PBUFFER_BIT = 0x00000004;
	static constexpr auto RGBA_BIT = 0x00000001;
	static constexpr auto COLOR_INDEX_BIT = 0x00000002;
	static constexpr auto PBUFFER_CLOBBER_MASK = 0x08000000;
	static constexpr auto FRONT_LEFT_BUFFER_BIT = 0x00000001;
	static constexpr auto FRONT_RIGHT_BUFFER_BIT = 0x00000002;
	static constexpr auto BACK_LEFT_BUFFER_BIT = 0x00000004;
	static constexpr auto BACK_RIGHT_BUFFER_BIT = 0x00000008;
	static constexpr auto AUX_BUFFERS_BIT = 0x00000010;
	static constexpr auto DEPTH_BUFFER_BIT = 0x00000020;
	static constexpr auto STENCIL_BUFFER_BIT = 0x00000040;
	static constexpr auto ACCUM_BUFFER_BIT = 0x00000080;
	static constexpr auto CONFIG_CAVEAT = 0x20;
	static constexpr auto VISUAL_TYPE = 0x22;
	static constexpr auto TRANSPARENT_TYPE = 0x23;
	static constexpr auto TRANSPARENT_INDEX_VALUE = 0x24;
	static constexpr auto TRANSPARENT_RED_VALUE = 0x25;
	static constexpr auto TRANSPARENT_GREEN_VALUE = 0x26;
	static constexpr auto TRANSPARENT_BLUE_VALUE = 0x27;
	static constexpr auto TRANSPARENT_ALPHA_VALUE = 0x28;
	static constexpr auto DONT_CARE = 0xFFFFFFFF;
	static constexpr auto NONE = 0x8000;
	static constexpr auto SLOW_CONFIG = 0x8001;
	static constexpr auto TRUE_COLOR = 0x8002;
	static constexpr auto DIRECT_COLOR = 0x8003;
	static constexpr auto PSEUDO_COLOR = 0x8004;
	static constexpr auto STATIC_COLOR = 0x8005;
	static constexpr auto RAY_SCALE = 0x8006;
	static constexpr auto STATIC_GRAY = 0x8007;
	static constexpr auto TRANSPARENT_RGB = 0x8008;
	static constexpr auto TRANSPARENT_INDEX = 0x8009;
	static constexpr auto VISUAL_ID = 0x800B;
	static constexpr auto SCREEN = 0x800C;
	static constexpr auto NON_CONFORMANT_CONFIG = 0x800D;
	static constexpr auto DRAWABLE_TYPE = 0x8010;
	static constexpr auto RENDER_TYPE = 0x8011;
	static constexpr auto RENDERABLE = 0x8012;
	static constexpr auto FBCONFIG_ID = 0x8013;
	static constexpr auto RGBA_TYPE = 0x8014;
	static constexpr auto COLOR_INDEX_TYPE = 0x8015;
	static constexpr auto MAX_PBUFFER_WIDTH = 0x8016;
	static constexpr auto MAX_PBUFFER_HEIGHT = 0x8017;
	static constexpr auto MAX_PBUFFER_PIXELS = 0x8018;
	static constexpr auto PRESERVED_CONTENTS = 0x801B;
	static constexpr auto ARGEST_PBUFFER = 0x801C;
	static constexpr auto WIDTH = 0x801D;
	static constexpr auto HEIGHT = 0x801E;
	static constexpr auto EVENT_MASK = 0x801F;
	static constexpr auto DAMAGED = 0x8020;
	static constexpr auto SAVED = 0x8021;
	static constexpr auto WINDOW = 0x8022;
	static constexpr auto PBUFFER = 0x8023;
	static constexpr auto PBUFFER_HEIGHT = 0x8040;
	static constexpr auto PBUFFER_WIDTH = 0x8041;
	static constexpr auto SAMPLE_BUFFERS = 100000;
	static constexpr auto SAMPLES = 100001;
	static constexpr auto CONTEXT_RELEASE_BEHAVIOR_ARB = 0x2097;
	static constexpr auto CONTEXT_RELEASE_BEHAVIOR_NONE_ARB = 0;
	static constexpr auto CONTEXT_RELEASE_BEHAVIOR_FLUSH_ARB = 0x2098;
	static constexpr auto CONTEXT_DEBUG_BIT_ARB = 0x00000001;
	static constexpr auto CONTEXT_FORWARD_COMPATIBLE_BIT_ARB = 0x00000002;
	static constexpr auto CONTEXT_MAJOR_VERSION_ARB = 0x2091;
	static constexpr auto CONTEXT_MINOR_VERSION_ARB = 0x2092;
	static constexpr auto CONTEXT_FLAGS_ARB = 0x2094;
	static constexpr auto CONTEXT_OPENGL_NO_ERROR_ARB = 0x31B3;
	static constexpr auto CONTEXT_CORE_PROFILE_BIT_ARB = 0x00000001;
	static constexpr auto CONTEXT_COMPATIBILITY_PROFILE_BIT_ARB = 0x00000002;
	static constexpr auto CONTEXT_PROFILE_MASK_ARB = 0x9126;
	static constexpr auto CONTEXT_ROBUST_ACCESS_BIT_ARB = 0x00000004;
	static constexpr auto OSE_CONTEXT_ON_RESET_ARB = 0x8252;
	static constexpr auto CONTEXT_RESET_NOTIFICATION_STRATEGY_ARB = 0x8256;
	static constexpr auto NO_RESET_NOTIFICATION_ARB = 0x8261;
	static constexpr auto RGBA_FLOAT_TYPE_ARB = 0x20B9;
	static constexpr auto RGBA_FLOAT_BIT_ARB = 0x00000004;
	static constexpr auto FRAMEBUFFER_SRGB_CAPABLE_ARB = 0x20B2;
	static constexpr auto SAMPLE_BUFFERS_ARB = 100000;
	static constexpr auto SAMPLES_ARB = 100001;
	static constexpr auto CONTEXT_RESET_ISOLATION_BIT_ARB = 0x00000008;
	static constexpr auto CONTEXT_ALLOW_BUFFER_BYTE_ORDER_MISMATCH_ARB = 0x2095;
	static constexpr auto SAMPLE_BUFFERS_3DFX = 0x8050;
	static constexpr auto SAMPLES_3DFX = 0x8051;
	static constexpr auto PU_VENDOR_AMD = 0x1F00;
	static constexpr auto PU_RENDERER_STRING_AMD = 0x1F01;
	static constexpr auto PU_OPENGL_VERSION_STRING_AMD = 0x1F02;
	static constexpr auto PU_FASTEST_TARGET_GPUS_AMD = 0x21A2;
	static constexpr auto PU_RAM_AMD = 0x21A3;
	static constexpr auto PU_CLOCK_AMD = 0x21A4;
	static constexpr auto PU_NUM_PIPES_AMD = 0x21A5;
	static constexpr auto PU_NUM_SIMD_AMD = 0x21A6;
	static constexpr auto PU_NUM_RB_AMD = 0x21A7;
	static constexpr auto PU_NUM_SPI_AMD = 0x21A8;
	static constexpr auto BACK_BUFFER_AGE_EXT = 0x20F4;
	static constexpr auto CONTEXT_PRIORITY_LEVEL_EXT = 0x3100;
	static constexpr auto CONTEXT_PRIORITY_HIGH_EXT = 0x3101;
	static constexpr auto CONTEXT_PRIORITY_MEDIUM_EXT = 0x3102;
	static constexpr auto CONTEXT_PRIORITY_LOW_EXT = 0x3103;
	static constexpr auto CONTEXT_ES2_PROFILE_BIT_EXT = 0x00000004;
	static constexpr auto CONTEXT_ES_PROFILE_BIT_EXT = 0x00000004;
	static constexpr auto RGBA_UNSIGNED_FLOAT_TYPE_EXT = 0x20B1;
	static constexpr auto RGBA_UNSIGNED_FLOAT_BIT_EXT = 0x00000008;
	static constexpr auto FRAMEBUFFER_SRGB_CAPABLE_EXT = 0x20B2;
	static constexpr auto SHARE_CONTEXT_EXT = 0x800A;
	static constexpr auto VISUAL_ID_EXT = 0x800B;
	static constexpr auto SCREEN_EXT = 0x800C;
	static constexpr auto VENDOR_NAMES_EXT = 0x20F6;
	static constexpr auto STEREO_TREE_EXT = 0x20F5;
	static constexpr auto STEREO_NOTIFY_MASK_EXT = 0x00000001;
	static constexpr auto STEREO_NOTIFY_EXT = 0x00000000;
	static constexpr auto SWAP_INTERVAL_EXT = 0x20F1;
	static constexpr auto MAX_SWAP_INTERVAL_EXT = 0x20F2;
	static constexpr auto ATE_SWAPS_TEAR_EXT = 0x20F3;
	static constexpr auto TEXTURE_1D_BIT_EXT = 0x00000001;
	static constexpr auto TEXTURE_2D_BIT_EXT = 0x00000002;
	static constexpr auto TEXTURE_RECTANGLE_BIT_EXT = 0x00000004;
	static constexpr auto BIND_TO_TEXTURE_RGB_EXT = 0x20D0;
	static constexpr auto BIND_TO_TEXTURE_RGBA_EXT = 0x20D1;
	static constexpr auto BIND_TO_MIPMAP_TEXTURE_EXT = 0x20D2;
	static constexpr auto BIND_TO_TEXTURE_TARGETS_EXT = 0x20D3;
	static constexpr auto Y_INVERTED_EXT = 0x20D4;
	static constexpr auto TEXTURE_FORMAT_EXT = 0x20D5;
	static constexpr auto TEXTURE_TARGET_EXT = 0x20D6;
	static constexpr auto MIPMAP_TEXTURE_EXT = 0x20D7;
	static constexpr auto TEXTURE_FORMAT_NONE_EXT = 0x20D8;
	static constexpr auto TEXTURE_FORMAT_RGB_EXT = 0x20D9;
	static constexpr auto TEXTURE_FORMAT_RGBA_EXT = 0x20DA;
	static constexpr auto TEXTURE_1D_EXT = 0x20DB;
	static constexpr auto TEXTURE_2D_EXT = 0x20DC;
	static constexpr auto TEXTURE_RECTANGLE_EXT = 0x20DD;
	static constexpr auto FRONT_LEFT_EXT = 0x20DE;
	static constexpr auto FRONT_RIGHT_EXT = 0x20DF;
	static constexpr auto BACK_LEFT_EXT = 0x20E0;
	static constexpr auto BACK_RIGHT_EXT = 0x20E1;
	static constexpr auto FRONT_EXT = 0x20DE;
	static constexpr auto BACK_EXT = 0x20E0;
	static constexpr auto AUX0_EXT = 0x20E2;
	static constexpr auto AUX1_EXT = 0x20E3;
	static constexpr auto AUX2_EXT = 0x20E4;
	static constexpr auto AUX3_EXT = 0x20E5;
	static constexpr auto AUX4_EXT = 0x20E6;
	static constexpr auto AUX5_EXT = 0x20E7;
	static constexpr auto AUX6_EXT = 0x20E8;
	static constexpr auto AUX7_EXT = 0x20E9;
	static constexpr auto AUX8_EXT = 0x20EA;
	static constexpr auto AUX9_EXT = 0x20EB;
	static constexpr auto VISUAL_TYPE_EXT = 0x22;
	static constexpr auto TRANSPARENT_TYPE_EXT = 0x23;
	static constexpr auto TRANSPARENT_INDEX_VALUE_EXT = 0x24;
	static constexpr auto TRANSPARENT_RED_VALUE_EXT = 0x25;
	static constexpr auto TRANSPARENT_GREEN_VALUE_EXT = 0x26;
	static constexpr auto TRANSPARENT_BLUE_VALUE_EXT = 0x27;
	static constexpr auto TRANSPARENT_ALPHA_VALUE_EXT = 0x28;
	static constexpr auto NONE_EXT = 0x8000;
	static constexpr auto TRUE_COLOR_EXT = 0x8002;
	static constexpr auto DIRECT_COLOR_EXT = 0x8003;
	static constexpr auto PSEUDO_COLOR_EXT = 0x8004;
	static constexpr auto STATIC_COLOR_EXT = 0x8005;
	static constexpr auto RAY_SCALE_EXT = 0x8006;
	static constexpr auto STATIC_GRAY_EXT = 0x8007;
	static constexpr auto TRANSPARENT_RGB_EXT = 0x8008;
	static constexpr auto TRANSPARENT_INDEX_EXT = 0x8009;
	static constexpr auto VISUAL_CAVEAT_EXT = 0x20;
	static constexpr auto SLOW_VISUAL_EXT = 0x8001;
	static constexpr auto NON_CONFORMANT_VISUAL_EXT = 0x800D;
	static constexpr auto BUFFER_SWAP_COMPLETE_INTEL_MASK = 0x04000000;
	static constexpr auto EXCHANGE_COMPLETE_INTEL = 0x8180;
	static constexpr auto COPY_COMPLETE_INTEL = 0x8181;
	static constexpr auto FLIP_COMPLETE_INTEL = 0x8182;
	static constexpr auto RENDERER_VENDOR_ID_MESA = 0x8183;
	static constexpr auto RENDERER_DEVICE_ID_MESA = 0x8184;
	static constexpr auto RENDERER_VERSION_MESA = 0x8185;
	static constexpr auto RENDERER_ACCELERATED_MESA = 0x8186;
	static constexpr auto RENDERER_VIDEO_MEMORY_MESA = 0x8187;
	static constexpr auto RENDERER_UNIFIED_MEMORY_ARCHITECTURE_MESA = 0x8188;
	static constexpr auto RENDERER_PREFERRED_PROFILE_MESA = 0x8189;
	static constexpr auto RENDERER_OPENGL_CORE_PROFILE_VERSION_MESA = 0x818A;
	static constexpr auto RENDERER_OPENGL_COMPATIBILITY_PROFILE_VERSION_MESA = 0x818B;
	static constexpr auto RENDERER_OPENGL_ES_PROFILE_VERSION_MESA = 0x818C;
	static constexpr auto RENDERER_OPENGL_ES2_PROFILE_VERSION_MESA = 0x818D;
	static constexpr auto GLX_3DFX_WINDOW_MODE_MESA = 0x1;
	static constexpr auto GLX_3DFX_FULLSCREEN_MODE_MESA = 0x2;
	static constexpr auto FLOAT_COMPONENTS_NV = 0x20B0;
	static constexpr auto CONTEXT_MULTIGPU_ATTRIB_NV = 0x20AA;
	static constexpr auto CONTEXT_MULTIGPU_ATTRIB_SINGLE_NV = 0x20AB;
	static constexpr auto CONTEXT_MULTIGPU_ATTRIB_AFR_NV = 0x20AC;
	static constexpr auto CONTEXT_MULTIGPU_ATTRIB_MULTICAST_NV = 0x20AD;
	static constexpr auto CONTEXT_MULTIGPU_ATTRIB_MULTI_DISPLAY_MULTICAST_NV = 0x20AE;
	static constexpr auto COVERAGE_SAMPLES_NV = 100001;
	static constexpr auto COLOR_SAMPLES_NV = 0x20B3;
	static constexpr auto NUM_VIDEO_SLOTS_NV = 0x20F0;
	static constexpr auto ENERATE_RESET_ON_VIDEO_MEMORY_PURGE_NV = 0x20F7;
	static constexpr auto DEVICE_ID_NV = 0x20CD;
	static constexpr auto UNIQUE_ID_NV = 0x20CE;
	static constexpr auto NUM_VIDEO_CAPTURE_SLOTS_NV = 0x20CF;
	static constexpr auto VIDEO_OUT_COLOR_NV = 0x20C3;
	static constexpr auto VIDEO_OUT_ALPHA_NV = 0x20C4;
	static constexpr auto VIDEO_OUT_DEPTH_NV = 0x20C5;
	static constexpr auto VIDEO_OUT_COLOR_AND_ALPHA_NV = 0x20C6;
	static constexpr auto VIDEO_OUT_COLOR_AND_DEPTH_NV = 0x20C7;
	static constexpr auto VIDEO_OUT_FRAME_NV = 0x20C8;
	static constexpr auto VIDEO_OUT_FIELD_1_NV = 0x20C9;
	static constexpr auto VIDEO_OUT_FIELD_2_NV = 0x20CA;
	static constexpr auto VIDEO_OUT_STACKED_FIELDS_1_2_NV = 0x20CB;
	static constexpr auto VIDEO_OUT_STACKED_FIELDS_2_1_NV = 0x20CC;
	static constexpr auto SWAP_METHOD_OML = 0x8060;
	static constexpr auto SWAP_EXCHANGE_OML = 0x8061;
	static constexpr auto SWAP_COPY_OML = 0x8062;
	static constexpr auto SWAP_UNDEFINED_OML = 0x8063;
	static constexpr auto BLENDED_RGBA_SGIS = 0x8025;
	static constexpr auto SAMPLE_BUFFERS_SGIS = 100000;
	static constexpr auto SAMPLES_SGIS = 100001;
	static constexpr auto MULTISAMPLE_SUB_RECT_WIDTH_SGIS = 0x8026;
	static constexpr auto MULTISAMPLE_SUB_RECT_HEIGHT_SGIS = 0x8027;
	static constexpr auto DIGITAL_MEDIA_PBUFFER_SGIX = 0x8024;
	static constexpr auto WINDOW_BIT_SGIX = 0x00000001;
	static constexpr auto PIXMAP_BIT_SGIX = 0x00000002;
	static constexpr auto RGBA_BIT_SGIX = 0x00000001;
	static constexpr auto COLOR_INDEX_BIT_SGIX = 0x00000002;
	static constexpr auto DRAWABLE_TYPE_SGIX = 0x8010;
	static constexpr auto RENDER_TYPE_SGIX = 0x8011;
	static constexpr auto RENDERABLE_SGIX = 0x8012;
	static constexpr auto FBCONFIG_ID_SGIX = 0x8013;
	static constexpr auto RGBA_TYPE_SGIX = 0x8014;
	static constexpr auto COLOR_INDEX_TYPE_SGIX = 0x8015;
	static constexpr auto HYPERPIPE_PIPE_NAME_LENGTH_SGIX = 80;
	static constexpr auto BAD_HYPERPIPE_CONFIG_SGIX = 91;
	static constexpr auto BAD_HYPERPIPE_SGIX = 92;
	static constexpr auto HYPERPIPE_DISPLAY_PIPE_SGIX = 0x00000001;
	static constexpr auto HYPERPIPE_RENDER_PIPE_SGIX = 0x00000002;
	static constexpr auto PIPE_RECT_SGIX = 0x00000001;
	static constexpr auto PIPE_RECT_LIMITS_SGIX = 0x00000002;
	static constexpr auto HYPERPIPE_STEREO_SGIX = 0x00000003;
	static constexpr auto HYPERPIPE_PIXEL_AVERAGE_SGIX = 0x00000004;
	static constexpr auto HYPERPIPE_ID_SGIX = 0x8030;
	static constexpr auto PBUFFER_BIT_SGIX = 0x00000004;
	static constexpr auto BUFFER_CLOBBER_MASK_SGIX = 0x08000000;
	static constexpr auto FRONT_LEFT_BUFFER_BIT_SGIX = 0x00000001;
	static constexpr auto FRONT_RIGHT_BUFFER_BIT_SGIX = 0x00000002;
	static constexpr auto BACK_LEFT_BUFFER_BIT_SGIX = 0x00000004;
	static constexpr auto BACK_RIGHT_BUFFER_BIT_SGIX = 0x00000008;
	static constexpr auto AUX_BUFFERS_BIT_SGIX = 0x00000010;
	static constexpr auto DEPTH_BUFFER_BIT_SGIX = 0x00000020;
	static constexpr auto STENCIL_BUFFER_BIT_SGIX = 0x00000040;
	static constexpr auto ACCUM_BUFFER_BIT_SGIX = 0x00000080;
	static constexpr auto SAMPLE_BUFFERS_BIT_SGIX = 0x00000100;
	static constexpr auto MAX_PBUFFER_WIDTH_SGIX = 0x8016;
	static constexpr auto MAX_PBUFFER_HEIGHT_SGIX = 0x8017;
	static constexpr auto MAX_PBUFFER_PIXELS_SGIX = 0x8018;
	static constexpr auto OPTIMAL_PBUFFER_WIDTH_SGIX = 0x8019;
	static constexpr auto OPTIMAL_PBUFFER_HEIGHT_SGIX = 0x801A;
	static constexpr auto PRESERVED_CONTENTS_SGIX = 0x801B;
	static constexpr auto ARGEST_PBUFFER_SGIX = 0x801C;
	static constexpr auto WIDTH_SGIX = 0x801D;
	static constexpr auto HEIGHT_SGIX = 0x801E;
	static constexpr auto EVENT_MASK_SGIX = 0x801F;
	static constexpr auto DAMAGED_SGIX = 0x8020;
	static constexpr auto SAVED_SGIX = 0x8021;
	static constexpr auto WINDOW_SGIX = 0x8022;
	static constexpr auto PBUFFER_SGIX = 0x8023;
	static constexpr auto SYNC_FRAME_SGIX = 0x00000000;
	static constexpr auto SYNC_SWAP_SGIX = 0x00000001;
	static constexpr auto VISUAL_SELECT_GROUP_SGIX = 0x8028;

	struct FuncDef {
		typedef GLXFBConfig * (GALGLPROC* glXGetFBConfigs_t)(Display *dpy, int screen, int *nelements);
		typedef GLXFBConfig * (GALGLPROC* glXChooseFBConfig_t)(Display *dpy, int screen, const int *attrib_list, int *nelements);
		typedef int (GALGLPROC* glXGetFBConfigAttrib_t)(Display *dpy, GLXFBConfig config, int attribute, int *value);
		typedef XVisualInfo * (GALGLPROC* glXGetVisualFromFBConfig_t)(Display *dpy, GLXFBConfig config);
		typedef GLXWindow (GALGLPROC* glXCreateWindow_t)(Display *dpy, GLXFBConfig config, Window win, const int *attrib_list);
		typedef void (GALGLPROC* glXDestroyWindow_t)(Display *dpy, GLXWindow win);
		typedef GLXPixmap (GALGLPROC* glXCreatePixmap_t)(Display *dpy, GLXFBConfig config, Pixmap pixmap, const int *attrib_list);
		typedef void (GALGLPROC* glXDestroyPixmap_t)(Display *dpy, GLXPixmap pixmap);
		typedef GLXPbuffer (GALGLPROC* glXCreatePbuffer_t)(Display *dpy, GLXFBConfig config, const int *attrib_list);
		typedef void (GALGLPROC* glXDestroyPbuffer_t)(Display *dpy, GLXPbuffer pbuf);
		typedef void (GALGLPROC* glXQueryDrawable_t)(Display *dpy, GLXDrawable draw, int attribute, unsigned int *value);
		typedef GLXContext (GALGLPROC* glXCreateNewContext_t)(Display *dpy, GLXFBConfig config, int render_type, GLXContext share_list, Bool direct);
		typedef Bool (GALGLPROC* glXMakeContextCurrent_t)(Display *dpy, GLXDrawable draw, GLXDrawable read, GLXContext ctx);
		typedef GLXDrawable (GALGLPROC* glXGetCurrentReadDrawable_t)(void);
		typedef int (GALGLPROC* glXQueryContext_t)(Display *dpy, GLXContext ctx, int attribute, int *value);
		typedef void (GALGLPROC* glXSelectEvent_t)(Display *dpy, GLXDrawable draw, unsigned long event_mask);
		typedef void (GALGLPROC* glXGetSelectedEvent_t)(Display *dpy, GLXDrawable draw, unsigned long *event_mask);
		typedef __GLXextFuncPtr (GALGLPROC* glXGetProcAddress_t)(const GLubyte *procName);
		typedef GLXContext (GALGLPROC* glXCreateContextAttribsARB_t)(Display *dpy, GLXFBConfig config, GLXContext share_context, Bool direct, const int *attrib_list);
		typedef __GLXextFuncPtr (GALGLPROC* glXGetProcAddressARB_t)(const GLubyte *procName);
		typedef unsigned int (GALGLPROC* glXGetGPUIDsAMD_t)(unsigned int maxCount, unsigned int *ids);
		typedef int (GALGLPROC* glXGetGPUInfoAMD_t)(unsigned int id, int property, GLenum dataType, unsigned int size, void *data);
		typedef unsigned int (GALGLPROC* glXGetContextGPUIDAMD_t)(GLXContext ctx);
		typedef GLXContext (GALGLPROC* glXCreateAssociatedContextAMD_t)(unsigned int id, GLXContext share_list);
		typedef GLXContext (GALGLPROC* glXCreateAssociatedContextAttribsAMD_t)(unsigned int id, GLXContext share_context, const int *attribList);
		typedef Bool (GALGLPROC* glXDeleteAssociatedContextAMD_t)(GLXContext ctx);
		typedef Bool (GALGLPROC* glXMakeAssociatedContextCurrentAMD_t)(GLXContext ctx);
		typedef GLXContext (GALGLPROC* glXGetCurrentAssociatedContextAMD_t)(void);
		typedef void (GALGLPROC* glXBlitContextFramebufferAMD_t)(GLXContext dstCtx, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
		typedef Display * (GALGLPROC* glXGetCurrentDisplayEXT_t)(void);
		typedef int (GALGLPROC* glXQueryContextInfoEXT_t)(Display *dpy, GLXContext context, int attribute, int *value);
		typedef GLXContextID (GALGLPROC* glXGetContextIDEXT_t)(const GLXContext context);
		typedef GLXContext (GALGLPROC* glXImportContextEXT_t)(Display *dpy, GLXContextID contextID);
		typedef void (GALGLPROC* glXFreeContextEXT_t)(Display *dpy, GLXContext context);
		typedef void (GALGLPROC* glXSwapIntervalEXT_t)(Display *dpy, GLXDrawable drawable, int interval);
		typedef void (GALGLPROC* glXBindTexImageEXT_t)(Display *dpy, GLXDrawable drawable, int buffer, const int *attrib_list);
		typedef void (GALGLPROC* glXReleaseTexImageEXT_t)(Display *dpy, GLXDrawable drawable, int buffer);
		typedef unsigned int (GALGLPROC* glXGetAGPOffsetMESA_t)(const void *pointer);
		typedef void (GALGLPROC* glXCopySubBufferMESA_t)(Display *dpy, GLXDrawable drawable, int x, int y, int width, int height);
		typedef GLXPixmap (GALGLPROC* glXCreateGLXPixmapMESA_t)(Display *dpy, XVisualInfo *visual, Pixmap pixmap, Colormap cmap);
		typedef Bool (GALGLPROC* glXQueryCurrentRendererIntegerMESA_t)(int attribute, unsigned int *value);
		typedef const char * (GALGLPROC* glXQueryCurrentRendererStringMESA_t)(int attribute);
		typedef Bool (GALGLPROC* glXQueryRendererIntegerMESA_t)(Display *dpy, int screen, int renderer, int attribute, unsigned int *value);
		typedef const char * (GALGLPROC* glXQueryRendererStringMESA_t)(Display *dpy, int screen, int renderer, int attribute);
		typedef Bool (GALGLPROC* glXReleaseBuffersMESA_t)(Display *dpy, GLXDrawable drawable);
		typedef GLboolean (GALGLPROC* glXSet3DfxModeMESA_t)(GLint mode);
		typedef int (GALGLPROC* glXGetSwapIntervalMESA_t)(void);
		typedef int (GALGLPROC* glXSwapIntervalMESA_t)(unsigned int interval);
		typedef void (GALGLPROC* glXCopyBufferSubDataNV_t)(Display *dpy, GLXContext readCtx, GLXContext writeCtx, GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
		typedef void (GALGLPROC* glXNamedCopyBufferSubDataNV_t)(Display *dpy, GLXContext readCtx, GLXContext writeCtx, GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
		typedef void (GALGLPROC* glXCopyImageSubDataNV_t)(Display *dpy, GLXContext srcCtx, GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLXContext dstCtx, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth);
		typedef Bool (GALGLPROC* glXDelayBeforeSwapNV_t)(Display *dpy, GLXDrawable drawable, GLfloat seconds);
		typedef unsigned int * (GALGLPROC* glXEnumerateVideoDevicesNV_t)(Display *dpy, int screen, int *nelements);
		typedef int (GALGLPROC* glXBindVideoDeviceNV_t)(Display *dpy, unsigned int video_slot, unsigned int video_device, const int *attrib_list);
		typedef Bool (GALGLPROC* glXJoinSwapGroupNV_t)(Display *dpy, GLXDrawable drawable, GLuint group);
		typedef Bool (GALGLPROC* glXBindSwapBarrierNV_t)(Display *dpy, GLuint group, GLuint barrier);
		typedef Bool (GALGLPROC* glXQuerySwapGroupNV_t)(Display *dpy, GLXDrawable drawable, GLuint *group, GLuint *barrier);
		typedef Bool (GALGLPROC* glXQueryMaxSwapGroupsNV_t)(Display *dpy, int screen, GLuint *maxGroups, GLuint *maxBarriers);
		typedef Bool (GALGLPROC* glXQueryFrameCountNV_t)(Display *dpy, int screen, GLuint *count);
		typedef Bool (GALGLPROC* glXResetFrameCountNV_t)(Display *dpy, int screen);
		typedef int (GALGLPROC* glXBindVideoCaptureDeviceNV_t)(Display *dpy, unsigned int video_capture_slot, GLXVideoCaptureDeviceNV device);
		typedef GLXVideoCaptureDeviceNV * (GALGLPROC* glXEnumerateVideoCaptureDevicesNV_t)(Display *dpy, int screen, int *nelements);
		typedef void (GALGLPROC* glXLockVideoCaptureDeviceNV_t)(Display *dpy, GLXVideoCaptureDeviceNV device);
		typedef int (GALGLPROC* glXQueryVideoCaptureDeviceNV_t)(Display *dpy, GLXVideoCaptureDeviceNV device, int attribute, int *value);
		typedef void (GALGLPROC* glXReleaseVideoCaptureDeviceNV_t)(Display *dpy, GLXVideoCaptureDeviceNV device);
		typedef int (GALGLPROC* glXGetVideoDeviceNV_t)(Display *dpy, int screen, int numVideoDevices, GLXVideoDeviceNV *pVideoDevice);
		typedef int (GALGLPROC* glXReleaseVideoDeviceNV_t)(Display *dpy, int screen, GLXVideoDeviceNV VideoDevice);
		typedef int (GALGLPROC* glXBindVideoImageNV_t)(Display *dpy, GLXVideoDeviceNV VideoDevice, GLXPbuffer pbuf, int iVideoBuffer);
		typedef int (GALGLPROC* glXReleaseVideoImageNV_t)(Display *dpy, GLXPbuffer pbuf);
		typedef int (GALGLPROC* glXSendPbufferToVideoNV_t)(Display *dpy, GLXPbuffer pbuf, int iBufferType, unsigned long *pulCounterPbuffer, GLboolean bBlock);
		typedef int (GALGLPROC* glXGetVideoInfoNV_t)(Display *dpy, int screen, GLXVideoDeviceNV VideoDevice, unsigned long *pulCounterOutputPbuffer, unsigned long *pulCounterOutputVideo);
		typedef Bool (GALGLPROC* glXGetSyncValuesOML_t)(Display *dpy, GLXDrawable drawable, int64_t *ust, int64_t *msc, int64_t *sbc);
		typedef Bool (GALGLPROC* glXGetMscRateOML_t)(Display *dpy, GLXDrawable drawable, int32_t *numerator, int32_t *denominator);
		typedef int64_t (GALGLPROC* glXSwapBuffersMscOML_t)(Display *dpy, GLXDrawable drawable, int64_t target_msc, int64_t divisor, int64_t remainder);
		typedef Bool (GALGLPROC* glXWaitForMscOML_t)(Display *dpy, GLXDrawable drawable, int64_t target_msc, int64_t divisor, int64_t remainder, int64_t *ust, int64_t *msc, int64_t *sbc);
		typedef Bool (GALGLPROC* glXWaitForSbcOML_t)(Display *dpy, GLXDrawable drawable, int64_t target_sbc, int64_t *ust, int64_t *msc, int64_t *sbc);
		typedef Bool (GALGLPROC* glXAssociateDMPbufferSGIX_t)(Display *dpy, GLXPbufferSGIX pbuffer, DMparams *params, DMbuffer dmbuffer);
		typedef int (GALGLPROC* glXGetFBConfigAttribSGIX_t)(Display *dpy, GLXFBConfigSGIX config, int attribute, int *value);
		typedef GLXFBConfigSGIX * (GALGLPROC* glXChooseFBConfigSGIX_t)(Display *dpy, int screen, int *attrib_list, int *nelements);
		typedef GLXPixmap (GALGLPROC* glXCreateGLXPixmapWithConfigSGIX_t)(Display *dpy, GLXFBConfigSGIX config, Pixmap pixmap);
		typedef GLXContext (GALGLPROC* glXCreateContextWithConfigSGIX_t)(Display *dpy, GLXFBConfigSGIX config, int render_type, GLXContext share_list, Bool direct);
		typedef XVisualInfo * (GALGLPROC* glXGetVisualFromFBConfigSGIX_t)(Display *dpy, GLXFBConfigSGIX config);
		typedef GLXFBConfigSGIX (GALGLPROC* glXGetFBConfigFromVisualSGIX_t)(Display *dpy, XVisualInfo *vis);
		typedef GLXHyperpipeNetworkSGIX * (GALGLPROC* glXQueryHyperpipeNetworkSGIX_t)(Display *dpy, int *npipes);
		typedef int (GALGLPROC* glXHyperpipeConfigSGIX_t)(Display *dpy, int networkId, int npipes, GLXHyperpipeConfigSGIX *cfg, int *hpId);
		typedef GLXHyperpipeConfigSGIX * (GALGLPROC* glXQueryHyperpipeConfigSGIX_t)(Display *dpy, int hpId, int *npipes);
		typedef int (GALGLPROC* glXDestroyHyperpipeConfigSGIX_t)(Display *dpy, int hpId);
		typedef int (GALGLPROC* glXBindHyperpipeSGIX_t)(Display *dpy, int hpId);
		typedef int (GALGLPROC* glXQueryHyperpipeBestAttribSGIX_t)(Display *dpy, int timeSlice, int attrib, int size, void *attribList, void *returnAttribList);
		typedef int (GALGLPROC* glXHyperpipeAttribSGIX_t)(Display *dpy, int timeSlice, int attrib, int size, void *attribList);
		typedef int (GALGLPROC* glXQueryHyperpipeAttribSGIX_t)(Display *dpy, int timeSlice, int attrib, int size, void *returnAttribList);
		typedef GLXPbufferSGIX (GALGLPROC* glXCreateGLXPbufferSGIX_t)(Display *dpy, GLXFBConfigSGIX config, unsigned int width, unsigned int height, int *attrib_list);
		typedef void (GALGLPROC* glXDestroyGLXPbufferSGIX_t)(Display *dpy, GLXPbufferSGIX pbuf);
		typedef void (GALGLPROC* glXQueryGLXPbufferSGIX_t)(Display *dpy, GLXPbufferSGIX pbuf, int attribute, unsigned int *value);
		typedef void (GALGLPROC* glXSelectEventSGIX_t)(Display *dpy, GLXDrawable drawable, unsigned long mask);
		typedef void (GALGLPROC* glXGetSelectedEventSGIX_t)(Display *dpy, GLXDrawable drawable, unsigned long *mask);
		typedef void (GALGLPROC* glXBindSwapBarrierSGIX_t)(Display *dpy, GLXDrawable drawable, int barrier);
		typedef Bool (GALGLPROC* glXQueryMaxSwapBarriersSGIX_t)(Display *dpy, int screen, int *max);
		typedef void (GALGLPROC* glXJoinSwapGroupSGIX_t)(Display *dpy, GLXDrawable drawable, GLXDrawable member);
		typedef int (GALGLPROC* glXBindChannelToWindowSGIX_t)(Display *display, int screen, int channel, Window window);
		typedef int (GALGLPROC* glXChannelRectSGIX_t)(Display *display, int screen, int channel, int x, int y, int w, int h);
		typedef int (GALGLPROC* glXQueryChannelRectSGIX_t)(Display *display, int screen, int channel, int *dx, int *dy, int *dw, int *dh);
		typedef int (GALGLPROC* glXQueryChannelDeltasSGIX_t)(Display *display, int screen, int channel, int *x, int *y, int *w, int *h);
		typedef int (GALGLPROC* glXChannelRectSyncSGIX_t)(Display *display, int screen, int channel, GLenum synctype);
		typedef GLXVideoSourceSGIX (GALGLPROC* glXCreateGLXVideoSourceSGIX_t)(Display *display, int screen, VLServer server, VLPath path, int nodeClass, VLNode drainNode);
		typedef void (GALGLPROC* glXDestroyGLXVideoSourceSGIX_t)(Display *dpy, GLXVideoSourceSGIX glxvideosource);
		typedef void (GALGLPROC* glXCushionSGI_t)(Display *dpy, Window window, float cushion);
		typedef Bool (GALGLPROC* glXMakeCurrentReadSGI_t)(Display *dpy, GLXDrawable draw, GLXDrawable read, GLXContext ctx);
		typedef GLXDrawable (GALGLPROC* glXGetCurrentReadDrawableSGI_t)(void);
		typedef int (GALGLPROC* glXSwapIntervalSGI_t)(int interval);
		typedef int (GALGLPROC* glXGetVideoSyncSGI_t)(unsigned int *count);
		typedef int (GALGLPROC* glXWaitVideoSyncSGI_t)(int divisor, int remainder, unsigned int *count);
		typedef Status (GALGLPROC* glXGetTransparentIndexSUN_t)(Display *dpy, Window overlay, Window underlay, unsigned long *pTransparentIndex);
	};

	struct {
		FuncDef::glXGetFBConfigs_t XGetFBConfigs;
		FuncDef::glXChooseFBConfig_t XChooseFBConfig;
		FuncDef::glXGetFBConfigAttrib_t XGetFBConfigAttrib;
		FuncDef::glXGetVisualFromFBConfig_t XGetVisualFromFBConfig;
		FuncDef::glXCreateWindow_t XCreateWindow;
		FuncDef::glXDestroyWindow_t XDestroyWindow;
		FuncDef::glXCreatePixmap_t XCreatePixmap;
		FuncDef::glXDestroyPixmap_t XDestroyPixmap;
		FuncDef::glXCreatePbuffer_t XCreatePbuffer;
		FuncDef::glXDestroyPbuffer_t XDestroyPbuffer;
		FuncDef::glXQueryDrawable_t XQueryDrawable;
		FuncDef::glXCreateNewContext_t XCreateNewContext;
		FuncDef::glXMakeContextCurrent_t XMakeContextCurrent;
		FuncDef::glXGetCurrentReadDrawable_t XGetCurrentReadDrawable;
		FuncDef::glXQueryContext_t XQueryContext;
		FuncDef::glXSelectEvent_t XSelectEvent;
		FuncDef::glXGetSelectedEvent_t XGetSelectedEvent;
		FuncDef::glXGetProcAddress_t XGetProcAddress;
		FuncDef::glXCreateContextAttribsARB_t XCreateContextAttribsARB;
		FuncDef::glXGetProcAddressARB_t XGetProcAddressARB;
		FuncDef::glXGetGPUIDsAMD_t XGetGPUIDsAMD;
		FuncDef::glXGetGPUInfoAMD_t XGetGPUInfoAMD;
		FuncDef::glXGetContextGPUIDAMD_t XGetContextGPUIDAMD;
		FuncDef::glXCreateAssociatedContextAMD_t XCreateAssociatedContextAMD;
		FuncDef::glXCreateAssociatedContextAttribsAMD_t XCreateAssociatedContextAttribsAMD;
		FuncDef::glXDeleteAssociatedContextAMD_t XDeleteAssociatedContextAMD;
		FuncDef::glXMakeAssociatedContextCurrentAMD_t XMakeAssociatedContextCurrentAMD;
		FuncDef::glXGetCurrentAssociatedContextAMD_t XGetCurrentAssociatedContextAMD;
		FuncDef::glXBlitContextFramebufferAMD_t XBlitContextFramebufferAMD;
		FuncDef::glXGetCurrentDisplayEXT_t XGetCurrentDisplayEXT;
		FuncDef::glXQueryContextInfoEXT_t XQueryContextInfoEXT;
		FuncDef::glXGetContextIDEXT_t XGetContextIDEXT;
		FuncDef::glXImportContextEXT_t XImportContextEXT;
		FuncDef::glXFreeContextEXT_t XFreeContextEXT;
		FuncDef::glXSwapIntervalEXT_t XSwapIntervalEXT;
		FuncDef::glXBindTexImageEXT_t XBindTexImageEXT;
		FuncDef::glXReleaseTexImageEXT_t XReleaseTexImageEXT;
		FuncDef::glXGetAGPOffsetMESA_t XGetAGPOffsetMESA;
		FuncDef::glXCopySubBufferMESA_t XCopySubBufferMESA;
		FuncDef::glXCreateGLXPixmapMESA_t XCreateGLXPixmapMESA;
		FuncDef::glXQueryCurrentRendererIntegerMESA_t XQueryCurrentRendererIntegerMESA;
		FuncDef::glXQueryCurrentRendererStringMESA_t XQueryCurrentRendererStringMESA;
		FuncDef::glXQueryRendererIntegerMESA_t XQueryRendererIntegerMESA;
		FuncDef::glXQueryRendererStringMESA_t XQueryRendererStringMESA;
		FuncDef::glXReleaseBuffersMESA_t XReleaseBuffersMESA;
		FuncDef::glXSet3DfxModeMESA_t XSet3DfxModeMESA;
		FuncDef::glXGetSwapIntervalMESA_t XGetSwapIntervalMESA;
		FuncDef::glXSwapIntervalMESA_t XSwapIntervalMESA;
		FuncDef::glXCopyBufferSubDataNV_t XCopyBufferSubDataNV;
		FuncDef::glXNamedCopyBufferSubDataNV_t XNamedCopyBufferSubDataNV;
		FuncDef::glXCopyImageSubDataNV_t XCopyImageSubDataNV;
		FuncDef::glXDelayBeforeSwapNV_t XDelayBeforeSwapNV;
		FuncDef::glXEnumerateVideoDevicesNV_t XEnumerateVideoDevicesNV;
		FuncDef::glXBindVideoDeviceNV_t XBindVideoDeviceNV;
		FuncDef::glXJoinSwapGroupNV_t XJoinSwapGroupNV;
		FuncDef::glXBindSwapBarrierNV_t XBindSwapBarrierNV;
		FuncDef::glXQuerySwapGroupNV_t XQuerySwapGroupNV;
		FuncDef::glXQueryMaxSwapGroupsNV_t XQueryMaxSwapGroupsNV;
		FuncDef::glXQueryFrameCountNV_t XQueryFrameCountNV;
		FuncDef::glXResetFrameCountNV_t XResetFrameCountNV;
		FuncDef::glXBindVideoCaptureDeviceNV_t XBindVideoCaptureDeviceNV;
		FuncDef::glXEnumerateVideoCaptureDevicesNV_t XEnumerateVideoCaptureDevicesNV;
		FuncDef::glXLockVideoCaptureDeviceNV_t XLockVideoCaptureDeviceNV;
		FuncDef::glXQueryVideoCaptureDeviceNV_t XQueryVideoCaptureDeviceNV;
		FuncDef::glXReleaseVideoCaptureDeviceNV_t XReleaseVideoCaptureDeviceNV;
		FuncDef::glXGetVideoDeviceNV_t XGetVideoDeviceNV;
		FuncDef::glXReleaseVideoDeviceNV_t XReleaseVideoDeviceNV;
		FuncDef::glXBindVideoImageNV_t XBindVideoImageNV;
		FuncDef::glXReleaseVideoImageNV_t XReleaseVideoImageNV;
		FuncDef::glXSendPbufferToVideoNV_t XSendPbufferToVideoNV;
		FuncDef::glXGetVideoInfoNV_t XGetVideoInfoNV;
		FuncDef::glXGetSyncValuesOML_t XGetSyncValuesOML;
		FuncDef::glXGetMscRateOML_t XGetMscRateOML;
		FuncDef::glXSwapBuffersMscOML_t XSwapBuffersMscOML;
		FuncDef::glXWaitForMscOML_t XWaitForMscOML;
		FuncDef::glXWaitForSbcOML_t XWaitForSbcOML;
		FuncDef::glXAssociateDMPbufferSGIX_t XAssociateDMPbufferSGIX;
		FuncDef::glXGetFBConfigAttribSGIX_t XGetFBConfigAttribSGIX;
		FuncDef::glXChooseFBConfigSGIX_t XChooseFBConfigSGIX;
		FuncDef::glXCreateGLXPixmapWithConfigSGIX_t XCreateGLXPixmapWithConfigSGIX;
		FuncDef::glXCreateContextWithConfigSGIX_t XCreateContextWithConfigSGIX;
		FuncDef::glXGetVisualFromFBConfigSGIX_t XGetVisualFromFBConfigSGIX;
		FuncDef::glXGetFBConfigFromVisualSGIX_t XGetFBConfigFromVisualSGIX;
		FuncDef::glXQueryHyperpipeNetworkSGIX_t XQueryHyperpipeNetworkSGIX;
		FuncDef::glXHyperpipeConfigSGIX_t XHyperpipeConfigSGIX;
		FuncDef::glXQueryHyperpipeConfigSGIX_t XQueryHyperpipeConfigSGIX;
		FuncDef::glXDestroyHyperpipeConfigSGIX_t XDestroyHyperpipeConfigSGIX;
		FuncDef::glXBindHyperpipeSGIX_t XBindHyperpipeSGIX;
		FuncDef::glXQueryHyperpipeBestAttribSGIX_t XQueryHyperpipeBestAttribSGIX;
		FuncDef::glXHyperpipeAttribSGIX_t XHyperpipeAttribSGIX;
		FuncDef::glXQueryHyperpipeAttribSGIX_t XQueryHyperpipeAttribSGIX;
		FuncDef::glXCreateGLXPbufferSGIX_t XCreateGLXPbufferSGIX;
		FuncDef::glXDestroyGLXPbufferSGIX_t XDestroyGLXPbufferSGIX;
		FuncDef::glXQueryGLXPbufferSGIX_t XQueryGLXPbufferSGIX;
		FuncDef::glXSelectEventSGIX_t XSelectEventSGIX;
		FuncDef::glXGetSelectedEventSGIX_t XGetSelectedEventSGIX;
		FuncDef::glXBindSwapBarrierSGIX_t XBindSwapBarrierSGIX;
		FuncDef::glXQueryMaxSwapBarriersSGIX_t XQueryMaxSwapBarriersSGIX;
		FuncDef::glXJoinSwapGroupSGIX_t XJoinSwapGroupSGIX;
		FuncDef::glXBindChannelToWindowSGIX_t XBindChannelToWindowSGIX;
		FuncDef::glXChannelRectSGIX_t XChannelRectSGIX;
		FuncDef::glXQueryChannelRectSGIX_t XQueryChannelRectSGIX;
		FuncDef::glXQueryChannelDeltasSGIX_t XQueryChannelDeltasSGIX;
		FuncDef::glXChannelRectSyncSGIX_t XChannelRectSyncSGIX;
		FuncDef::glXCreateGLXVideoSourceSGIX_t XCreateGLXVideoSourceSGIX;
		FuncDef::glXDestroyGLXVideoSourceSGIX_t XDestroyGLXVideoSourceSGIX;
		FuncDef::glXCushionSGI_t XCushionSGI;
		FuncDef::glXMakeCurrentReadSGI_t XMakeCurrentReadSGI;
		FuncDef::glXGetCurrentReadDrawableSGI_t XGetCurrentReadDrawableSGI;
		FuncDef::glXSwapIntervalSGI_t XSwapIntervalSGI;
		FuncDef::glXGetVideoSyncSGI_t XGetVideoSyncSGI;
		FuncDef::glXWaitVideoSyncSGI_t XWaitVideoSyncSGI;
		FuncDef::glXGetTransparentIndexSUN_t XGetTransparentIndexSUN;
	};

	GLXproc ProcList[113];

	static constexpr const char* ProcList[113] = {
		"glXGetFBConfigs",
		"glXChooseFBConfig",
		"glXGetFBConfigAttrib",
		"glXGetVisualFromFBConfig",
		"glXCreateWindow",
		"glXDestroyWindow",
		"glXCreatePixmap",
		"glXDestroyPixmap",
		"glXCreatePbuffer",
		"glXDestroyPbuffer",
		"glXQueryDrawable",
		"glXCreateNewContext",
		"glXMakeContextCurrent",
		"glXGetCurrentReadDrawable",
		"glXQueryContext",
		"glXSelectEvent",
		"glXGetSelectedEvent",
		"glXGetProcAddress",
		"glXCreateContextAttribsARB",
		"glXGetProcAddressARB",
		"glXGetGPUIDsAMD",
		"glXGetGPUInfoAMD",
		"glXGetContextGPUIDAMD",
		"glXCreateAssociatedContextAMD",
		"glXCreateAssociatedContextAttribsAMD",
		"glXDeleteAssociatedContextAMD",
		"glXMakeAssociatedContextCurrentAMD",
		"glXGetCurrentAssociatedContextAMD",
		"glXBlitContextFramebufferAMD",
		"glXGetCurrentDisplayEXT",
		"glXQueryContextInfoEXT",
		"glXGetContextIDEXT",
		"glXImportContextEXT",
		"glXFreeContextEXT",
		"glXSwapIntervalEXT",
		"glXBindTexImageEXT",
		"glXReleaseTexImageEXT",
		"glXGetAGPOffsetMESA",
		"glXCopySubBufferMESA",
		"glXCreateGLXPixmapMESA",
		"glXQueryCurrentRendererIntegerMESA",
		"glXQueryCurrentRendererStringMESA",
		"glXQueryRendererIntegerMESA",
		"glXQueryRendererStringMESA",
		"glXReleaseBuffersMESA",
		"glXSet3DfxModeMESA",
		"glXGetSwapIntervalMESA",
		"glXSwapIntervalMESA",
		"glXCopyBufferSubDataNV",
		"glXNamedCopyBufferSubDataNV",
		"glXCopyImageSubDataNV",
		"glXDelayBeforeSwapNV",
		"glXEnumerateVideoDevicesNV",
		"glXBindVideoDeviceNV",
		"glXJoinSwapGroupNV",
		"glXBindSwapBarrierNV",
		"glXQuerySwapGroupNV",
		"glXQueryMaxSwapGroupsNV",
		"glXQueryFrameCountNV",
		"glXResetFrameCountNV",
		"glXBindVideoCaptureDeviceNV",
		"glXEnumerateVideoCaptureDevicesNV",
		"glXLockVideoCaptureDeviceNV",
		"glXQueryVideoCaptureDeviceNV",
		"glXReleaseVideoCaptureDeviceNV",
		"glXGetVideoDeviceNV",
		"glXReleaseVideoDeviceNV",
		"glXBindVideoImageNV",
		"glXReleaseVideoImageNV",
		"glXSendPbufferToVideoNV",
		"glXGetVideoInfoNV",
		"glXGetSyncValuesOML",
		"glXGetMscRateOML",
		"glXSwapBuffersMscOML",
		"glXWaitForMscOML",
		"glXWaitForSbcOML",
		"glXAssociateDMPbufferSGIX",
		"glXGetFBConfigAttribSGIX",
		"glXChooseFBConfigSGIX",
		"glXCreateGLXPixmapWithConfigSGIX",
		"glXCreateContextWithConfigSGIX",
		"glXGetVisualFromFBConfigSGIX",
		"glXGetFBConfigFromVisualSGIX",
		"glXQueryHyperpipeNetworkSGIX",
		"glXHyperpipeConfigSGIX",
		"glXQueryHyperpipeConfigSGIX",
		"glXDestroyHyperpipeConfigSGIX",
		"glXBindHyperpipeSGIX",
		"glXQueryHyperpipeBestAttribSGIX",
		"glXHyperpipeAttribSGIX",
		"glXQueryHyperpipeAttribSGIX",
		"glXCreateGLXPbufferSGIX",
		"glXDestroyGLXPbufferSGIX",
		"glXQueryGLXPbufferSGIX",
		"glXSelectEventSGIX",
		"glXGetSelectedEventSGIX",
		"glXBindSwapBarrierSGIX",
		"glXQueryMaxSwapBarriersSGIX",
		"glXJoinSwapGroupSGIX",
		"glXBindChannelToWindowSGIX",
		"glXChannelRectSGIX",
		"glXQueryChannelRectSGIX",
		"glXQueryChannelDeltasSGIX",
		"glXChannelRectSyncSGIX",
		"glXCreateGLXVideoSourceSGIX",
		"glXDestroyGLXVideoSourceSGIX",
		"glXCushionSGI",
		"glXMakeCurrentReadSGI",
		"glXGetCurrentReadDrawableSGI",
		"glXSwapIntervalSGI",
		"glXGetVideoSyncSGI",
		"glXWaitVideoSyncSGI",
		"glXGetTransparentIndexSUN",
	};
};
#endif /* GAL_GLX_HEADER_H */
