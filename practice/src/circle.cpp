#include "circle.h"

#include "rendering_utils.h"

Circle::Circle(Point center, uint32_t radius, Color& color):
    Shape({ static_cast<int32_t>(center.x() - radius), static_cast<int32_t>(center.y() - radius), radius * 2, radius * 2 }, color),
    _center(center),
    _radius(radius) {
    // empty on purpose
}

void Circle::obtainPoints(std::vector<Point>& result) const {
    internal::RenderCircle(_center, _radius, result);
}
