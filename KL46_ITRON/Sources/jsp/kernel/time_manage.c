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
 *  @(#) $Id: time_manage.c,v 1.11 2005/11/12 14:56:15 hiro Exp $
 */

/*
 *	ƒVƒXƒeƒ€Žž��ŠÇ—�‹@”\
 */

#include "jsp_kernel.h"
#include "check.h"
#include "time_event.h"

/*
 *  ƒVƒXƒeƒ€Žž��‚Ì�Ý’è
 */
#ifdef __set_tim

SYSCALL ER
set_tim(const SYSTIM *p_systim)
{
	ER	ercd;

	LOG_SET_TIM_ENTER(p_systim);
	CHECK_TSKCTX_UNL();

	t_lock_cpu();
	systim_offset = *p_systim - current_time;
	ercd = E_OK;
	t_unlock_cpu();

    exit:
	LOG_SET_TIM_LEAVE(ercd);
	return(ercd);
}

#endif /* __set_tim */

/*
 *  ƒVƒXƒeƒ€Žž��‚ÌŽQ�Æ
 */
#ifdef __get_tim

SYSCALL ER
get_tim(SYSTIM *p_systim)
{
	ER	ercd;

	LOG_GET_TIM_ENTER(p_systim);
	CHECK_TSKCTX_UNL();

	t_lock_cpu();
	*p_systim = systim_offset + current_time;
	ercd = E_OK;
	t_unlock_cpu();

    exit:
	LOG_GET_TIM_LEAVE(ercd, *p_systim);
	return(ercd);
}

#endif /* __get_tim */

/*
 *  �«”\•]‰¿—pƒVƒXƒeƒ€Žž��‚ÌŽQ�Æ
 */
#ifdef __vxget_tim
#ifdef SUPPORT_VXGET_TIM
#include <armv6/KL46/hw_timer.h>

SYSCALL ER
vxget_tim(SYSUTIM *p_sysutim)
{
	SYSUTIM	utime;
	SYSTIM	time;
#if TIC_DENO != 1
	INT	subtime;
#endif /* TIC_DENO != 1 */
	CLOCK	clock;
	BOOL	ireq;
	BOOL	locked;
	ER	ercd;

	LOG_VXGET_TIM_ENTER(p_sysutim);
	CHECK_TSKCTX();

	locked = sense_lock();
	if (!(locked)) {
		t_lock_cpu();
	}
	time = systim_offset + next_time;
#if TIC_DENO != 1
	subtime = (INT) next_subtime;
#endif /* TIC_DENO != 1 */
	clock = hw_timer_get_current();
	ireq = hw_timer_fetch_interrupt();
	if (!(locked)) {
		t_unlock_cpu();
	}

	utime = ((SYSUTIM) time) * 1000;
#if TIC_DENO != 1
	utime += subtime * 1000 / TIC_DENO;
#endif /* TIC_DENO != 1 */
	if (!(ireq && !(BEFORE_IREQ(clock)))) {
		utime -= TIC_NUME * 1000 / TIC_DENO;
	}
	utime += TO_USEC(clock);
	*p_sysutim = utime;
	ercd = E_OK;

    exit:
	LOG_VXGET_TIM_LEAVE(ercd, *p_sysutim);
	return(ercd);
}

#endif /* SUPPORT_VXGET_TIM */
#endif /* __vxget_tim */
