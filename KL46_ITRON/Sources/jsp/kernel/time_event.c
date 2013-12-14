/*
 *  TOPPERS/JSP Kernel
 *      Toyohashi Open Platform for Embedded Real-Time Systems/
 *      Just Standard Profile Kernel
 * 
 *  Copyright (C) 2000-2003 by Embedded and Real-Time Systems Laboratory
 *                              Toyohashi Univ. of Technology, JAPAN
 *  Copyright (C) 2006 by Embedded and Real-Time Systems Laboratory
 *              Graduate School of Information Science, Nagoya Univ., JAPAN
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
 *  @(#) $Id: time_event.c,v 1.9 2006/02/12 05:28:07 hiro Exp $
 */

/*
 *	ƒ^ƒCƒ€ƒCƒxƒ“ƒgŠÇ—�ƒ‚ƒWƒ…�[ƒ‹
 */

#include "jsp_kernel.h"
#include "check.h"
#include "time_event.h"

/*
 *  ƒ^ƒCƒ€ƒCƒxƒ“ƒgƒq�[ƒv‘€�ìƒ}ƒNƒ�
 */
#define	PARENT(index)	((index) >> 1)		/* �eƒm�[ƒh‚ð‹�‚ß‚é */
#define	LCHILD(index)	((index) << 1)		/* ‰E‚ÌŽqƒm�[ƒh‚ð‹�‚ß‚é */
#define	TMEVT_NODE(index)	(tmevt_heap[(index) - 1])

/*
 *  ƒCƒxƒ“ƒg”­�¶Žž��”äŠrƒ}ƒNƒ�
 *
 *  ƒCƒxƒ“ƒg”­�¶Žž��‚Í�Ccurrent_time ‚©‚ç‚Ì‘Š‘Î’l‚Å”äŠr‚·‚é�D‚·‚È‚í‚¿�C
 *  current_time ‚ð�Å�¬’l�i�Å‚à‹ß‚¢Žž���j�Ccurrent_time - 1 ‚ª�Å‘å’l
 *  �i�Å‚à‰“‚¢Žž���j‚Æ‚Ý‚È‚µ‚Ä”äŠr‚·‚é�D
 */
#define	EVTTIM_LT(t1, t2) (((t1) - current_time) < ((t2) - current_time))
#define	EVTTIM_LE(t1, t2) (((t1) - current_time) <= ((t2) - current_time))

#ifdef __tmeini

/*
 *  ƒVƒXƒeƒ€Žž��‚ÌƒIƒtƒZƒbƒg
 */
SYSTIM	systim_offset;

/*
 *  Œ»�Ý‚ÌƒVƒXƒeƒ€Žž���i’PˆÊ: ƒ~ƒŠ•b�j
 *
 *  Œµ–§‚É‚Í�C‘O‚Ìƒ^ƒCƒ€ƒeƒBƒbƒN‚ÌƒVƒXƒeƒ€Žž���D
 */
SYSTIM	current_time;

/*
 *  ŽŸ‚Ìƒ^ƒCƒ€ƒeƒBƒbƒN‚ÌƒVƒXƒeƒ€Žž���i’PˆÊ: 1ƒ~ƒŠ•b�j
 */
SYSTIM	next_time;

/*
 *  ƒVƒXƒeƒ€Žž���ÏŽZ—p•Ï�”�i’PˆÊ: 1/TIM_DENOƒ~ƒŠ•b�j
 */
#if TIC_DENO != 1
UINT	next_subtime;
#endif /* TIC_DENO != 1 */

/*
 *  ƒ^ƒCƒ€ƒCƒxƒ“ƒgƒq�[ƒv‚Ì�ÅŒã‚ÌŽg—p—Ìˆæ‚ÌƒCƒ“ƒfƒbƒNƒX
 */
UINT	last_index;

/*
 *  ƒ^ƒCƒ}ƒ‚ƒWƒ…�[ƒ‹‚Ì�‰Šú‰»
 */
void
tmevt_initialize(void)
{
	systim_offset = 0;
	current_time = 0;
#if TIC_DENO == 1
	next_time = current_time + TIC_NUME;
#else /* TIC_DENO == 1 */
	next_subtime += TIC_NUME;
	next_time = current_time + next_subtime / TIC_DENO;
	next_subtime %= TIC_DENO;
#endif /* TIC_DENO == 1 */
	last_index = 0;
}

#endif /* __tmeini */

/*
 *  ƒ^ƒCƒ€ƒCƒxƒ“ƒg‚Ì‘}“üˆÊ’u‚ð�ãŒü‚«‚É’T�õ
 *
 *  Žž�� time ‚É”­�¶‚·‚éƒ^ƒCƒ€ƒCƒxƒ“ƒg‚ð‘}“ü‚·‚éƒm�[ƒh‚ð‹ó‚¯‚é‚½‚ß‚É�C
 *  ƒq�[ƒv‚Ì�ã‚ÉŒü‚©‚Á‚Ä‹óƒm�[ƒh‚ðˆÚ“®‚³‚¹‚é�DˆÚ“®‘O‚Ì‹óƒm�[ƒh‚ÌˆÊ’u‚ð 
 *  index ‚É“n‚·‚Æ�CˆÚ“®Œã‚Ì‹óƒm�[ƒh‚ÌˆÊ’u�i‚·‚È‚í‚¿‘}“üˆÊ’u�j‚ð•Ô‚·�D
 */
#ifdef __tmeup

UINT
tmevt_up(UINT index, EVTTIM time)
{
	UINT	parent;

	while (index > 1) {
		/*
		 *  �eƒm�[ƒh‚ÌƒCƒxƒ“ƒg”­�¶Žž��‚Ì•û‚ª‘�‚¢�i‚Ü‚½‚Í“¯‚¶�j
		 *  ‚È‚ç‚Î�Cindex ‚ª‘}“üˆÊ’u‚È‚Ì‚Åƒ‹�[ƒv‚ð”²‚¯‚é�D
		 */
		parent = PARENT(index);
		if (EVTTIM_LE(TMEVT_NODE(parent).time, time)) {
			break;
		}

		/*
		 *  �eƒm�[ƒh‚ð index ‚ÌˆÊ’u‚ÉˆÚ“®‚³‚¹‚é�D
		 */
		TMEVT_NODE(index) = TMEVT_NODE(parent);
		TMEVT_NODE(index).tmevtb->index = index;

		/*
		 *  index ‚ð�eƒm�[ƒh‚ÌˆÊ’u‚É�X�V�D
		 */
		index = parent;
	}
	return(index);
}

#endif /* __tmeup */

/*
 *  ƒ^ƒCƒ€ƒCƒxƒ“ƒg‚Ì‘}“üˆÊ’u‚ð‰ºŒü‚«‚É’T�õ
 *
 *  Žž�� time ‚É”­�¶‚·‚éƒ^ƒCƒ€ƒCƒxƒ“ƒg‚ð‘}“ü‚·‚éƒm�[ƒh‚ð‹ó‚¯‚é‚½‚ß‚É�C
 *  ƒq�[ƒv‚Ì‰º‚ÉŒü‚©‚Á‚Ä‹óƒm�[ƒh‚ðˆÚ“®‚³‚¹‚é�DˆÚ“®‘O‚Ì‹óƒm�[ƒh‚ÌˆÊ’u‚ð 
 *  index ‚É“n‚·‚Æ�CˆÚ“®Œã‚Ì‹óƒm�[ƒh‚ÌˆÊ’u�i‚·‚È‚í‚¿‘}“üˆÊ’u�j‚ð•Ô‚·�D
 */
#ifdef __tmedown

UINT
tmevt_down(UINT index, EVTTIM time)
{
	UINT	child;

	while ((child = LCHILD(index)) <= last_index) {
		/*
		 *  �¶‰E‚ÌŽqƒm�[ƒh‚ÌƒCƒxƒ“ƒg”­�¶Žž��‚ð”äŠr‚µ�C‘�‚¢•û‚Ì
		 *  Žqƒm�[ƒh‚ÌˆÊ’u‚ð child ‚É�Ý’è‚·‚é�DˆÈ‰º‚ÌŽqƒm�[ƒh
		 *  ‚Í�C‚±‚±‚Å‘I‚Î‚ê‚½•û‚ÌŽqƒm�[ƒh‚Ì‚±‚Æ�D
		 */
		if (child + 1 <= last_index
			&& EVTTIM_LT(TMEVT_NODE(child + 1).time,
				  TMEVT_NODE(child).time)) {
			child = child + 1;
		}

		/*
		 *  Žqƒm�[ƒh‚ÌƒCƒxƒ“ƒg”­�¶Žž��‚Ì•û‚ª’x‚¢�i‚Ü‚½‚Í“¯‚¶�j
		 *  ‚È‚ç‚Î�Cindex ‚ª‘}“üˆÊ’u‚È‚Ì‚Åƒ‹�[ƒv‚ð”²‚¯‚é�D
		 */
		if (EVTTIM_LE(time, TMEVT_NODE(child).time)) {
			break;
		}

		/*
		 *  Žqƒm�[ƒh‚ð index ‚ÌˆÊ’u‚ÉˆÚ“®‚³‚¹‚é�D
		 */
		TMEVT_NODE(index) = TMEVT_NODE(child);
		TMEVT_NODE(index).tmevtb->index = index;

		/*
		 *  index ‚ðŽqƒm�[ƒh‚ÌˆÊ’u‚É�X�V�D
		 */
		index = child;
	}
	return(index);
}

#endif /* __tmedown */

/*
 * ƒ^ƒCƒ€ƒCƒxƒ“ƒgƒq�[ƒv‚Ö‚Ì“o˜^
 *
 *  ƒ^ƒCƒ€ƒCƒxƒ“ƒgƒuƒ�ƒbƒN tmevtb ‚ð�Ctime ‚ÅŽw’è‚µ‚½ŽžŠÔ‚ªŒo‰ßŒã‚ÉƒC
 *  ƒxƒ“ƒg‚ª”­�¶‚·‚é‚æ‚¤‚É�Cƒ^ƒCƒ€ƒCƒxƒ“ƒgƒq�[ƒv‚É“o˜^‚·‚é�D
 */
#ifdef __tmeins

void
tmevtb_insert(TMEVTB *tmevtb, EVTTIM time)
{
	UINT	index;

	/*
	 *  last_index ‚ðƒCƒ“ƒNƒŠƒ�ƒ“ƒg‚µ�C‚»‚±‚©‚ç�ã‚É‘}“üˆÊ’u‚ð’T‚·�D
	 */
	index = tmevt_up(++last_index, time);

	/*
	 *  ƒ^ƒCƒ€ƒCƒxƒ“ƒg‚ð index ‚ÌˆÊ’u‚É‘}“ü‚·‚é�D
	 */ 
	TMEVT_NODE(index).time = time;
	TMEVT_NODE(index).tmevtb = tmevtb;
	tmevtb->index = index;
}

#endif /* __tmeins */

/*
 *  ƒ^ƒCƒ€ƒCƒxƒ“ƒgƒq�[ƒv‚©‚ç‚Ì�í�œ
 */
#ifdef __tmedel

void
tmevtb_delete(TMEVTB *tmevtb)
{
	UINT	index = tmevtb->index;
	UINT	parent;
	EVTTIM	event_time = TMEVT_NODE(last_index).time;

	/*
	 *  �í�œ‚É‚æ‚èƒ^ƒCƒ€ƒCƒxƒ“ƒgƒq�[ƒv‚ª‹ó‚É‚È‚é�ê�‡‚Í‰½‚à‚µ‚È‚¢�D
	 */
	if (--last_index == 0) {
		return;
	}

	/*
	 *  �í�œ‚µ‚½ƒm�[ƒh‚ÌˆÊ’u‚É�ÅŒã‚Ìƒm�[ƒh�ilast_index + 1 ‚ÌˆÊ’u
	 *  ‚Ìƒm�[ƒh�j‚ð‘}“ü‚µ�C‚»‚ê‚ð“K�Ø‚ÈˆÊ’u‚ÖˆÚ“®‚³‚¹‚é�DŽÀ�Û‚É‚Í�C
	 *  �ÅŒã‚Ìƒm�[ƒh‚ðŽÀ�Û‚É‘}“ü‚·‚é‚Ì‚Å‚Í‚È‚­�C�í�œ‚µ‚½ƒm�[ƒh‚ÌˆÊ
	 *  ’u‚ª‹óƒm�[ƒh‚É‚È‚é‚Ì‚Å�C�ÅŒã‚Ìƒm�[ƒh‚ð‘}“ü‚·‚×‚«ˆÊ’u‚ÖŒü‚¯
	 *  ‚Ä‹óƒm�[ƒh‚ðˆÚ“®‚³‚¹‚é�D
	 *  �ÅŒã‚Ìƒm�[ƒh‚ÌƒCƒxƒ“ƒg”­�¶Žž��‚ª�C�í�œ‚µ‚½ƒm�[ƒh‚Ì�eƒm�[ƒh
	 *  ‚ÌƒCƒxƒ“ƒg”­�¶Žž��‚æ‚è‘O‚Ì�ê�‡‚É‚Í�C�ã‚ÉŒü‚©‚Á‚Ä‘}“üˆÊ’u‚ð
	 *  ’T‚·�D‚»‚¤‚Å‚È‚¢�ê�‡‚É‚Í�C‰º‚ÉŒü‚©‚Á‚Ä’T‚·�D
	 */
	if (index > 1 && EVTTIM_LT(event_time,
				TMEVT_NODE(parent = PARENT(index)).time)) {
		/*
		 *  �eƒm�[ƒh‚ð index ‚ÌˆÊ’u‚ÉˆÚ“®‚³‚¹‚é�D
		 */
		TMEVT_NODE(index) = TMEVT_NODE(parent);
		TMEVT_NODE(index).tmevtb->index = index;

		/*
		 *  �í�œ‚µ‚½ƒm�[ƒh‚Ì�eƒm�[ƒh‚©‚ç�ã‚ÉŒü‚©‚Á‚Ä‘}“üˆÊ’u‚ð
		 *  ’T‚·�D
		 */
		index = tmevt_up(parent, event_time);
	}
	else {
		/*
		 *  �í�œ‚µ‚½ƒm�[ƒh‚©‚ç‰º‚ÉŒü‚©‚Á‚Ä‘}“üˆÊ’u‚ð’T‚·�D
		 */
		index = tmevt_down(index, event_time);
	}

	/*
	 *  �ÅŒã‚Ìƒm�[ƒh‚ð index ‚ÌˆÊ’u‚É‘}“ü‚·‚é�D
	 */ 
	TMEVT_NODE(index) = TMEVT_NODE(last_index + 1);
	TMEVT_NODE(index).tmevtb->index = index;
}

#endif /* __tmedel */

/*
 *  ƒ^ƒCƒ€ƒCƒxƒ“ƒgƒq�[ƒv‚Ì�æ“ª‚Ìƒm�[ƒh‚Ì�í�œ
 */
Inline void
tmevtb_delete_top(void)
{
	UINT	index;
	EVTTIM	event_time = TMEVT_NODE(last_index).time;

	/*
	 *  �í�œ‚É‚æ‚èƒ^ƒCƒ€ƒCƒxƒ“ƒgƒq�[ƒv‚ª‹ó‚É‚È‚é�ê�‡‚Í‰½‚à‚µ‚È‚¢�D
	 */
	if (--last_index == 0) {
		return;
	}

	/*
	 *  ƒ‹�[ƒgƒm�[ƒh‚É�ÅŒã‚Ìƒm�[ƒh�ilast_index + 1 ‚ÌˆÊ’u‚Ìƒm�[ƒh�j
	 *  ‚ð‘}“ü‚µ�C‚»‚ê‚ð“K�Ø‚ÈˆÊ’u‚ÖˆÚ“®‚³‚¹‚é�DŽÀ�Û‚É‚Í�C�ÅŒã‚Ìƒm�[
	 *  ƒh‚ðŽÀ�Û‚É‘}“ü‚·‚é‚Ì‚Å‚Í‚È‚­�Cƒ‹�[ƒgƒm�[ƒh‚ª‹óƒm�[ƒh‚É‚È‚é
	 *  ‚Ì‚Å�C�ÅŒã‚Ìƒm�[ƒh‚ð‘}“ü‚·‚×‚«ˆÊ’u‚ÖŒü‚¯‚Ä‹óƒm�[ƒh‚ðˆÚ“®‚³
	 *  ‚¹‚é�D
	 */
	index = tmevt_down(1, event_time);

	/*
	 *  �ÅŒã‚Ìƒm�[ƒh‚ð index ‚ÌˆÊ’u‚É‘}“ü‚·‚é�D
	 */ 
	TMEVT_NODE(index) = TMEVT_NODE(last_index + 1);
	TMEVT_NODE(index).tmevtb->index = index;
}

/*
 *  ƒ^ƒCƒ€ƒeƒBƒbƒN‚Ì‹Ÿ‹‹
 *
 *  TIC_NUME < TIC_DENO ‚ÌŽž‚Í�C�œŽZ‚ðŽg‚í‚¸‚ÉŽž��‚Ì�X�V‚ª‚Å‚«‚é‚ª�Cƒ\�[
 *  ƒXƒR�[ƒh‚ð“Ç‚Ý‚â‚·‚­‚É‚·‚é‚½‚ß‚É #if ‚Ì‘½—p‚ð”ð‚¯‚Ä‚¢‚é�D
 */
#ifdef __isig_tim

SYSCALL ER
isig_tim(void)
{
	TMEVTB	*tmevtb;
	ER	ercd;

	LOG_ISIG_TIM_ENTER();
//	CHECK_INTCTX_UNL();
	if (!sense_context() || sense_lock()) {		
			ercd = (-25);					
			goto exit;					
		}
	
	i_lock_cpu();

	/*
	 *  next_time ‚æ‚èƒCƒxƒ“ƒg”­�¶Žž��‚Ì‘�‚¢�i‚Ü‚½‚Í“¯‚¶�jƒ^ƒCƒ€ƒC
	 *  ƒxƒ“ƒg‚ð�Cƒ^ƒCƒ€ƒCƒxƒ“ƒgƒq�[ƒv‚©‚ç�í�œ‚µ�CƒR�[ƒ‹ƒoƒbƒNŠÖ�”
	 *  ‚ðŒÄ‚Ñ�o‚·�D
	 */
	while (last_index > 0 && 
			EVTTIM_LE(TMEVT_NODE(1).time, next_time)) {
		tmevtb = TMEVT_NODE(1).tmevtb;
		tmevtb_delete_top();
		(*(tmevtb->callback))(tmevtb->arg);

		/*
		 *  ‚±‚±‚Å—D�æ“x‚Ì�‚‚¢Š„�ž‚Ý‚ðŽó‚¯•t‚¯‚é�D
		 */
		i_unlock_cpu();
		i_lock_cpu();
	}

	/*
	 *  current_time ‚ð�X�V‚·‚é�D
	 */
	current_time = next_time;

	/*
	 *  next_time�Cnext_subtime ‚ð�X�V‚·‚é�D
	 */
#if TIC_DENO == 1
	next_time = current_time + TIC_NUME;
#else /* TIC_DENO == 1 */
	next_subtime += TIC_NUME % TIC_DENO;
	next_time = current_time + TIC_NUME / TIC_DENO;
	if (next_subtime >= TIC_DENO) {
		next_subtime -= TIC_DENO;
		next_time += 1u;
	}
#endif /* TIC_DENO == 1 */

	ercd = E_OK;
	i_unlock_cpu();

    exit:
	LOG_ISIG_TIM_LEAVE(ercd);
	return(ercd);
}

#endif /* __isig_tim */
