//******************************************************************************
//THIS PROGRAM IS PROVIDED "AS IS". TI MAKES NO WARRANTIES OR
//REPRESENTATIONS, EITHER EXPRESS, IMPLIED OR STATUTORY,
//INCLUDING ANY IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS
//FOR A PARTICULAR PURPOSE, LACK OF VIRUSES, ACCURACY OR
//COMPLETENESS OF RESPONSES, RESULTS AND LACK OF NEGLIGENCE.
//TI DISCLAIMS ANY WARRANTY OF TITLE, QUIET ENJOYMENT, QUIET
//POSSESSION, AND NON-INFRINGEMENT OF ANY THIRD PARTY
//INTELLECTUAL PROPERTY RIGHTS WITH REGARD TO THE PROGRAM OR
//YOUR USE OF THE PROGRAM.
//
//IN NO EVENT SHALL TI BE LIABLE FOR ANY SPECIAL, INCIDENTAL,
//CONSEQUENTIAL OR INDIRECT DAMAGES, HOWEVER CAUSED, ON ANY
//THEORY OF LIABILITY AND WHETHER OR NOT TI HAS BEEN ADVISED
//OF THE POSSIBILITY OF SUCH DAMAGES, ARISING IN ANY WAY OUT
//OF THIS AGREEMENT, THE PROGRAM, OR YOUR USE OF THE PROGRAM.
//EXCLUDED DAMAGES INCLUDE, BUT ARE NOT LIMITED TO, COST OF
//REMOVAL OR REINSTALLATION, COMPUTER TIME, LABOR COSTS, LOSS
//OF GOODWILL, LOSS OF PROFITS, LOSS OF SAVINGS, OR LOSS OF
//USE OR INTERRUPTION OF BUSINESS. IN NO EVENT WILL TI'S
//AGGREGATE LIABILITY UNDER THIS AGREEMENT OR ARISING OUT OF
//YOUR USE OF THE PROGRAM EXCEED FIVE HUNDRED DOLLARS
//(U.S.$500).
//
//Unless otherwise stated, the Program written and copyrighted
//by Texas Instruments is distributed as "freeware".  You may,
//only under TI's copyright in the Program, use and modify the
//Program without any charge or restriction.  You may
//distribute to third parties, provided that you transfer a
//copy of this license to the third party and the third party
//agrees to these terms by its first use of the Program. You
//must reproduce the copyright notice and any other legend of
//ownership on each copy or partial copy, of the Program.
//
//You acknowledge and agree that the Program contains
//copyrighted material, trade secrets and other TI proprietary
//information and is protected by copyright laws,
//international copyright treaties, and trade secret laws, as
//well as other intellectual property laws.  To protect TI's
//rights in the Program, you agree not to decompile, reverse
//engineer, disassemble or otherwise translate any object code
//versions of the Program to a human-readable form.  You agree
//that in no event will you alter, remove or destroy any
//copyright notice included in the Program.  TI reserves all
//rights not specifically granted under this license. Except
//as specifically provided herein, nothing in this agreement
//shall be construed as conferring by implication, estoppel,
//or otherwise, upon you, any license or other right under any
//TI patents, copyrights or trade secrets.
//
// 
//You may not use the Program in non-TI devices.
//
//This software has been submitted to export control regulations
//The ECCN is EAR99 
//*****************************************************************************
/**
*  @file UART.c
*
*  @brief this file contains all the required functions to send and receive
*  data using the UART module.
*
*
*  @author Daniel Torres - Texas Instruments, Inc
*  @date November 2010
*  @version 1.0 Initial version
*  @note Built with IAR for MSP430 Version: 5.10
*/

#include <stdio.h>
#include <string.h>
#include "msp430.h"
#include "UART.h"

#define TRUE 1

unsigned int Byte_Counter = 0;

//UART Rx buffer full Event flag
volatile char bUARTDataReceived_event;

//Pointer to Buffer to save received data
char * UARTRxBufferPointer;
unsigned int UARTRxBufferSize = 0;  //Saves the UARTRxBufferSize
//extern char buff[21];
extern unsigned int capture;


unsigned char LineBuffer[12];
//unsigned char previousbuffer[30];
unsigned int bufferlength=0;


/**
* @brief Function Name:     InitUART.                                                 
* @brief  Description: This function initialized the USCI-UART.
* @param none                                                   
* @return none                                                    
*/     
void InitUART(void){ 
 
  UCA0CTL1 = UCSWRST;            // **Stops USCI state machine**

  if(HW_FLOW_CTRL){

	UART_RTS_PxREN &= ~(UART_RTS_PAD);   //Disable port pull resistors
	UART_RTS_PxDIR |= UART_RTS_PAD;      // Configure Px.X as output
	UART_PxSEL &= ~(UART_RTS_PAD);       // Configured as GPIO
	UART_RTS_PxOUT &= ~(UART_RTS_PAD);   // pull MSP430 RTS to low, UART RX Buffer empty


	UART_CTS_PxREN &= ~(UART_CTS_PAD);   //Disable port pull resistors
	UART_CTS_PxDIR &= ~UART_CTS_PAD;     // Configure Px.X as input
	UART_PxSEL &= ~(UART_CTS_PAD);       //Configured as GPIO
  }

  UART_PxREN &= ~(UART_TX_PAD|UART_RX_PAD); //Disable port pull resistors
  UART_PxDIR &= ~UART_RX_PAD;               // Configure Px.X as input
  UART_PxDIR |= UART_TX_PAD;                // Configure Px.X as output
  UART_PxSEL |= (UART_TX_PAD|UART_RX_PAD); // Px.x & Px.X = USCI_Ax TXD & RXD


  UCA0CTL1 |= UCSSEL_2;                     // SMCLK
  UCA0BR0 = 138;     // defines baudrate
  UCA0BR1 = 0x00;  // defines baudrate
//    UCA0BR0 = 130;     // defines baudrate CSR/USB
//    UCA0BR1 = 6;  // defines baudrate CSR/USB

  UCA0MCTL =  UCBRF_0 + UCBRS_7;             // Modulation UCBRSx = 7
//    UCA0MCTL =  UCBRF_0 + UCBRS_6; //CSR/USB
  UCA0CTL1 &= ~UCSWRST;                     // **Initialize USCI state machine**
  IE2 |= UCA0RXIE;// | UCA0TXIE;                          // Enable USCI_A0 RX interrupt
}  

void SetUARTRxBufferPointer(char *BufferRx, unsigned int Size){

	UARTRxBufferPointer = BufferRx;  //Reset UARTRx buffer
	UARTRxBufferSize = Size;
}

/**
* @brief Function Name: StopUARTRx.                                                 
* @brief  Description: This function disables the USCI-UART interrupts in order
*                     to not acknowledge byte sent by the TX.
* @param none                                                   
* @return none                                                    
*/
void StopUARTRx(void){

  IE2 &= ~UCA0RXIE;             // Disable USCI RX interrupt
  
}


/**
* @brief Function Name: StartUARTRx.                                                 
* @brief  Description: This function enables the USCI-UART interrupts in order
*                     to be ready to receive USBID messages.
* @param none                                                   
* @return none                                                    
*/
void StartUARTRx(void){
  
  IFG2 &= ~UCA0RXIFG;           // Clear RX IFG
  IE2 |= UCA0RXIE;              // Enable USCI RX interrupt
}


/**
* @brief Function Name: WriteUART.                                      
* @brief  Description: This function writes data into the UART TX REG.
* @param unsigned char data the data to be written      
* @return None                                          
*/
void WriteUART(char data)
{  

	 // USCI_A0 TX buffer ready? and MSP430 CTS Line Low?
//	while (!(UCAxIFG & UCAxTXIFG) && !(UART_CTS_PxIN & UART_CTS_PAD))
	while (!(IFG2 & UCA0TXIFG))
		  ;

    //if so...then send byte
    UCA0TXBUF = data;

}

/**
* @brief Function Name: putsUART .                                           
* @brief  Description: This function puts the data string to be transmitted 
*                     into the transmit buffer (till NULL character)  .     
* @param unsigned char * address of the string buffer to be   
*                     transmitted                                          
* @return None                                                
*/
void putsUART(char *buffer)
{

  // transmit till NULL character is encountered
  while(*buffer)
  {
  // USCI_A0 TX buffer ready?
  while (!(IFG2 & UCA0TXIFG))
    ;
  while(UART_CTS_PxIN & UART_CTS_PAD); //what for the clear to send signal
                        //wait until Tx buffer is empty
  UCA0TXBUF = *buffer++;    // transfer data word to TX reg
  Byte_Counter++;
  }
}

void putnUART(char *buffer, unsigned int num)
{
  // transmit till NULL character is encountered
  while(num)
  {
  // USCI_A0 TX buffer ready?
  while (!(IFG2 & UCA0TXIFG));
  while(UART_CTS_PxIN & UART_CTS_PAD); //what for the clear to send signal
                        //wait until Tx buffer is empty
  UCA0TXBUF = *buffer++;    // transfer data word to TX reg
  num--;
  Byte_Counter++;
  }
}

#pragma vector=USCIAB0RX_VECTOR
__interrupt void USCI0RX_ISR(void)
{

	unsigned int jj;
    unsigned char ch = UCA0RXBUF;
    if(bufferlength<30){
    	LineBuffer[bufferlength]=ch;
    	bufferlength++;
    }else{
    	bufferlength=0;
    }
    if ((ch == '\n') || (ch == '\r') && !capture)
    {
			bufferlength=0;
			bUARTDataReceived_event = 1;
    }
}

#pragma vector=USCIAB0TX_VECTOR
__interrupt void USCI0TX_ISR(void)
{
}


