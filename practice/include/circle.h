#ifndef CIRCLE_H
#define CIRCLE_H

#include <cstdint>

#include "shape.h"
#include "point.h"

class Circle: public Shape {
public:
  Circle(Point center, int32_t radius, Color& color);

};

#endif // CIRCLE_H
