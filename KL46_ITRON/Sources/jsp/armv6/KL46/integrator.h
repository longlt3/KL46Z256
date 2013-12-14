/*
 *  TOPPERS/JSP Kernel
 *      Toyohashi Open Platform for Embedded Real-Time Systems/
 *      Just Standard Profile Kernel
 * 
 *  Copyright (C) 2000-2003 by Embedded and Real-Time Systems Laboratory
 *                              Toyohashi Univ. of Technology, JAPAN
 *  Copyright (C) 2003      by Advanced Data Controls, Corp
 *  Copyright (C) 2004 by Embedded and Real-Time Systems Laboratory
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
 *  @(#) $Id: integrator.h,v 1.2 2004/05/26 19:14:24 honda Exp $
 */

#ifndef _INTEGRATOR_H_
#define _INTEGRATOR_H_

#ifndef _MACRO_ONLY
#include <include/itron.h>
#include <include/sil.h>
#endif /* _MACRO_ONLY */

#include "sys_config.h"
#include <armv6/cpu_config.h>

#ifndef _MACRO_ONLY

/*
 * â€œÃ â€˜Â UARTâ€”p Å ÃˆË†Ã•SIOÆ’hÆ’â€°Æ’CÆ’o
 */
/*
 * Æ’Jï¿½[Æ’lÆ’â€¹â€¹Nâ€œÂ®Å½Å¾â€”pâ€šÃŒï¿½â€°Å Ãºâ€°Â»(sys_putcâ€šÃ°Å½gâ€”pâ€šÂ·â€šÃ©â€šÂ½â€šÃŸ)
 */
extern void init_uart(void);

/*
 *  Æ’VÆ’Å Æ’AÆ’â€¹I/OÆ’|ï¿½[Æ’gï¿½â€°Å Ãºâ€°Â»Æ’uÆ’ï¿½Æ’bÆ’N
 */
typedef struct sio_port_initialization_block 
{
	VP uart_bdh;	/**< UART Baud Rate Register High, offset: 0x0 */
	VP uart_bdl;	/**< UART Baud Rate Register Low, offset: 0x1 */
	VP uart_c1;		/**< UART Control Register 1, offset: 0x2 */
	VP uart_c2;		/**< UART Control Register 2, offset: 0x3 */
	VP uart_s1;		/**< UART Status Register 1, offset: 0x4 */
	VP uart_s2;		/**< UART Status Register 2, offset: 0x5 */
	VP uart_c3;		/**< UART Control Register 3, offset: 0x6 */
	VP uart_d;		/**< UART Data Register, offset: 0x7 */
	VP uart_ma1;	/**< UART Match Address Registers 1, offset: 0x8 */
	VP uart_ma2;	/**< UART Match Address Registers 2, offset: 0x9 */
	VP uart_c4;		/**< UART Control Register 4, offset: 0xA or 0x8 */
	VP uart_c5;		/**< UART Control Register 5, offset: 0xB */
}
SIOPINIB;

/*
 *  Æ’VÆ’Å Æ’AÆ’â€¹I/OÆ’|ï¿½[Æ’gÅ Ã‡â€”ï¿½Æ’uÆ’ï¿½Æ’bÆ’Nâ€šÃŒâ€™Ã¨â€¹`
 */
typedef struct sio_port_control_block 
{
    const SIOPINIB  *siopinib;  /* Æ’VÆ’Å Æ’AÆ’â€¹I/OÆ’|ï¿½[Æ’gï¿½â€°Å Ãºâ€°Â»Æ’uÆ’ï¿½Æ’bÆ’N */
    VP_INT          exinf;      /* Å gâ€™Â£ï¿½Ã®â€¢Ã± */
    BOOL    openflag;       /* Æ’Iï¿½[Æ’vÆ’â€œï¿½Ã�â€šÃ�Æ’tÆ’â€°Æ’O */
    BOOL    sendflag;       /* â€˜â€”ï¿½MÅ â€žï¿½Å¾â€šÃ�Æ’CÆ’lï¿½[Æ’uÆ’â€¹Æ’tÆ’â€°Æ’O */
    BOOL    getready;       /* •¶Žš‚ðŽóM‚µ‚½ó‘Ô */
	BOOL    putready;       /* •¶Žš‚ð‘—M‚Å‚«‚éó‘Ô */

}SIOPCB;


/*
 *  Æ’Rï¿½[Æ’â€¹Æ’oÆ’bÆ’NÆ’â€¹ï¿½[Æ’`Æ’â€œâ€šÃŒÅ½Â¯â€¢ÃŠâ€�Ã”ï¿½â€ 
 */
#define SIO_ERDY_SND    1u      /* â€˜â€”ï¿½Mâ€°Ã‚â€�\Æ’Rï¿½[Æ’â€¹Æ’oÆ’bÆ’N */
#define SIO_ERDY_RCV    2u      /* Å½Ã³ï¿½Mâ€™ÃŠâ€™mÆ’Rï¿½[Æ’â€¹Æ’oÆ’bÆ’N */

/*
 *  Æ’IÆ’â€œÆ’`Æ’bÆ’vâ€šÃŒUARTâ€šÂ©â€šÃ§â€šÃŒÆ’|ï¿½[Æ’Å Æ’â€œÆ’Oï¿½oâ€”Ã�
 */
extern void uart_putc(char c);

/*
 *  SIOÆ’hÆ’â€°Æ’CÆ’oâ€šÃŒï¿½â€°Å Ãºâ€°Â»Æ’â€¹ï¿½[Æ’`Æ’â€œ
 */
extern void uart_initialize(void);

/*
 *  Æ’Iï¿½[Æ’vÆ’â€œâ€šÂµâ€šÃ„â€šÂ¢â€šÃ©Æ’|ï¿½[Æ’gâ€šÂªâ€šÂ â€šÃ©â€šÂ©ï¿½H
 */
extern BOOL uart_openflag(void);

/*
 *  Æ’VÆ’Å Æ’AÆ’â€¹I/OÆ’|ï¿½[Æ’gâ€šÃŒÆ’Iï¿½[Æ’vÆ’â€œ
 */
extern SIOPCB   *uart_opn_por(ID siopid, VP_INT exinf);

/*
 *  Æ’VÆ’Å Æ’AÆ’â€¹I/OÆ’|ï¿½[Æ’gâ€šÃŒÆ’NÆ’ï¿½ï¿½[Æ’Y
 */
extern void uart_cls_por(SIOPCB *siopcb);

/*
 *  Æ’VÆ’Å Æ’AÆ’â€¹I/OÆ’|ï¿½[Æ’gâ€šÃ–â€šÃŒâ€¢Â¶Å½Å¡â€˜â€”ï¿½M
 */
extern BOOL uart_snd_chr(SIOPCB *siopcb, char c);

/*
 *  Æ’VÆ’Å Æ’AÆ’â€¹I/OÆ’|ï¿½[Æ’gâ€šÂ©â€šÃ§â€šÃŒâ€¢Â¶Å½Å¡Å½Ã³ï¿½M
 */
extern INT  uart_rcv_chr(SIOPCB *siopcb);

/*
 *  Æ’VÆ’Å Æ’AÆ’â€¹I/OÆ’|ï¿½[Æ’gâ€šÂ©â€šÃ§â€šÃŒÆ’Rï¿½[Æ’â€¹Æ’oÆ’bÆ’Nâ€šÃŒâ€¹â€“â€°Ã‚
 */
extern void uart_ena_cbr(SIOPCB *siopcb, UINT cbrtn);

/*
 *  Æ’VÆ’Å Æ’AÆ’â€¹I/OÆ’|ï¿½[Æ’gâ€šÂ©â€šÃ§â€šÃŒÆ’Rï¿½[Æ’â€¹Æ’oÆ’bÆ’Nâ€šÃŒâ€¹Ã–Å½~
 */
extern void uart_dis_cbr(SIOPCB *siopcb, UINT cbrtn);

/*
 *  SIOâ€šÃŒÅ â€žï¿½Å¾â€šÃ�Æ’Tï¿½[Æ’rÆ’XÆ’â€¹ï¿½[Æ’`Æ’â€œ
 */
extern void uart_in_isr(void);
extern void uart_out_isr(void);

/*
 *  Æ’VÆ’Å Æ’AÆ’â€¹I/OÆ’|ï¿½[Æ’gâ€šÂ©â€šÃ§â€šÃŒâ€˜â€”ï¿½Mâ€°Ã‚â€�\Æ’Rï¿½[Æ’â€¹Æ’oÆ’bÆ’N
 */
extern void uart_ierdy_snd(VP_INT exinf);

/*
 *  Æ’VÆ’Å Æ’AÆ’â€¹I/OÆ’|ï¿½[Æ’gâ€šÂ©â€šÃ§â€šÃŒÅ½Ã³ï¿½Mâ€™ÃŠâ€™mÆ’Rï¿½[Æ’â€¹Æ’oÆ’bÆ’N
 */
extern void uart_ierdy_rcv(VP_INT exinf);

extern void UART0_IRQHandler(void);

#endif /* _MACRO_ONLY */
#endif /*  _INTEGRATOR_H_ */
