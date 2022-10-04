#include "triangle.h"

#include "rendering_utils.h"

Triangle::Triangle(Point v0, Point v1, Point v2, Color& color):
    Shape(internal::RenderTriangle(v0, v1, v2), color) {
    // empty on purpose
}
