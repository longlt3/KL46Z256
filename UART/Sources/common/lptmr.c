/*
 * lptmr.c
 *
 *  Created on: Nov 7, 2013
 *      Author: LongLT3
 */


#include "led.h"
#include "resources.h"
#include "mcg.h"
#include "tpm.h"

void initVLLS0Mode()
{
	SMC_PMPROT |= SMC_PMPROT_AVLLS_MASK;	// allow vlls mode
	SMC_PMCTRL |= SMC_PMCTRL_STOPM(4);		// enable vllsx
	SMC_STOPCTRL |= SMC_STOPCTRL_VLLSM(0);	// vlls0 
			
//	SCB_SCR
}

void initLPTMR()
{
	
}
