#include "rectangle.h"

#include "rendering_utils.h"

Rectangle::Rectangle(Point lb, int32_t width, int32_t height, Color& color):
    Shape(internal::RenderRectangle(lb, width, height), color),
    _lb(lb),
    _width(width),
    _height(height) {
    // empty on purpose
}

bool Rectangle::overlaps(int32_t bottom, int32_t left, int32_t top, int32_t right) const {
    return true;
}
