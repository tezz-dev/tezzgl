//
// Created by tezz-io on 12/12/21.
//

#include "tezzgl/Window.hpp"
#include "tezzgl/WindowAttribute.hpp"
#include <GLFW/glfw3.h>

GLFWwindow* Window::window() { 
    return _window;
}

void Window::defaultWindowHints() const {
    glfwDefaultWindowHints();
}

void Window::setWindowHint( WindowHint hint, int value ) {
    glfwWindowHint((int)hint, value);
}

void Window::setWindowHintString( WindowHint hint, String value ) {
    glfwWindowHintString((int)hint, value);
}

void Window::createWindow( String title, Size size, Monitor monitor, Window shareWindow ) {
    _window = glfwCreateWindow(size.x, size.y, title, monitor.monitor(), shareWindow.window());
}

void Window::destroy() {
    glfwDestroyWindow(_window);
}

int Window::shouldClose() {
    return glfwWindowShouldClose(_window);
}

void Window::setShouldClose( int value ) {
    glfwSetWindowShouldClose(_window, value);
}

void Window::setTitle( String title ) {
    glfwSetWindowTitle(_window, title);
}

Position Window::position() {
    int x, y;
    glfwGetWindowPos(_window, &x, &y);
    return {x, y};
}

void Window::setPosition( Position position ) {
    glfwSetWindowPos(_window, position.x, position.y);
}

Size Window::size() {
    int width, height;
    glfwGetWindowSize(_window, &width, &height);
    return {width, height};
}

void Window::setSize( Size size ) {
    glfwSetWindowSize(_window, size.x, size.y);
}

void Window::setSizeLimits( Size minSize, Size maxSize ) {
    glfwSetWindowSizeLimits(_window, minSize.x, minSize.y, maxSize.x, maxSize.y);
}

void Window::setAspectRatio( AspectRatio aspectRatio ) {
    glfwSetWindowAspectRatio(_window, aspectRatio.x, aspectRatio.y);
}

Size Window::frameBufferSize() {
    int width, height;
    glfwGetFramebufferSize(_window, &width, &height);
    return {width, height};
}

ContentScale Window::contentScale() {
    float xscale, yscale;
    glfwGetWindowContentScale(_window, &xscale, &yscale);
    return {xscale, yscale};
}

Opacity Window::opacity() {
    return glfwGetWindowOpacity(_window);
}

void Window::setOpacity( Opacity opacity ) {
    glfwSetWindowOpacity(_window, opacity);
}

void Window::iconify() {
    glfwIconifyWindow(_window);
}

void Window::restore() {
    glfwRestoreWindow(_window);
}

void Window::maximize() {
    glfwMaximizeWindow(_window);
}

void Window::show() {
    glfwShowWindow(_window);
}

void Window::hide() {
    glfwHideWindow(_window);
}

void Window::focus() {
    glfwFocusWindow(_window);
}

void Window::requestAttention() {
    glfwRequestWindowAttention(_window);
}

Monitor Window::monitor() {
    return {glfwGetWindowMonitor(_window)};
}

void Window::setMonitor( Monitor monitor, Position position, Size size, RefreshRate refreshRate ) {
    glfwSetWindowMonitor(_window, monitor.monitor(), position.x, position.y, size.x, size.y, refreshRate);
}

int Window::getAttribute( WindowAttribute windowAttribute ) {
    return glfwGetWindowAttrib(_window, (int) windowAttribute);
}

void Window::setAttribute(WindowAttribute windowAttribute, int value) {
    glfwSetWindowAttrib(_window, (int) windowAttribute, value);
}

void Window::setUserPointer( UserPointer userPointer ) {
    glfwSetWindowUserPointer(_window, userPointer);
}

UserPointer Window::userPointer() {
    return glfwGetWindowUserPointer(_window);
}
