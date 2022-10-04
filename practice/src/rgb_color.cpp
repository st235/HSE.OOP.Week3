#include "rgb_color.h"

RGBColor::RGBColor(uint8_t red, uint8_t green, uint8_t blue):
    _red(red),
    _green(green),
    _blue(blue) {
    // empty on purpose
}

RGBColor::RGBColor(const RGBColor& that):
    _red(that._red),
    _green(that._green),
    _blue(that._blue) {
    // empty on purpose
}

RGBColor& RGBColor::operator=(const RGBColor& that) {
    if (this != &that) {
        this->_red = that._red;
        this->_green = that._green;
        this->_blue = that._blue;
    }

    return *this;
}

void RGBColor::changeColor(uint8_t red, uint8_t green, uint8_t blue) {
    RGBColor that(red, green, blue);
    *this = that;
}

Color* RGBColor::deepCopy() const {
    return new RGBColor(*this);
}

uint32_t RGBColor::getValue() const {
    return (static_cast<uint32_t>(_red) << 0 | 
         static_cast<uint32_t>(_green) << 8 |
         static_cast<uint32_t>(_blue) << 16);
}
