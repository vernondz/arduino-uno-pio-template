#include "led.hpp"

LED::LED(uint8_t pin) : _pin(pin) {
    pinMode(_pin, OUTPUT);
}

void LED::on() {
    digitalWrite(_pin, HIGH);
}

void LED::off() {
    digitalWrite(_pin, LOW);
}

void LED::toggle() {
    digitalWrite(_pin, !digitalRead(_pin));
}

void LED::blink(unsigned long duration_ms) {
    on();
    delay(duration_ms);
    off();
    delay(duration_ms);
}