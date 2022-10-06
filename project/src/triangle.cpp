#include "triangle.h"

#include "rendering_utils.h"

namespace {

Shape::Bounds GetBounds(const Point& v0, const Point& v1, const Point& v2) {
    int32_t min_x = std::min({ v0.x(), v1.x(), v2.x() });
    int32_t max_x = std::max({ v0.x(), v1.x(), v2.x() });

    int32_t min_y = std::min({ v0.y(), v1.y(), v2.y() });
    int32_t max_y = std::max({ v0.y(), v1.y(), v2.y() });

    return { min_x, min_y, static_cast<uint32_t>(max_x - min_x), static_cast<uint32_t>(max_y - min_y) };
}

} // namespace

Triangle::Triangle(Point v0, Point v1, Point v2, Color& color):
    Shape(GetBounds(v0, v1, v2), color),
    _v0(v0),
    _v1(v1),
    _v2(v2) {
    // empty on purpose
}

void Triangle::obtainPoints(std::vector<Point>& result) const {
    internal::RenderTriangle(_v0, _v1, _v2, result);
}
