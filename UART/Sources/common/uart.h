/*
 * File:		uart.h
 * Purpose:     Provide common ColdFire uart routines for polled serial IO
 *
 * Notes:
 */

#ifndef __uart_H__
#define __uart_H__

#include "derivative.h"
/********************************************************************/

#define TRUE					1
#define FALSE					0

#define UART_MODE_INTERRUPT		FALSE
extern void UART0_IRQHandler(void);

void uart0_init (UART0_MemMapPtr uartch, int sysclk, int baud);
char uart0_getchar (UART0_MemMapPtr channel);
void uart0_putchar (UART0_MemMapPtr channel, char ch);
int uart0_getchar_present (UART0_MemMapPtr channel);

/********************************************************************/

#endif /* __uart_H__ */
