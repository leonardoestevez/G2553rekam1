/*
 * HAL_Setup.c
 *
 *  Created on: Jul 13, 2012
 *      Author: a0273379
 */

#include "msp430g2553.h"
#include "HAL_Setup.h"

void HAL_Clock_Setup()
{
    BCSCTL1 = CALBC1_16MHZ;                    // Set DCO
    DCOCTL = CALDCO_16MHZ;
}

void HAL_Port_Setup()
{
//    P1DIR = 0xFF;                             // All P1.x outputs
//    P1OUT = 0;                                // All P1.x reset
    P1SEL = BIT1 + BIT2 + BIT4;                     // P1.1 = RXD, P1.2=TXD
    P1SEL2 = BIT1 + BIT2;                     // P1.4 = SMCLK, others GPIO
/*    P2DIR = 0xFF;                             // All P2.x outputs
    P2OUT = 0;                                // All P2.x reset
    P2SEL &= ~(BIT6 + BIT7);
    P2SEL2 &= ~(BIT6 + BIT7);
    P3DIR = 0xFF;                             // All P3.x outputs
    P3OUT = 0;                                // All P3.x reset
*/
}
