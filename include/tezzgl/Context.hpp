#ifndef TEZZGL_CONTEXT_H
#define TEZZGL_CONTEXT_H

#include "Window.hpp"

class Context {
public:
    static void makeCurrent( Window window );
    static Window current();
    static void swapInterval( int interval );
    static int extensionSupported( StringConstant extension );
    /* GLFWglproc getProcAddress( StringConstant procname ) */
};

#endif
