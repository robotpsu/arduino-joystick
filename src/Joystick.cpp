/**
 * \file
 * \brief   Joystick class implementation.
 * \author  Vasiliy Polyakov <vp@psu.ru>
 * \author  RobotPSU https://robot.psu.ru/
 * \date    2018
 */

#include "Joystick.h"

void Joystick::attach(uint8_t pinX, uint8_t pinY) {
  _pinX = pinX;
  _pinY = pinY;
}

void Joystick::attach(uint8_t pinX, uint8_t pinY, uint8_t pinSw) {
  attach(pinX, pinY);
  pinMode(_pinSw = pinSw, INPUT_PULLUP);
}

int Joystick::x() {
  return analogRead(_pinX);
}

int Joystick::y() {
  return analogRead(_pinY);
}

int Joystick::s() {
  return _pinSw ? !digitalRead(_pinSw) : LOW;
}

/* vim: ft=arduino et sw=2 ts=2: */
