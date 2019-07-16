#ifndef Buzzer_h
#define Buzzer_h

#include <Arduino.h>

class Buzzer {
    public:
        Buzzer(byte button);
        void play();
    private:
        byte _pin;
};

#endif
