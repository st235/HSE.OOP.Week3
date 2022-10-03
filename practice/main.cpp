#include "matrix.h"
#include "rgb_matrix.h"
#include "bw_matrix.h"

#include "rasterization_utils.h"

int main() {
    RGBMatrix rgb(1000, 1000);

    auto points = internal::RenderRectangle({150, 150}, {750, 350}, {614, 520}, {110, 500});

    for (const auto& point: points) {
        rgb.at(point.y(), point.x()) = 255;
    }

    rgb.display();

    return 0;
}