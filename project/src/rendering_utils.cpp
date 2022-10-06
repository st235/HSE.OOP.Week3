#include "rendering_utils.h"

#include <cmath>

namespace {

float GetDistance(int32_t x0, int32_t y0, int32_t x1, int32_t y1) {
    if (x0 == 0 && x1 == 0) {
        return y0 > y1;
    }

    if (x0 == 0) {
        return true;
    }

    if (x1 == 0) {
        return false;
    }

    float dx = float(x1 - x0);
    float dy = float(y1 - y0);

    return std::sqrt(std::pow(dx, 2) + std::pow(dy, 2));
}

} // namespace

namespace internal {

void RenderCircle(Point center, int32_t radius, std::vector<Point>& result) {
    int32_t left = center.x() - radius;
    int32_t right = center.x() + radius;

    int32_t bottom = center.y() - radius;
    int32_t top = center.y() + radius;

    for (int32_t x = left; x <= right; x++) {
        for (int32_t y = bottom; y <= top; y++) {
            float distance = GetDistance(x, y, center.x(), center.y());
            bool inside = (distance < radius);

            if (inside) {
                result.push_back({x, y});
            }
        }
    }
}

void RenderTriangle(Point v0, Point v1, Point v2, std::vector<Point>& result) {
    // bubble sort vertices by y
    if (v0.y() > v1.y()) std::swap(v0, v1);
    if (v0.y() > v2.y()) std::swap(v0, v2);
    if (v1.y() > v2.y()) std::swap(v1, v2);

    int32_t height = std::abs(v2.y() - v0.y());

    int32_t height01 = std::abs(v1.y() - v0.y());
    int32_t height12 = std::abs(v2.y() - v1.y());

    if (v0.y() == v1.y()) {
        // height01 is 0,
        // therefore v0 and v1 are on the same line
        for (int32_t x = std::min(v0.x(), v1.x()); x <= std::max(v0.x(), v1.x()); x++) {
            result.push_back({x, v0.y()});
        }
    } else {
        // traverse the first half of the triangle
        // from v0 up to v1
        for (int32_t y = v0.y(); y <= v1.y(); y++) {
            int32_t x0 = float(y - v0.y()) / float(height01) * (v1.x() - v0.x()) + v0.x();
            int32_t x1 = float(y - v0.y()) / float(height) * (v2.x() - v0.x()) + v0.x();

            for (int32_t x = std::min(x0, x1); x <= std::max(x0, x1); x++) {
                result.push_back({x, y});
            }
        }
    }

    if (v1.y() == v2.y()) {
        // height12 is 0,
        // therefore v1 and v2 are on the same line
        for (int32_t x = std::min(v1.x(), v2.x()); x <= std::max(v1.x(), v2.x()); x++) {
            result.push_back({x, v1.y()});
        }
    } else {
        // traverse the second half of the triangle
        // from v1 up to v2
        for (int32_t y = v1.y(); y <= v2.y(); y++) {
            int32_t x0 = float(y - v1.y()) / float(height12) * (v2.x() - v1.x()) + v1.x();
            int32_t x1 = float(y - v0.y()) / float(height) * (v2.x() - v0.x()) + v0.x();

            for (int32_t x = std::min(x0, x1); x <= std::max(x0, x1); x++) {
                result.push_back({x,  y});
            }
        }
    }
}

void RenderRectangle(Point lb, int32_t width, int32_t height, std::vector<Point>& result) {
    Point v0(lb);
    Point v1(lb.x() + width, lb.y());
    Point v2(lb.x() + width, lb.y() + height);
    Point v3(lb.x(), lb.y() + height);

    RenderTriangle(v0, v1, v2, result);
    RenderTriangle(v0, v2, v3, result);
}

} // namespace internal

