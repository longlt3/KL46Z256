/*
 * pit.c
 *
 *  Created on: Oct 31, 2013
 *      Author: LongLT3
 */

#include "pit.h"
#include "derivative.h"
#include "led.h"
//#include "audio_data.c"
static unsigned int index=0;

extern const unsigned char wav_data[];
extern const unsigned short wav_size;

void initPIT()
{
	NVIC_ISER |= (1<<22);
	initPORT(&SIM_SCGC6, SIM_SCGC6_PIT_MASK);		//turn clock on to PIT
	PIT_MCR &= ~PIT_MCR_MDIS_MASK;					//enable module PIT
	PIT_LDVAL1 |= PIT_LDVAL_TSV(3000);				//set time1
	PIT_TCTRL1 |= PIT_TCTRL_TEN_MASK;				//enable timer1
	PIT_TCTRL1 |= PIT_TCTRL_TIE_MASK;				//enable iter1
}

unsigned int duty_tmp = 0, count_irq = 0; 
void PIT_IRQHandler()
{
	PIT_TFLG1 |= PIT_TFLG_TIF_MASK;
}
