RGBMatrix rgb(1000, 720, 0);
RGBColor rgbColor(11, 157, 88);
Rectangle wall({ 0, 0 }, 720, 1000, rgbColor);

rgbColor.changeColor(37, 50, 56);
Triangle t1({360, 500 - 145}, {360 - 120, 500 + 17}, {360 + 120, 500 + 17}, rgbColor);

rgbColor.changeColor(243, 250, 247);
Triangle t2({360 - 40, 500 - 145}, {360 - 120 - 40, 500 + 17}, {360 + 120 - 40, 500 + 17}, rgbColor);

rgbColor.changeColor(197, 231, 215);
Triangle t3({360 - 80, 500 - 145}, {360 - 120 - 80, 500 + 17}, {360 + 120 - 80, 500 + 17}, rgbColor);

rgbColor.changeColor(140, 208, 175);
Triangle t4({360 - 140, 500 - 145}, {360 - 120 - 140, 500 + 17}, {360 + 120 - 140, 500 + 17}, rgbColor);

rgbColor.changeColor(63, 177, 120);
Triangle t5({360 - 220, 500 - 145}, {360 - 120 - 220, 500 + 17}, {360 + 120 - 220, 500 + 17}, rgbColor);

rgb.draw(wall);
rgb.draw(t5);
rgb.draw(t4);
rgb.draw(t3);
rgb.draw(t2);
rgb.draw(t1);

rgb.display();