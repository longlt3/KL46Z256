/*
 *  TOPPERS/JSP Kernel
 *      Toyohashi Open Platform for Embedded Real-Time Systems/
 *      Just Standard Profile Kernel
 * 
 *  Copyright (C) 2000-2003 by Embedded and Real-Time Systems Laboratory
 *                              Toyohashi Univ. of Technology, JAPAN
 *                2003      by Advanced Data Controls, Corp
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
 *  @(#) $Id: sys_config.h,v 1.2 2004/09/04 16:38:40 honda Exp $
 */


/*
 *  Æ’^ï¿½[Æ’QÆ’bÆ’gÆ’VÆ’XÆ’eÆ’â‚¬Ë†Ã‹â€˜Â¶Æ’â€šÆ’WÆ’â€¦ï¿½[Æ’â€¹ï¿½iIntegratorâ€”pï¿½j
 *
 *  â€šÂ±â€šÃŒÆ’CÆ’â€œÆ’NÆ’â€¹ï¿½[Æ’hÆ’tÆ’@Æ’CÆ’â€¹â€šÃ�ï¿½Ct_config.h â€šÃŒâ€šÃ�â€šÂ©â€šÃ§Æ’CÆ’â€œÆ’NÆ’â€¹ï¿½[Æ’hâ€šÂ³â€šÃªâ€šÃ©ï¿½D
 *  â€˜Â¼â€šÃŒÆ’tÆ’@Æ’CÆ’â€¹â€šÂ©â€šÃ§â€™Â¼ï¿½ÃšÆ’CÆ’â€œÆ’NÆ’â€¹ï¿½[Æ’hâ€šÂµâ€šÃ„â€šÃ�â€šÃˆâ€šÃ§â€šÃˆâ€šÂ¢ï¿½D
 */


#ifndef _SYS_CONFIG_H_
#define _SYS_CONFIG_H_

/*
 *  Æ’Jï¿½[Æ’lÆ’â€¹â€šÃŒâ€œÃ â€¢â€�Å½Â¯â€¢ÃŠâ€“Â¼â€šÃŒÆ’Å Æ’lï¿½[Æ’â‚¬
 */
#include <armv6/KL46/sys_rename.h>

/*
 * Å â€žï¿½Å¾â€šÃ�Æ’nÆ’â€œÆ’hÆ’â€°â€šÃŒï¿½Ã…â€˜Ã¥ï¿½â€�
 */
#define MAX_INT_NUM 22

/*
 *  definition as to whether or not to support the vxget_tim
 */
#define  SUPPORT_VXGET_TIM


/*
 *  Definitions of serial port number
 */
#define TNUM_PORT   1   /* Æ’TÆ’|ï¿½[Æ’gâ€šÂ·â€šÃ©Æ’VÆ’Å Æ’AÆ’â€¹Æ’|ï¿½[Æ’gâ€šÃŒï¿½â€� */
#define TNUM_SIOP   1   /* Æ’TÆ’|ï¿½[Æ’gâ€šÂ·â€šÃ©Æ’VÆ’Å Æ’AÆ’â€¹I/OÆ’|ï¿½[Æ’gâ€šÃŒï¿½â€� */

/*
 *  Æ’VÆ’Å Æ’AÆ’â€¹Æ’|ï¿½[Æ’gâ€�Ã”ï¿½â€ â€šÃ‰Å Ã–â€šÂ·â€šÃ©â€™Ã¨â€¹`
 */
#define LOGTASK_PORTID  1   /* Æ’VÆ’XÆ’eÆ’â‚¬Æ’ï¿½Æ’Oâ€šÃ‰â€”pâ€šÂ¢â€šÃ©Æ’VÆ’Å Æ’AÆ’â€¹Æ’|ï¿½[Æ’gâ€�Ã”ï¿½â€  */

/*
 *  Å â€žï¿½Å¾â€šÃ�â€˜Ã’â€šÂ¿ï¿½Ã³â€˜Ã”â€šÃ…â€šÃŒÅ½Ã€ï¿½sÆ’â€¹ï¿½[Æ’`Æ’â€œ
 */
#ifdef ARM920T_CORE
#define WAIT_INTERRUPT  mcr p15, 0, r3, c7, c0, 4
#else
#define WAIT_INTERRUPT  nop
#endif

/*
 *  Æ’vÆ’ï¿½Æ’ZÆ’bÆ’Tâ€šÃŒÆ’GÆ’â€œÆ’fÆ’BÆ’AÆ’â€œ
 */
#define SIL_ENDIAN  SIL_ENDIAN_LITTLE  /* Æ’Å Æ’gÆ’â€¹Æ’GÆ’â€œÆ’fÆ’BÆ’AÆ’â€œ */

#ifndef _MACRO_ONLY

/*
 *  Æ’^ï¿½[Æ’QÆ’bÆ’gÆ’VÆ’XÆ’eÆ’â‚¬Ë†Ã‹â€˜Â¶â€šÃŒï¿½â€°Å Ãºâ€°Â»
 */
extern void    sys_initialize(void);

/*
 *  Æ’^ï¿½[Æ’QÆ’bÆ’gÆ’VÆ’XÆ’eÆ’â‚¬â€šÃŒï¿½Iâ€”Â¹
 *
 *  Æ’VÆ’XÆ’eÆ’â‚¬â€šÃ°ï¿½Iâ€”Â¹â€šÂ·â€šÃ©Å½Å¾â€šÃ‰Å½gâ€šÂ¤ï¿½DROMÆ’â€šÆ’jÆ’^Å’Ã„ï¿½oâ€šÂµâ€šÃ…Å½Ã€Å’Â»â€šÂ·â€šÃ©â€šÂ±â€šÃ†â€šÃ°â€˜zâ€™Ã¨â€šÂµ
 *  â€šÃ„â€šÂ¢â€šÃ©ï¿½D
 */
extern void    sys_exit(void);

/*
 *  Æ’^ï¿½[Æ’QÆ’bÆ’gÆ’VÆ’XÆ’eÆ’â‚¬â€šÃŒâ€¢Â¶Å½Å¡ï¿½oâ€”Ã�
 *
 *  Æ’VÆ’XÆ’eÆ’â‚¬â€šÃŒâ€™Ã¡Æ’Å’Æ’xÆ’â€¹â€šÃŒâ€¢Â¶Å½Å¡ï¿½oâ€”Ã�Æ’â€¹ï¿½[Æ’`Æ’â€œï¿½DROMÆ’â€šÆ’jÆ’^Å’Ã„ï¿½oâ€šÂµâ€šÃ…Å½Ã€Å’Â»â€šÂ·â€šÃ©â€šÂ±
 *  â€šÃ†â€šÃ°â€˜zâ€™Ã¨â€šÂµâ€šÃ„â€šÂ¢â€šÃ©ï¿½D
 */
extern void    sys_putc(char c);


/*
 *  Å â€žï¿½Å¾â€šÃ�â€”pâ€šÃŒÆ’eï¿½[Æ’uÆ’â€¹
 */
extern FP   int_table[MAX_INT_NUM];


/*
 *  IRQÆ’nÆ’â€œÆ’hÆ’â€°(sys_support.S)
 */
extern void IRQ_Handler(void);

/*
 *  Å â€žï¿½Å¾â€šÃ�Æ’nÆ’â€œÆ’hÆ’â€°â€šÃŒï¿½oâ€œÃ¼Å’Ã»ï¿½Ë†â€”ï¿½â€šÃŒï¿½Â¶ï¿½Â¬Æ’}Æ’NÆ’ï¿½
 *
 */
#define INTHDR_ENTRY(inthdr)  extern void inthdr(void)

#define INT_ENTRY(inthdr) inthdr

/*
 *  Å â€žï¿½Å¾â€šÃ�Æ’nÆ’â€œÆ’hÆ’â€°â€šÃŒï¿½Ã�â€™Ã¨
 *
 *  Å â€žï¿½Å¾â€šÃ�â€�Ã”ï¿½â€  inhno â€šÃŒÅ â€žï¿½Å¾â€šÃ�Æ’nÆ’â€œÆ’hÆ’â€°â€šÃŒâ€¹Nâ€œÂ®â€�Ã”â€™nâ€šÃ° inthdr â€šÃ‰ï¿½Ã�â€™Ã¨â€šÂ·â€šÃ©ï¿½D
 */
extern void define_inh(INHNO inhno, FP inthdr);



#endif /* _MACRO_ONLY */
#endif /* _SYS_CONFIG_H_ */