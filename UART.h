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
//You may not use the Program in non-TI devices.
//
//This software has been submitted to export control regulations
//The ECCN is EAR99 
//*****************************************************************************
/**
*  @file UART.h
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


#ifndef UART_H_
#define UART_H_


//#include "TI_USCI_UART_Regs.h"


//UART operating mode definitions
#define USCI_A_MODULE       0     // Select which USCI_A module to use [0-1]
#define UART_BAUDRATE       115200 //Specify baudrate
//#define UART_BAUDRATE_REG  (unsigned short)(16000000/UART_BAUDRATE)
#define HW_FLOW_CTRL       1// 1    //define HW flow control CSR = 0

//define uart registers
#define UART_PxIN      P1IN
#define UART_PxOUT     P1OUT
#define UART_PxDIR     P1DIR
#define UART_PxIFG     P1IFG
#define UART_PxIES     P1IES
#define UART_PxIE      P1IE
#define UART_PxSEL     P1SEL
#define UART_PxREN     P1REN

//define UART registers
#define UART_CTS_PxIN      P2IN
#define UART_CTS_PxOUT     P2OUT
#define UART_CTS_PxDIR     P2DIR
#define UART_CTS_PxIFG     P2IFG
#define UART_CTS_PxIES     P2IES
#define UART_CTS_PxIE      P2IE
#define UART_CTS_PxSEL     P2SEL
#define UART_CTS_PxREN     P2REN


//define UART registers
#define UART_RTS_PxIN      P2IN
#define UART_RTS_PxOUT     P2OUT
#define UART_RTS_PxDIR     P2DIR
#define UART_RTS_PxIFG     P2IFG
#define UART_RTS_PxIES     P2IES
#define UART_RTS_PxIE      P2IE
#define UART_RTS_PxSEL     P2SEL
#define UART_RTS_PxREN     P2REN

//Define UART pins
#define UART_RX_PAD    BIT1 // select UART pins P3.4
#define UART_TX_PAD    BIT2 // select UART pins P3.3
#define UART_CTS_PAD   BIT0 // MSP430  CTS line  P3.2 <- BLE_RTS line
#define UART_RTS_PAD   BIT1 // MSP430 RTS line P2.5   -> BLE_CTS line

#define UART_BUFFER_LENGTH 40
#define IN_BUFFER_LENGTH 100
#define PING_BUFFER 0
#define PONG_BUFFER 1

extern char In_Buffer[2][IN_BUFFER_LENGTH];
extern unsigned char Current_Buffer;
extern unsigned char Buffer_Ready;
extern int Buffer_Lengths[2];
extern unsigned char BLE_Line_Detected;

//Global Functions
extern void InitUART(void);
extern void StartUARTRx(void);
extern void StopUARTRx(void);
extern void WriteUART(char data);
extern void putsUART(char *buffer);
//extern void SetUARTRxBufferPointer(char *BufferRx, unsigned int Size);
extern void putnUART(char *buffer, unsigned int length);

//UART Rx buffer full Event flag
extern volatile char bUARTDataReceived_event;

//Pointer to Buffer to save received data
extern char UARTRxBuffer[UART_BUFFER_LENGTH];
extern unsigned int UARTRxBufferSize;  //Saves the UARTRxBufferSize
extern unsigned int Byte_Counter;
#endif /*UART_H_*/
