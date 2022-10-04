#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <cstdint>

#include "shape.h"
#include "point.h"

class Rectangle: public Shape {
private:
  Point _lb;
  int32_t _width;
  int32_t _height;

public:
  Rectangle(Point lb, int32_t width, int32_t height, Color& color);
  bool overlaps(int32_t bottom, int32_t left, int32_t top, int32_t right) const override;
};

#endif // RECTANGLE_H
