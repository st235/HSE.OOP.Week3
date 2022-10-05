#include "shape.h"

namespace {

bool DoLinesOverlap(int32_t x0, int32_t y0, int32_t x1, int32_t y1) {
    return std::min(y0, y1) > std::max(x0, x1);
}

bool DoRectsOverlap(int32_t vx0, int32_t vy0, int32_t hx0, int32_t hy0,
                    int32_t vx1, int32_t vy1, int32_t hx1, int32_t hy1) {
    return DoLinesOverlap(vx0, vy0, vx1, vy1) &&
        DoLinesOverlap(hx0, hy0, hx1, hy1);
}

bool DoBoundsOverlap(const Shape::Bounds& b0, const Shape::Bounds& b1) {
    return DoRectsOverlap(b0.x, b0.x + b0.width, b0.y, b0.y + b0.height,
        b1.x, b1.x + b1.width, b1.y, b1.y + b1.height);
}

} // namespace

Shape::Shape(Bounds bounds, const Color& color):
    _bounds(bounds),
    _color(color.deepCopy()),
    _points(nullptr) {
}

bool Shape::overlaps(int32_t bottom, int32_t left, int32_t top, int32_t right) const {
    Shape::Bounds target_bound { left, bottom, static_cast<uint32_t>(right - left), static_cast<uint32_t>(top - bottom) };
    return DoBoundsOverlap(_bounds, target_bound);
}
