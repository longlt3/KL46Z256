/*
 * mcg.c
 *
 *  Created on: Oct 30, 2013
 *      Author: LongLT3
 */

#include <armv6/KL46/Project_Headers/derivative.h>
#include <armv6/KL46/driver/mcg/mcg.h>

/**********************************************************************
 *
 * Function:    initMCG
 *
 * Description: Initialize MCGOUTCLK
 * 
 * Notes:       This function is specific to the KL46Z256
 *
 * Returns:     MCGOUTCLK.
 *
 **********************************************************************/
int initMCG2() {
	int i=0;
	
	SIM_CLKDIV1 |= SIM_CLKDIV1_OUTDIV1(0);
	SIM_CLKDIV1 |= SIM_CLKDIV1_OUTDIV4(0);
	
	/* 
	 * C2[RANGE0] set to 2'b01 because the frequency of 8 MHz is within the
	 * high frequency range.
	 * 
	 * C2[HGO0] set to 1 to configure the crystal oscillator for high gain operation.
	 * 
	 * C2[EREFS0] set to 1, because a crystal is being used.
	 */
	MCG_C2 |= MCG_C2_RANGE0(1);
	MCG_C2 |= MCG_C2_HGO0_MASK;
	MCG_C2 |= MCG_C2_EREFS0_MASK;
	
	/* 
	 * C1[CLKS] set to 2'b10 to select external reference clock as system clock source.
	 *
	 * C1[FRDIV] set to 3'b011, or divide-by-128 because 8 MHz / 256 = 31.25
	 * kHz which is in the 31.25 kHz to 39.0625 kHz range required by the FLL.
	 * 
	 * C1[IREFS] cleared to 0, selecting the external reference clock and enabling
	 * the external oscillator.
	 */
	MCG_C1 |= MCG_C1_CLKS(2);
	MCG_C1 |= MCG_C1_FRDIV(3);
	MCG_C1 &= (~MCG_C1_IREFS_MASK);
	
	/*
	 * Loop until S[OSCINIT0] is 1, indicating the crystal selected by C2[EREFS0] has
	 * been initialized.
	 */
	for(i=0; (MCG_S & (~MCG_S_OSCINIT0_MASK) >> MCG_S_OSCINIT0_SHIFT != 1); i++)
	{
		if(i >= 2000)
		{
			return -1;
		}
	}
	/*
	 * Loop until S[IREFST] is 0, indicating the external reference is the current source
	 * for the reference clock.
	 */
	for(i=0; (MCG_S & (~MCG_S_IREFST_MASK) >> MCG_S_IREFST_SHIFT != 0); i++)
	{
		if(i >= 2000)
		{
			return -1;
		}
	}
	/*
	 * Loop until S[CLKST] is 2'b10, indicating that the external reference clock is
	 * selected to feed MCGOUTCLK.
	 */
	for(i=0; (MCG_S & MCG_S_CLKST_MASK >> MCG_S_CLKST_SHIFT != 2); i++)
	{
		if(i >= 2000)
		{
			return -1;
		}
	}
	/*
	 * Configure C5[PRDIV0] to generate correct PLL reference frequency.
	 * 
	 * C5[PRDIV] set to 5'b00011, or divide-by-2 resulting in a pll reference
	 * frequency of 8MHz/4 = 2 MHz.
	 */
	MCG_C5 |= MCG_C5_PRDIV0(3);
	/*
	 * FBE must transition either directly to PBE mode or first through BLPE mode
	 * and then to PBE mode
	 * 
	 * BLPE: If a transition through BLPE mode is desired, first set C2[LP] to 1.
	 */
	MCG_C2 |= MCG_C2_LP_MASK;
	/* 
	 * C6[PLLS] set to 1, selects the PLL. At this time, with a C1[PRDIV] value of
	 * 2'b001, the PLL reference divider is 4 (see PLL External Reference Divide
	 * Factor table), resulting in a reference frequency of 8 MHz/ 4 = 2 MHz. In
	 * BLPE mode, changing the C6[PLLS] bit only prepares the MCG for PLL
	 * usage in PBE mode.
	 */
	MCG_C6 |= MCG_C6_PLLS_MASK;
	/* C6[VDIV] set to 5'b00000, or multiply-by-24 because 2 MHz reference * 24
	 * = 48 MHz. In BLPE mode, the configuration of the VDIV bits does not
	 * matter because the PLL is disabled. Changing them only sets up the multiply
	 * value for PLL usage in PBE mode.
	 */
	MCG_C6 |= MCG_C6_VDIV0(0);
	/*
	 * BLPE: If transitioning through BLPE mode, clear C2[LP] to 0 here to switch to
	 * PBE mode.
	 */
	MCG_C2 &= ~MCG_C2_LP_MASK;
	/*
	 * PBE: Loop until S[PLLST] is set, indicating that the current source for the PLLS
	 * clock is the PLL.
	 */
	for(i=0; (MCG_S & MCG_S_PLLST_MASK >> MCG_S_PLLST_SHIFT != 1); i++)
	{
		if(i >= 2000)
		{
			return -1;
		}
	}
	/*
	 * PBE: Then loop until S[LOCK0] is set, indicating that the PLL has acquired
	 * lock.
	 */
	for(i=0; (MCG_S & MCG_S_LOCK0_MASK >> MCG_S_LOCK0_SHIFT != 1); i++)
	{
		if(i >= 2000)
		{
			return -1;
		}
	}
	/*
	 * PBE mode transitions into PEE mode
	 * 
	 * C1[CLKS] set to 2'b00 to select the output of the PLL as the system clock
	 * source.
	 */
	MCG_C1 &= ~MCG_C1_CLKS_MASK;
	/*
	 * Loop until S[CLKST] are 2'b11, indicating that the PLL output is selected to
	 * feed MCGOUTCLK in the current clock mode.
	 * 
	 * Now, with PRDIV of divide-by-4, and C6[VDIV] of multiply-by-24,
	 * MCGOUTCLK = [(8 MHz / 4) * 24] = 48 MHz.
	 */
	for(i=0; (MCG_S & MCG_S_CLKST_MASK >> MCG_S_CLKST_SHIFT != 3); i++)
	{
		if(i >= 2000)
		{
			return -1;
		}
	}
	return 0;
}
