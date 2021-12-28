#ifndef TEZZGL_GRID_H
#define TEZZGL_GRID_H

#include "Point2.hpp"

class Grid {
public:
    Point2<int> count;
    Point2<float> size;

    Grid( Point2<int> _count, Point2<float> _size ): count(_count), size(_size) {}
    Grid( int _x, int _y, float _width, float _height ): count(_x, _y), size(_width, _height) {}
    Grid( Point2<int> _count, float _width, float _height ): count(_count), size(_width, _height) {}
    Grid( int _x, int _y, Point2<float> _size ): count(_x, _y), size(_size) {}
};

#endif
