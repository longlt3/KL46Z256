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
 *  @(#) $Id: sys_config.c,v 1.1 2004/05/23 12:18:56 honda Exp $
 */

/*
 *    Æ’^ï¿½[Æ’QÆ’bÆ’gÆ’VÆ’XÆ’eÆ’â‚¬Ë†Ã‹â€˜Â¶Æ’â€šÆ’WÆ’â€¦ï¿½[Æ’â€¹ï¿½iIntegratorâ€”pï¿½j
 */
#include <armv6/KL46/integrator.h>
#include <armv6/KL46/driver/mcg/mcg.h>
#include <armv6/KL46/Project_Headers/derivative.h>
#include <kernel/jsp_kernel.h>


/*interrupt mask*/
//UW int_mask_table[MAX_INT_NUM]={
//    MASK_IRQ_SOFTINT,
//    MASK_IRQ_UART0,
//    MASK_IRQ_UART1,
//    MASK_IRQ_KBDINT,
//    MASK_IRQ_MOUSEINT,
//    MASK_IRQ_TM0,
//    MASK_IRQ_TM1,
//    MASK_IRQ_TM2,
//    MASK_IRQ_RTCINT,
//    MASK_IRQ_EXPINT0,
//    MASK_IRQ_EXPINT1,
//    MASK_IRQ_EXPINT2,
//    MASK_IRQ_EXPINT3,
//    MASK_IRQ_PCIINT0,
//    MASK_IRQ_PCIINT1,
//    MASK_IRQ_PCIINT2,
//    MASK_IRQ_PCIINT3,
//    MASK_IRQ_LINT,
//    MASK_IRQ_DEGINT,
//    MASK_IRQ_ENUMINT,
//    MASK_IRQ_PCILBINT,
//    MASK_IRQ_EXTINT
//};


/*
 * Å â€žï¿½Å¾â€šÃ�Æ’nÆ’â€œÆ’hÆ’â€°â€œoËœ^â€”pÆ’eï¿½[Æ’uÆ’â€¹
 */
//FP   int_table[MAX_INT_NUM];

/*
 * OSCâ€šÃŒï¿½â€°Å Ãºâ€°Â»
 */
void
init_clock(){
	initMCG2();
}


/*
 *  Å â€žï¿½Å¾â€šÃ�Å Ã–ËœAâ€šÃŒï¿½â€°Å Ãºâ€°Â»
 */
void
init_IRQ(){

}


/*
 *  Æ’^ï¿½[Æ’QÆ’bÆ’gÆ’VÆ’XÆ’eÆ’â‚¬Ë†Ã‹â€˜Â¶â€šÃŒï¿½â€°Å Ãºâ€°Â»
 */
void
sys_initialize()
{
    init_clock();
    init_uart();
}


/*
 *  Æ’^ï¿½[Æ’QÆ’bÆ’gÆ’VÆ’XÆ’eÆ’â‚¬â€šÃŒï¿½Iâ€”Â¹
 */
void
sys_exit(void)
{
    syslog(LOG_EMERG, "End Kernel.....!");
    while(1);
}


/*
 *  Æ’^ï¿½[Æ’QÆ’bÆ’gÆ’VÆ’XÆ’eÆ’â‚¬â€šÃŒâ€¢Â¶Å½Å¡ï¿½oâ€”Ã�
 */

void
sys_putc(char c)
{
    if (c == '\n') {
        uart_putc('\r');
    }
    uart_putc(c);
}


/*
 *  Å â€žï¿½Å¾â€šÃ�Æ’nÆ’â€œÆ’hÆ’â€°â€šÃŒï¿½Ã�â€™Ã¨
 *
 *  Å â€žï¿½Å¾â€šÃ�â€�Ã”ï¿½â€  inhno â€šÃŒÅ â€žï¿½Å¾â€šÃ�Æ’nÆ’â€œÆ’hÆ’â€°â€šÃŒâ€¹Nâ€œÂ®â€�Ã”â€™nâ€šÃ° inthdr â€šÃ‰ï¿½Ã�â€™Ã¨â€šÂ·â€šÃ©ï¿½D
 */
void
define_inh(INHNO inhno, FP inthdr)
{
    //assert(inhno < MAX_INT_NUM);
    //int_table[inhno] = inthdr;
}

/*
 *  â€“Â¢â€™Ã¨â€¹`â€šÃŒÅ â€žï¿½Å¾â€šÃ�â€šÂªâ€œÃ¼â€šÃ�â€šÂ½ï¿½Ãªï¿½â€¡â€šÃŒï¿½Ë†â€”ï¿½
 */
void
undef_interrupt()
{
    syslog(LOG_EMERG, "Unregistered Interrupt occurs.");
    while(1);
}


/*IRQÆ’Å’Æ’WÆ’XÆ’^â€šÂªÆ’NÆ’Å Æ’Aâ€šÂ³â€šÃªâ€šÃ©â€šÃœâ€šÃ…â€˜Ã’â€šÃ‚*/
#define INT_CLEAR_DELAY  0x70
void poll_intreg(int int_mask)
{
    //int i;
    
    //while(*IRQ0_ENABLESET & int_mask);
    //for(i=0;i<INT_CLEAR_DELAY;i++);
    //enaint();

}


