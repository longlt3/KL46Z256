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
 *  @(#) $Id: wait.c,v 1.6 2003/06/04 01:46:16 hiro Exp $
 */

/*
 *	‘Ò‚¿�ó‘ÔŠÇ—�ƒ‚ƒWƒ…�[ƒ‹
 */

#include "jsp_kernel.h"
#include "wait.h"

/*
 *  ‘Ò‚¿�ó‘Ô‚Ö‚ÌˆÚ�s�iƒ^ƒCƒ€ƒAƒEƒgŽw’è�j
 *
 */
#ifdef __waimake

void
make_wait_tmout(WINFO *winfo, TMEVTB *tmevtb, TMO tmout)
{
	make_non_runnable(runtsk);
	runtsk->winfo = winfo;
	if (tmout > 0) {
		winfo->tmevtb = tmevtb;
		tmevtb_enqueue(tmevtb, (RELTIM) tmout,
					(CBACK) wait_tmout, (VP) runtsk);
	}
	else {
		assert(tmout == TMO_FEVR);
		winfo->tmevtb = NULL;
	}
}

#endif /* __waimake */

/*
 *  ‘Ò‚¿‰ð�œ‚Ì‚½‚ß‚Ìƒ^ƒXƒN�ó‘Ô‚Ì�X�V
 *
 *  tcb ‚ÅŽw’è‚³‚ê‚éƒ^ƒXƒN‚ð�C‘Ò‚¿‰ð�œ‚·‚é‚æ‚¤ƒ^ƒXƒN�ó‘Ô‚ð�X�V‚·‚é�D‘Ò
 *  ‚¿‰ð�œ‚·‚éƒ^ƒXƒN‚ªŽÀ�s‚Å‚«‚é�ó‘Ô‚É‚È‚é�ê�‡‚Í�CƒŒƒfƒBƒLƒ…�[‚É‚Â‚È‚®�D
 *  ‚Ü‚½�CƒfƒBƒXƒpƒbƒ`‚ª•K—v‚È�ê�‡‚É‚Í TRUE ‚ð•Ô‚·�D
 */
Inline BOOL
make_non_wait(TCB *tcb)
{
	assert(TSTAT_WAITING(tcb->tstat));

	if (!(TSTAT_SUSPENDED(tcb->tstat))) {
		/*
		 *  ‘Ò‚¿�ó‘Ô‚©‚çŽÀ�s‚Å‚«‚é�ó‘Ô‚Ö‚Ì‘JˆÚ
		 */
		return(make_runnable(tcb));
	}
	else {
		/*
		 *  “ñ�d‘Ò‚¿�ó‘Ô‚©‚ç‹­�§‘Ò‚¿�ó‘Ô‚Ö‚Ì‘JˆÚ
		 */
		tcb->tstat = TS_SUSPENDED;
		LOG_TSKSTAT(tcb);
		return(FALSE);
	}
}

/*
 *  ‘Ò‚¿‰ð�œ
 */
#ifdef __waicmp

BOOL
wait_complete(TCB *tcb)
{
	if (tcb->winfo->tmevtb != NULL) {
		tmevtb_dequeue(tcb->winfo->tmevtb);
	}
	tcb->winfo->wercd = E_OK;
	return(make_non_wait(tcb));
}

#endif /* __waicmp */

/*
 *  ƒ^ƒCƒ€ƒAƒEƒg‚É”º‚¤‘Ò‚¿‰ð�œ
 */
#ifdef __waitmo

void
wait_tmout(TCB *tcb)
{
	if ((tcb->tstat & TS_WAIT_WOBJ) != 0) {
		queue_delete(&(tcb->task_queue));
	}
	tcb->winfo->wercd = E_TMOUT;
	if (make_non_wait(tcb)) {
		reqflg = TRUE;
	}
}

#endif /* __waitmo */
#ifdef __waitmook

void
wait_tmout_ok(TCB *tcb)
{
	tcb->winfo->wercd = E_OK;
	if (make_non_wait(tcb)) {
		reqflg = TRUE;
	}
}

#endif /* __waitmook */

/*
 *  ‘Ò‚¿�ó‘Ô‚Ì‹­�§‰ð�œ
 */
#ifdef __waican

void
wait_cancel(TCB *tcb)
{
	if (tcb->winfo->tmevtb != NULL) {
		tmevtb_dequeue(tcb->winfo->tmevtb);
	}
	if ((tcb->tstat & TS_WAIT_WOBJ) != 0) {
		queue_delete(&(tcb->task_queue));
	}
}

#endif /* __waican */
#ifdef __wairel

BOOL
wait_release(TCB *tcb)
{
	wait_cancel(tcb);
	tcb->winfo->wercd = E_RLWAI;
	return(make_non_wait(tcb));
}

#endif /* __wairel */

/*
 *  ƒ^ƒXƒN‚Ì—D�æ“x�‡‚Ì‘Ò‚¿ƒLƒ…�[‚Ö‚Ì‘}“ü
 */
Inline void
queue_insert_tpri(TCB *tcb, QUEUE *queue)
{
	QUEUE	*entry;
	UINT	priority = tcb->priority;

	for (entry = queue->next; entry != queue; entry = entry->next) {
		if (priority < ((TCB *) entry)->priority) {
			break;
		}
	}
	queue_insert_prev(entry, &(tcb->task_queue));
}

/*
 *  Insertion into the waiting queue of synchronization and communication objects of a running task
 */
Inline void
wobj_queue_insert(WOBJCB *wobjcb)
{
	if ((wobjcb->wobjinib->wobjatr & TA_TPRI) != 0) {
		queue_insert_tpri(runtsk, &(wobjcb->wait_queue));
	}
	else {
		queue_insert_prev(&(wobjcb->wait_queue),
					&(runtsk->task_queue));
	}
}

/*
 *  “¯Šú�E’Ê�MƒIƒuƒWƒFƒNƒg‚É‘Î‚·‚é‘Ò‚¿�ó‘Ô‚Ö‚ÌˆÚ�s
 */
#ifdef __wobjwai

void
wobj_make_wait(WOBJCB *wobjcb, WINFO_WOBJ *winfo)
{
	runtsk->tstat = (TS_WAITING | TS_WAIT_WOBJ | TS_WAIT_WOBJCB);
	make_wait(&(winfo->winfo));
	wobj_queue_insert(wobjcb);
	winfo->wobjcb = wobjcb;
	LOG_TSKSTAT(runtsk);
}

#endif /* __wobjwai */
#ifdef __wobjwaitmo

void
wobj_make_wait_tmout(WOBJCB *wobjcb, WINFO_WOBJ *winfo,
					TMEVTB *tmevtb, TMO tmout)
{
	runtsk->tstat = (TS_WAITING | TS_WAIT_WOBJ | TS_WAIT_WOBJCB);
	make_wait_tmout(&(winfo->winfo), tmevtb, tmout);
	wobj_queue_insert(wobjcb);
	winfo->wobjcb = wobjcb;
	LOG_TSKSTAT(runtsk);
}

#endif /* __wobjwaitmo */
/*
 *  ƒ^ƒXƒN‚Ì—D�æ“x•Ï�XŽž‚Ì�ˆ—�
 */
#ifdef __wobjpri

void
wobj_change_priority(WOBJCB *wobjcb, TCB *tcb)
{
	if ((wobjcb->wobjinib->wobjatr & TA_TPRI) != 0) {
		queue_delete(&(tcb->task_queue));
		queue_insert_tpri(tcb, &(wobjcb->wait_queue));
	}
}

#endif /* __wobjpri */
