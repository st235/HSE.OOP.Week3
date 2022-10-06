RGBMatrix rgb(1000, 720, 0);
RGBColor rgbColor(242, 242, 242);
Rectangle wall({ 0, 0 }, 720, 1000, rgbColor);

rgbColor.changeColor(40, 40, 27);
Circle sun1({ 360, 0 }, 360, rgbColor);

rgbColor.changeColor(115, 41, 41);
Circle sun2({ 360, 0 }, 400, rgbColor);

rgbColor.changeColor(192, 64, 53);
Circle sun3({ 360, 0 }, 440, rgbColor);

rgbColor.changeColor(242, 70, 55);
Circle sun4({ 360, 0 }, 480, rgbColor);

rgb.draw(wall);
rgb.draw(sun4);
rgb.draw(sun3);
rgb.draw(sun2);
rgb.draw(sun1);

rgb.display();