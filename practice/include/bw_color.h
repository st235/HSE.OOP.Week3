#ifndef BW_COLOR_H
#define BW_COLOR_H

#include <cstdint>

#include "color.h"

class BWColor: public Color {
private:
  uint8_t _color;

public:
  BWColor(uint8_t color);

  BWColor(const BWColor& that);
  BWColor& operator=(const BWColor& that);

  void changeColor(uint8_t color);

  Color* deepCopy() const override;
  uint32_t getValue() const override;

  ~BWColor() = default;
};

#endif // BW_COLOR_H
