#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <cstdint>

#include "shape.h"
#include "point.h"

class Triangle: public Shape {
public:
  Triangle(Point v0, Point v1, Point v2, Color& color);

};

#endif // TRIANGLE_H
