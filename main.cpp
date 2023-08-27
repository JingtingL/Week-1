//Blinky
#include "mbed.h"

DigitalIn input(BUTTON1);
DigitalOut led(LED1);

int main() {
    while (1) {
        int x = input.read();
        led = x;
        printf("Blink! LED is now %d\n", led.read());

        wait_ms(250);
    }
}

//Exercise 2
#include "mbed.h"

AnalogIn anInput(p15);
DigitalOut led(LED1);

int main() {
    while (1) {
        led = anInput;
        printf("Blink! LED is now %d\n", led.read());

        wait_ms(2000);
    }
}

