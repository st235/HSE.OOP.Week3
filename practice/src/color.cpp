#include "color.h"

uint8_t Color::GetChannel(uint32_t color, Channel channel) {
    uint32_t offset = static_cast<uint32_t>(channel);
    uint32_t mask = 0x000000FF << (8 * offset);
    uint32_t value = (color & mask) >> (8 * offset);
    return static_cast<int8_t>(value);
}
