#pragma once

#include <stdint.h>

class DRV8825 {
public:
    DRV8825(uint8_t stepPin, uint8_t dirPin, uint8_t enablePin);

    void begin();
    void enable();
    void disable();
    void setDirection(bool clockwise);
    void step();

private:
    uint8_t stepPin;
    uint8_t dirPin;
    uint8_t enablePin;
};
