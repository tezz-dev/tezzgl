#ifndef TEZZGL_VIDEOMODE_H
#define TEZZGL_VIDEOMODE_H

#include "BitDepth.h"

class VideoMode {
public:
    Size size;
    BitDepth bitDepth;
    RefreshRate refreshRate;

    VideoMode( Size _size, BitDepth _bitDepth, RefreshRate _refreshRate ):
        size(_size),
        bitDepth(_bitDepth),
        refreshRate(_refreshRate) {}
}

#endif
