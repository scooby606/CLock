#pragma once

#include <stdint.h>
#include "drv8825.h"

// Smooth stepper motor controller for STM32 NUCLEO-F103RB
// Target motor: MMOBIEL 17HS4023 NEMA17

class StepperMotor
{
public:
    StepperMotor(DRV8825 &driver, uint32_t stepsPerRev, uint8_t microsteps);

    void begin();
    void moveSteps(int32_t steps);
    void setSpeed(uint32_t stepsPerSecond);
    void setAcceleration(uint32_t acceleration);

    int32_t getPosition();
    void resetPosition();

private:
    DRV8825 &driver;

    uint32_t stepsPerRev;
    uint8_t microsteps;

    uint32_t speed;
    uint32_t acceleration;

    int32_t position;
};
