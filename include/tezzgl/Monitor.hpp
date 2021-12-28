#ifndef TEZZGL_MONITOR_H
#define TEZZGL_MONITOR_H

#include "GLFW/glfw3.h"
#include <vector>
#include "Definitions.hpp"
#include "VideoMode.hpp"

class Monitor {
private:
    GLFWmonitor* _monitor;
public:
    Monitor( GLFWmonitor* monitor ): _monitor(monitor) {}
    GLFWmonitor* monitor();
    static std::vector<Monitor> monitors();    
    static Monitor primaryMonitor();
    Position position();
    Size physicalSize();
    ContentScale contentScale();
    String name();
    UserPointer userPointer();
    VideoMode videoMode();
    std::vector<VideoMode> availableVideoModes();
    
};

#endif
