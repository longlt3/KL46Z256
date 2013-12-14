/**************************************************************************************
 * Description		: Enable LEDs
 **************************************************************************************/

#include "led.h"
#include "resources.h"
#include "derivative.h"

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
	initPORT(&SIM_SCGC5, 
			SIM_SCGC5_PORTA_MASK |
			SIM_SCGC5_PORTB_MASK |
			SIM_SCGC5_PORTC_MASK |
			SIM_SCGC5_PORTD_MASK |
			SIM_SCGC5_PORTE_MASK );
	/* 
	 * Initialize the Red LED (PTE29)
	 */
	/* Set the PTE29 pin multiplexer to GPIO mode */
	PORTE_PCR29 = PORT_PCR_MUX(1);

	/* Set the pins direction to output */
	GPIOE_PDDR |= RED_LED;
	
	/* Set the initial output state to high */
	GPIOE_PSOR |= RED_LED;	
	
	/* 
	 * Initialize the Green LED (PTE5)
	 */	
	/* Set the PTE29 pin multiplexer to GPIO mode */
	PORTD_PCR5 = PORT_PCR_MUX(1);

	/* Set the pins direction to output */
	GPIOD_PDDR |= GREEN_LED;
	
	/* Set the initial output state to high */
	GPIOD_PSOR |= GREEN_LED;	
}
