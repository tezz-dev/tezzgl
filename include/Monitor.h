#ifndef TEZZGL_MONITOR_H
#define TEZZGL_MONITOR_H

#include "GLFW/glfw3.h"
#include <vector>
#include "Definitions.h"

class Monitor {
private:
    GLFWmonitor* monitor;
public:
    Monitor( GLFWmonitor* monitor ): monitor(monitor) {}
    static std::vector<Monitor> monitors();    
    static Monitor primaryMonitor();
    Position position();
    Size physicalSize();
};

inline
std::vector<Monitor> Monitor::monitors() {
    int numberOfMonitors;
    GLFWmonitor** monitorRefs = glfwGetMonitors(&numberOfMonitors);
    std::vector<Monitor> monitors;
    for( int i=0; i<numberOfMonitors; i++ ) {
        monitors.push_back({monitorRefs[i]});
    }
    return monitors;
}

inline
Monitor Monitor::primaryMonitor() {
    return {glfwGetPrimaryMonitor()};
}

inline
Position Monitor::position() {
    int width, height;
    glfwGetMonitorPos(monitor, &width, &height);
    return {width, height};
}

inline
Size Monitor::physicalSize() {
    int widthMM, heightMM;
    glfwGetMonitorPhysicalSize(monitor, &widthMM, &heightMM);
    return {widthMM, heightMM};
}

#endif