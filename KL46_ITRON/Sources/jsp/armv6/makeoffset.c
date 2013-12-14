/*
 *  TOPPERS/JSP Kernel
 *      Toyohashi Open Platform for Embedded Real-Time Systems/
 *      Just Standard Profile Kernel
 * 
 *  Copyright (C) 2000-2003 by Embedded and Real-Time Systems Laboratory
 *                              Toyohashi Univ. of Technology, JAPAN
 *  Copyright (C) 2004 by Embedded and Real-Time Systems Laboratory
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
 *  @(#) $Id: makeoffset.c,v 1.7 2004/09/06 16:00:15 hiro Exp $
 */

#include "kernel/jsp_kernel.h"
#include "kernel/task.h"

#undef offsetof
#define offsetof(structure, field) \
                        ((INT) &(((structure *) 0)->field))

#define OFFSET_DEF(TYPE, FIELD)						\
	Asm("OFFSET_DEF " #TYPE "_" #FIELD " = %0"			\
	  : /* no output */						\
	  : "g"(offsetof(TYPE, FIELD)))

#define OFFSET_DEF2(TYPE, FIELD, FIELDNAME)				\
	Asm("OFFSET_DEF " #TYPE "_" #FIELDNAME " = %0"			\
	  : /* no output */						\
	  : "g"(offsetof(TYPE, FIELD)))

void
makeoffset()
{
    //OFFSET_DEF(TCB, texptn);
    //OFFSET_DEF2(TCB, tskctxb.sp, sp);
    //OFFSET_DEF2(TCB, tskctxb.pc, pc);
}

UW	BIT_REF_4 = 0x12345678;
UH	BIT_REF_2 = 0x1234;
UB	BIT_REF_1 = 0x12;

#ifdef __ARMEL__
TCB	BIT_LB_TCB_enatex = {
#else
TCB	BIT_BB_TCB_enatex = {
#endif /* __ARMEL__ */
               { NULL, NULL }, NULL, 0, 0,
               FALSE, FALSE, TRUE,
               0, NULL, {NULL, NULL }
};
