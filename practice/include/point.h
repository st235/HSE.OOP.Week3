#ifndef POINT_H
#define POINT_H

#include <cstdint>

class Point {
private:
    int32_t _x;
    int32_t _y;

    Point(const Point& that) = delete;
    Point& operator=(const Point& that) = delete;

public:
    Point(int32_t x, int32_t y);

    Point(const Point&& that);
    Point& operator=(const Point&& that);

    inline int32_t x() const { return _x; }
    inline int32_t y() const { return _y; }

};

#endif // POINT_H
