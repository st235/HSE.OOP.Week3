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