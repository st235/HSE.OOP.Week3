RGBMatrix rgb(1000, 720, 0);
RGBColor rgbColor(158, 216, 216);
Rectangle wall({ 0, 0 }, 720, 1000, rgbColor);

rgbColor.changeColor(243, 169, 109);
Circle dot1({ 360, 40 }, 280, rgbColor);

rgbColor.changeColor(241, 102, 104);
Circle dot2({ 360, 960 }, 280, rgbColor);

rgb.draw(wall);
rgb.draw(dot1);
rgb.draw(dot2);

rgb.display();