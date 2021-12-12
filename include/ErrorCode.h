//
// Created by tezz-io on 12/12/21.
//

#ifndef TEZZGL_ERRORCODE_H
#define TEZZGL_ERRORCODE_H

#include "GLFW/glfw3.h"

enum ErrorCode {
    no_error = GLFW_NO_ERROR,
    not_initialized = GLFW_NOT_INITIALIZED,
    no_current_context = GLFW_NO_CURRENT_CONTEXT,
    invalid_enum = GLFW_INVALID_ENUM,
    invalid_value = GLFW_INVALID_VALUE,
    out_of_memory = GLFW_OUT_OF_MEMORY,
    api_unavailable = GLFW_API_UNAVAILABLE,
    version_unavailable = GLFW_VERSION_UNAVAILABLE,
    platform_error = GLFW_PLATFORM_ERROR,
    format_unavailable = GLFW_FORMAT_UNAVAILABLE,
    no_window_context = GLFW_NO_WINDOW_CONTEXT
};

#endif //TEZZGL_ERRORCODE_H
