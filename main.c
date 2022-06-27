/*
 * File:   main.c
 * Author: Jamshed
 *
 * Created on June 6, 2022, 4:35 PM
 */


#include <xc.h>
#include "config.h"

#define _XTAL_FREQ     4e6

static const unsigned char digits[10] = {
    0b00111111, // 0
    0b00000110, // 1
    0b01011011, // 2
    0b01001111, // 3
    0b01100110, // 4
    0b01101101, // 5
    0b01111101, // 6
    0b00000111, // 7
    0b01111111, // 8
    0b01101111, // 9
};

void main( void ) {
    TRISB = 0;
    unsigned char number = 0;
    while (1) {
        PORTB = digits[number];
        number++;
        number %= 10;
        __delay_ms(1000);
    }
    return;
}