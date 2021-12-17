#ifndef TEZZGL_TIMER_H
#define TEZZGL_TIMER_H

#include <GLFW/glfw3.h>
#include <functional>

class Timer {
private:
    double current;
    double previous;
    double change;
    double accumulator;
    double velocity;

public:
    Timer( double _velocity );
    void CreateTask( const std::function<void()>& task );
};

#endif
