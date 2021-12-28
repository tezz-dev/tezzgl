#include "tezzgl/App.hpp"

void App::init() {
    if(!glfwInit()) {
        Logger::log("Terminating program because failed to initialized GLFW...");
    }
}

void App::startRendering() {
    glClear(GL_COLOR_BUFFER_BIT);
}

void App::endRendering() {
    swapBuffers();
    pollEvents();
}

void App::swapBuffers() {
    glfwSwapBuffers(Context::current().window());
}

void App::pollEvents() {
    glfwPollEvents();
}

void App::waitEvents() {
    glfwWaitEvents();
}

void App::waitEventsTimeout(double timeout) {
    glfwWaitEventsTimeout(timeout);
}

void App::postEmptyEvent() {
    glfwPostEmptyEvent();
}

void App::terminate() {
    glfwTerminate();
}
