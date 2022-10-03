#ifndef RASTERIZATION_UTILS_H
#define RASTERIZATION_UTILS_H

#include <vector>
#include <cstdint>

#include "point.h"

namespace internal {

std::vector<Point> RenderCircle(Point&& center, int32_t radius);

/**
 * Sweep line algorithm.
 */
std::vector<Point> RenderTriangle(Point&& v0, Point&& v1, Point&& v2);

std::vector<Point> RenderRectangle(Point&& v0, Point&& v1, Point&& v2, Point&& v3);

} // namespace internal

#endif // RASTERIZATION_UTILS_H
