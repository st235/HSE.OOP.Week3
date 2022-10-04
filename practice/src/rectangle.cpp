#include "rectangle.h"

#include "rendering_utils.h"

Rectangle::Rectangle(Point lb, int32_t width, int32_t height, Color& color):
    Shape(internal::RenderRectangle(lb, width, height), color) {
    // empty on purpose
}
