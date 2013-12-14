/*
 *  TOPPERS/JSP Kernel
 *      Toyohashi Open Platform for Embedded Real-Time Systems/
 *      Just Standard Profile Kernel
 * 
 *  Copyright (C) 2003 by Embedded and Real-Time Systems Laboratory
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
 *  @(#) $Id: kernel_cfg.h,v 1.5 2003/12/06 13:09:46 hiro Exp $
 */

/*
 *	kernel_cfg.c —pƒCƒ“ƒNƒ‹�[ƒhƒtƒ@ƒCƒ‹
 */

#ifndef _KERNEL_CFG_H_
#define _KERNEL_CFG_H_

/*
 *  ƒJ�[ƒlƒ‹•W�€ƒCƒ“ƒNƒ‹�[ƒhƒtƒ@ƒCƒ‹
 */
#include <kernel/jsp_kernel.h>

/*
 *  ƒJ�[ƒlƒ‹‚ÌŠeƒCƒ“ƒNƒ‹�[ƒhƒtƒ@ƒCƒ‹
 */
#include <kernel/task.h>
#include <kernel/semaphore.h>
#include <kernel/eventflag.h>
#include <kernel/dataqueue.h>
#include <kernel/mailbox.h>
#include <kernel/mempfix.h>
#include <kernel/cyclic.h>
#include <kernel/interrupt.h>
#include <kernel/exception.h>
#include <kernel/time_event.h>

/*
 *  ƒJ�[ƒlƒ‹‚Ìƒ��[ƒNƒGƒŠƒA‚ð’è‹`‚·‚é‚½‚ß‚Ìƒf�[ƒ^Œ^
 *
 *  ƒXƒ^ƒbƒN—Ìˆæ‚ÆŒÅ’è’·ƒ�ƒ‚ƒŠƒv�[ƒ‹—Ìˆæ‚ð�CVPŒ^‚ÌƒTƒCƒY‚æ‚è‚à‘å‚«‚¢’P
 *  ˆÊ‚ÅƒAƒ‰ƒCƒ“‚³‚¹‚é•K—v‚ª‚ ‚é�ê�‡‚É‚Í�C__STK_UNIT ‚Æ__MPF_UNIT ‚ð�C
 *  ‚»‚ê‚¼‚êƒAƒ‰ƒCƒ“‚³‚¹‚é’PˆÊ‚Ìƒf�[ƒ^Œ^‚É’è‹`‚·‚é�D
 *
 *  ˆÈ‰º‚Ì’è‹`‚Í�C__STK_UNIT ‚¨‚æ‚Ñ __MPF_UNIT ‚ÌƒTƒCƒY‚ª 2‚Ì‹Ð�æ‚Å‚ 
 *  ‚é‚±‚Æ‚ð‰¼’è‚µ‚Ä‚¢‚é�D
 */

#ifndef __STK_UNIT
typedef VP	__STK_UNIT;
#endif /* __STK_UNIT */

#ifndef __MPF_UNIT
typedef VP	__MPF_UNIT;
#endif /* __MPF_UNIT */

#define __TROUND_STK_UNIT(sz) \
		(((sz) + sizeof(__STK_UNIT) - 1) & ~(sizeof(__STK_UNIT) - 1))
#define __TCOUNT_STK_UNIT(sz) \
		(((sz) + sizeof(__STK_UNIT) - 1) / sizeof(__STK_UNIT))

#define __TROUND_MPF_UNIT(sz) \
		(((sz) + sizeof(__MPF_UNIT) - 1) & ~(sizeof(__MPF_UNIT) - 1))
#define __TCOUNT_MPF_UNIT(sz) \
		(((sz) + sizeof(__MPF_UNIT) - 1) / sizeof(__MPF_UNIT))

/*
 *  ƒŠƒl�[ƒ€‚µ‚½ƒVƒ“ƒ{ƒ‹‚ðŒ³‚É–ß‚·‚½‚ß‚ÌƒCƒ“ƒNƒ‹�[ƒhƒtƒ@ƒCƒ‹
 */
#include <kernel/jsp_unrename.h>
#include <armv6/KL46/sys_unrename.h>
#include <armv6/cpu_unrename.h>

#endif /* _KERNEL_CFG_H_ */
