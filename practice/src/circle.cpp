#include "circle.h"

#include "rendering_utils.h"

Circle::Circle(Point center, int32_t radius, Color& color):
    Shape(internal::RenderCircle(center, radius), color) {
    // empty on purpose
}