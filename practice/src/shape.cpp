#include "shape.h"

Shape::Shape(std::vector<Point> points, Color& color):
    _points(std::move(points)),
    _color(color.deepCopy()) {
}
