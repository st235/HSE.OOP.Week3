#include "rgb_matrix.h"
#include "bw_matrix.h"

#include "color.h"
#include "bw_color.h"
#include "rgb_color.h"

#include "circle.h"
#include "rectangle.h"
#include "triangle.h"

#include <iostream>
#include <chrono>

using Time = std::chrono::high_resolution_clock;
using ns = std::chrono::nanoseconds;

void measure(std::function<void(void)> runnable) {
    Time::time_point start = Time::now();

    runnable();

    Time::time_point end = Time::now();
    double duration_ms =std::chrono::duration_cast<ns>(end - start).count() * 10e-6;
    std::cout << "Execution time: " << duration_ms << " ms." << std::endl;
}

void DrawMushroom() {
    int bgColor = 255;
    int capColor = 179;
    int stipeColor = 128;
    int bottomColor = 52;
    BWMatrix bw(2000, 2000, 255);
    BWColor bwColor(capColor);
    Circle cap({1000, 1000}, 700, bwColor);
    bwColor.changeColor(bgColor);
    Rectangle background({0, 700}, 2000, 1000, bwColor);
    Rectangle background2({800, 1300}, 400, 200, bwColor);
    bwColor.changeColor(stipeColor);
    Triangle stipe({1000, 350}, {1200, 1500}, {800, 1500}, bwColor);
    bwColor.changeColor(capColor);
    Rectangle background3({800, 350}, 400, 350, bwColor);
    bwColor.changeColor(bottomColor);
    Circle bottom({1000, 1500}, 200, bwColor);

    bw.draw(cap);
    bw.draw(background);
    bw.draw(bottom);
    bw.draw(background2);
    bw.draw(stipe);
    bw.draw(background3);
    bw.display();
}

void DrawHouse() {
    RGBMatrix rgb(2000, 2000, 0);
    RGBColor rgbColor(102, 205, 255);
    Rectangle sky({0, 0}, 2000, 1500, rgbColor);
    rgbColor.changeColor(0, 153, 0);
    Rectangle grass({0, 1500}, 2000, 2000, rgbColor);
    rgbColor.changeColor(255, 255, 0);
    Circle sun({50, 50}, 300, rgbColor);
    Triangle ray1({360, 50}, {550, 30}, {550, 70}, rgbColor);
    Triangle ray2({270, 270}, {420, 360}, {390, 400}, rgbColor);
    Triangle ray3({50, 360}, {30, 550}, {70, 550}, rgbColor);
    rgbColor.changeColor(102, 51, 0);
    Rectangle wall({600, 900}, 1000, 800, rgbColor);
    rgbColor.changeColor(0, 0, 0);
    Rectangle flue({1300, 550}, 100, 200, rgbColor);
    rgbColor.changeColor(51, 0, 0);
    Triangle roof({560, 900}, {1100, 500}, {1640, 900}, rgbColor);
    rgbColor.changeColor(204, 102, 0);
    Rectangle door({1400, 1350}, 150, 300, rgbColor);
    rgbColor.changeColor(0, 0, 0);
    Circle knob({1535, 1500}, 6, rgbColor);
    rgbColor.changeColor(102, 163, 255);
    Rectangle window1({700, 950}, 300, 350, rgbColor);
    Rectangle window2({1200, 950}, 300, 350, rgbColor);

    rgb.draw(sky);
    rgb.draw(grass);
    rgb.draw(sun);
    rgb.draw(ray1);
    rgb.draw(ray2);
    rgb.draw(ray3);
    rgb.draw(wall);
    rgb.draw(flue);
    rgb.draw(roof);
    rgb.draw(door);
    rgb.draw(knob);
    rgb.draw(window1);
    rgb.draw(window2);
    rgb.display();
}



int main() {
    // DrawMushroom();
    // DrawHouse();

    RGBMatrix rgb(512, 812, 0);
    RGBColor rgbColor(255, 255, 255);
    Rectangle wall({ 0, 0 }, 812, 812, rgbColor);

    Rectangle overlay({ 0, 0 }, 812, 140, rgbColor);

    rgbColor.changeColor(254, 46, 1);
    Triangle a1({ 128, 300 }, { 192, 90 }, { 256, 300 }, rgbColor);

    rgbColor.changeColor(1, 3, 4);
    Triangle a2({ 128, 300 }, { 171, 158 }, { 214, 300 }, rgbColor);

    rgbColor.changeColor(253, 148, 179);
    Rectangle l1({ 272, 140 }, 38, 160, rgbColor);
    rgbColor.changeColor(1, 3, 4);
    Rectangle l2({ 311, 260 }, 40, 40, rgbColor);

    rgbColor.changeColor(55, 90, 120);
    Rectangle e1({ 362, 140 }, 40, 160, rgbColor);

    rgbColor.changeColor(1, 3, 4);
    Rectangle e2({ 403, 140 }, 55, 48, rgbColor);
    Rectangle e3({ 403, 196 }, 55, 48, rgbColor);
    Rectangle e4({ 403, 252 }, 55, 48, rgbColor);

    rgbColor.changeColor(254, 149, 180);
    Rectangle x1({ 472, 140 }, 160, 160, rgbColor);
    rgbColor.changeColor(1, 3, 4);
    Triangle x2({ 472, 300 }, { 552, 220 }, { 632, 300 }, rgbColor);
    Triangle x3({ 472, 140 }, { 552, 220 }, { 632, 140 }, rgbColor);

    rgb.draw(wall);

    rgb.draw(a1);
    rgb.draw(a2);

    rgb.draw(l1);
    rgb.draw(l2);

    rgb.draw(e1);
    rgb.draw(e2);
    rgb.draw(e3);
    rgb.draw(e4);

    rgb.draw(x1);
    rgb.draw(x2);
    rgb.draw(x3);

    rgb.draw(overlay);

    rgb.display();

    return 0;
}