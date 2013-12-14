/**************************************************************************************
 * Description		: Enable LEDs
 **************************************************************************************/

#ifndef LED_H_
#define LED_H_

#include <armv6/KL46/Project_Headers/derivative.h>

#define RED_LED (1<<29)
#define GREEN_LED (1<<5)

void initLED();
void redOn();
void greenOn();
void redOff();
void greenOff();
void redToogle();
void greenToogle();

#endif /* LED_H_ */
