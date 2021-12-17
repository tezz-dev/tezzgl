//
// Created by tezz-io on 12/12/21.
//

#ifndef TEZZGL_WINDOWHINT_H
#define TEZZGL_WINDOWHINT_H

#include "GLFW/glfw3.h"

enum class WindowHint {
    focused = GLFW_FOCUSED,
    iconified = GLFW_ICONIFIED,
    resizable = GLFW_RESIZABLE,
    visible = GLFW_VISIBLE,
    decorated = GLFW_DECORATED,
    auto_iconify = GLFW_AUTO_ICONIFY,
    floating = GLFW_FLOATING,
    maximized = GLFW_MAXIMIZED,
    center_cursor = GLFW_CENTER_CURSOR,
    transparent_framebuffer = GLFW_TRANSPARENT_FRAMEBUFFER,
    hovered = GLFW_HOVERED,
    focus_on_show = GLFW_FOCUS_ON_SHOW,
    red_bits = GLFW_RED_BITS,
    green_bits = GLFW_GREEN_BITS,
    blue_bits = GLFW_BLUE_BITS,
    alpha_bits = GLFW_ALPHA_BITS,
    depth_bits = GLFW_DEPTH_BITS,
    stencil_bits = GLFW_STENCIL_BITS,
    accum_red_bits = GLFW_ACCUM_RED_BITS,
    accum_green_bits = GLFW_ACCUM_GREEN_BITS,
    accum_blue_bits = GLFW_ACCUM_BLUE_BITS,
    accum_alpha_bits = GLFW_ACCUM_ALPHA_BITS,
    aux_buffers = GLFW_AUX_BUFFERS,
    stereo = GLFW_STEREO,
    samples = GLFW_SAMPLES,
    srgb_capable = GLFW_SRGB_CAPABLE,
    refresh_rate = GLFW_REFRESH_RATE,
    doublebuffer = GLFW_DOUBLEBUFFER,
    client_api = GLFW_CLIENT_API,
    context_version_major = GLFW_CONTEXT_VERSION_MAJOR,
    context_version_minor = GLFW_CONTEXT_VERSION_MINOR,
    context_revision = GLFW_CONTEXT_REVISION,
    context_robustness = GLFW_CONTEXT_ROBUSTNESS,
    opengl_forward_compact = GLFW_OPENGL_FORWARD_COMPAT,
    opengl_debug_context = GLFW_OPENGL_DEBUG_CONTEXT,
    opengl_profile = GLFW_OPENGL_PROFILE,
    context_release_behaviour = GLFW_CONTEXT_RELEASE_BEHAVIOR,
    context_no_error = GLFW_CONTEXT_NO_ERROR,
    context_creation_api = GLFW_CONTEXT_CREATION_API,
    scale_to_monitor = GLFW_SCALE_TO_MONITOR,
    cocoa_retina_framebuffer = GLFW_COCOA_RETINA_FRAMEBUFFER,
    cocoa_frame_name = GLFW_COCOA_FRAME_NAME,
    cocoa_graphics_switching = GLFW_COCOA_GRAPHICS_SWITCHING,
    x11_class_name = GLFW_X11_CLASS_NAME,
    x11_instance_name = GLFW_X11_INSTANCE_NAME
};

#endif //TEZZGL_WINDOWHINT_H
