#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <cstdint>

#include "shape.h"
#include "point.h"

class Triangle: public Shape {
private:
  Point _v0;
  Point _v1;
  Point _v2;

public:
  Triangle(Point v0, Point v1, Point v2, Color& color);
  bool overlaps(int32_t bottom, int32_t left, int32_t top, int32_t right) const override;
};

#endif // TRIANGLE_H
