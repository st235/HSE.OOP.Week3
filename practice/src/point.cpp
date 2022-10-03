#include "point.h"

Point::Point(int32_t x, int32_t y): _x(x), _y(y) {
    //  empty on purpose
}

Point::Point(const Point&& that): _x(that._x), _y(that._y) {
    // empty on purpose
}

Point& Point::operator=(const Point&& that) {
    if (this != &that) {
        this->_x = that._x;
        this->_y = that._y;
    }
    return *this;
}
