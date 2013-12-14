/**************************************************************************************
 * Description		: Enable LEDs
 **************************************************************************************/

#ifndef LED_H_
#define LED_H_

#include "derivative.h"

#define RED_LED (1<<29)
#define GREEN_LED (1<<5)

extern void initPORT(unsigned int *SIM, unsigned int PORT_MASK);
void initLED();

#endif /* LED_H_ */
