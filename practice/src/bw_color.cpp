#include "bw_color.h"

BWColor::BWColor(uint8_t color): _color(color) {
    // empty on purpose
}

BWColor::BWColor(const BWColor& that): _color(that._color) {
    // empty on purpose
}

BWColor& BWColor::operator=(const BWColor& that) {
    if (this != &that) {
        this->_color = that._color;
    }

    return *this;
}

void BWColor::changeColor(uint8_t color) {
    BWColor that(color);
    *this = that;
}

Color* BWColor::deepCopy() const {
    return new BWColor(*this);
}

uint32_t BWColor::getValue() const {
    return static_cast<uint32_t>(_color);
}
