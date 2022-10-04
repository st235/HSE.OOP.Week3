#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <cstdint>

#include "shape.h"
#include "point.h"

class Rectangle: public Shape {
public:
  Rectangle(Point lb, int32_t width, int32_t height, Color& color);

};

#endif // RECTANGLE_H
