#ifndef CIRCLE_H
#define CIRCLE_H

#include <cstdint>

#include "shape.h"
#include "point.h"

class Circle: public Shape {
private:
  Point _center;
  int32_t _radius;

public:
  Circle(Point center, int32_t radius, Color& color);
  bool overlaps(int32_t bottom, int32_t left, int32_t top, int32_t right) const override;
};

#endif // CIRCLE_H
