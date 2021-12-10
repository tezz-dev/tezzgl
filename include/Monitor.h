#ifndef TEZZGL_MONITOR_H
#define TEZZGL_MONITOR_H

#include "GLFW/glfw3.h"
#include <vector>

class Monitor {
    GLFWmonitor* monitor;

    Monitor( GLFWmonitor* monitor ): monitor(monitor) {}

    static std::vector<Monitor> getMonitors() {
        int numberOfMonitors;
        GLFWmonitor** monitorRefs = glfwGetMonitors(&numberOfMonitors);
        std::vector<Monitor> monitors;
        for( int i=0; i<numberOfMonitors; i++ ) {
            monitors.push_back({monitorRefs[i]});
        }
        return monitors;
    }
};

#endif