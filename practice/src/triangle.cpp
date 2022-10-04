#include "triangle.h"

#include "rendering_utils.h"

Triangle::Triangle(Point v0, Point v1, Point v2, Color& color):
    Shape(internal::RenderTriangle(v0, v1, v2), color),
    _v0(v0),
    _v1(v1),
    _v2(v2) {
    // empty on purpose
}

bool Triangle::overlaps(int32_t bottom, int32_t left, int32_t top, int32_t right) const {
    return _v0.isWithin(bottom, left, top, right) ||
        _v1.isWithin(bottom, left, top, right) ||
        _v2.isWithin(bottom, left, top, right);
}
