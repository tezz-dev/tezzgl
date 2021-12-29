#ifndef TEZZGL_POINT2_H
#define TEZZGL_POINT2_H

template<typename T>
class Point2 {
public:
    T x, y;

    Point2<T>( T _x, T _y ): x(_x), y(_y) {}

    bool operator==( const Point2<T>& point ) const {
        return x == point.x && y == point.y;
    }
    bool operator!=( const Point2<T>& point ) const {
        return x != point.x || y != point.y;
    }
    Point2<T> operator+( const Point2<T>& point ) const {
        return {point.x+x, point.y+y};
    }
    Point2<T> operator-( const Point2<T>& point ) const {
        return {x-point.x, y-point.y};
    }
    T dot( const Point2<T>& point ) const {
        return x*point.x + y*point.y;
    }
};

#endif
