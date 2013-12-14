/**************************************************************************************
 * Description		: Enable LEDs
 **************************************************************************************/

#include "led.h"

/*******************************************
 * Function			: initLED
 * 
 * Description		: Initial LEDs
 * 
 * Arguments		: void
 * 
 * Return			: void
 *******************************************/
void initLED() 
{
	SIM_SCGC5 |= 
//			SIM_SCGC5_PORTA_MASK |
//			SIM_SCGC5_PORTB_MASK |
//			SIM_SCGC5_PORTC_MASK |
			SIM_SCGC5_PORTD_MASK |
			SIM_SCGC5_PORTE_MASK
			;
	/* 
	 * Initialize the Red LED (PTE29)
	 */
	/* Set the PTE29 pin multiplexer to GPIO mode */
	PORTE_PCR29 = PORT_PCR_MUX(1);

	/* Set the pins direction to output */
	GPIOE_PDDR |= RED_LED;
	
	/* 
	 * Initialize the Green LED (PTE5)
	 */	
	/* Set the PTE29 pin multiplexer to GPIO mode */
	PORTD_PCR5 = PORT_PCR_MUX(1);

	/* Set the pins direction to output */
	GPIOD_PDDR |= GREEN_LED;
	
	GPIOD_PCOR |= GREEN_LED;
	GPIOE_PCOR |= RED_LED;
	redOff();
	greenOff();	
}

void redOn()
{
	GPIOE_PCOR |= RED_LED;
}

void greenOn()
{
	GPIOD_PCOR |= GREEN_LED;
}

void redOff()
{
	GPIOE_PSOR |= RED_LED;
}
void greenOff()
{
	GPIOD_PSOR |= GREEN_LED;
}

void redToogle()
{
	GPIOE_PTOR |= RED_LED;
}

void greenToogle()
{
	GPIOD_PTOR |= GREEN_LED;
}
