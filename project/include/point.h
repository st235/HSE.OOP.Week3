#ifndef POINT_H
#define POINT_H

#include <cstdint>

class Point {
private:
    int32_t _x;
    int32_t _y;

public:
    Point(int32_t x, int32_t y);

    Point(const Point& that);
    Point& operator=(const Point& that);

    Point(const Point&& that);
    Point& operator=(const Point&& that);

    inline int32_t x() const { return _x; }
    inline int32_t y() const { return _y; }

    bool isWithin(int32_t bottom, int32_t left, int32_t top, int32_t right) const;

};

#endif // POINT_H
