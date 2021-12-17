#ifndef TEZZGL_WINDOW_H
#define TEZZGL_WINDOW_H

#include <GLFW/glfw3.h>

#include "Point2.h"
#include "Grid.h"
#include "Definitions.h"
#include "Monitor.h"
#include "WindowHint.h"
#include "WindowAttribute.h"

class Window {
private:
    GLFWwindow* _window;

public:
    Window(): window(nullptr);
    explicit Window( GLFWwindow* window ): _window(window) {}

    GLFWwindow* window();

    void defaultWindowHints();
    void setWindowHint( WindowHint hint, int value );
    void setWindowHintString( WindowHint hint, int value );
    void createWindow( String title, Size size, Monitor monitor, Window shareWindow );
    void destroy();
    int shouldClose();
    void setShouldClose( int value );
    void setTitle( String title );
    /* void setIcon( vector<Image> icons ); */
    Position position();
    void setPosition( Position position );
    Size size();
    void setSize( Size size );
    void setSizeLimits( Size minSize, Size maxSize );
    void setAspectRatio( AspectRatio aspectRatio );
    Size frameBufferSize();
//    FrameSize getFrameSize();
    ContentScale contentScale();
    Opacity opacity();
    void setOpacity( Opacity opacity );
    void iconify();
    void restore();
    void maximize();
    void show();
    void hide();
    void focus();
    void requestAttention();
    Monitor monitor();
    void setMonitor( Monitor monitor, Position position, Size size, RefreshRate refreshRate );
    int getAttribute( WindowAttribute windowAttribute );
    void setAttribute( WindowAttribute windowAttribute, int value );
    void setUserPointer( UserPointer userPointer );
    UserPointer userPointer();

    void swapBuffers();
};

#endif
