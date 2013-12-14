/*
 * main implementation: use this 'C' sample to create your own application
 *
 */





#include "derivative.h" /* include peripheral declarations */
#include "common/mcg.h"
#include "common/uart.h"
#include "stdarg.h"

void myPrt(char const * format, ...)
{
	va_list va;
}

int main(void)
{
//	typedef int* VUW;
	int counter = 0;
//	VUW x = (VUW)UART0_BDH;
	SIM_SCGC5 |= (SIM_SCGC5_PORTA_MASK
		  | SIM_SCGC5_PORTB_MASK
		  | SIM_SCGC5_PORTC_MASK
		  | SIM_SCGC5_PORTD_MASK
		  | SIM_SCGC5_PORTE_MASK );
//	genPEE();
//	dispatch();
	initMCG(0,1,1,1,1,1);
	
//	PORTA_PCR1 = PORT_PCR_MUX(0x2);
	/* Enable the UART_TXD function on PTA2 */
	PORTA_PCR2 = PORT_PCR_MUX(0x2);
	SIM_SOPT2 = (SIM_SOPT2 & ~SIM_SOPT2_UART0SRC_MASK) | SIM_SOPT2_UART0SRC(1); // select the PLLFLLCLK as UART0 clock source
	SIM_SOPT2 = (SIM_SOPT2 & ~SIM_SOPT2_PLLFLLSEL_MASK) | SIM_SOPT2_PLLFLLSEL_MASK;
	
	uart0_init(UART0_BASE_PTR, 24000, 9600);
	
	
	
	for(;;) {
	   	counter++;
	   	uart0_putchar(UART0_BASE_PTR, 'U');
	}
	
	return 0;
}
