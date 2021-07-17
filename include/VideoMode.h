#ifndef TEZZGL_VIDEOMODE_H
#define TEZZGL_VIDEOMODE_H

#include "BitDepth.h"

class VideoMode {
public:
    Size size;
    BitDepth bitDepth;
    RefreshRate refreshRate;

    VideoMode( GLFWvidmode mode ):
        size(mode.x, mode.y),
        bitDepth(mode.redBits, mode.greenBits, mode.blueBits),
        refreshRate(mode.refreshRate) {}
        
    VideoMode( Size _size, BitDepth _bitDepth, RefreshRate _refreshRate ):
        size(_size),
        bitDepth(_bitDepth),
        refreshRate(_refreshRate) {}

    void set( GLFWvidmode mode ) {
        videoMode.size.x = mode.x;
        videoMode.size.y = mode.y;
        videoMode.bitDepth.red = mode.redBits;
        videoMode.bitDepth.green = mode.greenBits;
        videoMode.bitDepth.blue = mode.blueBits;
        videoMode.refreshRate = mode.refreshRate;
    }
}

#endif
