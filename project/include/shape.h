#ifndef SHAPE_H
#define SHAPE_H

#include <vector>

#include "color.h"
#include "point.h"

class Shape {
public:
  /**
   * Rect bounds framing the shape.
   */
  struct Bounds {
    int32_t x;
    int32_t y;
    uint32_t width;
    uint32_t height;
  };

  Shape(Bounds bounds, const Color& color);

  inline Color* getColor() const { return _color; }

  /**
   * Returns points.
   * As calculating points is a "heavy" computational operation
   * the method caches the result in _points on the first run.
   */
  inline const std::vector<Point>& getPoints() {
    if (_points == nullptr) {
        _points = new std::vector<Point>();
        obtainPoints(*_points);
    }

    return *const_cast<std::vector<Point> const*>(_points);
  }

  /**
   * Returns true if overlaps with the target rect
   * represented by its sides and false otherwise.
   */
  bool overlaps(int32_t bottom, int32_t left, int32_t top, int32_t right) const;

  virtual ~Shape() {
    delete _color;
  }

protected:
  Bounds _bounds;
  std::vector<Point>* _points;
  Color* _color;

  virtual void obtainPoints(std::vector<Point>& result) const = 0;
};

#endif // SHAPE_H
