RGBMatrix rgb(1000, 720, 0);
RGBColor rgbColor(31, 30, 28);
Rectangle wall({ 0, 0 }, 720, 1000, rgbColor);
rgbColor.changeColor(241, 104, 105);
Circle circle({ 360, 500 }, 256, rgbColor);
rgbColor.changeColor(31, 30, 28);
Rectangle overlay({ 0, 0 }, 720, 500, rgbColor);

rgb.draw(wall);
rgb.draw(circle);
rgb.draw(overlay);

rgb.display();