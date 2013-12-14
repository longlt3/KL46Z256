/*
 * test.h
 *
 *  Created on: Dec 10, 2013
 *      Author: LongLT3
 */

#ifndef TEST_H_
#define TEST_H_

#include <include/itron.h>
#include <armv6/KL46/Project_Headers/derivative.h>
#include <include/kernel.h>
#include <armv6/cpu_config.h>
#include <include/timer.h>
#include <kernel_id.h>
#include <include/t_services.h>

void main_task(VP_INT exinf);
void redLed_task(VP_INT exinf);
void greenLed_task(VP_INT exinf);
void cyclic_handler(VP_INT exinf);

extern void redOn();
extern void greenOn();
extern void redOff();
extern void greenOff();
extern void redToogle();
extern void greenToogle();

#endif /* TEST_H_ */
