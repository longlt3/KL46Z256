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
 *  @(#) $Id: time_event.h,v 1.8 2003/06/18 12:48:24 hiro Exp $
 */

/*
 *	ƒ^ƒCƒ€ƒCƒxƒ“ƒgŠÇ—�ƒ‚ƒWƒ…�[ƒ‹
 */

#ifndef _TIME_EVENT_H_
#define _TIME_EVENT_H_


/*
 *  ƒCƒxƒ“ƒg”­�¶Žž��‚Ìƒf�[ƒ^Œ^‚Ì’è‹`
 *
 *  EVTTIM ‚Í�CRELTIM ‚Æ‚µ‚ÄŽw’è‚Å‚«‚é”ÍˆÍ‚æ‚è‚à�L‚¢”ÍˆÍ‚ð•\Œ»‚Å‚«‚é•K
 *  —v‚ª‚ ‚é�DƒXƒ^ƒ“ƒ_�[ƒhƒvƒ�ƒtƒ@ƒCƒ‹‚Å‚Í�CRELTIM ‚ª 16bit ˆÈ�ã‚Å‚È‚¯
 *  ‚ê‚Î‚È‚ç‚È‚¢‚½‚ß�CEVTTIM ‚Í 17bit ˆÈ�ã‚Å‚ ‚é‚±‚Æ‚ª•K—v‚Å‚ ‚é�D‚»‚Ì
 *  ‚½‚ß�C16bit ‚Ì�ê�‡‚ª‚ ‚é UINT ‚Å‚Í‚È‚­�CUW ‚É’è‹`‚µ‚Ä‚¢‚é�D
 */
typedef UW	EVTTIM;

/*
 *  ‘Š‘ÎŽžŠÔ�iRELTIM�j‚ÉŽw’è‚Å‚«‚é�Å‘å’l
 */
#define	TMAX_RELTIM	((((EVTTIM) 1) << (sizeof(EVTTIM) * CHAR_BIT - 1)) - 1)

/* 
 *  ƒ^ƒCƒ€ƒCƒxƒ“ƒgƒuƒ�ƒbƒN‚Ìƒf�[ƒ^Œ^‚Ì’è‹`
 */
typedef void	(*CBACK)(VP);	/* ƒR�[ƒ‹ƒoƒbƒNŠÖ�”‚ÌŒ^ */

typedef struct time_event_block {
	UINT	index;		/* ƒ^ƒCƒ€ƒCƒxƒ“ƒgƒq�[ƒv’†‚Å‚ÌˆÊ’u */
	CBACK	callback;	/* ƒR�[ƒ‹ƒoƒbƒNŠÖ�” */
	VP	arg;		/* ƒR�[ƒ‹ƒoƒbƒNŠÖ�”‚Ö“n‚·ˆø�” */
} TMEVTB;

/*
 *  ƒ^ƒCƒ€ƒCƒxƒ“ƒgƒq�[ƒv’†‚Ìƒm�[ƒh‚Ìƒf�[ƒ^Œ^‚Ì’è‹`
 */
typedef struct time_event_node {
	EVTTIM	time;		/* ƒCƒxƒ“ƒg”­�¶Žž�� */
	TMEVTB	*tmevtb;	/* ‘Î‰ž‚·‚éƒ^ƒCƒ€ƒCƒxƒ“ƒgƒuƒ�ƒbƒN */
} TMEVTN;

/*
 *  ƒ^ƒCƒ€ƒCƒxƒ“ƒgƒq�[ƒv�ikernel_cfg.c�j
 */
extern TMEVTN	tmevt_heap[];

/*
 *  ƒVƒXƒeƒ€Žž��‚ÌƒIƒtƒZƒbƒg
 */
extern SYSTIM	systim_offset;

/*
 *  Œ»�Ý‚ÌƒVƒXƒeƒ€Žž���i’PˆÊ: ƒ~ƒŠ•b�j
 *
 *  ƒVƒXƒeƒ€‹N“®Žž‚É 0 ‚É�‰Šú‰»‚³‚ê�CˆÈ�~�Cisig_tim ‚ªŒÄ‚Î‚ê‚é“x‚É’P’²
 *  ‚É‘�‰Á‚·‚é�Dset_tim ‚É‚æ‚Á‚Ä•Ï�X‚³‚ê‚È‚¢�D
 */
extern SYSTIM	current_time;

/*
 *  ŽŸ‚Ìƒ^ƒCƒ€ƒeƒBƒbƒN‚ÌƒVƒXƒeƒ€Žž���i’PˆÊ: 1ƒ~ƒŠ•b�j
 */
extern SYSTIM	next_time;

/*
 *  ƒVƒXƒeƒ€Žž���ÏŽZ—p•Ï�”�i’PˆÊ: 1/TIM_DENOƒ~ƒŠ•b�j
 *
 *  ŽŸ‚Ìƒ^ƒCƒ€ƒeƒBƒbƒN‚ÌƒVƒXƒeƒ€Žž��‚Ì‰ºˆÊŒ…‚ðŽ¦‚·�i�ãˆÊŒ…‚Í next_time�j�D
 *  TIC_DENO ‚ª 1 ‚ÌŽž‚Í�C‰ºˆÊŒ…‚Í�í‚É 0 ‚Å‚ ‚é‚½‚ß�C‚±‚Ì•Ï�”‚Í•K—v‚È‚¢�D
 */
#if TIC_DENO != 1
extern UINT	next_subtime;
#endif /* TIC_DENO != 1 */

/*
 *  ‘Š‘ÎŽžŠÔ‚Ìƒx�[ƒXŽž���i’PˆÊ: 1ƒ~ƒŠ•b�j
 *
 *  ŽŸ‚Ìƒ^ƒCƒ€ƒeƒBƒbƒN‚ÌƒVƒXƒeƒ€Žž��‚ð�Ø‚è�ã‚°‚½Žž���DTIC_DENO ‚ª 1 ‚Ì
 *  Žž‚Í�Cnext_time ‚ð EVTTIM ‚É•ÏŠ·‚µ‚½‚à‚Ì‚Éˆê’v‚·‚é�D
 */
#if TIC_DENO == 1
#define	base_time	((EVTTIM) next_time)
#else /* TIC_DENO == 1 */
#define	base_time	((EVTTIM)(next_time + (next_subtime > 0 ? 1 : 0)))
#endif /* TIC_DENO == 1 */

/*
 *  ƒ^ƒCƒ€ƒCƒxƒ“ƒgƒq�[ƒv‚Ì�ÅŒã‚ÌŽg—p—Ìˆæ‚ÌƒCƒ“ƒfƒbƒNƒX
 *
 *  ƒ^ƒCƒ€ƒCƒxƒ“ƒgƒq�[ƒv‚É“o˜^‚³‚ê‚Ä‚¢‚éƒ^ƒCƒ€ƒCƒxƒ“ƒg‚Ì�”‚Éˆê’v‚·‚é�D
 */
extern UINT	last_index;

/*
 *  ƒ^ƒCƒ€ƒCƒxƒ“ƒgŠÇ—�ƒ‚ƒWƒ…�[ƒ‹‚Ì�‰Šú‰»
 */
extern void	tmevt_initialize(void);

/*
 *  ƒ^ƒCƒ€ƒCƒxƒ“ƒg‚Ì‘}“üˆÊ’u‚Ì’T�õ
 */
extern UINT	tmevt_up(UINT index, EVTTIM time);
extern UINT	tmevt_down(UINT index, EVTTIM time);

/*
 *  ƒ^ƒCƒ€ƒCƒxƒ“ƒgƒq�[ƒv‚Ö‚Ì“o˜^‚Æ�í�œ
 */
extern void	tmevtb_insert(TMEVTB *tmevtb, EVTTIM time);
extern void	tmevtb_delete(TMEVTB *tmevtb);

/*
 *  ƒ^ƒCƒ€ƒCƒxƒ“ƒgƒuƒ�ƒbƒN‚Ì“o˜^�i‘Š‘ÎŽžŠÔŽw’è�j
 *
 *  time ‚ÅŽw’è‚µ‚½‘Š‘ÎŽžŠÔ‚ªŒo‰ßŒã‚É�Carg ‚ðˆø�”‚Æ‚µ‚Ä callback ‚ªŒÄ
 *  ‚Ñ�o‚³‚ê‚é‚æ‚¤‚É�Cƒ^ƒCƒ€ƒCƒxƒ“ƒgƒuƒ�ƒbƒN tmevtb ‚ð“o˜^‚·‚é�D
 */
Inline void
tmevtb_enqueue(TMEVTB *tmevtb, RELTIM time, CBACK callback, VP arg)
{
	assert(time <= TMAX_RELTIM);

	tmevtb->callback = callback;
	tmevtb->arg = arg;
	tmevtb_insert(tmevtb, base_time + time);
}

/*
 *  ƒ^ƒCƒ€ƒCƒxƒ“ƒgƒuƒ�ƒbƒN‚Ì“o˜^�iƒCƒxƒ“ƒg”­�¶Žž��Žw’è�j
 *
 *  time ‚ÅŽw’è‚µ‚½ƒCƒxƒ“ƒg”­�¶Žž��‚É�Carg ‚ðˆø�”‚Æ‚µ‚Ä callback ‚ªŒÄ
 *  ‚Ñ�o‚³‚ê‚é‚æ‚¤‚É�Cƒ^ƒCƒ€ƒCƒxƒ“ƒgƒuƒ�ƒbƒN tmevtb ‚ð“o˜^‚·‚é�D
 */
Inline void
tmevtb_enqueue_evttim(TMEVTB *tmevtb, EVTTIM time, CBACK callback, VP arg)
{
	tmevtb->callback = callback;
	tmevtb->arg = arg;
	tmevtb_insert(tmevtb, time);
}

/*
 *  ƒ^ƒCƒ€ƒCƒxƒ“ƒgƒuƒ�ƒbƒN‚Ì“o˜^‰ð�œ
 */
Inline void
tmevtb_dequeue(TMEVTB *tmevtb)
{
	tmevtb_delete(tmevtb);
}

#endif /* _TIME_EVENT_H_ */
