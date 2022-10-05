#include "circle.h"

#include "rendering_utils.h"

Circle::Circle(Point center, int32_t radius, Color& color):
    Shape({ center.x() - radius, center.y() - radius, static_cast<uint32_t>(radius * 2), static_cast<uint32_t>(radius * 2) }, color),
    _center(center),
    _radius(radius) {
    // empty on purpose
}

void Circle::obtainPoints(std::vector<Point>& result) const {
    internal::RenderCircle(_center, _radius, result);
}
