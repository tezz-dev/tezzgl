//
// Created by tezz-io on 12/12/21.
//

#ifndef TEZZGL_WINDOWATTRIBUTE_H
#define TEZZGL_WINDOWATTRIBUTE_H

#include "GLFW/glfw3.h"

enum WindowAttribute {
    focused = GLFW_FOCUSED,
    iconified = GLFW_ICONIFIED,
    resizable = GLFW_RESIZABLE,
    visible = GLFW_VISIBLE,
    decorated = GLFW_DECORATED,
    auto_iconify = GLFW_AUTO_ICONIFY,
    floating = GLFW_FLOATING,
    maximized = GLFW_MAXIMIZED,
    transparent_framebuffer = GLFW_TRANSPARENT_FRAMEBUFFER,
    hovered = GLFW_HOVERED,
    focus_on_show = GLFW_FOCUS_ON_SHOW,
};

#endif //TEZZGL_WINDOWATTRIBUTE_H
