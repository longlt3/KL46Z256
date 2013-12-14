/*
 * mytask.c
 *
 *  Created on: Dec 3, 2013
 *      Author: LongLT3
 */


#include "test.h"
void cyclic_handler(VP_INT exinf)
{
	
}

extern UW counter;
const char myMsg[] = "\n"
" WHY? \n"
" WHY? \n"
" WHY? \n";

void main_task(VP_INT exinf)
{
	redOn();
	act_tsk(TASK1);
//	act_tsk(TASK2);
    while(1)
    {
//    	syslog_0(LOG_WARNING,
//    				"ext_tsk is called from CPU locked state.");
//    	syslog_3(LOG_NOTICE, myMsg,
//    			(TKERNEL_PRVER >> 12) & 0x0f,
//    			(TKERNEL_PRVER >> 4) & 0xff,
//    			TKERNEL_PRVER & 0x0f);
//    	print_banner();
    	greenToogle();
    	tslp_tsk(1000);
    }
}



void task1(VP_INT exinf)
{
	while(1)
	{
		redToogle();
		tslp_tsk(1000);
	}
}

void task2(VP_INT exinf)
{
	
}
