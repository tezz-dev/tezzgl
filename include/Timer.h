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

Timer::Timer( double _velocity ) {
    previous = glfwGetTime();
    current = 0.0;
    change = 0.0;
    accumulator = 0.0;
    velocity = _velocity;
}

void Timer::CreateTask( const std::function<void()>& task ) {
    glfwSwapInterval(1);

    current = glfwGetTime();
    change = current - previous;
    previous = current;
    accumulator += change;

    while( accumulator >= 1.0 / velocity ) {
        accumulator -= 1.0 / velocity;
        task();
    }
}

#endif
