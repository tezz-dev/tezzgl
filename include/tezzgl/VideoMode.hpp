#ifndef TEZZGL_VIDEOMODE_H
#define TEZZGL_VIDEOMODE_H

#include "BitDepth.hpp"
#include "Definitions.hpp"

class VideoMode {
private:
    GLFWvidmode mode;
public:

    VideoMode( GLFWvidmode mode ): mode(mode) {}

    Size size() { 
        return {mode.width, mode.height}; 
    }
    BitDepth bitDepth() { 
        return {mode.redBits, mode.greenBits, mode.blueBits}; 
    }

    RefreshRate refreshRate() { 
        return mode.refreshRate; 
    }

    void set( GLFWvidmode mode ) {
        this->mode = mode;
    }

    GLFWvidmode get() {
        return mode;
    }
};

#endif
