#ifndef TEZZGL_CONTEXT_H
#define TEZZGL_CONTEXT_H

#include "Window.hpp"

class Context {
public:
    static void makeCurrent( Window window );
    static Window current();
    static void swapInterval( int interval );
    static int extensionSupported( String extension );
    /* GLFWglproc getProcAddress( String procname ) */
};

#endif
