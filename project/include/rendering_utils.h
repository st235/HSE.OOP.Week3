#ifndef RENDERING_UTILS_H
#define RENDERING_UTILS_H

#include <vector>
#include <cstdint>

#include "point.h"

namespace internal {

void RenderCircle(Point center, int32_t radius, std::vector<Point>& result);

/**
 * Sweep line algorithm.
 */
void RenderTriangle(Point v0, Point v1, Point v2, std::vector<Point>& result);

void RenderRectangle(Point lb, int32_t width, int32_t height, std::vector<Point>& result);

} // namespace internal

#endif // RENDERING_UTILS_H
