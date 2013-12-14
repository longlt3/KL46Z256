#include <include/s_services.h>
#include <armv6/KL46/integrator.h>
#include <armv6/KL46/Project_Headers/derivative.h>

#define UART0BASE	0x4006A000u
#define UART1BASE	0x4006B000u
#define UART2BASE	0x4006C000u
/*
 * Æ’VÆ’Å Æ’AÆ’â€¹I/OÆ’|ï¿½[Æ’gï¿½â€°Å Ãºâ€°Â»Æ’uÆ’ï¿½Æ’bÆ’N
 */
const SIOPINIB siopinib_table[TNUM_SIOP] = {
	{
		(VP)UART0BASE,
		(VP)(UART0BASE+1),
		(VP)(UART0BASE+2),
		(VP)(UART0BASE+3),
		(VP)(UART0BASE+4),
		(VP)(UART0BASE+5),
		(VP)(UART0BASE+6),
		(VP)(UART0BASE+7),
		(VP)(UART0BASE+8),
		(VP)(UART0BASE+9)
	},
#if TNUM_SIOP == 2
	{
		(VP)UART1BASE,
		(VP)(UART1BASE+1),
		(VP)(UART1BASE+2),
		(VP)(UART1BASE+3),
		(VP)(UART1BASE+4),
		(VP)(UART1BASE+5),
		(VP)(0),
		(VP)(0),
		(VP)(UART1BASE+6),
		(VP)(0)
	},		
#endif /* TNUM_SIOP >= 2 */
};


/*
 *  Æ’VÆ’Å Æ’AÆ’â€¹I/OÆ’|ï¿½[Æ’gÅ Ã‡â€”ï¿½Æ’uÆ’ï¿½Æ’bÆ’Nâ€šÃŒÆ’GÆ’Å Æ’A
 */
SIOPCB  siopcb_table[TNUM_SIOP];


/*
 *  Æ’VÆ’Å Æ’AÆ’â€¹I/OÆ’|ï¿½[Æ’gIDâ€šÂ©â€šÃ§Å Ã‡â€”ï¿½Æ’uÆ’ï¿½Æ’bÆ’Nâ€šÃ°Å½Ã¦â€šÃ¨ï¿½oâ€šÂ·â€šÂ½â€šÃŸâ€šÃŒÆ’}Æ’NÆ’ï¿½
 */
#define INDEX_SIOP(siopid)  ((UINT)((siopid) - 1))
#define get_siopcb(siopid)  (&(siopcb_table[INDEX_SIOP(siopid)]))


/*
 * â€¢Â¶Å½Å¡â€šÃ°Å½Ã³ï¿½Mâ€šÂµâ€šÂ½â€šÂ©?
 */ 
Inline BOOL
uart_getready(SIOPCB *siopcb)
{
//	return !(*(unsigned char*)siopcb->siopinib->uart_s1 & UART_S1_RDRF_MASK);
}

/*
 * â€¢Â¶Å½Å¡â€šÃ°â€˜â€”ï¿½Mâ€šÃ…â€šÂ«â€šÃ©â€šÂ©?
 */
Inline BOOL
uart_putready(SIOPCB *siopcb)
{
//	return (*(unsigned char*)siopcb->siopinib->uart_s1 & UART_S1_TDRE_MASK);
}

/*
 *  Å½Ã³ï¿½Mâ€šÂµâ€šÂ½â€¢Â¶Å½Å¡â€šÃŒÅ½Ã¦â€šÃ¨ï¿½oâ€šÂµ
 */
Inline UB
uart_getchar(SIOPCB *siopcb)
{
//	return *(unsigned char*)siopcb->siopinib->uart_d;
}

/*
 *  â€˜â€”ï¿½Mâ€šÂ·â€šÃ©â€¢Â¶Å½Å¡â€šÃŒï¿½â€˜â€šÂ«ï¿½Å¾â€šÃ�
 */
Inline void
uart_putchar(SIOPCB *siopcb, UB c)
{
//	*(unsigned char*)siopcb->siopinib->uart_d = c;
}

/*
 *  â€˜â€”ï¿½MÅ â€žï¿½Å¾â€šÃ�â€¹â€“â€°Ã‚
 */
Inline void
uart_enable_send(SIOPCB *siopcb)
{
//	NVIC_ISER |= (1<<12);
//	*(unsigned char*)siopcb->siopinib->uart_c2 |= UART_C2_TCIE_MASK; 
}

/*
 *  â€˜â€”ï¿½MÅ â€žï¿½Å¾â€šÃ�â€¹Ã–Å½~
 */
Inline void
uart_disable_send(SIOPCB *siopcb)
{
//	NVIC_ISER &= ~(1<<12);
//	*(unsigned char*)siopcb->siopinib->uart_c2 &= ~UART_C2_TCIE_MASK; 
}


/*
 *  Å½Ã³ï¿½MÅ â€žï¿½Å¾â€šÃ�â€¹â€“â€°Ã‚
 */
Inline void
uart_enable_rcv(SIOPCB *siopcb)
{
//	NVIC_ISER |= (1<<12);
//	*(unsigned char*)siopcb->siopinib->uart_c2 |= UART_C2_RIE_MASK; 
}

/*
 *  Å½Ã³ï¿½MÅ â€žï¿½Å¾â€šÃ�â€¹Ã–Å½~
 */
Inline void
uart_disable_rcv(SIOPCB *siopcb)
{
//	NVIC_ISER &= ~(1<<12);
//	*(unsigned char*)siopcb->siopinib->uart_c2 &= ~UART_C2_RIE_MASK; 
}

/*
 * Æ’Jï¿½[Æ’lÆ’â€¹â€¹Nâ€œÂ®Å½Å¾â€šÃŒÆ’ï¿½Æ’Oï¿½oâ€”Ã�â€”pâ€šÃŒï¿½â€°Å Ãºâ€°Â»
 */
void
init_uart(void){
	SIM_SCGC5 |= (SIM_SCGC5_PORTA_MASK);
	PORTA_PCR2 = PORT_PCR_MUX(0x2);
	SIM_SOPT2 = (SIM_SOPT2 & ~SIM_SOPT2_UART0SRC_MASK) | SIM_SOPT2_UART0SRC(1); // select the PLLFLLCLK as UART0 clock source
	SIM_SOPT2 = (SIM_SOPT2 & ~SIM_SOPT2_PLLFLLSEL_MASK) | SIM_SOPT2_PLLFLLSEL_MASK;
	uart0_init(TIMER_CLOCK, UART_BAUD);
}

/*
 *  Æ’IÆ’â€œÆ’`Æ’bÆ’vâ€šÃŒUARTâ€šÂ©â€šÃ§â€šÃŒÆ’|ï¿½[Æ’Å Æ’â€œÆ’Oï¿½oâ€”Ã�
 */
void
uart_putc(char c)
{
	while(((UART0_S1 & UART0_S1_TDRE_MASK) >> UART0_S1_TDRE_SHIFT)==0)
//	while(((UART0_S1 & UART0_S1_TC_MASK) >> UART0_S1_TC_SHIFT) == 0)
	{
		
	}
	UART0_D = (uint8_t)c;
}


/*
 *  SIOÆ’hÆ’â€°Æ’CÆ’oâ€šÃŒï¿½â€°Å Ãºâ€°Â»Æ’â€¹ï¿½[Æ’`Æ’â€œ
 *  1Æ’|ï¿½[Æ’gâ€šÂµâ€šÂ©â€šÃˆâ€šÂ¢â€šÂ½â€šÃŸï¿½Câ€šÂ â€šÃœâ€šÃ¨Ë†Ã“â€“Â¡â€šÃ�â€šÃˆâ€šÂ¢
 */
void
uart_initialize()
{
//    SIOPCB  *siopcb;
//    UINT    i;
//
//    /*
//     *  Æ’VÆ’Å Æ’AÆ’â€¹I/OÆ’|ï¿½[Æ’gÅ Ã‡â€”ï¿½Æ’uÆ’ï¿½Æ’bÆ’Nâ€šÃŒï¿½â€°Å Ãºâ€°Â»
//     */
//    for (siopcb = siopcb_table, i = 0; i < TNUM_SIOP; siopcb++, i++) {
//        siopcb->siopinib = &(siopinib_table[i]);
//        siopcb->openflag = FALSE;
//        siopcb->sendflag = FALSE;
//    }
}

/*
 * Æ’Iï¿½[Æ’vÆ’â€œâ€šÂµâ€šÃ„â€šÂ¢â€šÃ©Æ’|ï¿½[Æ’gâ€šÂªâ€šÂ â€šÃ©â€šÂ©
 */
BOOL
uart_openflag(void)
{
//    return(siopcb_table[0].openflag);
}

/*
 * Æ’VÆ’Å Æ’AÆ’â€¹I/OÆ’|ï¿½[Æ’gâ€šÃŒÆ’Iï¿½[Æ’vÆ’â€œ
 */
SIOPCB *
uart_opn_por(ID siopid, VP_INT exinf)
{
//    int i;
//    
//    SIOPCB      *siopcb;
//    const SIOPINIB  *siopinib;
//    if(siopid == 0)
//	{
//		siopcb = get_siopcb(siopid);
//		siopinib = siopcb->siopinib;
//    
//    	uart0_init(TIMER_CLOCK, UART_BAUD);
//    	siopcb->exinf = exinf;
//		siopcb->getready = siopcb->putready = FALSE;
//		siopcb->openflag = TRUE;
//    }
//
//    return(siopcb);    
}



/*
 *  Æ’VÆ’Å Æ’AÆ’â€¹I/OÆ’|ï¿½[Æ’gâ€šÃŒÆ’NÆ’ï¿½ï¿½[Æ’Y
 */
void
uart_cls_por(SIOPCB *siopcb)
{
//	NVIC_ISER &= ~(1<<12);
//    siopcb->siopinib->uart_c2 &= ~(UART0_C2_TE_MASK | UART0_C2_RE_MASK );
//    siopcb->openflag = FALSE;
}

/*
 *  Æ’VÆ’Å Æ’AÆ’â€¹I/OÆ’|ï¿½[Æ’gâ€šÃ–â€šÃŒâ€¢Â¶Å½Å¡â€˜â€”ï¿½M
 */
BOOL
uart_snd_chr(SIOPCB *siopcb, char c)
{
//    if (uart_putready(siopcb)){
//        uart_putchar(siopcb, c);
//        return(TRUE);
//    }
//    return(FALSE);
}

/*
 *  Æ’VÆ’Å Æ’AÆ’â€¹I/OÆ’|ï¿½[Æ’gâ€šÂ©â€šÃ§â€šÃŒâ€¢Â¶Å½Å¡Å½Ã³ï¿½M
 */
INT
uart_rcv_chr(SIOPCB *siopcb)
{
//    if (uart_getready(siopcb)) {
//        return((INT)(UB) uart_getchar(siopcb));
//    }
//    return(-1);
}

/*
 *  Æ’VÆ’Å Æ’AÆ’â€¹I/OÆ’|ï¿½[Æ’gâ€šÂ©â€šÃ§â€šÃŒÆ’Rï¿½[Æ’â€¹Æ’oÆ’bÆ’Nâ€šÃŒâ€¹â€“â€°Ã‚
 */
void
uart_ena_cbr(SIOPCB *siopcb, UINT cbrtn)
{
//    switch (cbrtn) {
//        case SIO_ERDY_SND:
//            uart_enable_send(siopcb);
//            break;
//        case SIO_ERDY_RCV:
//            uart_enable_rcv(siopcb);
//            break;
//    }
}


/*
 *  Æ’VÆ’Å Æ’AÆ’â€¹I/OÆ’|ï¿½[Æ’gâ€šÂ©â€šÃ§â€šÃŒÆ’Rï¿½[Æ’â€¹Æ’oÆ’bÆ’Nâ€šÃŒâ€¹Ã–Å½~
 */
void
uart_dis_cbr(SIOPCB *siopcb, UINT cbrtn)
{
//    switch (cbrtn) {
//        case SIO_ERDY_SND:
//            uart_disable_send(siopcb);
//            break;
//        case SIO_ERDY_RCV:
//            uart_disable_rcv(siopcb);
//            break;
//    }
}



/*
 *  Æ’VÆ’Å Æ’AÆ’â€¹I/OÆ’|ï¿½[Æ’gâ€šÃ‰â€˜ÃŽâ€šÂ·â€šÃ©Å â€žï¿½Å¾â€šÃ�ï¿½Ë†â€”ï¿½
 */
static void
uart_isr_siop(SIOPCB *siopcb)
{
//    if (uart_getready(siopcb)) {
//        /*
//         *  Å½Ã³ï¿½Mâ€™ÃŠâ€™mÆ’Rï¿½[Æ’â€¹Æ’oÆ’bÆ’NÆ’â€¹ï¿½[Æ’`Æ’â€œâ€šÃ°Å’Ã„â€šÃ‘ï¿½oâ€šÂ·ï¿½D
//         */
//        uart_ierdy_rcv(siopcb->exinf);
//    }
//    if (uart_putready(siopcb)) {
//        /*
//         *  â€˜â€”ï¿½Mâ€°Ã‚â€�\Æ’Rï¿½[Æ’â€¹Æ’oÆ’bÆ’NÆ’â€¹ï¿½[Æ’`Æ’â€œâ€šÃ°Å’Ã„â€šÃ‘ï¿½oâ€šÂ·ï¿½D
//         */
//        uart_ierdy_snd(siopcb->exinf);
//    }
}

/*
 *  SIOâ€šÃŒÅ â€žï¿½Å¾â€šÃ�Æ’Tï¿½[Æ’rÆ’XÆ’â€¹ï¿½[Æ’`Æ’â€œ
 */
void
uart_isr0()
{
//    uart_isr_siop(&(siopcb_table[0]));
}

#if TNUM_SIOP >= 2
void
uart_isr1()
{
    uart_isr_siop(&(siopcb_table[1]));
}
#endif
