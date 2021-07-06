#ifndef BASICCLANG_POINT2_H
#define BASICCLANG_POINT2_H

template<typename T>
class Point2 {
public:
    T x, y;

    Point2<T>( T, T );

    bool operator==( const Point2<T>& ) const;
    bool operator!=( const Point2<T>& ) const;
    
    Point2<T> operator+( const Point2<T>& ) const;
    Point2<T> operator-( const Point2<T>& ) const;

    T dot( const Point2<T>& ) const;
};

template <typename T>
Point2<T>::Point2( T _x, T _y ) {
    x = _x;
    y = _y;
}

template <typename T>
bool Point2<T>::operator==( const Point2<T>& point ) const {
    return x == point.x && y == point.y;
}

template <typename T>
bool Point2<T>::operator!=( const Point2<T>& point ) const {
    return x != point.x || y != point.y;
}

template <typename T>
T Point2<T>::dot( const Point2<T>& point ) const {
    return x * point.x + y * point.y;
}

void InitializePoint2Template() {
    Point2<int> point1(0, 0);
    Point2<long> point2(0L, 0L);
    Point2<long long> point3(0LL, 0LL);
    Point2<float> point4(0.0f, 0.0f);
    Point2<double> point5(0.0, 0.0);
    Point2<long double> point6(0.0, 0.0);
}

#endif
