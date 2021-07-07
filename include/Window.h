#ifndef TEZZGL_WINDOW_H
#define TEZZGL_WINDOW_H

#include<GLFW/glfw3.h>

#include "Point2.h"
#include "Grid.h"

#ifndef String
    #define String const char*
#endif

#ifndef Monitor
    #define Monitor GLFWmonitor*
#endif

#ifndef ShareWindow
    #define ShareWindow GLFWwindow*
#endif

class Window {
private:
    GLFWwindow* window;
    Size size;
    String name;
    Monitor monitor;
    ShareWindow shareWindow;

public:
    Window( String, int, int );
    Window( String, Size );

    GLFWwindow* GetWindow();
    Size GetSize();
    String GetName();
    Monitor GetMonitor();
    ShareWindow GetShareWindow();

    void SetSize( Size );
    void SetMonitor( Monitor );
    void SetShareWindow( ShareWindow );

    void Init();
    void StartRendering();
    void Resize();
    void Setup() const;
    void SetKeyMap( GLFWkeyfun );
    void EndRendering();

    bool ShouldClose();
    void SetWindowSizeLimits( Size = {-1, -1}, Size = {-1, -1});

    static void Destroy();
};

Window::Window( String _name, int _width, int _height ):
    name(_name),
    size(_width, _height) {

    window = nullptr;
    monitor = nullptr;
    shareWindow = nullptr;
}

Window::Window( String _name, Size _size ):
    Window(_name, _size.x, _size.y) {}

GLFWwindow* Window::GetWindow() { return window; }

Size Window::GetSize() { return size; }

String Window::GetName() { return name; }

Monitor Window::GetMonitor() { return monitor; }

ShareWindow Window::GetShareWindow() { return shareWindow; }

void Window::SetSize( Size _size ) {
    size.x = _size.x;
    size.y = _size.y;
}

void Window::SetMonitor( Monitor _monitor ) { monitor = _monitor; }

void Window::SetShareWindow( ShareWindow _shareWindow ) { shareWindow = _shareWindow; }

void Window::Init() {
    if( !glfwInit() )
        return;

    window = glfwCreateWindow(
        (int)size.width,
        (int)size.height,
        name,
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

void Window::SetKeyMap( GLFWkeyfun callback ) {
    glfwSetKeyCallback( window, *callback );
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
