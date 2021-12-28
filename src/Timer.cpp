#include "tezzgl/Timer.hpp"

Timer::Timer( double _velocity ) {
    previous = glfwGetTime();
    current = 0.0;
    change = 0.0;
    accumulator = 0.0;
    velocity = _velocity;
}

void Timer::createTask( const std::function<void()>& task ) {
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
