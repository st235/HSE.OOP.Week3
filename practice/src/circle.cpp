#include "circle.h"

#include "rendering_utils.h"

Circle::Circle(Point center, int32_t radius, Color& color):
    Shape(internal::RenderCircle(center, radius), color),
    _center(center),
    _radius(radius) {
    // empty on purpose
}

bool Circle::overlaps(int32_t bottom, int32_t left, int32_t top, int32_t right) const {
    return _center.x() - _radius >= left || _center.x() + _radius <= right ||
        _center.y() - _radius >= bottom || _center.y() + _radius <= top;
}
