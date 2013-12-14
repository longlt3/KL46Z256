/* Configured with [-s sample1.i -kernel_id kernel_id.h -kernel_cfg kernel_cfg.c ] */

#include <include/kernel_cfg.h>
#include <kernel_id.h>
#include <test.h>
#include <armv6/KL46/hw_timer.h>
#include <include/timer.h>
#include <include/serial.h>
#include <include/logtask.h>

#ifndef __EMPTY_LABEL
#define __EMPTY_LABEL(x,y) x y[]
#endif

#if TKERNEL_PRID != 0x0001u /* TOPPERS/JSP */
#error "You can not use this configuration file without TOPPERS/JSP"
#endif

extern void main_task();
extern void task1();
extern void task2();


	/* Object initializer [task] */

#define TNUM_TSKID 3

const ID _kernel_tmax_tskid = (TMIN_TSKID + TNUM_TSKID - 1);

static __STK_UNIT __stack_MAIN_TASK[__TCOUNT_STK_UNIT(0x200)];
static __STK_UNIT __stack_REDLED_TASK[__TCOUNT_STK_UNIT(0x200)];
static __STK_UNIT __stack_GREENLED_TASK[__TCOUNT_STK_UNIT(0x200)];


const TINIB _kernel_tinib_table[TNUM_TSKID] = {
	{0x00u | 0x02u, (VP_INT)(0)           , (FP)(main_task)         , INT_PRIORITY(5) , __TROUND_STK_UNIT(256), __stack_MAIN_TASK, TA_NULL, (FP)(NULL)},
	{0x00u        , (VP_INT)(( VP_INT ) 1), (FP)(task1)  , INT_PRIORITY(10), __TROUND_STK_UNIT(128), __stack_REDLED_TASK  , 0, (FP)(NULL)},
	{0x00u        , (VP_INT)(( VP_INT ) 2), (FP)(task2)  , INT_PRIORITY(10), __TROUND_STK_UNIT(128), __stack_GREENLED_TASK  , 0, (FP)(NULL)},
};

//const ID _kernel_torder_table[TNUM_TSKID] = {1,2,3,4,5,6,7,8,9,10};
const ID _kernel_torder_table[TNUM_TSKID] = {MAIN_TASK, TASK1, TASK2};

TCB _kernel_tcb_table[TNUM_TSKID];


	/* Object initializer [semaphore] */

#define TNUM_SEMID 2

const ID _kernel_tmax_semid = (TMIN_SEMID + TNUM_SEMID - 1);

const SEMINIB _kernel_seminib_table[TNUM_SEMID] = {
	{1, 0, 1},
	{1, 1, 1}
};

SEMCB _kernel_semcb_table[TNUM_SEMID];


	/* Object initializer [eventflag] */

#define TNUM_FLGID 0

const ID _kernel_tmax_flgid = (TMIN_FLGID + TNUM_FLGID - 1);

__EMPTY_LABEL(const FLGINIB, _kernel_flginib_table);
__EMPTY_LABEL(FLGCB, _kernel_flgcb_table);


	/* Object initializer [dataqueue] */

#define TNUM_DTQID 0

const ID _kernel_tmax_dtqid = (TMIN_DTQID + TNUM_DTQID - 1);

__EMPTY_LABEL(const DTQINIB, _kernel_dtqinib_table);
__EMPTY_LABEL(DTQCB, _kernel_dtqcb_table);


	/* Object initializer [mailbox] */

#define TNUM_MBXID 0

const ID _kernel_tmax_mbxid = (TMIN_MBXID + TNUM_MBXID - 1);

__EMPTY_LABEL(const MBXINIB, _kernel_mbxinib_table);
__EMPTY_LABEL(MBXCB, _kernel_mbxcb_table);


	/* Object initializer [mempfix] */

#define TNUM_MPFID 0

const ID _kernel_tmax_mpfid = (TMIN_MPFID + TNUM_MPFID - 1);

__EMPTY_LABEL(const MPFINIB, _kernel_mpfinib_table);
__EMPTY_LABEL(MPFCB, _kernel_mpfcb_table);


	/* Object initializer [cyclic] */

#define TNUM_CYCID 1

const ID _kernel_tmax_cycid = (TMIN_CYCID + TNUM_CYCID - 1);

const CYCINIB _kernel_cycinib_table[TNUM_CYCID] = {
	{0,0,(FP)(cyclic_handler),2000,0}
};

CYCCB _kernel_cyccb_table[TNUM_CYCID];


	/* Object initializer [interrupt] */

#define TNUM_INHNO 0

const UINT _kernel_tnum_inhno = TNUM_INHNO;

//CFG_INTHDR_ENTRY(timer_handler)
//CFG_INTHDR_ENTRY(TPM2_interrupt) /*added by FSOFT_MINHNQ2*/
//CFG_INTHDR_ENTRY(MPR083_IRQ_ISR) /*added by FSOFT_MINHNQ2*/
//CFG_INTHDR_ENTRY(USB_ISR)/*FSOFT_GIAPLD*/
//CFG_INTHDR_ENTRY(kbi_interrupt)

const INHINIB _kernel_inhinib_table[TNUM_INHNO] = {
//	{91,0,(FP)CFG_INT_ENTRY(timer_handler)},
//	{78,0,(FP)CFG_INT_ENTRY(TPM2_interrupt)},           /*added by FSOFT_MINHNQ2*/
//  {64,0,(FP)CFG_INT_ENTRY(MPR083_IRQ_ISR)},	                /*added by FSOFT_MINHNQ2*/
//	{69,0,(FP)CFG_INT_ENTRY(USB_ISR)},/*FSOFT_GIAPLD*/
//	{87,0,(FP)CFG_INT_ENTRY(kbi_interrupt)}
};



	/* Object initializer [exception] */

#define TNUM_EXCNO 0

const UINT _kernel_tnum_excno = TNUM_EXCNO;

__EMPTY_LABEL(const EXCINIB, _kernel_excinib_table);
	/* Initialization handler */

void
_kernel_call_inirtn(void)
{
	timer_initialize( (VP_INT)(0) );	
}

void
_kernel_call_terrtn(void)
{
	timer_terminate( (VP_INT)(0) );
}

	/* Object initialization routine */

void
_kernel_object_initialize(void)
{
	_kernel_task_initialize();
	_kernel_semaphore_initialize();
	_kernel_cyclic_initialize();
//	_kernel_interrupt_initialize();
	
//	vmsk_log(LOG_UPTO(LOG_DEBUG), LOG_UPTO(LOG_INFO));
}

TMEVTN   _kernel_tmevt_heap[TNUM_TSKID + TNUM_CYCID];

