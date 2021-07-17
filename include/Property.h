#ifndef TEZZGL_PROPERTY_H
#define TEZZGL_PROPERTY_H

#include <functional>
#include <GLFW/glfw3.h>

template <typename T>
class Property {
private:
    T value;
    GLFWwindow* window;
public:
    std::function< void(T, GLFWwindow*) > get = []( T value, GLFWwindow* window ) {};
    std::function< void(T, GLFWwindow*) > set = []( T value, GLFWwindow* window ) {};

    Property( T _value ):
        value(_value) {
        window = nullptr;
    }

    void setWindow( GLFWwindow* _window ) {
        window = _window;
    }

    T& operator=( const T& _value ) {
        set( value, window );
        value = _value;
    }

    const T& operator()() const {
        get( value, window );
        return value;
    }

    explicit operator const T& () const {
        get( value, window );
        return value;
    }

    T* operator->() {
        return &value;
    }
};

#endif
