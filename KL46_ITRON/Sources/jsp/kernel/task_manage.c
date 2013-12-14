/*
 *  TOPPERS/JSP Kernel
 *      Toyohashi Open Platform for Embedded Real-Time Systems/
 *      Just Standard Profile Kernel
 * 
 *  Copyright (C) 2000-2003 by Embedded and Real-Time Systems Laboratory
 *                              Toyohashi Univ. of Technology, JAPAN
 * 
 *  �ã‹L’˜�ìŒ ŽÒ‚Í�CˆÈ‰º‚Ì (1)�`(4) ‚Ì�ðŒ�‚©�CFree Software Foundation 
 *  ‚É‚æ‚Á‚ÄŒö•\‚³‚ê‚Ä‚¢‚é GNU General Public License ‚Ì Version 2 ‚É‹L
 *  �q‚³‚ê‚Ä‚¢‚é�ðŒ�‚ð–ž‚½‚·�ê�‡‚ÉŒÀ‚è�C–{ƒ\ƒtƒgƒEƒFƒA�i–{ƒ\ƒtƒgƒEƒFƒA
 *  ‚ð‰ü•Ï‚µ‚½‚à‚Ì‚ðŠÜ‚Þ�DˆÈ‰º“¯‚¶�j‚ðŽg—p�E•¡�»�E‰ü•Ï�E�Ä”z•z�iˆÈ‰º�C
 *  —˜—p‚ÆŒÄ‚Ô�j‚·‚é‚±‚Æ‚ð–³�ž‚Å‹–‘ø‚·‚é�D
 *  (1) –{ƒ\ƒtƒgƒEƒFƒA‚ðƒ\�[ƒXƒR�[ƒh‚ÌŒ`‚Å—˜—p‚·‚é�ê�‡‚É‚Í�C�ã‹L‚Ì’˜�ì
 *      Œ •\Ž¦�C‚±‚Ì—˜—p�ðŒ�‚¨‚æ‚Ñ‰º‹L‚Ì–³•Û�Ø‹K’è‚ª�C‚»‚Ì‚Ü‚Ü‚ÌŒ`‚Åƒ\�[
 *      ƒXƒR�[ƒh’†‚ÉŠÜ‚Ü‚ê‚Ä‚¢‚é‚±‚Æ�D
 *  (2) –{ƒ\ƒtƒgƒEƒFƒA‚ð�Cƒ‰ƒCƒuƒ‰ƒŠŒ`Ž®‚È‚Ç�C‘¼‚Ìƒ\ƒtƒgƒEƒFƒAŠJ”­‚ÉŽg
 *      —p‚Å‚«‚éŒ`‚Å�Ä”z•z‚·‚é�ê�‡‚É‚Í�C�Ä”z•z‚É”º‚¤ƒhƒLƒ…ƒ�ƒ“ƒg�i—˜—p
 *      ŽÒƒ}ƒjƒ…ƒAƒ‹‚È‚Ç�j‚É�C�ã‹L‚Ì’˜�ìŒ •\Ž¦�C‚±‚Ì—˜—p�ðŒ�‚¨‚æ‚Ñ‰º‹L
 *      ‚Ì–³•Û�Ø‹K’è‚ðŒf�Ú‚·‚é‚±‚Æ�D
 *  (3) –{ƒ\ƒtƒgƒEƒFƒA‚ð�C‹@Ší‚É‘g‚Ý�ž‚Þ‚È‚Ç�C‘¼‚Ìƒ\ƒtƒgƒEƒFƒAŠJ”­‚ÉŽg
 *      —p‚Å‚«‚È‚¢Œ`‚Å�Ä”z•z‚·‚é�ê�‡‚É‚Í�CŽŸ‚Ì‚¢‚¸‚ê‚©‚Ì�ðŒ�‚ð–ž‚½‚·‚±
 *      ‚Æ�D
 *    (a) �Ä”z•z‚É”º‚¤ƒhƒLƒ…ƒ�ƒ“ƒg�i—˜—pŽÒƒ}ƒjƒ…ƒAƒ‹‚È‚Ç�j‚É�C�ã‹L‚Ì’˜
 *        �ìŒ •\Ž¦�C‚±‚Ì—˜—p�ðŒ�‚¨‚æ‚Ñ‰º‹L‚Ì–³•Û�Ø‹K’è‚ðŒf�Ú‚·‚é‚±‚Æ�D
 *    (b) �Ä”z•z‚ÌŒ`‘Ô‚ð�C•Ê‚É’è‚ß‚é•û–@‚É‚æ‚Á‚Ä�CTOPPERSƒvƒ�ƒWƒFƒNƒg‚É
 *        •ñ��‚·‚é‚±‚Æ�D
 *  (4) –{ƒ\ƒtƒgƒEƒFƒA‚Ì—˜—p‚É‚æ‚è’¼�Ú“I‚Ü‚½‚ÍŠÔ�Ú“I‚É�¶‚¶‚é‚¢‚©‚È‚é‘¹
 *      ŠQ‚©‚ç‚à�C�ã‹L’˜�ìŒ ŽÒ‚¨‚æ‚ÑTOPPERSƒvƒ�ƒWƒFƒNƒg‚ð–Æ�Ó‚·‚é‚±‚Æ�D
 * 
 *  –{ƒ\ƒtƒgƒEƒFƒA‚Í�C–³•Û�Ø‚Å’ñ‹Ÿ‚³‚ê‚Ä‚¢‚é‚à‚Ì‚Å‚ ‚é�D�ã‹L’˜�ìŒ ŽÒ‚¨
 *  ‚æ‚ÑTOPPERSƒvƒ�ƒWƒFƒNƒg‚Í�C–{ƒ\ƒtƒgƒEƒFƒA‚ÉŠÖ‚µ‚Ä�C‚»‚Ì“K—p‰Â”\�«‚à
 *  ŠÜ‚ß‚Ä�C‚¢‚©‚È‚é•Û�Ø‚à�s‚í‚È‚¢�D‚Ü‚½�C–{ƒ\ƒtƒgƒEƒFƒA‚Ì—˜—p‚É‚æ‚è’¼
 *  �Ú“I‚Ü‚½‚ÍŠÔ�Ú“I‚É�¶‚¶‚½‚¢‚©‚È‚é‘¹ŠQ‚ÉŠÖ‚µ‚Ä‚à�C‚»‚Ì�Ó”C‚ð•‰‚í‚È‚¢�D
 * 
 *  @(#) $Id: task_manage.c,v 1.9 2007/04/22 18:04:06 hiro Exp $
 */

/*
 *	ƒ^ƒXƒNŠÇ—�‹@”\
 */

#include "jsp_kernel.h"
#include "check.h"
#include "task.h"
#include "wait.h"

/*
 *  ƒ^ƒXƒN‚Ì‹N“®
 */
#ifdef __act_tsk

SYSCALL ER
act_tsk(ID tskid)
{
	TCB	*tcb;
	ER	ercd;

	LOG_ACT_TSK_ENTER(tskid);
	CHECK_TSKCTX_UNL();
	CHECK_TSKID_SELF(tskid);
	tcb = get_tcb_self(tskid);

	t_lock_cpu();
	if (TSTAT_DORMANT(tcb->tstat)) {
		if (make_active(tcb)) {
			dispatch();
		}
		ercd = E_OK;
	}
	else if (!(tcb->actcnt)) {
		tcb->actcnt = TRUE;
		ercd = E_OK;
	}
	else {
		ercd = E_QOVR;
	}
	t_unlock_cpu();

    exit:
	LOG_ACT_TSK_LEAVE(ercd);
	return(ercd);
}

#endif /* __act_tsk */

/*
 *  ƒ^ƒXƒN‚Ì‹N“®�i”ñƒ^ƒXƒNƒRƒ“ƒeƒLƒXƒg—p�j
 */
#ifdef __iact_tsk

SYSCALL ER
iact_tsk(ID tskid)
{
	TCB	*tcb;
	ER	ercd;

	LOG_IACT_TSK_ENTER(tskid);
	CHECK_INTCTX_UNL();
	CHECK_TSKID(tskid);
	tcb = get_tcb(tskid);

	i_lock_cpu();
	if (TSTAT_DORMANT(tcb->tstat)) {
		if (make_active(tcb)) {
			reqflg = TRUE;
		}
		ercd = E_OK;
	}
	else if (!(tcb->actcnt)) {
		tcb->actcnt = TRUE;
		ercd = E_OK;
	}
	else {
		ercd = E_QOVR;
	}
	i_unlock_cpu();

    exit:
	LOG_IACT_TSK_LEAVE(ercd);
	return(ercd);
}

#endif /* __iact_tsk */

/*
 *  ƒ^ƒXƒN‹N“®—v‹�‚ÌƒLƒƒƒ“ƒZƒ‹
 */
#ifdef __can_act

SYSCALL ER_UINT
can_act(ID tskid)
{
	TCB	*tcb;
	ER_UINT	ercd;

	LOG_CAN_ACT_ENTER(tskid);
	CHECK_TSKCTX_UNL();
	CHECK_TSKID_SELF(tskid);
	tcb = get_tcb_self(tskid);

	t_lock_cpu();
	ercd = tcb->actcnt ? 1 : 0;
	tcb->actcnt = FALSE;
	t_unlock_cpu();

    exit:
	LOG_CAN_ACT_LEAVE(ercd);
	return(ercd);
}

#endif /* __can_act */

/*
 *  Ž©ƒ^ƒXƒN‚Ì�I—¹
 */
#ifdef __ext_tsk

SYSCALL void
ext_tsk(void)
{
	LOG_EXT_TSK_ENTER();

#ifdef ACTIVATED_STACK_SIZE
	/*
	 *  create_context ‚Æ activate_context ‚Å�CŽg—p’†‚ÌƒXƒ^ƒbƒN—Ì
	 *  ˆæ‚ð”j‰ó‚µ‚È‚¢‚æ‚¤‚É�CƒXƒ^ƒbƒN�ã‚Éƒ_ƒ~�[—Ìˆæ‚ðŠm•Û‚·‚é�D
	 */
	(void) alloca(ACTIVATED_STACK_SIZE);
#endif /* ACTIVATED_STACK_SIZE */

	if (sense_context()) {
		/*
		 *  ”ñƒ^ƒXƒNƒRƒ“ƒeƒLƒXƒg‚©‚ç ext_tsk ‚ªŒÄ‚Î‚ê‚½�ê�‡�C
		 *  ƒVƒXƒeƒ€ƒ�ƒO‚ÉƒGƒ‰�[‚ð‹L˜^‚µ�C‚»‚Ì‚Ü‚ÜŽÀ�s‚ð‘±‚¯‚é
		 *  ‚ª, “®�ì‚Í•Û�Ø‚³‚ê‚È‚¢�D
		 */
		syslog_0(LOG_EMERG,
			"ext_tsk is called from non-task contexts.");
	}
	if (sense_lock()) {
		/*
		 *  CPUƒ�ƒbƒN�ó‘Ô‚Å ext_tsk ‚ªŒÄ‚Î‚ê‚½�ê�‡‚Í�CCPUƒ�ƒbƒN
		 *  ‚ð‰ð�œ‚µ‚Ä‚©‚çƒ^ƒXƒN‚ð�I—¹‚·‚é�DŽÀ‘•�ã‚Í�CƒT�[ƒrƒX
		 *  ƒR�[ƒ‹“à‚Å‚ÌCPUƒ�ƒbƒN‚ð�È—ª‚·‚ê‚Î‚æ‚¢‚¾‚¯�D
		 */
		syslog_0(LOG_WARNING,
			"ext_tsk is called from CPU locked state.");
	}
	else {
		if (sense_context()) {
			i_lock_cpu();
		}
		else  {
			t_lock_cpu();
		}
	}
	if (!(enadsp)) {
		/*
		 *  ƒfƒBƒXƒpƒbƒ`‹ÖŽ~�ó‘Ô‚Å ext_tsk ‚ªŒÄ‚Î‚ê‚½�ê�‡‚Í�C
		 *  ƒfƒBƒXƒpƒbƒ`‹–‰Â�ó‘Ô‚É‚µ‚Ä‚©‚çƒ^ƒXƒN‚ð�I—¹‚·‚é�D
		 */
		syslog_0(LOG_WARNING,
			"ext_tsk is called from dispatch disabled state.");
		enadsp = TRUE;
	}
	exit_task();
}

#endif /* __ext_tsk */

/*
 *  ƒ^ƒXƒN‚Ì‹­�§�I—¹
 */
#ifdef __ter_tsk

SYSCALL ER
ter_tsk(ID tskid)
{
	TCB	*tcb;
	UINT	tstat;
	ER	ercd;

	LOG_TER_TSK_ENTER(tskid);
	CHECK_TSKCTX_UNL();
	CHECK_TSKID(tskid);
	tcb = get_tcb(tskid);
	CHECK_NONSELF(tcb);

	t_lock_cpu();
	if (TSTAT_DORMANT(tstat = tcb->tstat)) {
		ercd = E_OBJ;
	}
	else {
		if (TSTAT_RUNNABLE(tstat)) {
			make_non_runnable(tcb);
		}
		else if (TSTAT_WAITING(tstat)) {
			wait_cancel(tcb);
		}
		make_dormant(tcb);
		if (tcb->actcnt) {
			tcb->actcnt = FALSE;
			if (make_active(tcb)) {
				dispatch();
			}
		}
		ercd = E_OK;
	}
	t_unlock_cpu();

    exit:
	LOG_TER_TSK_LEAVE(ercd);
	return(ercd);
}

#endif /* __ter_tsk */

/*
 *  ƒ^ƒXƒN—D�æ“x‚Ì•Ï�X
 */
#ifdef __chg_pri

SYSCALL ER
chg_pri(ID tskid, PRI tskpri)
{
	TCB	*tcb;
	UINT	newpri;
	UINT	tstat;
	ER	ercd;

	LOG_CHG_PRI_ENTER(tskid, tskpri);
	CHECK_TSKCTX_UNL();
	CHECK_TSKID_SELF(tskid);
	CHECK_TPRI_INI(tskpri);
	tcb = get_tcb_self(tskid);
	newpri = (tskpri == TPRI_INI) ? tcb->tinib->ipriority
					: INT_PRIORITY(tskpri);

	t_lock_cpu();
	if (TSTAT_DORMANT(tstat = tcb->tstat)) {
		ercd = E_OBJ;
	}
	else if (TSTAT_RUNNABLE(tstat)) {
		if (change_priority(tcb, newpri)) {
			dispatch();
		}
		ercd = E_OK;
	}
	else {
		tcb->priority = newpri;
		if ((tstat & TS_WAIT_WOBJCB) != 0) {
			wobj_change_priority(((WINFO_WOBJ *)(tcb->winfo))
							->wobjcb, tcb);
		}
		ercd = E_OK;
	}
	t_unlock_cpu();

    exit:
	LOG_CHG_PRI_LEAVE(ercd);
	return(ercd);
}

#endif /* __chg_pri */

/*
 *  ƒ^ƒXƒN—D�æ“x‚ÌŽQ�Æ
 */
#ifdef __get_pri

SYSCALL ER
get_pri(ID tskid, PRI *p_tskpri)
{
	TCB	*tcb;
	ER	ercd;

	LOG_GET_PRI_ENTER(tskid, p_tskpri);
	CHECK_TSKCTX_UNL();
	CHECK_TSKID_SELF(tskid);
	tcb = get_tcb_self(tskid);

	t_lock_cpu();
	if (TSTAT_DORMANT(tcb->tstat)) {
		ercd = E_OBJ;
	}
	else {
		*p_tskpri = EXT_TSKPRI(tcb->priority);
		ercd = E_OK;
	}
	t_unlock_cpu();

    exit:
	LOG_GET_PRI_LEAVE(ercd, *p_tskpri);
	return(ercd);
}

#endif /* __get_pri */
