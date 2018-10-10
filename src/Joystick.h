/**
 * \file
 * \brief   Joystick class header.
 * \author  Vasiliy Polyakov <vp@psu.ru>
 * \author  RobotPSU https://robot.psu.ru/
 * \date    2018
 */

#ifndef Joystick_h
#define Joystick_h

#include <Arduino.h>

struct JoystickData {
  int x, y;
  byte s;
};

struct JoystickPins {
  byte x, y, s;
};

class Joystick {
public:
  Joystick() : _pinX(0), _pinY(0), _pinSw(0) {}

  void attach(uint8_t pinX, uint8_t pinY);
  void attach(uint8_t pinX, uint8_t pinY, uint8_t pinSw);

  int x();
  int y();
  int s();

private:
  // Switch (button) pin
  uint8_t _pinSw;
  // Coordinate pins
  uint8_t _pinX, _pinY;
};

#endif

/* vim: set ft=arduino et sw=2 ts=2: */
