/*
 *  TOPPERS/JSP Kernel
 *      Toyohashi Open Platform for Embedded Real-Time Systems/
 *      Just Standard Profile Kernel
 * 
 *  Copyright (C) 2000-2003 by Embedded and Real-Time Systems Laboratory
 *                              Toyohashi Univ. of Technology, JAPAN
 *                2003      by Advanced Data Controls, Corp
 *  Copyright (C) 2005 by Embedded and Real-Time Systems Laboratory
 *              Graduate School of Information Science, Nagoya Univ., JAPAN    
 * 
 *  ï¿½Ã£â€¹Lâ€™Ëœï¿½Ã¬Å’Â Å½Ã’â€šÃ�ï¿½CË†Ãˆâ€°Âºâ€šÃŒ (1)ï¿½`(4) â€šÃŒï¿½Ã°Å’ï¿½â€šÂ©ï¿½CFree Software Foundation 
 *  â€šÃ‰â€šÃ¦â€šÃ�â€šÃ„Å’Ã¶â€¢\â€šÂ³â€šÃªâ€šÃ„â€šÂ¢â€šÃ© GNU General Public License â€šÃŒ Version 2 â€šÃ‰â€¹L
 *  ï¿½qâ€šÂ³â€šÃªâ€šÃ„â€šÂ¢â€šÃ©ï¿½Ã°Å’ï¿½â€šÃ°â€“Å¾â€šÂ½â€šÂ·ï¿½Ãªï¿½â€¡â€šÃ‰Å’Ã€â€šÃ¨ï¿½Câ€“{Æ’\Æ’tÆ’gÆ’EÆ’FÆ’Aï¿½iâ€“{Æ’\Æ’tÆ’gÆ’EÆ’FÆ’A
 *  â€šÃ°â€°Ã¼â€¢Ã�â€šÂµâ€šÂ½â€šÃ â€šÃŒâ€šÃ°Å Ãœâ€šÃžï¿½DË†Ãˆâ€°Âºâ€œÂ¯â€šÂ¶ï¿½jâ€šÃ°Å½gâ€”pï¿½Eâ€¢Â¡ï¿½Â»ï¿½Eâ€°Ã¼â€¢Ã�ï¿½Eï¿½Ã„â€�zâ€¢zï¿½iË†Ãˆâ€°Âºï¿½C
 *  â€”Ëœâ€”pâ€šÃ†Å’Ã„â€šÃ”ï¿½jâ€šÂ·â€šÃ©â€šÂ±â€šÃ†â€šÃ°â€“Â³ï¿½Å¾â€šÃ…â€¹â€“â€˜Ã¸â€šÂ·â€šÃ©ï¿½D
 *  (1) â€“{Æ’\Æ’tÆ’gÆ’EÆ’FÆ’Aâ€šÃ°Æ’\ï¿½[Æ’XÆ’Rï¿½[Æ’hâ€šÃŒÅ’`â€šÃ…â€”Ëœâ€”pâ€šÂ·â€šÃ©ï¿½Ãªï¿½â€¡â€šÃ‰â€šÃ�ï¿½Cï¿½Ã£â€¹Lâ€šÃŒâ€™Ëœï¿½Ã¬
 *      Å’Â â€¢\Å½Â¦ï¿½Câ€šÂ±â€šÃŒâ€”Ëœâ€”pï¿½Ã°Å’ï¿½â€šÂ¨â€šÃ¦â€šÃ‘â€°Âºâ€¹Lâ€šÃŒâ€“Â³â€¢Ã›ï¿½Ã˜â€¹Kâ€™Ã¨â€šÂªï¿½Câ€šÂ»â€šÃŒâ€šÃœâ€šÃœâ€šÃŒÅ’`â€šÃ…Æ’\ï¿½[
 *      Æ’XÆ’Rï¿½[Æ’hâ€™â€ â€šÃ‰Å Ãœâ€šÃœâ€šÃªâ€šÃ„â€šÂ¢â€šÃ©â€šÂ±â€šÃ†ï¿½D
 *  (2) â€“{Æ’\Æ’tÆ’gÆ’EÆ’FÆ’Aâ€šÃ°ï¿½CÆ’â€°Æ’CÆ’uÆ’â€°Æ’Å Å’`Å½Â®â€šÃˆâ€šÃ‡ï¿½Câ€˜Â¼â€šÃŒÆ’\Æ’tÆ’gÆ’EÆ’FÆ’AÅ Jâ€�Â­â€šÃ‰Å½g
 *      â€”pâ€šÃ…â€šÂ«â€šÃ©Å’`â€šÃ…ï¿½Ã„â€�zâ€¢zâ€šÂ·â€šÃ©ï¿½Ãªï¿½â€¡â€šÃ‰â€šÃ�ï¿½Cï¿½Ã„â€�zâ€¢zâ€šÃ‰â€�Âºâ€šÂ¤Æ’hÆ’LÆ’â€¦Æ’ï¿½Æ’â€œÆ’gï¿½iâ€”Ëœâ€”p
 *      Å½Ã’Æ’}Æ’jÆ’â€¦Æ’AÆ’â€¹â€šÃˆâ€šÃ‡ï¿½jâ€šÃ‰ï¿½Cï¿½Ã£â€¹Lâ€šÃŒâ€™Ëœï¿½Ã¬Å’Â â€¢\Å½Â¦ï¿½Câ€šÂ±â€šÃŒâ€”Ëœâ€”pï¿½Ã°Å’ï¿½â€šÂ¨â€šÃ¦â€šÃ‘â€°Âºâ€¹L
 *      â€šÃŒâ€“Â³â€¢Ã›ï¿½Ã˜â€¹Kâ€™Ã¨â€šÃ°Å’fï¿½Ãšâ€šÂ·â€šÃ©â€šÂ±â€šÃ†ï¿½D
 *  (3) â€“{Æ’\Æ’tÆ’gÆ’EÆ’FÆ’Aâ€šÃ°ï¿½Câ€¹@Å Ã­â€šÃ‰â€˜gâ€šÃ�ï¿½Å¾â€šÃžâ€šÃˆâ€šÃ‡ï¿½Câ€˜Â¼â€šÃŒÆ’\Æ’tÆ’gÆ’EÆ’FÆ’AÅ Jâ€�Â­â€šÃ‰Å½g
 *      â€”pâ€šÃ…â€šÂ«â€šÃˆâ€šÂ¢Å’`â€šÃ…ï¿½Ã„â€�zâ€¢zâ€šÂ·â€šÃ©ï¿½Ãªï¿½â€¡â€šÃ‰â€šÃ�ï¿½CÅ½Å¸â€šÃŒâ€šÂ¢â€šÂ¸â€šÃªâ€šÂ©â€šÃŒï¿½Ã°Å’ï¿½â€šÃ°â€“Å¾â€šÂ½â€šÂ·â€šÂ±
 *      â€šÃ†ï¿½D
 *    (a) ï¿½Ã„â€�zâ€¢zâ€šÃ‰â€�Âºâ€šÂ¤Æ’hÆ’LÆ’â€¦Æ’ï¿½Æ’â€œÆ’gï¿½iâ€”Ëœâ€”pÅ½Ã’Æ’}Æ’jÆ’â€¦Æ’AÆ’â€¹â€šÃˆâ€šÃ‡ï¿½jâ€šÃ‰ï¿½Cï¿½Ã£â€¹Lâ€šÃŒâ€™Ëœ
 *        ï¿½Ã¬Å’Â â€¢\Å½Â¦ï¿½Câ€šÂ±â€šÃŒâ€”Ëœâ€”pï¿½Ã°Å’ï¿½â€šÂ¨â€šÃ¦â€šÃ‘â€°Âºâ€¹Lâ€šÃŒâ€“Â³â€¢Ã›ï¿½Ã˜â€¹Kâ€™Ã¨â€šÃ°Å’fï¿½Ãšâ€šÂ·â€šÃ©â€šÂ±â€šÃ†ï¿½D
 *    (b) ï¿½Ã„â€�zâ€¢zâ€šÃŒÅ’`â€˜Ã”â€šÃ°ï¿½Câ€¢ÃŠâ€šÃ‰â€™Ã¨â€šÃŸâ€šÃ©â€¢Ã»â€“@â€šÃ‰â€šÃ¦â€šÃ�â€šÃ„ï¿½CTOPPERSÆ’vÆ’ï¿½Æ’WÆ’FÆ’NÆ’gâ€šÃ‰
 *        â€¢Ã±ï¿½ï¿½â€šÂ·â€šÃ©â€šÂ±â€šÃ†ï¿½D
 *  (4) â€“{Æ’\Æ’tÆ’gÆ’EÆ’FÆ’Aâ€šÃŒâ€”Ëœâ€”pâ€šÃ‰â€šÃ¦â€šÃ¨â€™Â¼ï¿½Ãšâ€œIâ€šÃœâ€šÂ½â€šÃ�Å Ã”ï¿½Ãšâ€œIâ€šÃ‰ï¿½Â¶â€šÂ¶â€šÃ©â€šÂ¢â€šÂ©â€šÃˆâ€šÃ©â€˜Â¹
 *      Å Qâ€šÂ©â€šÃ§â€šÃ ï¿½Cï¿½Ã£â€¹Lâ€™Ëœï¿½Ã¬Å’Â Å½Ã’â€šÂ¨â€šÃ¦â€šÃ‘TOPPERSÆ’vÆ’ï¿½Æ’WÆ’FÆ’NÆ’gâ€šÃ°â€“Ã†ï¿½Ã“â€šÂ·â€šÃ©â€šÂ±â€šÃ†ï¿½D
 * 
 *  â€“{Æ’\Æ’tÆ’gÆ’EÆ’FÆ’Aâ€šÃ�ï¿½Câ€“Â³â€¢Ã›ï¿½Ã˜â€šÃ…â€™Ã±â€¹Å¸â€šÂ³â€šÃªâ€šÃ„â€šÂ¢â€šÃ©â€šÃ â€šÃŒâ€šÃ…â€šÂ â€šÃ©ï¿½Dï¿½Ã£â€¹Lâ€™Ëœï¿½Ã¬Å’Â Å½Ã’â€šÂ¨
 *  â€šÃ¦â€šÃ‘TOPPERSÆ’vÆ’ï¿½Æ’WÆ’FÆ’NÆ’gâ€šÃ�ï¿½Câ€“{Æ’\Æ’tÆ’gÆ’EÆ’FÆ’Aâ€šÃ‰Å Ã–â€šÂµâ€šÃ„ï¿½Câ€šÂ»â€šÃŒâ€œKâ€”pâ€°Ã‚â€�\ï¿½Â«â€šÃ 
 *  Å Ãœâ€šÃŸâ€šÃ„ï¿½Câ€šÂ¢â€šÂ©â€šÃˆâ€šÃ©â€¢Ã›ï¿½Ã˜â€šÃ ï¿½sâ€šÃ­â€šÃˆâ€šÂ¢ï¿½Dâ€šÃœâ€šÂ½ï¿½Câ€“{Æ’\Æ’tÆ’gÆ’EÆ’FÆ’Aâ€šÃŒâ€”Ëœâ€”pâ€šÃ‰â€šÃ¦â€šÃ¨â€™Â¼
 *  ï¿½Ãšâ€œIâ€šÃœâ€šÂ½â€šÃ�Å Ã”ï¿½Ãšâ€œIâ€šÃ‰ï¿½Â¶â€šÂ¶â€šÂ½â€šÂ¢â€šÂ©â€šÃˆâ€šÃ©â€˜Â¹Å Qâ€šÃ‰Å Ã–â€šÂµâ€šÃ„â€šÃ ï¿½Câ€šÂ»â€šÃŒï¿½Ã“â€�Câ€šÃ°â€¢â€°â€šÃ­â€šÃˆâ€šÂ¢ï¿½D
 * 
 *  @(#) $Id: sys_defs.h,v 1.2 2005/07/27 11:06:36 honda Exp $
 */


/*
 *  Definition depends on the target system (Integrator / AP for)
 *
 *  This include file is included by sil.h and kernel.h.
 *  Not be directly included from other files
 *  Before you include this file, itron.h and t_stddef.h so is included,
 *  it is possible to depend on them.
 */

#ifndef _SYS_DEFS_H_
#define _SYS_DEFS_H_

/*
 *  Target system The name of the startup message
 */
#define    TARGET_NAME    "ARM - INTEGRATOR/AP"

//#define    STACKTOP 0x11000000   /* Initial value of the stack of non-task context for */
#define STACKTOP 0x20006000
/*
 *  Conversion between milliseconds and internal representation of the timer value
 */
#define TIMER_CLOCK 24000

#define UART_BAUD 9600
/*
 *  Service call on the target system-dependent
 */
#ifndef _MACRO_ONLY


/*
 *  Enable / disable and interrupt type INTNO
 */
typedef    UINT        INTNO;        /* Interrupt number */
typedef    UINT        INHNO;        /* Interrupt handler number */


typedef    UD  SYSUTIM;    /* Performance evaluation system time */
extern ER   vxget_tim(SYSUTIM *pk_sysutim) throw();

#endif /* _MACRO_ONLY */


/*
 *  Definition of time tick
 */
#define    TIC_NUME    1        /* Molecule of the period of time tick */
#define    TIC_DENO    1        /* Denominator of the period of time tick */

/*
 *  Definition for a very short period of time waiting
 */
#define    SIL_DLY_TIM1     20
#define    SIL_DLY_TIM2     10

/*
 *  Endian processor
 */
#define    SIL_ENDIAN    SIL_ENDIAN_LITTLE    /* Little endian */

#ifndef _MACRO_ONLY
/*
 * Interruption of processing system
 */

Inline void
kernel_abort()
{
   while(1);
}

#endif /* _MACRO_ONLY */

#endif /* _SYS_DEFS_H_ */
