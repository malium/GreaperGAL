/***********************************************************************************
*   Copyright 2023 Marcos Sánchez Torrent.                                         *
*   All Rights Reserved.                                                           *
***********************************************************************************/

/*
** Copyright 2013-2020 The Khronos Group Inc.
** SPDX-License-Identifier: Apache-2.0
** 
** This file is a modification from the generated XML API registry.
** The current version of the Registry, generator scripts
** used to make the header, and the header can be found at
**   http://www.khronos.org/registry/egl
*/

#ifndef GAL_EGL_HEADER_H
#define GAL_EGL_HEADER_H 1

#include <stdint.h>

#if defined(__cplusplus)
#define EGL_CAST(type, value) (static_cast<type>(value))
#else
#define EGL_CAST(type, value) ((type) (value))
#endif

#ifdef _WIN32
#define GALEGLPROC __stdcall
#else
#define GALEGLPROC
#endif

#ifdef _WIN32
typedef HDC     EGLNativeDisplayType;
typedef HBITMAP EGLNativePixmapType;
typedef HWND    EGLNativeWindowType;
#else
#ifdef WL_EGL_PLATFORM
typedef struct wl_display     *EGLNativeDisplayType;
typedef struct wl_egl_pixmap  *EGLNativePixmapType;
typedef struct wl_egl_window  *EGLNativeWindowType;
#else // X11
typedef Display *EGLNativeDisplayType;
typedef Pixmap   EGLNativePixmapType;
typedef Window   EGLNativeWindowType;
#endif
#endif

typedef EGLNativeDisplayType NativeDisplayType;
typedef EGLNativePixmapType  NativePixmapType;
typedef EGLNativeWindowType  NativeWindowType;

typedef uint32_t EGLBoolean;
typedef void* EGLDisplay;
typedef void* EGLConfig;
typedef void* EGLSurface;
typedef void* EGLContext;
typedef int32_t EGLint;
typedef uint32_t EGLenum;
typedef intptr_t EGLAttribKHR;
typedef intptr_t EGLAttrib;
typedef void* EGLClientBuffer;
typedef void* EGLDeviceEXT;
typedef void* EGLImage;
typedef void* EGLImageKHR;
typedef void* EGLLabelKHR;
typedef void* EGLObjectKHR;
typedef void* EGLOutputLayerEXT;
typedef void* EGLOutputPortEXT;
typedef void* EGLStreamKHR;
typedef void* EGLSync;
typedef void* EGLSyncKHR;
typedef void* EGLSyncNV;
typedef uint64_t EGLTimeKHR;
typedef uint64_t EGLTime;
typedef uint64_t EGLTimeNV;
typedef uint64_t EGLuint64NV;
typedef uint64_t EGLuint64KHR;
typedef int64_t EGLnsecsANDROID;
typedef int32_t EGLNativeFileDescriptorKHR;
typedef intptr_t EGLsizeiANDROID;
typedef void (GALEGLPROC* EGLproc)();

struct AHardwareBuffer;
struct EGLClientPixmapHI {
    void  *pData;
    EGLint iWidth;
    EGLint iHeight;
    EGLint iStride;
};
struct wl_display;
struct wl_resource;
struct wl_buffer;

union EGL
{
	typedef void (GALEGLPROC* __eglMustCastToProperFunctionPointerType)(void);
	typedef void (GALEGLPROC* EGLDEBUGPROCKHR)(EGLenum error,const char *command,EGLint messageType,EGLLabelKHR threadLabel,EGLLabelKHR objectLabel,const char* message);
	typedef void (GALEGLPROC* EGLSetBlobFuncANDROID)(const void *key, EGLsizeiANDROID keySize, const void *value, EGLsizeiANDROID valueSize);
	typedef EGLsizeiANDROID (GALEGLPROC* EGLGetBlobFuncANDROID)(const void *key, EGLsizeiANDROID keySize, void *value, EGLsizeiANDROID valueSize);
	typedef struct wl_buffer * (GALEGLPROC* PFNEGLCREATEWAYLANDBUFFERFROMIMAGEWLPROC)(EGLDisplay dpy, EGLImageKHR image);

	static constexpr EGLenum ALPHA_SIZE = 0x3021;
	static constexpr EGLenum BAD_ACCESS = 0x3002;
	static constexpr EGLenum BAD_ALLOC = 0x3003;
	static constexpr EGLenum BAD_ATTRIBUTE = 0x3004;
	static constexpr EGLenum BAD_CONFIG = 0x3005;
	static constexpr EGLenum BAD_CONTEXT = 0x3006;
	static constexpr EGLenum BAD_CURRENT_SURFACE = 0x3007;
	static constexpr EGLenum BAD_DISPLAY = 0x3008;
	static constexpr EGLenum BAD_MATCH = 0x3009;
	static constexpr EGLenum BAD_NATIVE_PIXMAP = 0x300A;
	static constexpr EGLenum BAD_NATIVE_WINDOW = 0x300B;
	static constexpr EGLenum BAD_PARAMETER = 0x300C;
	static constexpr EGLenum BAD_SURFACE = 0x300D;
	static constexpr EGLenum BLUE_SIZE = 0x3022;
	static constexpr EGLenum BUFFER_SIZE = 0x3020;
	static constexpr EGLenum CONFIG_CAVEAT = 0x3027;
	static constexpr EGLenum CONFIG_ID = 0x3028;
	static constexpr EGLenum CORE_NATIVE_ENGINE = 0x305B;
	static constexpr EGLenum DEPTH_SIZE = 0x3025;
	static constexpr auto DONT_CARE = EGL_CAST(EGLint,-1);
	static constexpr EGLenum DRAW = 0x3059;
	static constexpr EGLenum EXTENSIONS = 0x3055;
	static constexpr EGLenum EGL_FALSE = 0;
	static constexpr EGLenum GREEN_SIZE = 0x3023;
	static constexpr EGLenum HEIGHT = 0x3056;
	static constexpr EGLenum LARGEST_PBUFFER = 0x3058;
	static constexpr EGLenum LEVEL = 0x3029;
	static constexpr EGLenum MAX_PBUFFER_HEIGHT = 0x302A;
	static constexpr EGLenum MAX_PBUFFER_PIXELS = 0x302B;
	static constexpr EGLenum MAX_PBUFFER_WIDTH = 0x302C;
	static constexpr EGLenum NATIVE_RENDERABLE = 0x302D;
	static constexpr EGLenum NATIVE_VISUAL_ID = 0x302E;
	static constexpr EGLenum NATIVE_VISUAL_TYPE = 0x302F;
	static constexpr EGLenum NONE = 0x3038;
	static constexpr EGLenum NON_CONFORMANT_CONFIG = 0x3051;
	static constexpr EGLenum NOT_INITIALIZED = 0x3001;
	static constexpr auto NO_CONTEXT = EGL_CAST(EGLContext,0);
	static constexpr auto NO_DISPLAY = EGL_CAST(EGLDisplay,0);
	static constexpr auto NO_SURFACE = EGL_CAST(EGLSurface,0);
	static constexpr EGLenum PBUFFER_BIT = 0x0001;
	static constexpr EGLenum PIXMAP_BIT = 0x0002;
	static constexpr EGLenum READ = 0x305A;
	static constexpr EGLenum RED_SIZE = 0x3024;
	static constexpr EGLenum SAMPLES = 0x3031;
	static constexpr EGLenum SAMPLE_BUFFERS = 0x3032;
	static constexpr EGLenum SLOW_CONFIG = 0x3050;
	static constexpr EGLenum STENCIL_SIZE = 0x3026;
	static constexpr EGLenum SUCCESS = 0x3000;
	static constexpr EGLenum SURFACE_TYPE = 0x3033;
	static constexpr EGLenum TRANSPARENT_BLUE_VALUE = 0x3035;
	static constexpr EGLenum TRANSPARENT_GREEN_VALUE = 0x3036;
	static constexpr EGLenum TRANSPARENT_RED_VALUE = 0x3037;
	static constexpr EGLenum TRANSPARENT_RGB = 0x3052;
	static constexpr EGLenum TRANSPARENT_TYPE = 0x3034;
	static constexpr EGLenum EGL_TRUE = 1;
	static constexpr EGLenum VENDOR = 0x3053;
	static constexpr EGLenum VERSION = 0x3054;
	static constexpr EGLenum WIDTH = 0x3057;
	static constexpr EGLenum WINDOW_BIT = 0x0004;
	static constexpr EGLenum BACK_BUFFER = 0x3084;
	static constexpr EGLenum BIND_TO_TEXTURE_RGB = 0x3039;
	static constexpr EGLenum BIND_TO_TEXTURE_RGBA = 0x303A;
	static constexpr EGLenum CONTEXT_LOST = 0x300E;
	static constexpr EGLenum MIN_SWAP_INTERVAL = 0x303B;
	static constexpr EGLenum MAX_SWAP_INTERVAL = 0x303C;
	static constexpr EGLenum MIPMAP_TEXTURE = 0x3082;
	static constexpr EGLenum MIPMAP_LEVEL = 0x3083;
	static constexpr EGLenum NO_TEXTURE = 0x305C;
	static constexpr EGLenum TEXTURE_2D = 0x305F;
	static constexpr EGLenum TEXTURE_FORMAT = 0x3080;
	static constexpr EGLenum TEXTURE_RGB = 0x305D;
	static constexpr EGLenum TEXTURE_RGBA = 0x305E;
	static constexpr EGLenum TEXTURE_TARGET = 0x3081;
	static constexpr EGLenum ALPHA_FORMAT = 0x3088;
	static constexpr EGLenum ALPHA_FORMAT_NONPRE = 0x308B;
	static constexpr EGLenum ALPHA_FORMAT_PRE = 0x308C;
	static constexpr EGLenum ALPHA_MASK_SIZE = 0x303E;
	static constexpr EGLenum BUFFER_PRESERVED = 0x3094;
	static constexpr EGLenum BUFFER_DESTROYED = 0x3095;
	static constexpr EGLenum CLIENT_APIS = 0x308D;
	static constexpr EGLenum COLORSPACE = 0x3087;
	static constexpr EGLenum COLORSPACE_sRGB = 0x3089;
	static constexpr EGLenum COLORSPACE_LINEAR = 0x308A;
	static constexpr EGLenum COLOR_BUFFER_TYPE = 0x303F;
	static constexpr EGLenum CONTEXT_CLIENT_TYPE = 0x3097;
	static constexpr EGLenum DISPLAY_SCALING = 10000;
	static constexpr EGLenum HORIZONTAL_RESOLUTION = 0x3090;
	static constexpr EGLenum LUMINANCE_BUFFER = 0x308F;
	static constexpr EGLenum LUMINANCE_SIZE = 0x303D;
	static constexpr EGLenum OPENGL_ES_BIT = 0x0001;
	static constexpr EGLenum OPENVG_BIT = 0x0002;
	static constexpr EGLenum OPENGL_ES_API = 0x30A0;
	static constexpr EGLenum OPENVG_API = 0x30A1;
	static constexpr EGLenum OPENVG_IMAGE = 0x3096;
	static constexpr EGLenum PIXEL_ASPECT_RATIO = 0x3092;
	static constexpr EGLenum RENDERABLE_TYPE = 0x3040;
	static constexpr EGLenum RENDER_BUFFER = 0x3086;
	static constexpr EGLenum RGB_BUFFER = 0x308E;
	static constexpr EGLenum SINGLE_BUFFER = 0x3085;
	static constexpr EGLenum SWAP_BEHAVIOR = 0x3093;
	static constexpr auto UNKNOWN = EGL_CAST(EGLint,-1);
	static constexpr EGLenum VERTICAL_RESOLUTION = 0x3091;
	static constexpr EGLenum CONFORMANT = 0x3042;
	static constexpr EGLenum CONTEXT_CLIENT_VERSION = 0x3098;
	static constexpr EGLenum MATCH_NATIVE_PIXMAP = 0x3041;
	static constexpr EGLenum OPENGL_ES2_BIT = 0x0004;
	static constexpr EGLenum VG_ALPHA_FORMAT = 0x3088;
	static constexpr EGLenum VG_ALPHA_FORMAT_NONPRE = 0x308B;
	static constexpr EGLenum VG_ALPHA_FORMAT_PRE = 0x308C;
	static constexpr EGLenum VG_ALPHA_FORMAT_PRE_BIT = 0x0040;
	static constexpr EGLenum VG_COLORSPACE = 0x3087;
	static constexpr EGLenum VG_COLORSPACE_sRGB = 0x3089;
	static constexpr EGLenum VG_COLORSPACE_LINEAR = 0x308A;
	static constexpr EGLenum VG_COLORSPACE_LINEAR_BIT = 0x0020;
	static constexpr auto DEFAULT_DISPLAY = EGL_CAST(EGLNativeDisplayType,0);
	static constexpr EGLenum MULTISAMPLE_RESOLVE_BOX_BIT = 0x0200;
	static constexpr EGLenum MULTISAMPLE_RESOLVE = 0x3099;
	static constexpr EGLenum MULTISAMPLE_RESOLVE_DEFAULT = 0x309A;
	static constexpr EGLenum MULTISAMPLE_RESOLVE_BOX = 0x309B;
	static constexpr EGLenum OPENGL_API = 0x30A2;
	static constexpr EGLenum OPENGL_BIT = 0x0008;
	static constexpr EGLenum SWAP_BEHAVIOR_PRESERVED_BIT = 0x0400;
	static constexpr EGLenum CONTEXT_MAJOR_VERSION = 0x3098;
	static constexpr EGLenum CONTEXT_MINOR_VERSION = 0x30FB;
	static constexpr EGLenum CONTEXT_OPENGL_PROFILE_MASK = 0x30FD;
	static constexpr EGLenum CONTEXT_OPENGL_RESET_NOTIFICATION_STRATEGY = 0x31BD;
	static constexpr EGLenum NO_RESET_NOTIFICATION = 0x31BE;
	static constexpr EGLenum LOSE_CONTEXT_ON_RESET = 0x31BF;
	static constexpr EGLenum CONTEXT_OPENGL_CORE_PROFILE_BIT = 0x00000001;
	static constexpr EGLenum CONTEXT_OPENGL_COMPATIBILITY_PROFILE_BIT = 0x00000002;
	static constexpr EGLenum CONTEXT_OPENGL_DEBUG = 0x31B0;
	static constexpr EGLenum CONTEXT_OPENGL_FORWARD_COMPATIBLE = 0x31B1;
	static constexpr EGLenum CONTEXT_OPENGL_ROBUST_ACCESS = 0x31B2;
	static constexpr EGLenum OPENGL_ES3_BIT = 0x00000040;
	static constexpr EGLenum CL_EVENT_HANDLE = 0x309C;
	static constexpr EGLenum SYNC_CL_EVENT = 0x30FE;
	static constexpr EGLenum SYNC_CL_EVENT_COMPLETE = 0x30FF;
	static constexpr EGLenum SYNC_PRIOR_COMMANDS_COMPLETE = 0x30F0;
	static constexpr EGLenum SYNC_TYPE = 0x30F7;
	static constexpr EGLenum SYNC_STATUS = 0x30F1;
	static constexpr EGLenum SYNC_CONDITION = 0x30F8;
	static constexpr EGLenum SIGNALED = 0x30F2;
	static constexpr EGLenum UNSIGNALED = 0x30F3;
	static constexpr EGLenum SYNC_FLUSH_COMMANDS_BIT = 0x0001;
	static constexpr EGLuint64KHR FOREVER = 0xFFFFFFFFFFFFFFFF;
	static constexpr EGLenum TIMEOUT_EXPIRED = 0x30F5;
	static constexpr EGLenum CONDITION_SATISFIED = 0x30F6;
	static constexpr auto NO_SYNC = EGL_CAST(EGLSync,0);
	static constexpr EGLenum SYNC_FENCE = 0x30F9;
	static constexpr EGLenum GL_COLORSPACE = 0x309D;
	static constexpr EGLenum GL_COLORSPACE_SRGB = 0x3089;
	static constexpr EGLenum GL_COLORSPACE_LINEAR = 0x308A;
	static constexpr EGLenum GL_RENDERBUFFER = 0x30B9;
	static constexpr EGLenum GL_TEXTURE_2D = 0x30B1;
	static constexpr EGLenum GL_TEXTURE_LEVEL = 0x30BC;
	static constexpr EGLenum GL_TEXTURE_3D = 0x30B2;
	static constexpr EGLenum GL_TEXTURE_ZOFFSET = 0x30BD;
	static constexpr EGLenum GL_TEXTURE_CUBE_MAP_POSITIVE_X = 0x30B3;
	static constexpr EGLenum GL_TEXTURE_CUBE_MAP_NEGATIVE_X = 0x30B4;
	static constexpr EGLenum GL_TEXTURE_CUBE_MAP_POSITIVE_Y = 0x30B5;
	static constexpr EGLenum GL_TEXTURE_CUBE_MAP_NEGATIVE_Y = 0x30B6;
	static constexpr EGLenum GL_TEXTURE_CUBE_MAP_POSITIVE_Z = 0x30B7;
	static constexpr EGLenum GL_TEXTURE_CUBE_MAP_NEGATIVE_Z = 0x30B8;
	static constexpr EGLenum IMAGE_PRESERVED = 0x30D2;
	static constexpr auto NO_IMAGE = EGL_CAST(EGLImage,0);
	static constexpr EGLenum CL_EVENT_HANDLE_KHR = 0x309C;
	static constexpr EGLenum SYNC_CL_EVENT_KHR = 0x30FE;
	static constexpr EGLenum SYNC_CL_EVENT_COMPLETE_KHR = 0x30FF;
	static constexpr EGLenum CONFORMANT_KHR = 0x3042;
	static constexpr EGLenum VG_COLORSPACE_LINEAR_BIT_KHR = 0x0020;
	static constexpr EGLenum VG_ALPHA_FORMAT_PRE_BIT_KHR = 0x0040;
	static constexpr EGLenum CONTEXT_RELEASE_BEHAVIOR_NONE_KHR = 0;
	static constexpr EGLenum CONTEXT_RELEASE_BEHAVIOR_KHR = 0x2097;
	static constexpr EGLenum CONTEXT_RELEASE_BEHAVIOR_FLUSH_KHR = 0x2098;
	static constexpr EGLenum CONTEXT_MAJOR_VERSION_KHR = 0x3098;
	static constexpr EGLenum CONTEXT_MINOR_VERSION_KHR = 0x30FB;
	static constexpr EGLenum CONTEXT_FLAGS_KHR = 0x30FC;
	static constexpr EGLenum CONTEXT_OPENGL_PROFILE_MASK_KHR = 0x30FD;
	static constexpr EGLenum CONTEXT_OPENGL_RESET_NOTIFICATION_STRATEGY_KHR = 0x31BD;
	static constexpr EGLenum NO_RESET_NOTIFICATION_KHR = 0x31BE;
	static constexpr EGLenum LOSE_CONTEXT_ON_RESET_KHR = 0x31BF;
	static constexpr EGLenum CONTEXT_OPENGL_DEBUG_BIT_KHR = 0x00000001;
	static constexpr EGLenum CONTEXT_OPENGL_FORWARD_COMPATIBLE_BIT_KHR = 0x00000002;
	static constexpr EGLenum CONTEXT_OPENGL_ROBUST_ACCESS_BIT_KHR = 0x00000004;
	static constexpr EGLenum CONTEXT_OPENGL_CORE_PROFILE_BIT_KHR = 0x00000001;
	static constexpr EGLenum CONTEXT_OPENGL_COMPATIBILITY_PROFILE_BIT_KHR = 0x00000002;
	static constexpr EGLenum OPENGL_ES3_BIT_KHR = 0x00000040;
	static constexpr EGLenum CONTEXT_OPENGL_NO_ERROR_KHR = 0x31B3;
	static constexpr EGLenum OBJECT_THREAD_KHR = 0x33B0;
	static constexpr EGLenum OBJECT_DISPLAY_KHR = 0x33B1;
	static constexpr EGLenum OBJECT_CONTEXT_KHR = 0x33B2;
	static constexpr EGLenum OBJECT_SURFACE_KHR = 0x33B3;
	static constexpr EGLenum OBJECT_IMAGE_KHR = 0x33B4;
	static constexpr EGLenum OBJECT_SYNC_KHR = 0x33B5;
	static constexpr EGLenum OBJECT_STREAM_KHR = 0x33B6;
	static constexpr EGLenum DEBUG_MSG_CRITICAL_KHR = 0x33B9;
	static constexpr EGLenum DEBUG_MSG_ERROR_KHR = 0x33BA;
	static constexpr EGLenum DEBUG_MSG_WARN_KHR = 0x33BB;
	static constexpr EGLenum DEBUG_MSG_INFO_KHR = 0x33BC;
	static constexpr EGLenum DEBUG_CALLBACK_KHR = 0x33B8;
	static constexpr EGLenum TRACK_REFERENCES_KHR = 0x3352;
	static constexpr EGLenum SYNC_PRIOR_COMMANDS_COMPLETE_KHR = 0x30F0;
	static constexpr EGLenum SYNC_CONDITION_KHR = 0x30F8;
	static constexpr EGLenum SYNC_FENCE_KHR = 0x30F9;
	static constexpr EGLenum GL_COLORSPACE_KHR = 0x309D;
	static constexpr EGLenum GL_COLORSPACE_SRGB_KHR = 0x3089;
	static constexpr EGLenum GL_COLORSPACE_LINEAR_KHR = 0x308A;
	static constexpr EGLenum GL_RENDERBUFFER_KHR = 0x30B9;
	static constexpr EGLenum GL_TEXTURE_2D_KHR = 0x30B1;
	static constexpr EGLenum GL_TEXTURE_LEVEL_KHR = 0x30BC;
	static constexpr EGLenum GL_TEXTURE_3D_KHR = 0x30B2;
	static constexpr EGLenum GL_TEXTURE_ZOFFSET_KHR = 0x30BD;
	static constexpr EGLenum GL_TEXTURE_CUBE_MAP_POSITIVE_X_KHR = 0x30B3;
	static constexpr EGLenum GL_TEXTURE_CUBE_MAP_NEGATIVE_X_KHR = 0x30B4;
	static constexpr EGLenum GL_TEXTURE_CUBE_MAP_POSITIVE_Y_KHR = 0x30B5;
	static constexpr EGLenum GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_KHR = 0x30B6;
	static constexpr EGLenum GL_TEXTURE_CUBE_MAP_POSITIVE_Z_KHR = 0x30B7;
	static constexpr EGLenum GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_KHR = 0x30B8;
	static constexpr EGLenum NATIVE_PIXMAP_KHR = 0x30B0;
	static constexpr auto NO_IMAGE_KHR = EGL_CAST(EGLImageKHR,0);
	static constexpr EGLenum IMAGE_PRESERVED_KHR = 0x30D2;
	static constexpr EGLenum READ_SURFACE_BIT_KHR = 0x0001;
	static constexpr EGLenum WRITE_SURFACE_BIT_KHR = 0x0002;
	static constexpr EGLenum LOCK_SURFACE_BIT_KHR = 0x0080;
	static constexpr EGLenum OPTIMAL_FORMAT_BIT_KHR = 0x0100;
	static constexpr EGLenum MATCH_FORMAT_KHR = 0x3043;
	static constexpr EGLenum FORMAT_RGB_565_EXACT_KHR = 0x30C0;
	static constexpr EGLenum FORMAT_RGB_565_KHR = 0x30C1;
	static constexpr EGLenum FORMAT_RGBA_8888_EXACT_KHR = 0x30C2;
	static constexpr EGLenum FORMAT_RGBA_8888_KHR = 0x30C3;
	static constexpr EGLenum MAP_PRESERVE_PIXELS_KHR = 0x30C4;
	static constexpr EGLenum LOCK_USAGE_HINT_KHR = 0x30C5;
	static constexpr EGLenum BITMAP_POINTER_KHR = 0x30C6;
	static constexpr EGLenum BITMAP_PITCH_KHR = 0x30C7;
	static constexpr EGLenum BITMAP_ORIGIN_KHR = 0x30C8;
	static constexpr EGLenum BITMAP_PIXEL_RED_OFFSET_KHR = 0x30C9;
	static constexpr EGLenum BITMAP_PIXEL_GREEN_OFFSET_KHR = 0x30CA;
	static constexpr EGLenum BITMAP_PIXEL_BLUE_OFFSET_KHR = 0x30CB;
	static constexpr EGLenum BITMAP_PIXEL_ALPHA_OFFSET_KHR = 0x30CC;
	static constexpr EGLenum BITMAP_PIXEL_LUMINANCE_OFFSET_KHR = 0x30CD;
	static constexpr EGLenum LOWER_LEFT_KHR = 0x30CE;
	static constexpr EGLenum UPPER_LEFT_KHR = 0x30CF;
	static constexpr EGLenum BITMAP_PIXEL_SIZE_KHR = 0x3110;
	static constexpr EGLenum MUTABLE_RENDER_BUFFER_BIT_KHR = 0x1000;
	static constexpr auto NO_CONFIG_KHR = EGL_CAST(EGLConfig,0);
	static constexpr EGLenum BUFFER_AGE_KHR = 0x313D;
	static constexpr EGLenum PLATFORM_ANDROID_KHR = 0x3141;
	static constexpr EGLenum PLATFORM_GBM_KHR = 0x31D7;
	static constexpr EGLenum PLATFORM_WAYLAND_KHR = 0x31D8;
	static constexpr EGLenum PLATFORM_X11_KHR = 0x31D5;
	static constexpr EGLenum PLATFORM_X11_SCREEN_KHR = 0x31D6;
	static constexpr EGLenum SYNC_STATUS_KHR = 0x30F1;
	static constexpr EGLenum SIGNALED_KHR = 0x30F2;
	static constexpr EGLenum UNSIGNALED_KHR = 0x30F3;
	static constexpr EGLenum TIMEOUT_EXPIRED_KHR = 0x30F5;
	static constexpr EGLenum CONDITION_SATISFIED_KHR = 0x30F6;
	static constexpr EGLenum SYNC_TYPE_KHR = 0x30F7;
	static constexpr EGLenum SYNC_REUSABLE_KHR = 0x30FA;
	static constexpr EGLenum SYNC_FLUSH_COMMANDS_BIT_KHR = 0x0001;
	static constexpr EGLuint64KHR FOREVER_KHR = 0xFFFFFFFFFFFFFFFF;
	static constexpr auto NO_SYNC_KHR = EGL_CAST(EGLSyncKHR,0);
	static constexpr auto NO_STREAM_KHR = EGL_CAST(EGLStreamKHR,0);
	static constexpr EGLenum CONSUMER_LATENCY_USEC_KHR = 0x3210;
	static constexpr EGLenum PRODUCER_FRAME_KHR = 0x3212;
	static constexpr EGLenum CONSUMER_FRAME_KHR = 0x3213;
	static constexpr EGLenum STREAM_STATE_KHR = 0x3214;
	static constexpr EGLenum STREAM_STATE_CREATED_KHR = 0x3215;
	static constexpr EGLenum STREAM_STATE_CONNECTING_KHR = 0x3216;
	static constexpr EGLenum STREAM_STATE_EMPTY_KHR = 0x3217;
	static constexpr EGLenum STREAM_STATE_NEW_FRAME_AVAILABLE_KHR = 0x3218;
	static constexpr EGLenum STREAM_STATE_OLD_FRAME_AVAILABLE_KHR = 0x3219;
	static constexpr EGLenum STREAM_STATE_DISCONNECTED_KHR = 0x321A;
	static constexpr EGLenum BAD_STREAM_KHR = 0x321B;
	static constexpr EGLenum BAD_STATE_KHR = 0x321C;
	static constexpr EGLenum CONSUMER_ACQUIRE_TIMEOUT_USEC_KHR = 0x321E;
	static constexpr auto NO_FILE_DESCRIPTOR_KHR = EGL_CAST(EGLNativeFileDescriptorKHR,-1);
	static constexpr EGLenum STREAM_FIFO_LENGTH_KHR = 0x31FC;
	static constexpr EGLenum STREAM_TIME_NOW_KHR = 0x31FD;
	static constexpr EGLenum STREAM_TIME_CONSUMER_KHR = 0x31FE;
	static constexpr EGLenum STREAM_TIME_PRODUCER_KHR = 0x31FF;
	static constexpr EGLenum STREAM_BIT_KHR = 0x0800;
	static constexpr EGLenum VG_PARENT_IMAGE_KHR = 0x30BA;
	static constexpr EGLenum NATIVE_BUFFER_USAGE_ANDROID = 0x3143;
	static constexpr EGLenum NATIVE_BUFFER_USAGE_PROTECTED_BIT_ANDROID = 0x00000001;
	static constexpr EGLenum NATIVE_BUFFER_USAGE_RENDERBUFFER_BIT_ANDROID = 0x00000002;
	static constexpr EGLenum NATIVE_BUFFER_USAGE_TEXTURE_BIT_ANDROID = 0x00000004;
	static constexpr EGLenum FRAMEBUFFER_TARGET_ANDROID = 0x3147;
	static constexpr EGLenum FRONT_BUFFER_AUTO_REFRESH_ANDROID = 0x314C;
	static constexpr auto TIMESTAMP_PENDING_ANDROID = EGL_CAST(EGLnsecsANDROID,-2);
	static constexpr auto TIMESTAMP_INVALID_ANDROID = EGL_CAST(EGLnsecsANDROID,-1);
	static constexpr EGLenum TIMESTAMPS_ANDROID = 0x3430;
	static constexpr EGLenum COMPOSITE_DEADLINE_ANDROID = 0x3431;
	static constexpr EGLenum COMPOSITE_INTERVAL_ANDROID = 0x3432;
	static constexpr EGLenum COMPOSITE_TO_PRESENT_LATENCY_ANDROID = 0x3433;
	static constexpr EGLenum REQUESTED_PRESENT_TIME_ANDROID = 0x3434;
	static constexpr EGLenum RENDERING_COMPLETE_TIME_ANDROID = 0x3435;
	static constexpr EGLenum COMPOSITION_LATCH_TIME_ANDROID = 0x3436;
	static constexpr EGLenum FIRST_COMPOSITION_START_TIME_ANDROID = 0x3437;
	static constexpr EGLenum LAST_COMPOSITION_START_TIME_ANDROID = 0x3438;
	static constexpr EGLenum FIRST_COMPOSITION_GPU_FINISHED_TIME_ANDROID = 0x3439;
	static constexpr EGLenum DISPLAY_PRESENT_TIME_ANDROID = 0x343A;
	static constexpr EGLenum DEQUEUE_READY_TIME_ANDROID = 0x343B;
	static constexpr EGLenum READS_DONE_TIME_ANDROID = 0x343C;
	static constexpr EGLenum NATIVE_BUFFER_ANDROID = 0x3140;
	static constexpr EGLenum SYNC_NATIVE_FENCE_ANDROID = 0x3144;
	static constexpr EGLenum SYNC_NATIVE_FENCE_FD_ANDROID = 0x3145;
	static constexpr EGLenum SYNC_NATIVE_FENCE_SIGNALED_ANDROID = 0x3146;
	static constexpr EGLenum RECORDABLE_ANDROID = 0x3142;
	static constexpr EGLenum D3D_TEXTURE_2D_SHARE_HANDLE_ANGLE = 0x3200;
	static constexpr EGLenum D3D9_DEVICE_ANGLE = 0x33A0;
	static constexpr EGLenum D3D11_DEVICE_ANGLE = 0x33A1;
	static constexpr EGLenum FIXED_SIZE_ANGLE = 0x3201;
	static constexpr EGLenum COLOR_COMPONENT_TYPE_UNSIGNED_INTEGER_ARM = 0x3287;
	static constexpr EGLenum COLOR_COMPONENT_TYPE_INTEGER_ARM = 0x3288;
	static constexpr EGLenum SYNC_PRIOR_COMMANDS_IMPLICIT_EXTERNAL_ARM = 0x328A;
	static constexpr EGLenum DISCARD_SAMPLES_ARM = 0x3286;
	static constexpr EGLenum FRONT_BUFFER_EXT = 0x3464;
	static constexpr EGLenum BUFFER_AGE_EXT = 0x313D;
	static constexpr EGLenum SYNC_CLIENT_EXT = 0x3364;
	static constexpr EGLenum SYNC_CLIENT_SIGNAL_EXT = 0x3365;
	static constexpr EGLenum PRIMARY_COMPOSITOR_CONTEXT_EXT = 0x3460;
	static constexpr EGLenum EXTERNAL_REF_ID_EXT = 0x3461;
	static constexpr EGLenum COMPOSITOR_DROP_NEWEST_FRAME_EXT = 0x3462;
	static constexpr EGLenum COMPOSITOR_KEEP_NEWEST_FRAME_EXT = 0x3463;
	static constexpr EGLenum CONFIG_SELECT_GROUP_EXT = 0x34C0;
	static constexpr EGLenum CONTEXT_OPENGL_ROBUST_ACCESS_EXT = 0x30BF;
	static constexpr EGLenum CONTEXT_OPENGL_RESET_NOTIFICATION_STRATEGY_EXT = 0x3138;
	static constexpr EGLenum NO_RESET_NOTIFICATION_EXT = 0x31BE;
	static constexpr EGLenum LOSE_CONTEXT_ON_RESET_EXT = 0x31BF;
	static constexpr auto NO_DEVICE_EXT = EGL_CAST(EGLDeviceEXT,0);
	static constexpr EGLenum BAD_DEVICE_EXT = 0x322B;
	static constexpr EGLenum DEVICE_EXT = 0x322C;
	static constexpr EGLenum DRM_DEVICE_FILE_EXT = 0x3233;
	static constexpr EGLenum DRM_MASTER_FD_EXT = 0x333C;
	static constexpr EGLenum DRM_RENDER_NODE_FILE_EXT = 0x3377;
	static constexpr EGLenum OPENWF_DEVICE_ID_EXT = 0x3237;
	static constexpr EGLenum OPENWF_DEVICE_EXT = 0x333D;
	static constexpr EGLenum DEVICE_UUID_EXT = 0x335C;
	static constexpr EGLenum DRIVER_UUID_EXT = 0x335D;
	static constexpr EGLenum DRIVER_NAME_EXT = 0x335E;
	static constexpr EGLenum RENDERER_EXT = 0x335F;
	static constexpr EGLenum GL_COLORSPACE_BT2020_LINEAR_EXT = 0x333F;
	static constexpr EGLenum GL_COLORSPACE_BT2020_PQ_EXT = 0x3340;
	static constexpr EGLenum GL_COLORSPACE_DISPLAY_P3_EXT = 0x3363;
	static constexpr EGLenum GL_COLORSPACE_DISPLAY_P3_LINEAR_EXT = 0x3362;
	static constexpr EGLenum GL_COLORSPACE_DISPLAY_P3_PASSTHROUGH_EXT = 0x3490;
	static constexpr EGLenum GL_COLORSPACE_SCRGB_EXT = 0x3351;
	static constexpr EGLenum GL_COLORSPACE_SCRGB_LINEAR_EXT = 0x3350;
	static constexpr EGLenum LINUX_DMA_BUF_EXT = 0x3270;
	static constexpr EGLenum LINUX_DRM_FOURCC_EXT = 0x3271;
	static constexpr EGLenum DMA_BUF_PLANE0_FD_EXT = 0x3272;
	static constexpr EGLenum DMA_BUF_PLANE0_OFFSET_EXT = 0x3273;
	static constexpr EGLenum DMA_BUF_PLANE0_PITCH_EXT = 0x3274;
	static constexpr EGLenum DMA_BUF_PLANE1_FD_EXT = 0x3275;
	static constexpr EGLenum DMA_BUF_PLANE1_OFFSET_EXT = 0x3276;
	static constexpr EGLenum DMA_BUF_PLANE1_PITCH_EXT = 0x3277;
	static constexpr EGLenum DMA_BUF_PLANE2_FD_EXT = 0x3278;
	static constexpr EGLenum DMA_BUF_PLANE2_OFFSET_EXT = 0x3279;
	static constexpr EGLenum DMA_BUF_PLANE2_PITCH_EXT = 0x327A;
	static constexpr EGLenum YUV_COLOR_SPACE_HINT_EXT = 0x327B;
	static constexpr EGLenum SAMPLE_RANGE_HINT_EXT = 0x327C;
	static constexpr EGLenum YUV_CHROMA_HORIZONTAL_SITING_HINT_EXT = 0x327D;
	static constexpr EGLenum YUV_CHROMA_VERTICAL_SITING_HINT_EXT = 0x327E;
	static constexpr EGLenum ITU_REC601_EXT = 0x327F;
	static constexpr EGLenum ITU_REC709_EXT = 0x3280;
	static constexpr EGLenum ITU_REC2020_EXT = 0x3281;
	static constexpr EGLenum YUV_FULL_RANGE_EXT = 0x3282;
	static constexpr EGLenum YUV_NARROW_RANGE_EXT = 0x3283;
	static constexpr EGLenum YUV_CHROMA_SITING_0_EXT = 0x3284;
	static constexpr EGLenum YUV_CHROMA_SITING_0_5_EXT = 0x3285;
	static constexpr EGLenum DMA_BUF_PLANE3_FD_EXT = 0x3440;
	static constexpr EGLenum DMA_BUF_PLANE3_OFFSET_EXT = 0x3441;
	static constexpr EGLenum DMA_BUF_PLANE3_PITCH_EXT = 0x3442;
	static constexpr EGLenum DMA_BUF_PLANE0_MODIFIER_LO_EXT = 0x3443;
	static constexpr EGLenum DMA_BUF_PLANE0_MODIFIER_HI_EXT = 0x3444;
	static constexpr EGLenum DMA_BUF_PLANE1_MODIFIER_LO_EXT = 0x3445;
	static constexpr EGLenum DMA_BUF_PLANE1_MODIFIER_HI_EXT = 0x3446;
	static constexpr EGLenum DMA_BUF_PLANE2_MODIFIER_LO_EXT = 0x3447;
	static constexpr EGLenum DMA_BUF_PLANE2_MODIFIER_HI_EXT = 0x3448;
	static constexpr EGLenum DMA_BUF_PLANE3_MODIFIER_LO_EXT = 0x3449;
	static constexpr EGLenum DMA_BUF_PLANE3_MODIFIER_HI_EXT = 0x344A;
	static constexpr EGLenum GL_COLORSPACE_DEFAULT_EXT = 0x314D;
	static constexpr EGLenum IMPORT_SYNC_TYPE_EXT = 0x3470;
	static constexpr EGLenum IMPORT_IMPLICIT_SYNC_EXT = 0x3471;
	static constexpr EGLenum IMPORT_EXPLICIT_SYNC_EXT = 0x3472;
	static constexpr EGLenum MULTIVIEW_VIEW_COUNT_EXT = 0x3134;
	static constexpr auto NO_OUTPUT_LAYER_EXT = EGL_CAST(EGLOutputLayerEXT,0);
	static constexpr auto NO_OUTPUT_PORT_EXT = EGL_CAST(EGLOutputPortEXT,0);
	static constexpr EGLenum BAD_OUTPUT_LAYER_EXT = 0x322D;
	static constexpr EGLenum BAD_OUTPUT_PORT_EXT = 0x322E;
	static constexpr EGLenum SWAP_INTERVAL_EXT = 0x322F;
	static constexpr EGLenum DRM_CRTC_EXT = 0x3234;
	static constexpr EGLenum DRM_PLANE_EXT = 0x3235;
	static constexpr EGLenum DRM_CONNECTOR_EXT = 0x3236;
	static constexpr EGLenum OPENWF_PIPELINE_ID_EXT = 0x3238;
	static constexpr EGLenum OPENWF_PORT_ID_EXT = 0x3239;
	static constexpr EGLenum COLOR_COMPONENT_TYPE_EXT = 0x3339;
	static constexpr EGLenum COLOR_COMPONENT_TYPE_FIXED_EXT = 0x333A;
	static constexpr EGLenum COLOR_COMPONENT_TYPE_FLOAT_EXT = 0x333B;
	static constexpr EGLenum PLATFORM_DEVICE_EXT = 0x313F;
	static constexpr EGLenum PLATFORM_WAYLAND_EXT = 0x31D8;
	static constexpr EGLenum PLATFORM_X11_EXT = 0x31D5;
	static constexpr EGLenum PLATFORM_X11_SCREEN_EXT = 0x31D6;
	static constexpr EGLenum PLATFORM_XCB_EXT = 0x31DC;
	static constexpr EGLenum PLATFORM_XCB_SCREEN_EXT = 0x31DE;
	static constexpr EGLenum PRESENT_OPAQUE_EXT = 0x31DF;
	static constexpr EGLenum PROTECTED_CONTENT_EXT = 0x32C0;
	static constexpr EGLenum CTA861_3_MAX_CONTENT_LIGHT_LEVEL_EXT = 0x3360;
	static constexpr EGLenum CTA861_3_MAX_FRAME_AVERAGE_LEVEL_EXT = 0x3361;
	static constexpr EGLenum SMPTE2086_DISPLAY_PRIMARY_RX_EXT = 0x3341;
	static constexpr EGLenum SMPTE2086_DISPLAY_PRIMARY_RY_EXT = 0x3342;
	static constexpr EGLenum SMPTE2086_DISPLAY_PRIMARY_GX_EXT = 0x3343;
	static constexpr EGLenum SMPTE2086_DISPLAY_PRIMARY_GY_EXT = 0x3344;
	static constexpr EGLenum SMPTE2086_DISPLAY_PRIMARY_BX_EXT = 0x3345;
	static constexpr EGLenum SMPTE2086_DISPLAY_PRIMARY_BY_EXT = 0x3346;
	static constexpr EGLenum SMPTE2086_WHITE_POINT_X_EXT = 0x3347;
	static constexpr EGLenum SMPTE2086_WHITE_POINT_Y_EXT = 0x3348;
	static constexpr EGLenum SMPTE2086_MAX_LUMINANCE_EXT = 0x3349;
	static constexpr EGLenum SMPTE2086_MIN_LUMINANCE_EXT = 0x334A;
	static constexpr EGLenum METADATA_SCALING_EXT = 50000;
	static constexpr EGLenum SURFACE_COMPRESSION_EXT = 0x34B0;
	static constexpr EGLenum SURFACE_COMPRESSION_PLANE1_EXT = 0x328E;
	static constexpr EGLenum SURFACE_COMPRESSION_PLANE2_EXT = 0x328F;
	static constexpr EGLenum SURFACE_COMPRESSION_FIXED_RATE_NONE_EXT = 0x34B1;
	static constexpr EGLenum SURFACE_COMPRESSION_FIXED_RATE_DEFAULT_EXT = 0x34B2;
	static constexpr EGLenum SURFACE_COMPRESSION_FIXED_RATE_1BPC_EXT = 0x34B4;
	static constexpr EGLenum SURFACE_COMPRESSION_FIXED_RATE_2BPC_EXT = 0x34B5;
	static constexpr EGLenum SURFACE_COMPRESSION_FIXED_RATE_3BPC_EXT = 0x34B6;
	static constexpr EGLenum SURFACE_COMPRESSION_FIXED_RATE_4BPC_EXT = 0x34B7;
	static constexpr EGLenum SURFACE_COMPRESSION_FIXED_RATE_5BPC_EXT = 0x34B8;
	static constexpr EGLenum SURFACE_COMPRESSION_FIXED_RATE_6BPC_EXT = 0x34B9;
	static constexpr EGLenum SURFACE_COMPRESSION_FIXED_RATE_7BPC_EXT = 0x34BA;
	static constexpr EGLenum SURFACE_COMPRESSION_FIXED_RATE_8BPC_EXT = 0x34BB;
	static constexpr EGLenum SURFACE_COMPRESSION_FIXED_RATE_9BPC_EXT = 0x34BC;
	static constexpr EGLenum SURFACE_COMPRESSION_FIXED_RATE_10BPC_EXT = 0x34BD;
	static constexpr EGLenum SURFACE_COMPRESSION_FIXED_RATE_11BPC_EXT = 0x34BE;
	static constexpr EGLenum SURFACE_COMPRESSION_FIXED_RATE_12BPC_EXT = 0x34BF;
	static constexpr EGLenum YUV_ORDER_EXT = 0x3301;
	static constexpr EGLenum YUV_NUMBER_OF_PLANES_EXT = 0x3311;
	static constexpr EGLenum YUV_SUBSAMPLE_EXT = 0x3312;
	static constexpr EGLenum YUV_DEPTH_RANGE_EXT = 0x3317;
	static constexpr EGLenum YUV_CSC_STANDARD_EXT = 0x330A;
	static constexpr EGLenum YUV_PLANE_BPP_EXT = 0x331A;
	static constexpr EGLenum YUV_BUFFER_EXT = 0x3300;
	static constexpr EGLenum YUV_ORDER_YUV_EXT = 0x3302;
	static constexpr EGLenum YUV_ORDER_YVU_EXT = 0x3303;
	static constexpr EGLenum YUV_ORDER_YUYV_EXT = 0x3304;
	static constexpr EGLenum YUV_ORDER_UYVY_EXT = 0x3305;
	static constexpr EGLenum YUV_ORDER_YVYU_EXT = 0x3306;
	static constexpr EGLenum YUV_ORDER_VYUY_EXT = 0x3307;
	static constexpr EGLenum YUV_ORDER_AYUV_EXT = 0x3308;
	static constexpr EGLenum YUV_SUBSAMPLE_4_2_0_EXT = 0x3313;
	static constexpr EGLenum YUV_SUBSAMPLE_4_2_2_EXT = 0x3314;
	static constexpr EGLenum YUV_SUBSAMPLE_4_4_4_EXT = 0x3315;
	static constexpr EGLenum YUV_DEPTH_RANGE_LIMITED_EXT = 0x3318;
	static constexpr EGLenum YUV_DEPTH_RANGE_FULL_EXT = 0x3319;
	static constexpr EGLenum YUV_CSC_STANDARD_601_EXT = 0x330B;
	static constexpr EGLenum YUV_CSC_STANDARD_709_EXT = 0x330C;
	static constexpr EGLenum YUV_CSC_STANDARD_2020_EXT = 0x330D;
	static constexpr EGLenum YUV_PLANE_BPP_0_EXT = 0x331B;
	static constexpr EGLenum YUV_PLANE_BPP_8_EXT = 0x331C;
	static constexpr EGLenum YUV_PLANE_BPP_10_EXT = 0x331D;
	static constexpr EGLenum CLIENT_PIXMAP_POINTER_HI = 0x8F74;
	static constexpr EGLenum COLOR_FORMAT_HI = 0x8F70;
	static constexpr EGLenum COLOR_RGB_HI = 0x8F71;
	static constexpr EGLenum COLOR_RGBA_HI = 0x8F72;
	static constexpr EGLenum COLOR_ARGB_HI = 0x8F73;
	static constexpr EGLenum CONTEXT_PRIORITY_LEVEL_IMG = 0x3100;
	static constexpr EGLenum CONTEXT_PRIORITY_HIGH_IMG = 0x3101;
	static constexpr EGLenum CONTEXT_PRIORITY_MEDIUM_IMG = 0x3102;
	static constexpr EGLenum CONTEXT_PRIORITY_LOW_IMG = 0x3103;
	static constexpr EGLenum NATIVE_BUFFER_MULTIPLANE_SEPARATE_IMG = 0x3105;
	static constexpr EGLenum NATIVE_BUFFER_PLANE_OFFSET_IMG = 0x3106;
	static constexpr EGLenum DRM_BUFFER_FORMAT_MESA = 0x31D0;
	static constexpr EGLenum DRM_BUFFER_USE_MESA = 0x31D1;
	static constexpr EGLenum DRM_BUFFER_FORMAT_ARGB32_MESA = 0x31D2;
	static constexpr EGLenum DRM_BUFFER_MESA = 0x31D3;
	static constexpr EGLenum DRM_BUFFER_STRIDE_MESA = 0x31D4;
	static constexpr EGLenum DRM_BUFFER_USE_SCANOUT_MESA = 0x00000001;
	static constexpr EGLenum DRM_BUFFER_USE_SHARE_MESA = 0x00000002;
	static constexpr EGLenum DRM_BUFFER_USE_CURSOR_MESA = 0x00000004;
	static constexpr EGLenum PLATFORM_GBM_MESA = 0x31D7;
	static constexpr EGLenum PLATFORM_SURFACELESS_MESA = 0x31DD;
	static constexpr EGLenum Y_INVERTED_NOK = 0x307F;
	static constexpr EGLenum AUTO_STEREO_NV = 0x3136;
	static constexpr EGLenum CONTEXT_PRIORITY_REALTIME_NV = 0x3357;
	static constexpr EGLenum COVERAGE_BUFFERS_NV = 0x30E0;
	static constexpr EGLenum COVERAGE_SAMPLES_NV = 0x30E1;
	static constexpr EGLenum COVERAGE_SAMPLE_RESOLVE_NV = 0x3131;
	static constexpr EGLenum COVERAGE_SAMPLE_RESOLVE_DEFAULT_NV = 0x3132;
	static constexpr EGLenum COVERAGE_SAMPLE_RESOLVE_NONE_NV = 0x3133;
	static constexpr EGLenum CUDA_EVENT_HANDLE_NV = 0x323B;
	static constexpr EGLenum SYNC_CUDA_EVENT_NV = 0x323C;
	static constexpr EGLenum SYNC_CUDA_EVENT_COMPLETE_NV = 0x323D;
	static constexpr EGLenum DEPTH_ENCODING_NV = 0x30E2;
	static constexpr EGLenum DEPTH_ENCODING_NONE_NV = 0;
	static constexpr EGLenum DEPTH_ENCODING_NONLINEAR_NV = 0x30E3;
	static constexpr EGLenum CUDA_DEVICE_NV = 0x323A;
	static constexpr EGLenum POST_SUB_BUFFER_SUPPORTED_NV = 0x30BE;
	static constexpr EGLenum QUADRUPLE_BUFFER_NV = 0x3231;
	static constexpr EGLenum GENERATE_RESET_ON_VIDEO_MEMORY_PURGE_NV = 0x334C;
	static constexpr EGLenum STREAM_CONSUMER_IMAGE_NV = 0x3373;
	static constexpr EGLenum STREAM_IMAGE_ADD_NV = 0x3374;
	static constexpr EGLenum STREAM_IMAGE_REMOVE_NV = 0x3375;
	static constexpr EGLenum STREAM_IMAGE_AVAILABLE_NV = 0x3376;
	static constexpr EGLenum STREAM_CONSUMER_IMAGE_USE_SCANOUT_NV = 0x3378;
	static constexpr EGLenum YUV_PLANE0_TEXTURE_UNIT_NV = 0x332C;
	static constexpr EGLenum YUV_PLANE1_TEXTURE_UNIT_NV = 0x332D;
	static constexpr EGLenum YUV_PLANE2_TEXTURE_UNIT_NV = 0x332E;
	static constexpr EGLenum STREAM_CROSS_DISPLAY_NV = 0x334E;
	static constexpr EGLenum STREAM_CROSS_OBJECT_NV = 0x334D;
	static constexpr EGLenum STREAM_CROSS_PARTITION_NV = 0x323F;
	static constexpr EGLenum STREAM_CROSS_PROCESS_NV = 0x3245;
	static constexpr EGLenum STREAM_CROSS_SYSTEM_NV = 0x334F;
	static constexpr EGLenum STREAM_DMA_NV = 0x3371;
	static constexpr EGLenum STREAM_DMA_SERVER_NV = 0x3372;
	static constexpr EGLenum PENDING_FRAME_NV = 0x3329;
	static constexpr EGLenum STREAM_TIME_PENDING_NV = 0x332A;
	static constexpr EGLenum STREAM_FIFO_SYNCHRONOUS_NV = 0x3336;
	static constexpr EGLenum PRODUCER_MAX_FRAME_HINT_NV = 0x3337;
	static constexpr EGLenum CONSUMER_MAX_FRAME_HINT_NV = 0x3338;
	static constexpr EGLenum MAX_STREAM_METADATA_BLOCKS_NV = 0x3250;
	static constexpr EGLenum MAX_STREAM_METADATA_BLOCK_SIZE_NV = 0x3251;
	static constexpr EGLenum MAX_STREAM_METADATA_TOTAL_SIZE_NV = 0x3252;
	static constexpr EGLenum PRODUCER_METADATA_NV = 0x3253;
	static constexpr EGLenum CONSUMER_METADATA_NV = 0x3254;
	static constexpr EGLenum PENDING_METADATA_NV = 0x3328;
	static constexpr EGLenum METADATA0_SIZE_NV = 0x3255;
	static constexpr EGLenum METADATA1_SIZE_NV = 0x3256;
	static constexpr EGLenum METADATA2_SIZE_NV = 0x3257;
	static constexpr EGLenum METADATA3_SIZE_NV = 0x3258;
	static constexpr EGLenum METADATA0_TYPE_NV = 0x3259;
	static constexpr EGLenum METADATA1_TYPE_NV = 0x325A;
	static constexpr EGLenum METADATA2_TYPE_NV = 0x325B;
	static constexpr EGLenum METADATA3_TYPE_NV = 0x325C;
	static constexpr EGLenum STREAM_FRAME_ORIGIN_X_NV = 0x3366;
	static constexpr EGLenum STREAM_FRAME_ORIGIN_Y_NV = 0x3367;
	static constexpr EGLenum STREAM_FRAME_MAJOR_AXIS_NV = 0x3368;
	static constexpr EGLenum CONSUMER_AUTO_ORIENTATION_NV = 0x3369;
	static constexpr EGLenum PRODUCER_AUTO_ORIENTATION_NV = 0x336A;
	static constexpr EGLenum LEFT_NV = 0x336B;
	static constexpr EGLenum RIGHT_NV = 0x336C;
	static constexpr EGLenum TOP_NV = 0x336D;
	static constexpr EGLenum BOTTOM_NV = 0x336E;
	static constexpr EGLenum X_AXIS_NV = 0x336F;
	static constexpr EGLenum Y_AXIS_NV = 0x3370;
	static constexpr EGLenum STREAM_STATE_INITIALIZING_NV = 0x3240;
	static constexpr EGLenum STREAM_TYPE_NV = 0x3241;
	static constexpr EGLenum STREAM_PROTOCOL_NV = 0x3242;
	static constexpr EGLenum STREAM_ENDPOINT_NV = 0x3243;
	static constexpr EGLenum STREAM_LOCAL_NV = 0x3244;
	static constexpr EGLenum STREAM_PRODUCER_NV = 0x3247;
	static constexpr EGLenum STREAM_CONSUMER_NV = 0x3248;
	static constexpr EGLenum STREAM_PROTOCOL_FD_NV = 0x3246;
	static constexpr EGLenum SUPPORT_RESET_NV = 0x3334;
	static constexpr EGLenum SUPPORT_REUSE_NV = 0x3335;
	static constexpr EGLenum STREAM_PROTOCOL_SOCKET_NV = 0x324B;
	static constexpr EGLenum SOCKET_HANDLE_NV = 0x324C;
	static constexpr EGLenum SOCKET_TYPE_NV = 0x324D;
	static constexpr EGLenum SOCKET_TYPE_INET_NV = 0x324F;
	static constexpr EGLenum SOCKET_TYPE_UNIX_NV = 0x324E;
	static constexpr EGLenum SYNC_NEW_FRAME_NV = 0x321F;
	static constexpr EGLenum SYNC_PRIOR_COMMANDS_COMPLETE_NV = 0x30E6;
	static constexpr EGLenum SYNC_STATUS_NV = 0x30E7;
	static constexpr EGLenum SIGNALED_NV = 0x30E8;
	static constexpr EGLenum UNSIGNALED_NV = 0x30E9;
	static constexpr EGLenum SYNC_FLUSH_COMMANDS_BIT_NV = 0x0001;
	static constexpr EGLuint64KHR FOREVER_NV = 0xFFFFFFFFFFFFFFFF;
	static constexpr EGLenum ALREADY_SIGNALED_NV = 0x30EA;
	static constexpr EGLenum TIMEOUT_EXPIRED_NV = 0x30EB;
	static constexpr EGLenum CONDITION_SATISFIED_NV = 0x30EC;
	static constexpr EGLenum SYNC_TYPE_NV = 0x30ED;
	static constexpr EGLenum SYNC_CONDITION_NV = 0x30EE;
	static constexpr EGLenum SYNC_FENCE_NV = 0x30EF;
	static constexpr auto NO_SYNC_NV = EGL_CAST(EGLSyncNV,0);
	static constexpr EGLenum TRIPLE_BUFFER_NV = 0x3230;
	static constexpr EGLenum NATIVE_BUFFER_TIZEN = 0x32A0;
	static constexpr EGLenum NATIVE_SURFACE_TIZEN = 0x32A1;
	static constexpr EGLenum WAYLAND_BUFFER_WL = 0x31D5;
	static constexpr EGLenum WAYLAND_PLANE_WL = 0x31D6;
	static constexpr EGLenum TEXTURE_Y_U_V_WL = 0x31D7;
	static constexpr EGLenum TEXTURE_Y_UV_WL = 0x31D8;
	static constexpr EGLenum TEXTURE_Y_XUXV_WL = 0x31D9;
	static constexpr EGLenum TEXTURE_EXTERNAL_WL = 0x31DA;
	static constexpr EGLenum WAYLAND_Y_INVERTED_WL = 0x31DB;

	struct FuncDef {
		typedef EGLBoolean (GALEGLPROC* eglChooseConfig_t)(EGLDisplay dpy, const EGLint *attrib_list, EGLConfig *configs, EGLint config_size, EGLint *num_config);
		typedef EGLBoolean (GALEGLPROC* eglCopyBuffers_t)(EGLDisplay dpy, EGLSurface surface, EGLNativePixmapType target);
		typedef EGLContext (GALEGLPROC* eglCreateContext_t)(EGLDisplay dpy, EGLConfig config, EGLContext share_context, const EGLint *attrib_list);
		typedef EGLSurface (GALEGLPROC* eglCreatePbufferSurface_t)(EGLDisplay dpy, EGLConfig config, const EGLint *attrib_list);
		typedef EGLSurface (GALEGLPROC* eglCreatePixmapSurface_t)(EGLDisplay dpy, EGLConfig config, EGLNativePixmapType pixmap, const EGLint *attrib_list);
		typedef EGLSurface (GALEGLPROC* eglCreateWindowSurface_t)(EGLDisplay dpy, EGLConfig config, EGLNativeWindowType win, const EGLint *attrib_list);
		typedef EGLBoolean (GALEGLPROC* eglDestroyContext_t)(EGLDisplay dpy, EGLContext ctx);
		typedef EGLBoolean (GALEGLPROC* eglDestroySurface_t)(EGLDisplay dpy, EGLSurface surface);
		typedef EGLBoolean (GALEGLPROC* eglGetConfigAttrib_t)(EGLDisplay dpy, EGLConfig config, EGLint attribute, EGLint *value);
		typedef EGLBoolean (GALEGLPROC* eglGetConfigs_t)(EGLDisplay dpy, EGLConfig *configs, EGLint config_size, EGLint *num_config);
		typedef EGLDisplay (GALEGLPROC* eglGetCurrentDisplay_t)(void);
		typedef EGLSurface (GALEGLPROC* eglGetCurrentSurface_t)(EGLint readdraw);
		typedef EGLDisplay (GALEGLPROC* eglGetDisplay_t)(EGLNativeDisplayType display_id);
		typedef EGLint (GALEGLPROC* eglGetError_t)(void);
		typedef __eglMustCastToProperFunctionPointerType (GALEGLPROC* eglGetProcAddress_t)(const char *procname);
		typedef EGLBoolean (GALEGLPROC* eglInitialize_t)(EGLDisplay dpy, EGLint *major, EGLint *minor);
		typedef EGLBoolean (GALEGLPROC* eglMakeCurrent_t)(EGLDisplay dpy, EGLSurface draw, EGLSurface read, EGLContext ctx);
		typedef EGLBoolean (GALEGLPROC* eglQueryContext_t)(EGLDisplay dpy, EGLContext ctx, EGLint attribute, EGLint *value);
		typedef const char * (GALEGLPROC* eglQueryString_t)(EGLDisplay dpy, EGLint name);
		typedef EGLBoolean (GALEGLPROC* eglQuerySurface_t)(EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLint *value);
		typedef EGLBoolean (GALEGLPROC* eglSwapBuffers_t)(EGLDisplay dpy, EGLSurface surface);
		typedef EGLBoolean (GALEGLPROC* eglTerminate_t)(EGLDisplay dpy);
		typedef EGLBoolean (GALEGLPROC* eglWaitGL_t)(void);
		typedef EGLBoolean (GALEGLPROC* eglWaitNative_t)(EGLint engine);
		typedef EGLBoolean (GALEGLPROC* eglBindTexImage_t)(EGLDisplay dpy, EGLSurface surface, EGLint buffer);
		typedef EGLBoolean (GALEGLPROC* eglReleaseTexImage_t)(EGLDisplay dpy, EGLSurface surface, EGLint buffer);
		typedef EGLBoolean (GALEGLPROC* eglSurfaceAttrib_t)(EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLint value);
		typedef EGLBoolean (GALEGLPROC* eglSwapInterval_t)(EGLDisplay dpy, EGLint interval);
		typedef EGLBoolean (GALEGLPROC* eglBindAPI_t)(EGLenum api);
		typedef EGLenum (GALEGLPROC* eglQueryAPI_t)(void);
		typedef EGLSurface (GALEGLPROC* eglCreatePbufferFromClientBuffer_t)(EGLDisplay dpy, EGLenum buftype, EGLClientBuffer buffer, EGLConfig config, const EGLint *attrib_list);
		typedef EGLBoolean (GALEGLPROC* eglReleaseThread_t)(void);
		typedef EGLBoolean (GALEGLPROC* eglWaitClient_t)(void);
		typedef EGLContext (GALEGLPROC* eglGetCurrentContext_t)(void);
		typedef EGLSync (GALEGLPROC* eglCreateSync_t)(EGLDisplay dpy, EGLenum type, const EGLAttrib *attrib_list);
		typedef EGLBoolean (GALEGLPROC* eglDestroySync_t)(EGLDisplay dpy, EGLSync sync);
		typedef EGLint (GALEGLPROC* eglClientWaitSync_t)(EGLDisplay dpy, EGLSync sync, EGLint flags, EGLTime timeout);
		typedef EGLBoolean (GALEGLPROC* eglGetSyncAttrib_t)(EGLDisplay dpy, EGLSync sync, EGLint attribute, EGLAttrib *value);
		typedef EGLImage (GALEGLPROC* eglCreateImage_t)(EGLDisplay dpy, EGLContext ctx, EGLenum target, EGLClientBuffer buffer, const EGLAttrib *attrib_list);
		typedef EGLBoolean (GALEGLPROC* eglDestroyImage_t)(EGLDisplay dpy, EGLImage image);
		typedef EGLDisplay (GALEGLPROC* eglGetPlatformDisplay_t)(EGLenum platform, void *native_display, const EGLAttrib *attrib_list);
		typedef EGLSurface (GALEGLPROC* eglCreatePlatformWindowSurface_t)(EGLDisplay dpy, EGLConfig config, void *native_window, const EGLAttrib *attrib_list);
		typedef EGLSurface (GALEGLPROC* eglCreatePlatformPixmapSurface_t)(EGLDisplay dpy, EGLConfig config, void *native_pixmap, const EGLAttrib *attrib_list);
		typedef EGLBoolean (GALEGLPROC* eglWaitSync_t)(EGLDisplay dpy, EGLSync sync, EGLint flags);
		typedef EGLSyncKHR (GALEGLPROC* eglCreateSync64KHR_t)(EGLDisplay dpy, EGLenum type, const EGLAttribKHR *attrib_list);
		typedef EGLint (GALEGLPROC* eglDebugMessageControlKHR_t)(EGLDEBUGPROCKHR callback, const EGLAttrib *attrib_list);
		typedef EGLBoolean (GALEGLPROC* eglQueryDebugKHR_t)(EGLint attribute, EGLAttrib *value);
		typedef EGLint (GALEGLPROC* eglLabelObjectKHR_t)(EGLDisplay display, EGLenum objectType, EGLObjectKHR object, EGLLabelKHR label);
		typedef EGLBoolean (GALEGLPROC* eglQueryDisplayAttribKHR_t)(EGLDisplay dpy, EGLint name, EGLAttrib *value);
		typedef EGLSyncKHR (GALEGLPROC* eglCreateSyncKHR_t)(EGLDisplay dpy, EGLenum type, const EGLint *attrib_list);
		typedef EGLBoolean (GALEGLPROC* eglDestroySyncKHR_t)(EGLDisplay dpy, EGLSyncKHR sync);
		typedef EGLint (GALEGLPROC* eglClientWaitSyncKHR_t)(EGLDisplay dpy, EGLSyncKHR sync, EGLint flags, EGLTimeKHR timeout);
		typedef EGLBoolean (GALEGLPROC* eglGetSyncAttribKHR_t)(EGLDisplay dpy, EGLSyncKHR sync, EGLint attribute, EGLint *value);
		typedef EGLImageKHR (GALEGLPROC* eglCreateImageKHR_t)(EGLDisplay dpy, EGLContext ctx, EGLenum target, EGLClientBuffer buffer, const EGLint *attrib_list);
		typedef EGLBoolean (GALEGLPROC* eglDestroyImageKHR_t)(EGLDisplay dpy, EGLImageKHR image);
		typedef EGLBoolean (GALEGLPROC* eglLockSurfaceKHR_t)(EGLDisplay dpy, EGLSurface surface, const EGLint *attrib_list);
		typedef EGLBoolean (GALEGLPROC* eglUnlockSurfaceKHR_t)(EGLDisplay dpy, EGLSurface surface);
		typedef EGLBoolean (GALEGLPROC* eglQuerySurface64KHR_t)(EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLAttribKHR *value);
		typedef EGLBoolean (GALEGLPROC* eglSetDamageRegionKHR_t)(EGLDisplay dpy, EGLSurface surface, EGLint *rects, EGLint n_rects);
		typedef EGLBoolean (GALEGLPROC* eglSignalSyncKHR_t)(EGLDisplay dpy, EGLSyncKHR sync, EGLenum mode);
		typedef EGLStreamKHR (GALEGLPROC* eglCreateStreamKHR_t)(EGLDisplay dpy, const EGLint *attrib_list);
		typedef EGLBoolean (GALEGLPROC* eglDestroyStreamKHR_t)(EGLDisplay dpy, EGLStreamKHR stream);
		typedef EGLBoolean (GALEGLPROC* eglStreamAttribKHR_t)(EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLint value);
		typedef EGLBoolean (GALEGLPROC* eglQueryStreamKHR_t)(EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLint *value);
		typedef EGLBoolean (GALEGLPROC* eglQueryStreamu64KHR_t)(EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLuint64KHR *value);
		typedef EGLStreamKHR (GALEGLPROC* eglCreateStreamAttribKHR_t)(EGLDisplay dpy, const EGLAttrib *attrib_list);
		typedef EGLBoolean (GALEGLPROC* eglSetStreamAttribKHR_t)(EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLAttrib value);
		typedef EGLBoolean (GALEGLPROC* eglQueryStreamAttribKHR_t)(EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLAttrib *value);
		typedef EGLBoolean (GALEGLPROC* eglStreamConsumerAcquireAttribKHR_t)(EGLDisplay dpy, EGLStreamKHR stream, const EGLAttrib *attrib_list);
		typedef EGLBoolean (GALEGLPROC* eglStreamConsumerReleaseAttribKHR_t)(EGLDisplay dpy, EGLStreamKHR stream, const EGLAttrib *attrib_list);
		typedef EGLBoolean (GALEGLPROC* eglStreamConsumerGLTextureExternalKHR_t)(EGLDisplay dpy, EGLStreamKHR stream);
		typedef EGLBoolean (GALEGLPROC* eglStreamConsumerAcquireKHR_t)(EGLDisplay dpy, EGLStreamKHR stream);
		typedef EGLBoolean (GALEGLPROC* eglStreamConsumerReleaseKHR_t)(EGLDisplay dpy, EGLStreamKHR stream);
		typedef EGLNativeFileDescriptorKHR (GALEGLPROC* eglGetStreamFileDescriptorKHR_t)(EGLDisplay dpy, EGLStreamKHR stream);
		typedef EGLStreamKHR (GALEGLPROC* eglCreateStreamFromFileDescriptorKHR_t)(EGLDisplay dpy, EGLNativeFileDescriptorKHR file_descriptor);
		typedef EGLBoolean (GALEGLPROC* eglQueryStreamTimeKHR_t)(EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLTimeKHR *value);
		typedef EGLSurface (GALEGLPROC* eglCreateStreamProducerSurfaceKHR_t)(EGLDisplay dpy, EGLConfig config, EGLStreamKHR stream, const EGLint *attrib_list);
		typedef EGLBoolean (GALEGLPROC* eglSwapBuffersWithDamageKHR_t)(EGLDisplay dpy, EGLSurface surface, const EGLint *rects, EGLint n_rects);
		typedef EGLint (GALEGLPROC* eglWaitSyncKHR_t)(EGLDisplay dpy, EGLSyncKHR sync, EGLint flags);
		typedef void (GALEGLPROC* eglSetBlobCacheFuncsANDROID_t)(EGLDisplay dpy, EGLSetBlobFuncANDROID set, EGLGetBlobFuncANDROID get);
		typedef EGLClientBuffer (GALEGLPROC* eglCreateNativeClientBufferANDROID_t)(const EGLint *attrib_list);
		typedef EGLBoolean (GALEGLPROC* eglGetCompositorTimingSupportedANDROID_t)(EGLDisplay dpy, EGLSurface surface, EGLint name);
		typedef EGLBoolean (GALEGLPROC* eglGetCompositorTimingANDROID_t)(EGLDisplay dpy, EGLSurface surface, EGLint numTimestamps,  const EGLint *names, EGLnsecsANDROID *values);
		typedef EGLBoolean (GALEGLPROC* eglGetNextFrameIdANDROID_t)(EGLDisplay dpy, EGLSurface surface, EGLuint64KHR *frameId);
		typedef EGLBoolean (GALEGLPROC* eglGetFrameTimestampSupportedANDROID_t)(EGLDisplay dpy, EGLSurface surface, EGLint timestamp);
		typedef EGLBoolean (GALEGLPROC* eglGetFrameTimestampsANDROID_t)(EGLDisplay dpy, EGLSurface surface, EGLuint64KHR frameId, EGLint numTimestamps,  const EGLint *timestamps, EGLnsecsANDROID *values);
		typedef EGLClientBuffer (GALEGLPROC* eglGetNativeClientBufferANDROID_t)(const struct AHardwareBuffer *buffer);
		typedef EGLint (GALEGLPROC* eglDupNativeFenceFDANDROID_t)(EGLDisplay dpy, EGLSyncKHR sync);
		typedef EGLBoolean (GALEGLPROC* eglPresentationTimeANDROID_t)(EGLDisplay dpy, EGLSurface surface, EGLnsecsANDROID time);
		typedef EGLBoolean (GALEGLPROC* eglQuerySurfacePointerANGLE_t)(EGLDisplay dpy, EGLSurface surface, EGLint attribute, void **value);
		typedef EGLBoolean (GALEGLPROC* eglGetMscRateANGLE_t)(EGLDisplay dpy, EGLSurface surface, EGLint *numerator, EGLint *denominator);
		typedef EGLBoolean (GALEGLPROC* eglClientSignalSyncEXT_t)(EGLDisplay dpy, EGLSync sync, const EGLAttrib *attrib_list);
		typedef EGLBoolean (GALEGLPROC* eglCompositorSetContextListEXT_t)(const EGLint *external_ref_ids, EGLint num_entries);
		typedef EGLBoolean (GALEGLPROC* eglCompositorSetContextAttributesEXT_t)(EGLint external_ref_id, const EGLint *context_attributes, EGLint num_entries);
		typedef EGLBoolean (GALEGLPROC* eglCompositorSetWindowListEXT_t)(EGLint external_ref_id, const EGLint *external_win_ids, EGLint num_entries);
		typedef EGLBoolean (GALEGLPROC* eglCompositorSetWindowAttributesEXT_t)(EGLint external_win_id, const EGLint *window_attributes, EGLint num_entries);
		typedef EGLBoolean (GALEGLPROC* eglCompositorBindTexWindowEXT_t)(EGLint external_win_id);
		typedef EGLBoolean (GALEGLPROC* eglCompositorSetSizeEXT_t)(EGLint external_win_id, EGLint width, EGLint height);
		typedef EGLBoolean (GALEGLPROC* eglCompositorSwapPolicyEXT_t)(EGLint external_win_id, EGLint policy);
		typedef EGLBoolean (GALEGLPROC* eglQueryDeviceAttribEXT_t)(EGLDeviceEXT device, EGLint attribute, EGLAttrib *value);
		typedef const char * (GALEGLPROC* eglQueryDeviceStringEXT_t)(EGLDeviceEXT device, EGLint name);
		typedef EGLBoolean (GALEGLPROC* eglQueryDevicesEXT_t)(EGLint max_devices, EGLDeviceEXT *devices, EGLint *num_devices);
		typedef EGLBoolean (GALEGLPROC* eglQueryDisplayAttribEXT_t)(EGLDisplay dpy, EGLint attribute, EGLAttrib *value);
		typedef EGLBoolean (GALEGLPROC* eglQueryDeviceBinaryEXT_t)(EGLDeviceEXT device, EGLint name, EGLint max_size, void *value, EGLint *size);
		typedef EGLBoolean (GALEGLPROC* eglQueryDmaBufFormatsEXT_t)(EGLDisplay dpy, EGLint max_formats, EGLint *formats, EGLint *num_formats);
		typedef EGLBoolean (GALEGLPROC* eglQueryDmaBufModifiersEXT_t)(EGLDisplay dpy, EGLint format, EGLint max_modifiers, EGLuint64KHR *modifiers, EGLBoolean *external_only, EGLint *num_modifiers);
		typedef EGLBoolean (GALEGLPROC* eglGetOutputLayersEXT_t)(EGLDisplay dpy, const EGLAttrib *attrib_list, EGLOutputLayerEXT *layers, EGLint max_layers, EGLint *num_layers);
		typedef EGLBoolean (GALEGLPROC* eglGetOutputPortsEXT_t)(EGLDisplay dpy, const EGLAttrib *attrib_list, EGLOutputPortEXT *ports, EGLint max_ports, EGLint *num_ports);
		typedef EGLBoolean (GALEGLPROC* eglOutputLayerAttribEXT_t)(EGLDisplay dpy, EGLOutputLayerEXT layer, EGLint attribute, EGLAttrib value);
		typedef EGLBoolean (GALEGLPROC* eglQueryOutputLayerAttribEXT_t)(EGLDisplay dpy, EGLOutputLayerEXT layer, EGLint attribute, EGLAttrib *value);
		typedef const char * (GALEGLPROC* eglQueryOutputLayerStringEXT_t)(EGLDisplay dpy, EGLOutputLayerEXT layer, EGLint name);
		typedef EGLBoolean (GALEGLPROC* eglOutputPortAttribEXT_t)(EGLDisplay dpy, EGLOutputPortEXT port, EGLint attribute, EGLAttrib value);
		typedef EGLBoolean (GALEGLPROC* eglQueryOutputPortAttribEXT_t)(EGLDisplay dpy, EGLOutputPortEXT port, EGLint attribute, EGLAttrib *value);
		typedef const char * (GALEGLPROC* eglQueryOutputPortStringEXT_t)(EGLDisplay dpy, EGLOutputPortEXT port, EGLint name);
		typedef EGLDisplay (GALEGLPROC* eglGetPlatformDisplayEXT_t)(EGLenum platform, void *native_display, const EGLint *attrib_list);
		typedef EGLSurface (GALEGLPROC* eglCreatePlatformWindowSurfaceEXT_t)(EGLDisplay dpy, EGLConfig config, void *native_window, const EGLint *attrib_list);
		typedef EGLSurface (GALEGLPROC* eglCreatePlatformPixmapSurfaceEXT_t)(EGLDisplay dpy, EGLConfig config, void *native_pixmap, const EGLint *attrib_list);
		typedef EGLBoolean (GALEGLPROC* eglStreamConsumerOutputEXT_t)(EGLDisplay dpy, EGLStreamKHR stream, EGLOutputLayerEXT layer);
		typedef EGLBoolean (GALEGLPROC* eglQuerySupportedCompressionRatesEXT_t)(EGLDisplay dpy, EGLConfig config, const EGLAttrib *attrib_list, EGLint *rates, EGLint rate_size, EGLint *num_rates);
		typedef EGLBoolean (GALEGLPROC* eglSwapBuffersWithDamageEXT_t)(EGLDisplay dpy, EGLSurface surface, const EGLint *rects, EGLint n_rects);
		typedef EGLBoolean (GALEGLPROC* eglUnsignalSyncEXT_t)(EGLDisplay dpy, EGLSync sync, const EGLAttrib *attrib_list);
		typedef EGLSurface (GALEGLPROC* eglCreatePixmapSurfaceHI_t)(EGLDisplay dpy, EGLConfig config, struct EGLClientPixmapHI *pixmap);
		typedef EGLImageKHR (GALEGLPROC* eglCreateDRMImageMESA_t)(EGLDisplay dpy, const EGLint *attrib_list);
		typedef EGLBoolean (GALEGLPROC* eglExportDRMImageMESA_t)(EGLDisplay dpy, EGLImageKHR image, EGLint *name, EGLint *handle, EGLint *stride);
		typedef EGLBoolean (GALEGLPROC* eglExportDMABUFImageQueryMESA_t)(EGLDisplay dpy, EGLImageKHR image, int *fourcc, int *num_planes, EGLuint64KHR *modifiers);
		typedef EGLBoolean (GALEGLPROC* eglExportDMABUFImageMESA_t)(EGLDisplay dpy, EGLImageKHR image, int *fds, EGLint *strides, EGLint *offsets);
		typedef char * (GALEGLPROC* eglGetDisplayDriverConfig_t)(EGLDisplay dpy);
		typedef const char * (GALEGLPROC* eglGetDisplayDriverName_t)(EGLDisplay dpy);
		typedef EGLBoolean (GALEGLPROC* eglSwapBuffersRegionNOK_t)(EGLDisplay dpy, EGLSurface surface, EGLint numRects, const EGLint *rects);
		typedef EGLBoolean (GALEGLPROC* eglSwapBuffersRegion2NOK_t)(EGLDisplay dpy, EGLSurface surface, EGLint numRects, const EGLint *rects);
		typedef EGLBoolean (GALEGLPROC* eglQueryNativeDisplayNV_t)(EGLDisplay dpy, EGLNativeDisplayType *display_id);
		typedef EGLBoolean (GALEGLPROC* eglQueryNativeWindowNV_t)(EGLDisplay dpy, EGLSurface surf, EGLNativeWindowType *window);
		typedef EGLBoolean (GALEGLPROC* eglQueryNativePixmapNV_t)(EGLDisplay dpy, EGLSurface surf, EGLNativePixmapType *pixmap);
		typedef EGLBoolean (GALEGLPROC* eglPostSubBufferNV_t)(EGLDisplay dpy, EGLSurface surface, EGLint x, EGLint y, EGLint width, EGLint height);
		typedef EGLBoolean (GALEGLPROC* eglStreamImageConsumerConnectNV_t)(EGLDisplay dpy, EGLStreamKHR stream, EGLint num_modifiers, const EGLuint64KHR *modifiers, const EGLAttrib *attrib_list);
		typedef EGLint (GALEGLPROC* eglQueryStreamConsumerEventNV_t)(EGLDisplay dpy, EGLStreamKHR stream, EGLTime timeout, EGLenum *event, EGLAttrib *aux);
		typedef EGLBoolean (GALEGLPROC* eglStreamAcquireImageNV_t)(EGLDisplay dpy, EGLStreamKHR stream, EGLImage *pImage, EGLSync sync);
		typedef EGLBoolean (GALEGLPROC* eglStreamReleaseImageNV_t)(EGLDisplay dpy, EGLStreamKHR stream, EGLImage image, EGLSync sync);
		typedef EGLBoolean (GALEGLPROC* eglStreamConsumerGLTextureExternalAttribsNV_t)(EGLDisplay dpy, EGLStreamKHR stream, const EGLAttrib *attrib_list);
		typedef EGLBoolean (GALEGLPROC* eglStreamFlushNV_t)(EGLDisplay dpy, EGLStreamKHR stream);
		typedef EGLBoolean (GALEGLPROC* eglQueryDisplayAttribNV_t)(EGLDisplay dpy, EGLint attribute, EGLAttrib *value);
		typedef EGLBoolean (GALEGLPROC* eglSetStreamMetadataNV_t)(EGLDisplay dpy, EGLStreamKHR stream, EGLint n, EGLint offset, EGLint size, const void *data);
		typedef EGLBoolean (GALEGLPROC* eglQueryStreamMetadataNV_t)(EGLDisplay dpy, EGLStreamKHR stream, EGLenum name, EGLint n, EGLint offset, EGLint size, void *data);
		typedef EGLBoolean (GALEGLPROC* eglResetStreamNV_t)(EGLDisplay dpy, EGLStreamKHR stream);
		typedef EGLSyncKHR (GALEGLPROC* eglCreateStreamSyncNV_t)(EGLDisplay dpy, EGLStreamKHR stream, EGLenum type, const EGLint *attrib_list);
		typedef EGLSyncNV (GALEGLPROC* eglCreateFenceSyncNV_t)(EGLDisplay dpy, EGLenum condition, const EGLint *attrib_list);
		typedef EGLBoolean (GALEGLPROC* eglDestroySyncNV_t)(EGLSyncNV sync);
		typedef EGLBoolean (GALEGLPROC* eglFenceNV_t)(EGLSyncNV sync);
		typedef EGLint (GALEGLPROC* eglClientWaitSyncNV_t)(EGLSyncNV sync, EGLint flags, EGLTimeNV timeout);
		typedef EGLBoolean (GALEGLPROC* eglSignalSyncNV_t)(EGLSyncNV sync, EGLenum mode);
		typedef EGLBoolean (GALEGLPROC* eglGetSyncAttribNV_t)(EGLSyncNV sync, EGLint attribute, EGLint *value);
		typedef EGLuint64NV (GALEGLPROC* eglGetSystemTimeFrequencyNV_t)(void);
		typedef EGLuint64NV (GALEGLPROC* eglGetSystemTimeNV_t)(void);
		typedef EGLBoolean (GALEGLPROC* eglBindWaylandDisplayWL_t)(EGLDisplay dpy, struct wl_display *display);
		typedef EGLBoolean (GALEGLPROC* eglUnbindWaylandDisplayWL_t)(EGLDisplay dpy, struct wl_display *display);
		typedef EGLBoolean (GALEGLPROC* eglQueryWaylandBufferWL_t)(EGLDisplay dpy, struct wl_resource *buffer, EGLint attribute, EGLint *value);
		typedef struct wl_buffer * (GALEGLPROC* eglCreateWaylandBufferFromImageWL_t)(EGLDisplay dpy, EGLImageKHR image);
	};

	struct {
		FuncDef::eglChooseConfig_t ChooseConfig;
		FuncDef::eglCopyBuffers_t CopyBuffers;
		FuncDef::eglCreateContext_t CreateContext;
		FuncDef::eglCreatePbufferSurface_t CreatePbufferSurface;
		FuncDef::eglCreatePixmapSurface_t CreatePixmapSurface;
		FuncDef::eglCreateWindowSurface_t CreateWindowSurface;
		FuncDef::eglDestroyContext_t DestroyContext;
		FuncDef::eglDestroySurface_t DestroySurface;
		FuncDef::eglGetConfigAttrib_t GetConfigAttrib;
		FuncDef::eglGetConfigs_t GetConfigs;
		FuncDef::eglGetCurrentDisplay_t GetCurrentDisplay;
		FuncDef::eglGetCurrentSurface_t GetCurrentSurface;
		FuncDef::eglGetDisplay_t GetDisplay;
		FuncDef::eglGetError_t GetError;
		FuncDef::eglGetProcAddress_t GetProcAddress;
		FuncDef::eglInitialize_t Initialize;
		FuncDef::eglMakeCurrent_t MakeCurrent;
		FuncDef::eglQueryContext_t QueryContext;
		FuncDef::eglQueryString_t QueryString;
		FuncDef::eglQuerySurface_t QuerySurface;
		FuncDef::eglSwapBuffers_t SwapBuffers;
		FuncDef::eglTerminate_t Terminate;
		FuncDef::eglWaitGL_t WaitGL;
		FuncDef::eglWaitNative_t WaitNative;
		FuncDef::eglBindTexImage_t BindTexImage;
		FuncDef::eglReleaseTexImage_t ReleaseTexImage;
		FuncDef::eglSurfaceAttrib_t SurfaceAttrib;
		FuncDef::eglSwapInterval_t SwapInterval;
		FuncDef::eglBindAPI_t BindAPI;
		FuncDef::eglQueryAPI_t QueryAPI;
		FuncDef::eglCreatePbufferFromClientBuffer_t CreatePbufferFromClientBuffer;
		FuncDef::eglReleaseThread_t ReleaseThread;
		FuncDef::eglWaitClient_t WaitClient;
		FuncDef::eglGetCurrentContext_t GetCurrentContext;
		FuncDef::eglCreateSync_t CreateSync;
		FuncDef::eglDestroySync_t DestroySync;
		FuncDef::eglClientWaitSync_t ClientWaitSync;
		FuncDef::eglGetSyncAttrib_t GetSyncAttrib;
		FuncDef::eglCreateImage_t CreateImage;
		FuncDef::eglDestroyImage_t DestroyImage;
		FuncDef::eglGetPlatformDisplay_t GetPlatformDisplay;
		FuncDef::eglCreatePlatformWindowSurface_t CreatePlatformWindowSurface;
		FuncDef::eglCreatePlatformPixmapSurface_t CreatePlatformPixmapSurface;
		FuncDef::eglWaitSync_t WaitSync;
		FuncDef::eglCreateSync64KHR_t CreateSync64KHR;
		FuncDef::eglDebugMessageControlKHR_t DebugMessageControlKHR;
		FuncDef::eglQueryDebugKHR_t QueryDebugKHR;
		FuncDef::eglLabelObjectKHR_t LabelObjectKHR;
		FuncDef::eglQueryDisplayAttribKHR_t QueryDisplayAttribKHR;
		FuncDef::eglCreateSyncKHR_t CreateSyncKHR;
		FuncDef::eglDestroySyncKHR_t DestroySyncKHR;
		FuncDef::eglClientWaitSyncKHR_t ClientWaitSyncKHR;
		FuncDef::eglGetSyncAttribKHR_t GetSyncAttribKHR;
		FuncDef::eglCreateImageKHR_t CreateImageKHR;
		FuncDef::eglDestroyImageKHR_t DestroyImageKHR;
		FuncDef::eglLockSurfaceKHR_t LockSurfaceKHR;
		FuncDef::eglUnlockSurfaceKHR_t UnlockSurfaceKHR;
		FuncDef::eglQuerySurface64KHR_t QuerySurface64KHR;
		FuncDef::eglSetDamageRegionKHR_t SetDamageRegionKHR;
		FuncDef::eglSignalSyncKHR_t SignalSyncKHR;
		FuncDef::eglCreateStreamKHR_t CreateStreamKHR;
		FuncDef::eglDestroyStreamKHR_t DestroyStreamKHR;
		FuncDef::eglStreamAttribKHR_t StreamAttribKHR;
		FuncDef::eglQueryStreamKHR_t QueryStreamKHR;
		FuncDef::eglQueryStreamu64KHR_t QueryStreamu64KHR;
		FuncDef::eglCreateStreamAttribKHR_t CreateStreamAttribKHR;
		FuncDef::eglSetStreamAttribKHR_t SetStreamAttribKHR;
		FuncDef::eglQueryStreamAttribKHR_t QueryStreamAttribKHR;
		FuncDef::eglStreamConsumerAcquireAttribKHR_t StreamConsumerAcquireAttribKHR;
		FuncDef::eglStreamConsumerReleaseAttribKHR_t StreamConsumerReleaseAttribKHR;
		FuncDef::eglStreamConsumerGLTextureExternalKHR_t StreamConsumerGLTextureExternalKHR;
		FuncDef::eglStreamConsumerAcquireKHR_t StreamConsumerAcquireKHR;
		FuncDef::eglStreamConsumerReleaseKHR_t StreamConsumerReleaseKHR;
		FuncDef::eglGetStreamFileDescriptorKHR_t GetStreamFileDescriptorKHR;
		FuncDef::eglCreateStreamFromFileDescriptorKHR_t CreateStreamFromFileDescriptorKHR;
		FuncDef::eglQueryStreamTimeKHR_t QueryStreamTimeKHR;
		FuncDef::eglCreateStreamProducerSurfaceKHR_t CreateStreamProducerSurfaceKHR;
		FuncDef::eglSwapBuffersWithDamageKHR_t SwapBuffersWithDamageKHR;
		FuncDef::eglWaitSyncKHR_t WaitSyncKHR;
		FuncDef::eglSetBlobCacheFuncsANDROID_t SetBlobCacheFuncsANDROID;
		FuncDef::eglCreateNativeClientBufferANDROID_t CreateNativeClientBufferANDROID;
		FuncDef::eglGetCompositorTimingSupportedANDROID_t GetCompositorTimingSupportedANDROID;
		FuncDef::eglGetCompositorTimingANDROID_t GetCompositorTimingANDROID;
		FuncDef::eglGetNextFrameIdANDROID_t GetNextFrameIdANDROID;
		FuncDef::eglGetFrameTimestampSupportedANDROID_t GetFrameTimestampSupportedANDROID;
		FuncDef::eglGetFrameTimestampsANDROID_t GetFrameTimestampsANDROID;
		FuncDef::eglGetNativeClientBufferANDROID_t GetNativeClientBufferANDROID;
		FuncDef::eglDupNativeFenceFDANDROID_t DupNativeFenceFDANDROID;
		FuncDef::eglPresentationTimeANDROID_t PresentationTimeANDROID;
		FuncDef::eglQuerySurfacePointerANGLE_t QuerySurfacePointerANGLE;
		FuncDef::eglGetMscRateANGLE_t GetMscRateANGLE;
		FuncDef::eglClientSignalSyncEXT_t ClientSignalSyncEXT;
		FuncDef::eglCompositorSetContextListEXT_t CompositorSetContextListEXT;
		FuncDef::eglCompositorSetContextAttributesEXT_t CompositorSetContextAttributesEXT;
		FuncDef::eglCompositorSetWindowListEXT_t CompositorSetWindowListEXT;
		FuncDef::eglCompositorSetWindowAttributesEXT_t CompositorSetWindowAttributesEXT;
		FuncDef::eglCompositorBindTexWindowEXT_t CompositorBindTexWindowEXT;
		FuncDef::eglCompositorSetSizeEXT_t CompositorSetSizeEXT;
		FuncDef::eglCompositorSwapPolicyEXT_t CompositorSwapPolicyEXT;
		FuncDef::eglQueryDeviceAttribEXT_t QueryDeviceAttribEXT;
		FuncDef::eglQueryDeviceStringEXT_t QueryDeviceStringEXT;
		FuncDef::eglQueryDevicesEXT_t QueryDevicesEXT;
		FuncDef::eglQueryDisplayAttribEXT_t QueryDisplayAttribEXT;
		FuncDef::eglQueryDeviceBinaryEXT_t QueryDeviceBinaryEXT;
		FuncDef::eglQueryDmaBufFormatsEXT_t QueryDmaBufFormatsEXT;
		FuncDef::eglQueryDmaBufModifiersEXT_t QueryDmaBufModifiersEXT;
		FuncDef::eglGetOutputLayersEXT_t GetOutputLayersEXT;
		FuncDef::eglGetOutputPortsEXT_t GetOutputPortsEXT;
		FuncDef::eglOutputLayerAttribEXT_t OutputLayerAttribEXT;
		FuncDef::eglQueryOutputLayerAttribEXT_t QueryOutputLayerAttribEXT;
		FuncDef::eglQueryOutputLayerStringEXT_t QueryOutputLayerStringEXT;
		FuncDef::eglOutputPortAttribEXT_t OutputPortAttribEXT;
		FuncDef::eglQueryOutputPortAttribEXT_t QueryOutputPortAttribEXT;
		FuncDef::eglQueryOutputPortStringEXT_t QueryOutputPortStringEXT;
		FuncDef::eglGetPlatformDisplayEXT_t GetPlatformDisplayEXT;
		FuncDef::eglCreatePlatformWindowSurfaceEXT_t CreatePlatformWindowSurfaceEXT;
		FuncDef::eglCreatePlatformPixmapSurfaceEXT_t CreatePlatformPixmapSurfaceEXT;
		FuncDef::eglStreamConsumerOutputEXT_t StreamConsumerOutputEXT;
		FuncDef::eglQuerySupportedCompressionRatesEXT_t QuerySupportedCompressionRatesEXT;
		FuncDef::eglSwapBuffersWithDamageEXT_t SwapBuffersWithDamageEXT;
		FuncDef::eglUnsignalSyncEXT_t UnsignalSyncEXT;
		FuncDef::eglCreatePixmapSurfaceHI_t CreatePixmapSurfaceHI;
		FuncDef::eglCreateDRMImageMESA_t CreateDRMImageMESA;
		FuncDef::eglExportDRMImageMESA_t ExportDRMImageMESA;
		FuncDef::eglExportDMABUFImageQueryMESA_t ExportDMABUFImageQueryMESA;
		FuncDef::eglExportDMABUFImageMESA_t ExportDMABUFImageMESA;
		FuncDef::eglGetDisplayDriverConfig_t GetDisplayDriverConfig;
		FuncDef::eglGetDisplayDriverName_t GetDisplayDriverName;
		FuncDef::eglSwapBuffersRegionNOK_t SwapBuffersRegionNOK;
		FuncDef::eglSwapBuffersRegion2NOK_t SwapBuffersRegion2NOK;
		FuncDef::eglQueryNativeDisplayNV_t QueryNativeDisplayNV;
		FuncDef::eglQueryNativeWindowNV_t QueryNativeWindowNV;
		FuncDef::eglQueryNativePixmapNV_t QueryNativePixmapNV;
		FuncDef::eglPostSubBufferNV_t PostSubBufferNV;
		FuncDef::eglStreamImageConsumerConnectNV_t StreamImageConsumerConnectNV;
		FuncDef::eglQueryStreamConsumerEventNV_t QueryStreamConsumerEventNV;
		FuncDef::eglStreamAcquireImageNV_t StreamAcquireImageNV;
		FuncDef::eglStreamReleaseImageNV_t StreamReleaseImageNV;
		FuncDef::eglStreamConsumerGLTextureExternalAttribsNV_t StreamConsumerGLTextureExternalAttribsNV;
		FuncDef::eglStreamFlushNV_t StreamFlushNV;
		FuncDef::eglQueryDisplayAttribNV_t QueryDisplayAttribNV;
		FuncDef::eglSetStreamMetadataNV_t SetStreamMetadataNV;
		FuncDef::eglQueryStreamMetadataNV_t QueryStreamMetadataNV;
		FuncDef::eglResetStreamNV_t ResetStreamNV;
		FuncDef::eglCreateStreamSyncNV_t CreateStreamSyncNV;
		FuncDef::eglCreateFenceSyncNV_t CreateFenceSyncNV;
		FuncDef::eglDestroySyncNV_t DestroySyncNV;
		FuncDef::eglFenceNV_t FenceNV;
		FuncDef::eglClientWaitSyncNV_t ClientWaitSyncNV;
		FuncDef::eglSignalSyncNV_t SignalSyncNV;
		FuncDef::eglGetSyncAttribNV_t GetSyncAttribNV;
		FuncDef::eglGetSystemTimeFrequencyNV_t GetSystemTimeFrequencyNV;
		FuncDef::eglGetSystemTimeNV_t GetSystemTimeNV;
		FuncDef::eglBindWaylandDisplayWL_t BindWaylandDisplayWL;
		FuncDef::eglUnbindWaylandDisplayWL_t UnbindWaylandDisplayWL;
		FuncDef::eglQueryWaylandBufferWL_t QueryWaylandBufferWL;
		FuncDef::eglCreateWaylandBufferFromImageWL_t CreateWaylandBufferFromImageWL;
	};

	EGLproc ProcList[157];

	static constexpr const char* ProcList[157] = {
		"eglChooseConfig",
		"eglCopyBuffers",
		"eglCreateContext",
		"eglCreatePbufferSurface",
		"eglCreatePixmapSurface",
		"eglCreateWindowSurface",
		"eglDestroyContext",
		"eglDestroySurface",
		"eglGetConfigAttrib",
		"eglGetConfigs",
		"eglGetCurrentDisplay",
		"eglGetCurrentSurface",
		"eglGetDisplay",
		"eglGetError",
		"eglGetProcAddress",
		"eglInitialize",
		"eglMakeCurrent",
		"eglQueryContext",
		"eglQueryString",
		"eglQuerySurface",
		"eglSwapBuffers",
		"eglTerminate",
		"eglWaitGL",
		"eglWaitNative",
		"eglBindTexImage",
		"eglReleaseTexImage",
		"eglSurfaceAttrib",
		"eglSwapInterval",
		"eglBindAPI",
		"eglQueryAPI",
		"eglCreatePbufferFromClientBuffer",
		"eglReleaseThread",
		"eglWaitClient",
		"eglGetCurrentContext",
		"eglCreateSync",
		"eglDestroySync",
		"eglClientWaitSync",
		"eglGetSyncAttrib",
		"eglCreateImage",
		"eglDestroyImage",
		"eglGetPlatformDisplay",
		"eglCreatePlatformWindowSurface",
		"eglCreatePlatformPixmapSurface",
		"eglWaitSync",
		"eglCreateSync64KHR",
		"eglDebugMessageControlKHR",
		"eglQueryDebugKHR",
		"eglLabelObjectKHR",
		"eglQueryDisplayAttribKHR",
		"eglCreateSyncKHR",
		"eglDestroySyncKHR",
		"eglClientWaitSyncKHR",
		"eglGetSyncAttribKHR",
		"eglCreateImageKHR",
		"eglDestroyImageKHR",
		"eglLockSurfaceKHR",
		"eglUnlockSurfaceKHR",
		"eglQuerySurface64KHR",
		"eglSetDamageRegionKHR",
		"eglSignalSyncKHR",
		"eglCreateStreamKHR",
		"eglDestroyStreamKHR",
		"eglStreamAttribKHR",
		"eglQueryStreamKHR",
		"eglQueryStreamu64KHR",
		"eglCreateStreamAttribKHR",
		"eglSetStreamAttribKHR",
		"eglQueryStreamAttribKHR",
		"eglStreamConsumerAcquireAttribKHR",
		"eglStreamConsumerReleaseAttribKHR",
		"eglStreamConsumerGLTextureExternalKHR",
		"eglStreamConsumerAcquireKHR",
		"eglStreamConsumerReleaseKHR",
		"eglGetStreamFileDescriptorKHR",
		"eglCreateStreamFromFileDescriptorKHR",
		"eglQueryStreamTimeKHR",
		"eglCreateStreamProducerSurfaceKHR",
		"eglSwapBuffersWithDamageKHR",
		"eglWaitSyncKHR",
		"eglSetBlobCacheFuncsANDROID",
		"eglCreateNativeClientBufferANDROID",
		"eglGetCompositorTimingSupportedANDROID",
		"eglGetCompositorTimingANDROID",
		"eglGetNextFrameIdANDROID",
		"eglGetFrameTimestampSupportedANDROID",
		"eglGetFrameTimestampsANDROID",
		"eglGetNativeClientBufferANDROID",
		"eglDupNativeFenceFDANDROID",
		"eglPresentationTimeANDROID",
		"eglQuerySurfacePointerANGLE",
		"eglGetMscRateANGLE",
		"eglClientSignalSyncEXT",
		"eglCompositorSetContextListEXT",
		"eglCompositorSetContextAttributesEXT",
		"eglCompositorSetWindowListEXT",
		"eglCompositorSetWindowAttributesEXT",
		"eglCompositorBindTexWindowEXT",
		"eglCompositorSetSizeEXT",
		"eglCompositorSwapPolicyEXT",
		"eglQueryDeviceAttribEXT",
		"eglQueryDeviceStringEXT",
		"eglQueryDevicesEXT",
		"eglQueryDisplayAttribEXT",
		"eglQueryDeviceBinaryEXT",
		"eglQueryDmaBufFormatsEXT",
		"eglQueryDmaBufModifiersEXT",
		"eglGetOutputLayersEXT",
		"eglGetOutputPortsEXT",
		"eglOutputLayerAttribEXT",
		"eglQueryOutputLayerAttribEXT",
		"eglQueryOutputLayerStringEXT",
		"eglOutputPortAttribEXT",
		"eglQueryOutputPortAttribEXT",
		"eglQueryOutputPortStringEXT",
		"eglGetPlatformDisplayEXT",
		"eglCreatePlatformWindowSurfaceEXT",
		"eglCreatePlatformPixmapSurfaceEXT",
		"eglStreamConsumerOutputEXT",
		"eglQuerySupportedCompressionRatesEXT",
		"eglSwapBuffersWithDamageEXT",
		"eglUnsignalSyncEXT",
		"eglCreatePixmapSurfaceHI",
		"eglCreateDRMImageMESA",
		"eglExportDRMImageMESA",
		"eglExportDMABUFImageQueryMESA",
		"eglExportDMABUFImageMESA",
		"eglGetDisplayDriverConfig",
		"eglGetDisplayDriverName",
		"eglSwapBuffersRegionNOK",
		"eglSwapBuffersRegion2NOK",
		"eglQueryNativeDisplayNV",
		"eglQueryNativeWindowNV",
		"eglQueryNativePixmapNV",
		"eglPostSubBufferNV",
		"eglStreamImageConsumerConnectNV",
		"eglQueryStreamConsumerEventNV",
		"eglStreamAcquireImageNV",
		"eglStreamReleaseImageNV",
		"eglStreamConsumerGLTextureExternalAttribsNV",
		"eglStreamFlushNV",
		"eglQueryDisplayAttribNV",
		"eglSetStreamMetadataNV",
		"eglQueryStreamMetadataNV",
		"eglResetStreamNV",
		"eglCreateStreamSyncNV",
		"eglCreateFenceSyncNV",
		"eglDestroySyncNV",
		"eglFenceNV",
		"eglClientWaitSyncNV",
		"eglSignalSyncNV",
		"eglGetSyncAttribNV",
		"eglGetSystemTimeFrequencyNV",
		"eglGetSystemTimeNV",
		"eglBindWaylandDisplayWL",
		"eglUnbindWaylandDisplayWL",
		"eglQueryWaylandBufferWL",
		"eglCreateWaylandBufferFromImageWL",
	};
};
#endif /* GAL_EGL_HEADER_H */
