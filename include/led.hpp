#ifndef LED_HPP
#define LED_HPP

#include <Arduino.h>

class LED {
public:
    LED(uint8_t pin);
    void on();
    void off();
    void toggle();
    void blink(unsigned long duration_ms);

private:
    uint8_t _pin;
};

#endif // LED_HPP
