#include "rectangle.h"

#include "rendering_utils.h"

Rectangle::Rectangle(Point lb, int32_t width, int32_t height, Color& color):
    Shape({ lb.x(), lb.y(), static_cast<uint32_t>(width), static_cast<uint32_t>(height) }, color),
    _lb(lb),
    _width(width),
    _height(height) {
    // empty on purpose
}

void Rectangle::obtainPoints(std::vector<Point>& result) const {
    internal::RenderRectangle(_lb, _width, _height, result);
}
