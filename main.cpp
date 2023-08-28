//Blinky

//Exercise 1
#include "mbed.h"

//Specifying we can click to Button1 to trigger a response
DigitalIn input(BUTTON1);
//Specifying the LED1 will be responding to our code
DigitalOut led(LED1);

int main() {
    while (1) {
        //reading whether there is an input
        int x = input.read();
        //led will take the input
        led = x;
        printf("Blink! LED is now %d\n", led.read());

        //response time is 0.25 second
        wait_ms(250);
    }
}




//Exercise 2
#include "mbed.h"

//Specifying we can input into the pentiometer to trigger a response
AnalogIn anInput(p15);
//Specifying the LED1 will be outputting
DigitalOut led(LED1);

int main() {
    //in C/C++ anything other than 0 means true
    while (1) {
        //led will take the input
        led = anInput;
        printf("Blink! LED is now %d\n", led.read());

        //response time is 2 second
        wait_ms(2000);
    }
}

