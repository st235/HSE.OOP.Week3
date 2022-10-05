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

protected:
  void obtainPoints(std::vector<Point>& result) const override;

public:
  Triangle(Point v0, Point v1, Point v2, Color& color);
};

#endif // TRIANGLE_H
