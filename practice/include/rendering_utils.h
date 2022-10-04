#ifndef RENDERING_UTILS_H
#define RENDERING_UTILS_H

#include <vector>
#include <cstdint>

#include "point.h"

namespace internal {

std::vector<Point> RenderCircle(Point center, int32_t radius);

/**
 * Sweep line algorithm.
 */
std::vector<Point> RenderTriangle(Point v0, Point v1, Point v2);

std::vector<Point> RenderRectangle(Point lb, int32_t width, int32_t height);

} // namespace internal

#endif // RENDERING_UTILS_H
