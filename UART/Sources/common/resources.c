/*
 * resources.c
 *
 *  Created on: Nov 1, 2013
 *      Author: LongLT3
 */

#include "resources.h"

void initPORT(unsigned int *SIM, unsigned int PORT_MASK)
{
	/* Turn on clock to Port module */
	*SIM |= PORT_MASK;	
}

