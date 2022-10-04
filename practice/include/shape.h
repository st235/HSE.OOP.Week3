#ifndef SHAPE_H
#define SHAPE_H

#include <vector>

#include "color.h"
#include "point.h"

class Shape {
protected:
  std::vector<Point> _points;
  Color* _color;

public:
  Shape(std::vector<Point> points, Color& color);

  inline const std::vector<Point>& getPoints() const { return _points; }
  inline Color* getColor() const { return _color; }

  virtual bool overlaps(int32_t bottom, int32_t left, int32_t top, int32_t right) const = 0;

  virtual ~Shape() {
    delete _color;
  }
};

#endif // SHAPE_H
