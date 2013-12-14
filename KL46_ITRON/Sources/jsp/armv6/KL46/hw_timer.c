/*
 * hw_timer.c
 *
 *  Created on: Dec 3, 2013
 *      Author: LongLT3
 */

#include "hw_timer.h"

UW counter = 0;

int errorCode = 0;

void PIT_ISR()
{
	interrupt_count++;
	counter++;
	timer_handler();
}
