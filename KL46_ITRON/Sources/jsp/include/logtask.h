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
 *  @(#) $Id: logtask.h,v 1.10 2003/07/08 14:49:42 hiro Exp $
 */

/*
 *	ƒVƒXƒeƒ€ƒ�ƒOƒ^ƒXƒN
 */

#ifndef _LOGTASK_H_
#define _LOGTASK_H_

#include <include/t_config.h>

/*
 *  ƒVƒXƒeƒ€ƒ�ƒOƒ^ƒXƒNŠÖ˜A‚Ì’è‹`
 */ 
#ifndef LOGTASK_PRIORITY
#define	LOGTASK_PRIORITY	3	/* ƒfƒtƒHƒ‹ƒg‚Ì�‰Šú—D�æ“x */
#endif /* LOGTASK_PRIORITY */

#ifndef LOGTASK_STACK_SIZE
#define	LOGTASK_STACK_SIZE	1024	/* ƒXƒ^ƒbƒN—Ìˆæ‚ÌƒfƒtƒHƒ‹ƒgƒTƒCƒY */
#endif /* LOGTASK_STACK_SIZE */

#ifndef LOGTASK_INTERVAL
#define	LOGTASK_INTERVAL	10	/* ƒfƒtƒHƒ‹ƒg‚Ì“®�ìŠÔŠu�iƒ~ƒŠ•b�j*/
#endif /* LOGTASK_INTERVAL */

/*
 *  ƒVƒXƒeƒ€ƒ�ƒOƒ^ƒXƒN‚Ì–{‘Ì
 */
extern void	logtask(VP_INT exinf);

#endif /* _LOGTASK_H_ */
