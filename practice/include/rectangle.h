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

protected:
  void obtainPoints(std::vector<Point>& result) const override;

public:
  Rectangle(Point lb, int32_t width, int32_t height, Color& color);
};

#endif // RECTANGLE_H
