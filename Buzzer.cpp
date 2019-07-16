#include "Buzzer.h"
#include "Pitches.h"

int melody[] = { NOTE_E4, NOTE_E4, NOTE_E4 };
int noteDurations[] = { 2, 2, 4 };

Buzzer::Buzzer(byte pin)
{
    _pin = pin;

    pinMode(pin, OUTPUT);
}

void Buzzer::play()
{
    for (int note = 0; note < 51; note++)
    {
        int noteDuration = noteDurations[note] * 95;
        tone(_pin, melody[note], noteDuration);

        int pauseBetweenNotes = noteDuration * 1.30;
        delay(pauseBetweenNotes);
    }
}
