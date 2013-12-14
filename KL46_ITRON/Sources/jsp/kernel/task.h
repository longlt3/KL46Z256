/*
 *  TOPPERS/JSP Kernel
 *      Toyohashi Open Platform for Embedded Real-Time Systems/
 *      Just Standard Profile Kernel
 * 
 *  Copyright (C) 2000-2003 by Embedded and Real-Time Systems Laboratory
 *                              Toyohashi Univ. of Technology, JAPAN
 *  Copyright (C) 2005,2006 by Embedded and Real-Time Systems Laboratory
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
 *  @(#) $Id: task.h,v 1.12 2007/03/26 06:14:05 honda Exp $
 */

/*
 *	ƒ^ƒXƒNŠÇ—�ƒ‚ƒWƒ…�[ƒ‹
 */

#ifndef _TASK_H_
#define _TASK_H_

#include "queue.h"
#include "time_event.h"

/*
 *  ƒ^ƒXƒN—D�æ“x‚Ì“à•”•\Œ»�EŠO•”•\Œ»•ÏŠ·ƒ}ƒNƒ�
 */
#define INT_PRIORITY(x)		((UINT)((x) - TMIN_TPRI))
#define EXT_TSKPRI(x)		((PRI)(x) + TMIN_TPRI)

/*
 *  ƒ^ƒXƒN�ó‘Ô‚Ì“à•”•\Œ»
 *
 *  TCB ’†‚Ìƒ^ƒXƒN�ó‘Ô‚Å‚Í�CŽÀ�s�ó‘Ô�iRUNNING�j‚ÆŽÀ�s‰Â”\�ó‘Ô�iREADY�j
 *  ‚Í‹æ•Ê‚µ‚È‚¢�D—¼�ó‘Ô‚ð‘��Ì‚µ‚Ä�CŽÀ�s‚Å‚«‚é�ó‘Ô�iRUNNABLE�j‚ÆŒÄ‚Ô�D
 *  “ñ�d‘Ò‚¿�ó‘Ô‚Í�C(TS_WAITING | TS_SUSPENDED) ‚Å•\‚·�DTS_WAIT_???? 
 *  ‚Í�C‘Ò‚¿�ó‘Ô‚É”º‚¤•t‘®�ó‘Ô‚ð•\‚µ�C‘Ò‚¿�ó‘Ô�i“ñ�d‘Ò‚¿�ó‘Ô‚ðŠÜ‚Þ�j‚Ì
 *  �ê�‡‚É‚Ì‚Ý�Ý’è‚³‚ê‚é�D
 */
#define	TS_DORMANT	0x00u	/* ‹xŽ~�ó‘Ô */
#define	TS_RUNNABLE	0x01u	/* ŽÀ�s‚Å‚«‚é�ó‘Ô */
#define	TS_WAITING	0x02u	/* ‘Ò‚¿�ó‘Ô */
#define	TS_SUSPENDED	0x04u	/* ‹­�§‘Ò‚¿�ó‘Ô */

#define	TS_WAIT_SLEEP	0x08u	/* ‹N�°‘Ò‚¿�ó‘Ô */
#define	TS_WAIT_WOBJ	0x10u	/* “¯Šú�E’Ê�MƒIƒuƒWƒFƒNƒg‚É‘Î‚·‚é‘Ò‚¿�ó‘Ô */
#define	TS_WAIT_WOBJCB	0x20u	/* ‹¤’Ê•”•ª‚Ì‘Ò‚¿ƒLƒ…�[‚É‚Â‚È‚ª‚Á‚Ä‚¢‚é */

/*
 *  ƒ^ƒXƒN�ó‘Ô”»•Êƒ}ƒNƒ�
 *
 *  TSTAT_DORMANT ‚Íƒ^ƒXƒN‚ª‹xŽ~�ó‘Ô‚Å‚ ‚é‚©‚Ç‚¤‚©‚ð�CTSTAT_RUNNABLE 
 *  ‚Íƒ^ƒXƒN‚ªŽÀ�s‚Å‚«‚é�ó‘Ô‚Å‚ ‚é‚©‚Ç‚¤‚©‚ð”»•Ê‚·‚é�DTSTAT_WAITING ‚Í
 *  ‘Ò‚¿�ó‘Ô‚Æ“ñ�d‘Ò‚¿�ó‘Ô‚Ì‚¢‚¸‚ê‚©‚Å‚ ‚é‚©‚Ç‚¤‚©‚ð�CTSTAT_SUSPENDED 
 *  ‚Í‹­�§‘Ò‚¿�ó‘Ô‚Æ“ñ�d‘Ò‚¿�ó‘Ô‚Ì‚¢‚¸‚ê‚©‚Å‚ ‚é‚©‚Ç‚¤‚©‚ð”»•Ê‚·‚é�D
 */
#define TSTAT_DORMANT(tstat)	((tstat) == TS_DORMANT)
#define TSTAT_RUNNABLE(tstat)	(((tstat) & TS_RUNNABLE) != 0)
#define TSTAT_WAITING(tstat)	(((tstat) & TS_WAITING) != 0)
#define TSTAT_SUSPENDED(tstat)	(((tstat) & TS_SUSPENDED) != 0)

/*
 *  ‘Ò‚¿�î•ñƒuƒ�ƒbƒN�iWINFO�j‚Ì’è‹`
 *
 *  ƒ^ƒXƒN‚ª‘Ò‚¿�ó‘Ô‚ÌŠÔ‚Í�CTCB ‚¨‚æ‚Ñ‚»‚±‚©‚çŽw‚³‚ê‚é WINFO ‚ðŽŸ‚Ì‚æ
 *  ‚¤‚É�Ý’è‚µ‚È‚¯‚ê‚Î‚È‚ç‚È‚¢�D
 *
 *  (a) TCB ‚Ìƒ^ƒXƒN�ó‘Ô‚ð‘Ò‚¿�ó‘Ô‚É‚·‚é�D‚»‚Ì�Û‚É�C‘Ò‚¿�ó‘Ô‚É”º‚¤•t‘®
 *  �ó‘Ô�iTS_WAIT_????�j‚à�Ý’è‚·‚é�D
 *
 *  (b) ƒ^ƒCƒ€ƒAƒEƒg‚ðŠÄŽ‹‚·‚é‚½‚ß‚É�Cƒ^ƒCƒ€ƒCƒxƒ“ƒgƒuƒ�ƒbƒN‚ð“o˜^‚·‚é�D
 *  “o˜^‚·‚éƒ^ƒCƒ€ƒCƒxƒ“ƒgƒuƒ�ƒbƒN‚Í�C‘Ò‚¿‚É“ü‚éƒT�[ƒrƒXƒR�[ƒ‹�ˆ—�ŠÖ�”
 *  ‚Ìƒ��[ƒJƒ‹•Ï�”‚Æ‚µ‚ÄŠm•Û‚µ�C‚»‚ê‚Ö‚Ìƒ|ƒCƒ“ƒ^‚ð WINFO ‚Ì tmevtb ‚É
 *  ‹L‰¯‚·‚é�Dƒ^ƒCƒ€ƒAƒEƒg‚ÌŠÄŽ‹‚ª•K—v‚È‚¢�ê�‡�i‰i‹v‘Ò‚¿‚Ì�ê�‡�j‚É‚Í�C
 *  tmevtb ‚ð NULL ‚É‚·‚é�D
 *
 *  “¯Šú�E’Ê�MƒIƒuƒWƒFƒNƒg‚É‘Î‚·‚é‘Ò‚¿�ó‘Ô‚Ì�ê�‡‚É‚Í�C•W�€‚Ì WINFO ‚É 
 *  wobjcbƒtƒB�[ƒ‹ƒh‚ð’Ç‰Á‚µ‚½�\‘¢‘Ì�iWINFO_WOBJ�Cwait.h ‚Å’è‹`�j‚ðŽg
 *  ‚¢�Cƒ^ƒXƒN�ó‘Ô‚É TS_WAIT_WOBJ ‚ð�Ý’è‚·‚é�D‚Ü‚½�CˆÈ‰º‚Ì (c)�`(e) ‚Ì
 *  �Ý’è‚ð�s‚¤•K—v‚ª‚ ‚é�D“¯Šú�E’Ê�MƒIƒuƒWƒFƒNƒg‚ÉŠÖŒW‚µ‚È‚¢‘Ò‚¿�i‹N�°
 *  ‘Ò‚¿�CŽžŠÔŒo‰ß‘Ò‚¿�j‚Ì�ê�‡‚É‚Í�C(c)�`(e) ‚Í•K—v‚È‚¢�D
 *
 *  (c) TCB ‚ð‘Ò‚¿‘Î�Û‚Ì“¯Šú�E’Ê�MƒIƒuƒWƒFƒNƒg‚Ì‘Ò‚¿ƒLƒ…�[‚É‚Â‚È‚®�D‘Ò
 *  ‚¿ƒLƒ…�[‚É‚Â‚È‚®‚½‚ß‚É�Ctask_queue ‚ðŽg‚¤�DTCB ‚ð“¯Šú�E’Ê�MƒIƒuƒWƒF
 *  ƒNƒg‚ÌŠÇ—�ƒuƒ�ƒbƒN‚Ì‹¤’Ê•”•ª�iWOBJCB�j‚Ì‘Ò‚¿ƒLƒ…�[‚É‚Â‚È‚¢‚¾�ê�‡‚É
 *  ‚Í�Cƒ^ƒXƒN�ó‘Ô‚É TS_WAIT_WOBJCB ‚ð�Ý’è‚·‚é�D
 *
 *  (d) ‘Ò‚¿‘Î�Û‚Ì“¯Šú�E’Ê�MƒIƒuƒWƒFƒNƒg‚ÌŠÇ—�ƒuƒ�ƒbƒN‚Ö‚Ìƒ|ƒCƒ“ƒ^‚ð�C
 *  WINFO_WOBJ ‚Ì wobjcb ‚É‹L‰¯‚·‚é�D
 *  JSPƒJ�[ƒlƒ‹‚Å wobjcb ‚ðŽg‚¤‚Ì‚Í�C—D�æ“x�‡‚Ì‘Ò‚¿ƒLƒ…�[‚É‚Â‚È‚ª‚ê‚Ä
 *  ‚¢‚éƒ^ƒXƒN‚Ì—D�æ“x‚ª•Ï�X‚³‚ê‚½�ê�‡‚Ì‚Ý‚Å‚ ‚é‚ª�CƒfƒoƒbƒO�î•ñ‚ðŽæ‚è
 *  �o‚µ‚â‚·‚¢‚æ‚¤‚É�C‘Ò‚¿ƒLƒ…�[‚ª—D�æ“x�‡‚Å‚È‚¢�ê�‡‚É‚à wobjcb ‚ð�Ý’è
 *  ‚·‚é�D
 *
 *  (e) ‘Ò‚¿‘Î�Û‚Ì“¯Šú�E’Ê�MƒIƒuƒWƒFƒNƒg‚ÉˆË‘¶‚µ‚Ä‹L‰¯‚·‚é‚±‚Æ‚ª•K—v‚È
 *  �î•ñ‚ª‚ ‚é�ê�‡‚É‚Í�CWINFO_WOBJ ‚É•K—v‚È�î•ñ‚Ì‚½‚ß‚ÌƒtƒB�[ƒ‹ƒh‚ð’Ç‰Á
 *  ‚µ‚½�\‘¢‘Ì‚ð’è‹`‚µ�CWINFO_WOBJ ‚Ì‘ã‚í‚è‚É—p‚¢‚é�D
 *
 *  ‘Ò‚¿�ó‘Ô‚ð‰ð�œ‚·‚é�Û‚É‚Í�C‘Ò‚¿‰ð�œ‚µ‚½ƒ^ƒXƒN‚©‚ç‚Ì•Ô’l‚ð WINFO ‚Ì
 *  wercd ‚É�Ý’è‚·‚é�Dwercd ‚ðŽg‚¤‚Ì‚Í‘Ò‚¿‰ð�œˆÈ�~‚Å‚ ‚é‚Ì‚É‘Î‚µ‚Ä�C
 *  tmevtb ‚Í‘Ò‚¿‰ð�œŒã‚ÍŽg‚í‚È‚¢‚½‚ß�Cƒ�ƒ‚ƒŠ�ß–ñ‚Ì‚½‚ß‚É‹¤—p‘Ì�iunion�j
 *  ‚ðŽg‚Á‚Ä‚¢‚é�D
 */
typedef union waiting_information {
	ER	wercd;		/* ‘Ò‚¿‰ð�œŽž‚ÌƒGƒ‰�[ƒR�[ƒh */
	TMEVTB	*tmevtb;	/* ‘Ò‚¿�ó‘Ô—p‚Ìƒ^ƒCƒ€ƒCƒxƒ“ƒgƒuƒ�ƒbƒN */
} WINFO;

/*
 *  ƒ^ƒXƒN�‰Šú‰»ƒuƒ�ƒbƒN
 *
 *  ƒ^ƒXƒN‚ÉŠÖ‚·‚é�î•ñ‚ð�C’l‚ª•Ï‚í‚ç‚È‚¢‚½‚ß‚ÉROM‚É’u‚¯‚é•”•ª�iƒ^ƒXƒN
 *  �‰Šú‰»ƒuƒ�ƒbƒN�j‚Æ�C’l‚ª•Ï‰»‚·‚é‚½‚ß‚ÉRAM‚É’u‚©‚È‚¯‚ê‚Î‚È‚ç‚È‚¢•”
 *  •ª�iƒ^ƒXƒNŠÇ—�ƒuƒ�ƒbƒN�CTCB�j‚É•ª—£‚µ�CTCB“à‚É‘Î‰ž‚·‚éƒ^ƒXƒN�‰Šú‰»
 *  ƒuƒ�ƒbƒN‚ðŽw‚·ƒ|ƒCƒ“ƒ^‚ð“ü‚ê‚é�Dƒ^ƒXƒN�‰Šú‰»ƒuƒ�ƒbƒN“à‚É‘Î‰ž‚·‚é
 *  TCB‚ðŽw‚·ƒ|ƒCƒ“ƒ^‚ð“ü‚ê‚é•û–@‚Ì•û‚ª�CRAM‚Ì�ß–ñ‚ÌŠÏ“_‚©‚ç‚Í–]‚Ü‚µ‚¢
 *  ‚ª�CŽÀ�sŒø—¦‚ªˆ«‚­‚È‚é‚½‚ß‚É�Ì—p‚µ‚Ä‚¢‚È‚¢�D‘¼‚ÌƒIƒuƒWƒFƒNƒg‚É‚Â‚¢
 *  ‚Ä‚à“¯—l‚Éˆµ‚¤�D
 *  ƒ^ƒXƒN�‰Šú‰»ƒuƒ�ƒbƒN‚É‚Í�CDEF_TEX ‚Å’è‹`‚³‚ê‚éƒ^ƒXƒN—áŠO�ˆ—�ƒ‹�[ƒ`
 *  ƒ“‚ÉŠÖ‚·‚é�î•ñ‚àŠÜ‚Þ�D
 */
typedef struct task_initialization_block {
	ATR	tskatr;		/* ƒ^ƒXƒN‘®�« */
	VP_INT	exinf;		/* ƒ^ƒXƒN‚ÌŠg’£�î•ñ */
	FP	task;		/* ƒ^ƒXƒN‚Ì‹N“®”Ô’n */
	UINT	ipriority;	/* ƒ^ƒXƒN‚Ì‹N“®Žž—D�æ“x�i“à•”•\Œ»�j */
	SIZE	stksz;		/* ƒXƒ^ƒbƒN—Ìˆæ‚ÌƒTƒCƒY�iŠÛ‚ß‚½’l�j */
	VP	stk;		/* ƒXƒ^ƒbƒN—Ìˆæ‚Ì�æ“ª”Ô’n */

	ATR	texatr;		/* ƒ^ƒXƒN—áŠO�ˆ—�ƒ‹�[ƒ`ƒ“‘®�« */
	FP	texrtn;		/* ƒ^ƒXƒN—áŠO�ˆ—�ƒ‹�[ƒ`ƒ“‚Ì‹N“®”Ô’n */
} TINIB;

/*
 *  TCB ’†‚ÌƒtƒB�[ƒ‹ƒh‚Ìƒrƒbƒg•�‚Ì’è‹`
 *
 *  TCB ’†‚ÌƒtƒB�[ƒ‹ƒh‚Ì”z’u‚Í�C�«”\‚É‘å‚«‚­‰e‹¿‚·‚é‚ÆŽv‚í‚ê‚é‚½‚ß�Cƒ^�[
 *  ƒQƒbƒgˆË‘¶‚ÉƒtƒB�[ƒ‹ƒh‚Ìƒrƒbƒg•�‚ð•Ï�X‚·‚é‚±‚Æ‚ð‹–‚µ‚Ä‚¢‚é�D
 */
#ifndef TBIT_TCB_TSTAT
#define	TBIT_TCB_TSTAT		6	/* tstat ƒtƒB�[ƒ‹ƒh‚Ìƒrƒbƒg•� */
#endif /* TBIT_TCB_TSTAT */

#ifndef TBIT_TCB_PRIORITY
#define	TBIT_TCB_PRIORITY	4	/* priority ƒtƒB�[ƒ‹ƒh‚Ìƒrƒbƒg•� */
#endif /* TBIT_TCB_PRIORITY */

/*
 *  ƒ^ƒXƒNŠÇ—�ƒuƒ�ƒbƒN�iTCB�j
 *
 *  JSP‚Å‚Í�Cƒ^ƒXƒN‚Ì‹N“®—v‹�ƒLƒ…�[ƒCƒ“ƒO�”‚Ì�Å‘å’l�iTMAX_ACTCNT�j‚Æ‹N
 *  �°—v‹�ƒLƒ…�[ƒCƒ“ƒO�”‚Ì�Å‘å’l�iTMAX_WUPCNT�j‚Í 1 ‚ÉŒÅ’è‚³‚ê‚Ä‚¢‚é‚½
 *  ‚ß�CƒLƒ…�[ƒCƒ“ƒO‚³‚ê‚Ä‚¢‚é‚©‚Ç‚¤‚©‚Ì�^‹U’l‚Å•\Œ»‚·‚é‚±‚Æ‚ª‚Å‚«‚é�D
 *  ‚Ü‚½�C‹­�§‘Ò‚¿—v‹�ƒlƒXƒg�”‚Ì�Å‘å’l�iTMAX_SUSCNT�j‚ª 1 ‚ÉŒÅ’è‚³‚ê‚Ä
 *  ‚¢‚é‚Ì‚Å�C‹­�§‘Ò‚¿—v‹�ƒlƒXƒg�”�isuscnt�j‚Í•K—v‚È‚¢�D
 */
typedef struct task_control_block {
	QUEUE	task_queue;	/* ƒ^ƒXƒNƒLƒ…�[ */												// 0
	const TINIB *tinib;	/* Pointer to the task initialization block */					//8
																						//12
	unsigned int	tstat : TBIT_TCB_TSTAT;	/* Task state (internal representation)*/	//0
	unsigned int	priority : TBIT_TCB_PRIORITY;										//8
						/* Priority of the current (internal representation)*/			
	unsigned int	actcnt : 1;		/* Activation request queuing */					//16
	unsigned int	wupcnt : 1;		/* Wakeup request queuing */						//17
	unsigned int	enatex : 1;		/* Task exception handling enabled state */			//18

	TEXPTN	texptn;		/* •Û—¯—áŠO—vˆö */												//16
	WINFO	*winfo;		/* ‘Ò‚¿�î•ñƒuƒ�ƒbƒN‚Ö‚Ìƒ|ƒCƒ“ƒ^ */								//20
	CTXB	tskctxb;	/* ƒ^ƒXƒNƒRƒ“ƒeƒLƒXƒgƒuƒ�ƒbƒN */								//24(8)
} TCB;

/*
 *  ŽÀ�s�ó‘Ô‚Ìƒ^ƒXƒN
 *
 *  ŽÀ�s�ó‘Ô‚Ìƒ^ƒXƒN�i��ƒvƒ�ƒZƒbƒT‚ªƒRƒ“ƒeƒLƒXƒg‚ðŽ�‚Á‚Ä‚¢‚éƒ^ƒXƒN�j‚Ì
 *  TCB ‚ðŽw‚·ƒ|ƒCƒ“ƒ^�DŽÀ�s�ó‘Ô‚Ìƒ^ƒXƒN‚ª‚È‚¢�ê�‡‚Í NULL ‚É‚·‚é�D
 *  ƒT�[ƒrƒXƒR�[ƒ‹‚Ì�ˆ—�’†‚Å�CŽ©ƒ^ƒXƒN�iƒT�[ƒrƒXƒR�[ƒ‹‚ðŒÄ‚Ñ�o‚µ‚½ƒ^ƒX
 *  ƒN�j‚ÉŠÖ‚·‚é�î•ñ‚ðŽQ�Æ‚·‚é�ê�‡‚Í runtsk ‚ðŽg‚¤�Druntsk ‚ð�‘‚«Š·‚¦
 *  ‚é‚Ì‚Í�CƒfƒBƒXƒpƒbƒ`ƒƒ�i‚Æ�‰Šú‰»�ˆ—��j‚Ì‚Ý‚Å‚ ‚é�D
 */
extern TCB	*runtsk;

/*
 *  �Å�‚—D�æ�‡ˆÊ‚Ìƒ^ƒXƒN
 *
 *  ŽÀ�s‚Å‚«‚éƒ^ƒXƒN‚Ì’†‚Å�Å�‚—D�æ�‡ˆÊ‚Ìƒ^ƒXƒN‚Ì TCB ‚ðŽw‚·ƒ|ƒCƒ“ƒ^�DŽÀ
 *  �s‚Å‚«‚éƒ^ƒXƒN‚ª‚È‚¢�ê�‡‚Í NULL ‚É‚·‚é�D
 *  ƒfƒBƒXƒpƒbƒ`‹ÖŽ~�ó‘Ô‚È‚Ç�CƒfƒBƒXƒpƒbƒ`‚ª•Û—¯‚³‚ê‚Ä‚¢‚éŠÔ‚Í�Cruntsk
 *  ‚Æˆê’v‚µ‚Ä‚¢‚é‚Æ‚ÍŒÀ‚ç‚È‚¢�D
 */
extern TCB	*schedtsk;

/*
 *  ƒfƒBƒXƒpƒbƒ`�^ƒ^ƒXƒN—áŠO�ˆ—�ƒ‹�[ƒ`ƒ“‹N“®—v‹�ƒtƒ‰ƒO
 *
 *  Š„�ž‚Ýƒnƒ“ƒhƒ‰�^CPU—áŠOƒnƒ“ƒhƒ‰‚Ì�oŒû�ˆ—�‚É�CƒfƒBƒXƒpƒbƒ`‚Ü‚½‚Í
 *  ƒ^ƒXƒN—áŠO�ˆ—�ƒ‹�[ƒ`ƒ“‚Ì‹N“®‚ð—v‹�‚·‚é‚±‚Æ‚ðŽ¦‚·ƒtƒ‰ƒO�D
 */
extern BOOL	reqflg;

/*
 *  ƒfƒBƒXƒpƒbƒ`‹–‰Â�ó‘Ô
 *
 *  ƒfƒBƒXƒpƒbƒ`‹–‰Â�ó‘Ô‚Å‚ ‚é�i‚·‚È‚í‚¿�CƒfƒBƒXƒpƒbƒ`‹ÖŽ~�ó‘Ô‚Å‚È‚¢�j
 *  ‚±‚Æ‚ðŽ¦‚·ƒtƒ‰ƒO�D
 */
extern BOOL	enadsp;

/*
 *  ƒŒƒfƒBƒLƒ…�[
 *
 *  ƒŒƒfƒBƒLƒ…�[‚Í�CŽÀ�s‚Å‚«‚é�ó‘Ô‚Ìƒ^ƒXƒN‚ðŠÇ—�‚·‚é‚½‚ß‚ÌƒLƒ…�[‚Å‚ ‚é�D
 *  ŽÀ�s�ó‘Ô‚Ìƒ^ƒXƒN‚àŠÇ—�‚µ‚Ä‚¢‚é‚½‚ß�CƒŒƒfƒB�iŽÀ�s‰Â”\�jƒLƒ…�[‚Æ‚¢‚¤
 *  –¼�Ì‚Í�³Šm‚Å‚Í‚È‚¢‚ª�CƒŒƒfƒBƒLƒ…�[‚Æ‚¢‚¤–¼�Ì‚ª’è’…‚µ‚Ä‚¢‚é‚½‚ß�C‚±
 *  ‚Ì–¼�Ì‚ÅŒÄ‚Ô‚±‚Æ‚É‚·‚é�D
 *
 *  ƒŒƒfƒBƒLƒ…�[‚Í�C—D�æ“x‚²‚Æ‚Ìƒ^ƒXƒNƒLƒ…�[‚Å�\�¬‚³‚ê‚Ä‚¢‚é�Dƒ^ƒXƒN‚Ì
 *  TCB‚Í�CŠY“–‚·‚é—D�æ“x‚ÌƒLƒ…�[‚É“o˜^‚³‚ê‚é�D
 */
extern QUEUE	ready_queue[TNUM_TPRI];

/*
 *  ƒŒƒfƒBƒLƒ…�[ƒT�[ƒ`‚Ì‚½‚ß‚Ìƒrƒbƒgƒ}ƒbƒv
 *
 *  ƒŒƒfƒBƒLƒ…�[‚ÌƒT�[ƒ`‚ðŒø—¦‚æ‚­�s‚¤‚½‚ß‚É�C—D�æ“x‚²‚Æ‚Ìƒ^ƒXƒNƒLƒ…�[
 *  ‚Éƒ^ƒXƒN‚ª“ü‚Á‚Ä‚¢‚é‚©‚Ç‚¤‚©‚ðŽ¦‚·ƒrƒbƒgƒ}ƒbƒv‚ð—pˆÓ‚µ‚Ä‚¢‚é�Dƒrƒb
 *  ƒgƒ}ƒbƒv‚ðŽg‚¤‚±‚Æ‚Å�Cƒ�ƒ‚ƒŠƒAƒNƒZƒX‚Ì‰ñ�”‚ðŒ¸‚ç‚·‚±‚Æ‚ª‚Å‚«‚é‚ª�C
 *  ƒrƒbƒg‘€�ì–½—ß‚ª�[ŽÀ‚µ‚Ä‚¢‚È‚¢ƒvƒ�ƒZƒbƒT‚Å�C—D�æ“x‚Ì’iŠK�”‚ª�­‚È‚¢
 *  �ê�‡‚É‚Í�Cƒrƒbƒgƒ}ƒbƒv‘€�ì‚ÌƒI�[ƒo�[ƒwƒbƒh‚Ì‚½‚ß‚É�C‹t‚ÉŒø—¦‚ª—Ž‚¿
 *  ‚é‰Â”\�«‚à‚ ‚é�D
 */
extern UINT	ready_primap;

/*
 *  ƒ^ƒXƒNID‚Ì�Å‘å’l�ikernel_cfg.c�j
 */
extern const ID	tmax_tskid;

/*
 *  ƒ^ƒXƒN�‰Šú‰»ƒuƒ�ƒbƒN‚ÌƒGƒŠƒA�ikernel_cfg.c�j
 */
extern const TINIB	tinib_table[];

/*
 *  ƒ^ƒXƒN�¶�¬�‡�˜ƒe�[ƒuƒ‹�ikernel_cfg.c�j
 */
extern const ID	torder_table[];

/*
 *  TCB‚ÌƒGƒŠƒA�ikernel_cfg.c�j
 */
extern TCB	tcb_table[];

/*
 *  ƒ^ƒXƒN‚Ì�”
 */
#define TNUM_TSK	((UINT)(tmax_tskid - TMIN_TSKID + 1))

/*
 *  ƒ^ƒXƒNID‚©‚çTCB‚ðŽæ‚è�o‚·‚½‚ß‚Ìƒ}ƒNƒ�
 */
#define INDEX_TSK(tskid)	((UINT)((tskid) - TMIN_TSKID))
#define get_tcb(tskid)		(&(tcb_table[INDEX_TSK(tskid)]))
#define get_tcb_self(tskid)	((tskid) == TSK_SELF ? runtsk : get_tcb(tskid))

/*
 *  TCB‚©‚çƒ^ƒXƒNID‚ðŽæ‚è�o‚·‚½‚ß‚Ìƒ}ƒNƒ�
 */
#define	TSKID(tcb)	((ID)(((tcb) - tcb_table) + TMIN_TSKID))

/*
 *  ƒ^ƒXƒNŠÇ—�ƒ‚ƒWƒ…�[ƒ‹‚Ì�‰Šú‰»
 */
extern void	task_initialize(void);

/*
 *  �Å�‚—D�æ�‡ˆÊƒ^ƒXƒN‚ÌƒT�[ƒ`
 *
 *  ƒŒƒfƒBƒLƒ…�[’†‚Ì�Å�‚—D�æ�‡ˆÊ‚Ìƒ^ƒXƒN‚ðƒT�[ƒ`‚µ�C‚»‚ÌTCB‚Ö‚Ìƒ|ƒCƒ“ƒ^
 *  ‚ð•Ô‚·�DƒŒƒfƒBƒLƒ…�[‚ª‹ó‚Ì�ê�‡‚É‚Í�C‚±‚ÌŠÖ�”‚ðŒÄ‚Ñ�o‚µ‚Ä‚Í‚È‚ç‚È‚¢�D
 */
extern TCB	*search_schedtsk(void);

/*
 *  ŽÀ�s‚Å‚«‚é�ó‘Ô‚Ö‚ÌˆÚ�s
 *
 *  tcb ‚ÅŽw’è‚³‚ê‚éƒ^ƒXƒN‚Ì�ó‘Ô‚ðŽÀ�s‚Å‚«‚é�ó‘Ô‚Æ‚µ�CƒŒƒfƒBƒLƒ…�[‚É‘}
 *  “ü‚·‚é�DŽÀ�s‚Å‚«‚é�ó‘Ô‚É‚È‚Á‚½ƒ^ƒXƒN‚Ì—D�æ“x‚ª�C�Å�‚—D�æ�‡ˆÊ‚Ìƒ^ƒX
 *  ƒN‚Ì—D�æ“x‚æ‚è‚à�‚‚¢�ê�‡‚Í�C�Å�‚—D�æ�‡ˆÊ‚Ìƒ^ƒXƒN‚ð�X�V‚µ�CƒfƒBƒXƒpƒb
 *  ƒ`‹–‰Â�ó‘Ô‚Å‚ ‚ê‚Î TRUE ‚ð•Ô‚·�D‚»‚¤‚Å‚È‚¢�ê�‡‚Í FALSE ‚ð•Ô‚·�D
 */
extern BOOL	make_runnable(TCB *tcb);

/*
 *  ŽÀ�s‚Å‚«‚é�ó‘Ô‚©‚ç‘¼‚Ì�ó‘Ô‚Ö‚ÌˆÚ�s
 *
 *  tcb ‚ÅŽw’è‚³‚ê‚éƒ^ƒXƒN‚ðƒŒƒfƒBƒLƒ…�[‚©‚ç�í�œ‚·‚é�Dtcb ‚ÅŽw’è‚µ‚½ƒ^
 *  ƒXƒN‚ª�Å�‚—D�æ�‡ˆÊ‚Ìƒ^ƒXƒN‚Å‚ ‚Á‚½�ê�‡‚É‚Í�C�Å�‚—D�æ�‡ˆÊ‚Ìƒ^ƒXƒN‚ð
 *  �Ý’è‚µ‚È‚¨‚µ�CƒfƒBƒXƒpƒbƒ`‹–‰Â�ó‘Ô‚Å‚ ‚ê‚Î TRUE ‚ð•Ô‚·�D‚»‚¤‚Å‚È‚¢
 *  �ê�‡‚Í FALSE ‚ð•Ô‚·�Dƒ^ƒXƒN‚Ì�ó‘Ô‚Í�X�V‚µ‚È‚¢�D
 */
extern BOOL	make_non_runnable(TCB *tcb);

/*
 *  ‹xŽ~�ó‘Ô‚Ö‚ÌˆÚ�s
 *
 *  tcb ‚ÅŽw’è‚³‚ê‚éƒ^ƒXƒN‚Ì�ó‘Ô‚ð‹xŽ~�ó‘Ô‚Æ‚·‚é�D‚Ü‚½�Cƒ^ƒXƒN‚Ì‹N“®Žž
 *  ‚É�‰Šú‰»‚·‚×‚«•Ï�”‚Ì�‰Šú‰»‚Æ�Cƒ^ƒXƒN‹N“®‚Ì‚½‚ß‚ÌƒRƒ“ƒeƒLƒXƒg‚ð�Ý’è
 *  ‚·‚é�D
 */
extern void	make_dormant(TCB *tcb);

/*
 *  ‹xŽ~�ó‘Ô‚©‚çŽÀ�s‚Å‚«‚é�ó‘Ô‚Ö‚ÌˆÚ�s
 *
 *  tcb ‚ÅŽw’è‚³‚ê‚éƒ^ƒXƒN‚Ì�ó‘Ô‚ð‹xŽ~�ó‘Ô‚©‚çŽÀ�s‚Å‚«‚é�ó‘Ô‚Æ‚·‚é�DŽÀ
 *  �s‚Å‚«‚é�ó‘Ô‚ÉˆÚ�s‚µ‚½ƒ^ƒXƒN‚Ö‚ÌƒfƒBƒXƒpƒbƒ`‚ª•K—v‚È�ê�‡‚Í TRUE�C
 *  ‚»‚¤‚Å‚È‚¢�ê�‡‚Í FALSE ‚ð•Ô‚·�D
 */
extern BOOL	make_active(TCB *tcb);

/*
 *  ŽÀ�s�ó‘Ô‚Ìƒ^ƒXƒN‚Ì�I—¹
 *
 *  exit_task ‚ð ext_tsk ‚É–„‚ß�ž‚Ü‚¸‚É•Ê‚ÌŠÖ�”‚É‚µ‚Ä‚¢‚é‚Ì‚Í�C
 *  create_context ‚Æ activate_context ‚ªŽ©ƒ^ƒXƒN‚Ì�I—¹�ˆ—�‚ÅŽg—p‚·‚é
 *  ƒXƒ^ƒbƒN‚ð”j‰ó‚µ‚È‚¢‚æ‚¤‚É‚·‚é‚½‚ß‚Ì‘Î�ô‚ÌˆêŠÂ‚Å‚ ‚é�Dext_tsk ‚Æ‚Í
 *  •ÊŠÖ�”‚É‚µ‚Ä‚¨‚­‚±‚Æ‚Å�Cƒ��[ƒJƒ‹•Ï�”‚àŠÜ‚ß‚Ä�CŽg—p‚·‚éƒXƒ^ƒbƒN—Ìˆæ
 *  ‚ª�d‚È‚ç‚È‚¢‚æ‚¤‚É‚Å‚«‚é�D‚Ü‚½�CƒRƒ“ƒpƒCƒ‰‚ªŽ©“®“I‚ÉƒCƒ“ƒ‰ƒCƒ““WŠJ
 *  ‚·‚é‚Ì‚ð”ð‚¯‚é‚½‚ß‚É�Cext_tsk ‚Æ‚Í•Ê‚Ìƒtƒ@ƒCƒ‹‚É“ü‚ê‚Ä‚¢‚é�D
 */
extern void	exit_task(void);

/*
 *  ƒŒƒfƒBƒLƒ…�[’†‚Ìƒ^ƒXƒN‚Ì—D�æ“x‚Ì•Ï�X
 *
 *  tcb ‚ÅŽw’è‚³‚ê‚éƒŒƒfƒBƒLƒ…�[’†‚Ìƒ^ƒXƒN‚Ì—D�æ“x‚ð newpri�i“à•”•\Œ»�j
 *  ‚É•Ï�X‚·‚é�D‚Ü‚½�C•K—v‚È�ê�‡‚É‚Í�Å�‚—D�æ�‡ˆÊ‚Ìƒ^ƒXƒN‚ð�X�V‚µ�CƒfƒB
 *  ƒXƒpƒbƒ`‹–‰Â�ó‘Ô‚Å‚ ‚ê‚Î TRUE ‚ð•Ô‚·�D‚»‚¤‚Å‚È‚¢�ê�‡‚Í FALSE ‚ð•Ô
 *  ‚·�D
 */
extern BOOL	change_priority(TCB *tcb, UINT newpri);

/*
 *  ƒŒƒfƒBƒLƒ…�[‚Ì‰ñ“]
 *
 *  ƒŒƒfƒBƒLƒ…�[’†‚Ì�Cpri ‚ÅŽw’è‚³‚ê‚é—D�æ“x‚Ìƒ^ƒXƒNƒLƒ…�[‚ð‰ñ“]‚³‚¹‚é�D
 *  ‚Ü‚½�C•K—v‚È�ê�‡‚É‚Í�Å�‚—D�æ�‡ˆÊ‚Ìƒ^ƒXƒN‚ð•Ï�X‚µ�CƒfƒBƒXƒpƒbƒ`‚ª•Û
 *  —¯‚³‚ê‚Ä‚¢‚È‚¯‚ê‚Î TRUE ‚ð•Ô‚·�D‚»‚¤‚Å‚È‚¢�ê�‡‚Í FALSE ‚ð•Ô‚·�D
 */
extern BOOL	rotate_ready_queue(UINT pri);

/*
 *  ƒ^ƒXƒN—áŠO�ˆ—�ƒ‹�[ƒ`ƒ“‚ÌŒÄ�o‚µ
 *
 *  ƒ^ƒXƒN—áŠO�ˆ—�ƒ‹�[ƒ`ƒ“‚ðŒÄ‚Ñ�o‚·�DŒÄ‚Ñ�o‚·‘O‚É�CŽÀ�s�ó‘Ô‚Ìƒ^ƒXƒN‚Ì
 *  •Û—¯—áŠO—vˆö‚ðƒNƒŠƒA‚µ�Cƒ^ƒXƒN—áŠO�ˆ—�‹ÖŽ~�ó‘Ô‚É‚µ�CCPUƒ�ƒbƒN‚ð‰ð
 *  �œ‚·‚é�D
 *  ƒ^ƒXƒN—áŠO�ˆ—�ƒ‹�[ƒ`ƒ“‚©‚ç–ß‚é‚Æ�C‚Ü‚¸CPUƒ�ƒbƒN�ó‘Ô‚É–ß‚µ�C‚»‚ÌŠÔ
 *  ‚É•Û—¯—áŠO—vˆö‚ª 0 ‚Å‚È‚­‚È‚Á‚Ä‚¢‚ê‚Î�C�Ä‚Ñƒ^ƒXƒN—áŠO�ˆ—�ƒ‹�[ƒ`ƒ“
 *  ‚ðŒÄ‚Ñ�o‚·�D•Û—¯—áŠO—vˆö‚ª 0 ‚Ì�ê�‡‚É‚Í�C—áŠO�ˆ—�‹–‰Â�ó‘Ô‚É‚µ‚ÄŠÖ
 *  �”‚©‚çƒŠƒ^�[ƒ“‚·‚é�D
 *  ‚±‚ÌŠÖ�”‚Í�CŽÀ�s�ó‘Ô‚Ìƒ^ƒXƒN‚ª�Cƒ^ƒXƒN—áŠO�ˆ—�‹–‰Â�ó‘Ô�ienatex ‚ª 
 *  TRUE�j‚Å�C•Û—¯—áŠO—vˆö‚ª 0 ‚Å‚È‚¢�itexptn ‚ª 0 ‚Å‚È‚¢�j�ê�‡‚ÉŒÄ‚Ñ
 *  �o‚·‚±‚Æ‚ð‘z’è‚µ‚Ä‚¢‚é�D‚±‚ÌŠÖ�”‚Í�CCPUƒ�ƒbƒN�ó‘Ô‚ÅŒÄ‚Ñ�o‚³‚È‚¯‚ê
 *  ‚Î‚È‚ç‚È‚¢�D
 */
extern void	call_texrtn(void);

/*
 *  ƒ^ƒXƒN—áŠO�ˆ—�ƒ‹�[ƒ`ƒ“‚Ì‹N“®
 *
 *  ŽÀ�s�ó‘Ô‚Ìƒ^ƒXƒN‚ªƒ^ƒXƒN—áŠO�ˆ—�ƒ‹�[ƒ`ƒ“‚Ì‹N“®�ðŒ�‚ð–ž‚½‚µ‚Ä‚¢‚ê‚Î�C
 *  ƒ^ƒXƒN—áŠO�ˆ—�ƒ‹�[ƒ`ƒ“‚ðŒÄ‚Ñ�o‚·�DCPU—áŠO�ˆ—�ƒ‹�[ƒ`ƒ“‚ðŒÄ‚Ñ�o‚·Žž
 *  ‚Í�CˆêŽž“I‚ÉCPUƒ�ƒbƒN‚ð‰ð�œ‚·‚é�D
 *  ‚±‚ÌŠÖ�”‚Í�CƒfƒBƒXƒpƒbƒ`ƒƒ‚âŠ„�ž‚Ýƒnƒ“ƒhƒ‰�^CPU—áŠOƒnƒ“ƒhƒ‰‚Ì�oŒû
 *  �ˆ—�‚©‚çŒÄ‚Ñ�o‚³‚ê‚é‚±‚Æ‚ð‘z’è‚µ‚Ä‚¢‚é‚ª�C“¯“™‚Ì�ˆ—�‚ðƒ^�[ƒQƒbƒgˆË
 *  ‘¶•”‚Å‹L�q‚µ‚Ä‚à‚æ‚¢�D‚»‚Ì�ê�‡‚É‚Í�COMIT_CALLTEX ‚ðƒ}ƒNƒ�’è‹`‚·‚ê
 *  ‚Î‚æ‚¢�D
 */
extern void	calltex(void);

#endif /* _TASK_H_ */
