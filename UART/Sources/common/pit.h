/*
 * pit.h
 *
 *  Created on: Oct 31, 2013
 *      Author: LongLT3
 */

#ifndef PIT_H_
#define PIT_H_

void initPIT();
extern void PIT_IRQHandler();
extern void initPORT(unsigned int *SIM, unsigned int PORT_MASK);

#endif /* PIT_H_ */
