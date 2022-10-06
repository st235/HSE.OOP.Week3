#ifndef CIRCLE_H
#define CIRCLE_H

#include <cstdint>

#include "shape.h"
#include "point.h"

class Circle: public Shape {
private:
  Point _center;
  uint32_t _radius;

protected:
  void obtainPoints(std::vector<Point>& result) const override;

public:
  Circle(Point center, uint32_t radius, Color& color);
};

#endif // CIRCLE_H
