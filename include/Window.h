#ifndef TEZZGL_WINDOW_H
#define TEZZGL_WINDOW_H

#include<GLFW/glfw3.h>

#include "Point2.h"
#include "Grid.h"
#include "Definitions.h"
#include "Property.h"

class Window {
private:
    GLFWwindow* window;
    Size size;
    String title;
    Monitor monitor;
    ShareWindow shareWindow;

public:
    Window( String, int, int );
    Window( String, Size );

    GLFWwindow* GetWindow();
    Size GetSize();
    String GetTitle();
    Monitor GetMonitor();
    ShareWindow GetShareWindow();

    void SetSize( Size );
    void SetMonitor( Monitor );
    void SetShareWindow( ShareWindow );

    void Init();
    void StartRendering();
    void Resize();
    void Setup() const;
    void EndRendering();

    bool ShouldClose();
    void SetWindowSizeLimits( Size = {-1, -1}, Size = {-1, -1} );

    static void Destroy();
};

Window::Window( String _title, int _width, int _height ):
    title(_title),
    size(_width, _height) {

    window = nullptr;
    monitor = nullptr;
    shareWindow = nullptr;
}

Window::Window( String _title, Size _size ):
    Window(_title, _size.x, _size.y) {}

GLFWwindow* Window::GetWindow() { return window; }
Size Window::GetSize() {
    glfwGetWindowSize(window, &size.x, &size.y);
    return size;
}
String Window::GetTitle() { return title; }
Monitor Window::GetMonitor() { return monitor; }
ShareWindow Window::GetShareWindow() { return shareWindow; }
void Window::SetSize( Size _size ) {
    size.x = _size.x;
    size.y = _size.y;
    glfwSetWindowSize(window, size.x, size.y);
}
void Window::SetMonitor( Monitor _monitor ) { monitor = _monitor; }
void Window::SetShareWindow( ShareWindow _shareWindow ) { shareWindow = _shareWindow; }
void Window::Init() {
    if( !glfwInit() )
        return;

    window = glfwCreateWindow(
        (int)size.width,
        (int)size.height,
        title,
        monitor,
        shareWindow
    );

    if( !window ) {
        glfwTerminate();
        return;
    }

    glfwMakeContextCurrent( window );
}
void Window::StartRendering() {
    glClear(GL_COLOR_BUFFER_BIT);
}
void Window::Resize() {
    int _width, _height;
    glfwGetFramebufferSize (
            window,
            &_width,
            &_height
    );
    size.width = _width;
    size.height = _height;

    glViewport(0, 0, size.width, size.height);
}
void Window::Setup() const {
    glMatrixMode( GL_PROJECTION );

    glLoadIdentity();

    glClear( GL_COLOR_BUFFER_BIT );

    glOrtho (
            0,
            size.width,
            size.height,
            0,
            0,
            1
    );
}
void Window::EndRendering() {
    glfwSwapBuffers( window );

    glfwPollEvents();
}
void Window::Destroy() {
    glfwTerminate();
}
bool Window::ShouldClose() {
    return glfwWindowShouldClose( window );
}
void Window::SetWindowSizeLimits( Size minSize, Size maxSize) {
  glfwSetWindowSizeLimits(
      window,
      minSize.width,
      minSize.height,
      maxSize.width,
      maxSize.height
  );
}

#endif

/*
GLFW_RESIZABLE
GLFW_VISIBLE
GLFW_DECORATED
GLFW_FOCUSED
GLFW_AUTO_ICONIFY
GLFW_FLOATING
GLFW_MAXIMIZED
GLFW_CENTER_CURSOR
GLFW_TRANSPARENT_FRAMEBUFFER
GLFW_FOCUS_ON_SHOW
GLFW_SCALE_TO_MONITOR
*/
