//
// Created by tezz-io on 12/12/21.
//

#ifndef TEZZGL_CONTEXT_H
#define TEZZGL_CONTEXT_H

#include "Window.h"

class Context {
public:
    void makeCurrent( Window window );
    Window current();
    void swapInterval( int interval );
    int extensionSupported( String extension );
    /* GLFWglproc getProcAddress( String procname ) */
};

#endif //TEZZGL_CONTEXT_H
