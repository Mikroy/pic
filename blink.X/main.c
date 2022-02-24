/*
 * File:   main.c
 * 
 * Brief: Blink led.
 * 
 * Author: Miguel Ruiz Esparza
 *
 * Feb/2022
 * 
 * Public.
 */

#include "target.h"
#include "led_driver.h"

#define _XTAL_FREQ  8000000L

void main(void)
{
    init();
    TRISB = 0x00;
    while(1)
    {
        LATBbits.LATB0 = 1;
        __delay_ms(125);
        LATBbits.LATB0 = 0;
        __delay_ms(125);
    }
}
