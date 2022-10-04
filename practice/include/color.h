#ifndef COLOR_H
#define COLOR_H

#include <cstdint>

class Color {
public:
  enum class Channel: int32_t {
    BW = 0,
    RED = 0,
    GREEN = 1,
    BLUE = 2
  };

  virtual uint32_t getValue() const = 0;
  virtual Color* deepCopy() const = 0;

  virtual ~Color() = default;

  static uint8_t GetChannel(uint32_t color, Channel channel);

};

#endif // COLOR_H
