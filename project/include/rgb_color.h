#ifndef RGB_COLOR_H
#define RGB_COLOR_H

#include <cstdint>

#include "color.h"

class RGBColor: public Color {
private:
  uint8_t _red;
  uint8_t _green;
  uint8_t _blue;

public:
  RGBColor(uint8_t red, uint8_t green, uint8_t blue);

  RGBColor(const RGBColor& that);
  RGBColor& operator=(const RGBColor& that);

  void changeColor(uint8_t red, uint8_t green, uint8_t blue);

  Color* deepCopy() const override;
  uint32_t getValue() const override;

  ~RGBColor() = default;
};

#endif // RGB_COLOR_H
