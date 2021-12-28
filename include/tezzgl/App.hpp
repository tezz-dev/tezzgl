#ifndef TEZZGL_APP_H
#define TEZZGL_APP_H

#include "GLFW/glfw3.h"
#include "Logger.hpp"
#include "Context.hpp"

class App {
public:
    static void init();
    static void startRendering();
    static void endRendering();
    static void swapBuffers();
    static void pollEvents();
    static void waitEvents();
    static void waitEventsTimeout(double timeout);
    static void postEmptyEvent();
    static void terminate();
};

#endif
