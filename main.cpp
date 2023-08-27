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

