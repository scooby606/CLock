#pragma once

// Engineezy Tipping Marble Clock
// STM32 NUCLEO-F103RB configuration

#define MOTOR_STEPS_PER_REV 200
#define MICROSTEPS 16
#define MOTOR_CURRENT_AMPS 1.0f

// DRV8825 pins (adjustable)
#define STEPPER_STEP_PIN 8
#define STEPPER_DIR_PIN 9
#define STEPPER_ENABLE_PIN 10

// Timing
#define RTC_ENABLED 1
#define HOMING_ENABLED 1

#define DEFAULT_MAX_SPEED 1200
#define DEFAULT_ACCELERATION 400
