/**************************************************************************************
 * Description		: Enable/Disable an interrupt event via NVIC ISR number
 **************************************************************************************/

#include "irq.h"
#include "resources.h"
#include "derivative.h"

/*******************************************
 * Function			: enable_irq
 * 
 * Description		: Enable an interrupt event
 * 
 * Arguments		: NVIC ISR number
 * 
 * Return			: void
 *******************************************/
void enable_irq (int irq)
{   
	NVIC_ICPR |= 1 << (irq%32);	// Clear pending interrupt
	NVIC_ISER |= 1 << (irq%32);	// Set NVIC ISR number
}

/*******************************************
 * Function			: disable_irq
 * 
 * Description		: Disable an interrupt event
 * 
 * Arguments		: NVIC ISR number
 * 
 * Return			: void
 *******************************************/
void disable_irq (int irq)
{
	NVIC_ICER = 1 << (irq%32);	// Clear NVIC ISR number
}
