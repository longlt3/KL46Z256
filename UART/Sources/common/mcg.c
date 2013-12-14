/*
 * mcg.c
 *
 *  Created on: Oct 30, 2013
 *      Author: LongLT3
 */

#include "derivative.h"
#include "mcg.h"

/***************************************************
 * Description          	: Switch to FEE mode (Sample)
 ***************************************************/
void genFEE()
{
	unsigned char mcgc2 = MCG_C2 | MCG_C2_EREFS0_MASK |
				MCG_C2_HGO0_MASK |
				MCG_C2_RANGE0(1);
	unsigned short mcgVals =
			(3 << FRDIV_SHIFT) |
			(0 << DRST_DRS_SHIFT) |
			(0 << DMX32_SHIFT) |
	setMCGMode(emcgmFEE, 8000, mcgVals, mcgc2, C2SETEN_MASK | MCGVALEN_MASK);
}

/***************************************************
 * Description          	: Switch to PEE mode (Sample)
 ***************************************************/
void genPEE()
{
	unsigned char mcgc2 = MCG_C2 | MCG_C2_EREFS0_MASK |
				MCG_C2_HGO0_MASK |
				MCG_C2_RANGE0(1);
	unsigned short mcgVals =
			(3 << PRDIV0_SHIFT) |
			(0 << VDIV0_SHIFT);
	/* switch to FBE first: have to setup external crystal */
	setMCGMode(emcgmFBE, 8000, 0, mcgc2, C2SETEN_MASK);		
	/* Switch to PBE, then configure needed register value before switch to PEE */
	setMCGMode(emcgmPBE, 8000, mcgVals, 0, MCGVALEN_MASK);		
	setMCGMode(emcgmPEE, 8000, 0, 0, 0);
}

/***************************************************
 * Description          	: Error checking
 *
 * Return               	: Error code
 ***************************************************/
int checkVal(int mode, int crysVal, unsigned short mcgVal)
{
	unsigned char c1frdiv, c4drst_drs, c4dmx32, c5prdiv0, c6vdiv0;
	int i;
	int frdivVal = FRDIVMIN, prdivVal = c5prdiv0 + 1;
	if(crysVal <=0 ) return 1;
	
	c1frdiv = (mcgVal & FRDIV_MASK) >> FRDIV_SHIFT;
	c4dmx32 = (mcgVal & DMX32_MASK) >> DMX32_SHIFT;
	c4drst_drs = (mcgVal & DRST_DRS_MASK) >> DRST_DRS_SHIFT;
	c5prdiv0 = (mcgVal & PRDIV0_MASK) >> PRDIV0_SHIFT;
	c6vdiv0 = (mcgVal & VDIV0_MASK) >> VDIV0_SHIFT;
	
	for(i=0; i<c1frdiv; i++) { frdivVal*=2; }
	
	switch (mode) 
	{
		case emcgmFEE:
			if(crysVal/frdivVal < MCGERFLL_MIN  || crysVal/frdivVal > MCGERFLL_MAX ) return 2;
			break;
		case emcgmPEE:
			if(crysVal/prdivVal < MCGERPLL_MIN || crysVal/prdivVal > MCGERPLL_MAX) return 2;
			break;
		default:
			break;
	}
	return 0;
}

/***************************************************
 * Description          	: Switch MCG mode
 *
 * Arguments
 * -int mode          		: Mode of the MCG (more details in mcg.h)
 * -int crysVal         	: Crystal value (must be greater than 0)
 * -ushort mcgVal       	: MCG's register value	(more details in mcg.h)
	 * 							  MCG_C1_FRDIV		3 first bits
	 * 							  MCG_C4_DMX32		1 next bit
	 * 							  MCG_C4_DRST_DRS	2 next bits
	 * 							  MCG_C5_PRDIV0		5 next bits
	 * 							  MCG_C6_VDIV0		5 last bits
 * -uchar c2Set         	: MCG_C2 register
 * -uchar argEnable     	: 0 disable
 * 							  1 mcgVal
 *							  2 c2Set
 *							  3 mcgVal & c2Set
 * Return               	: Error code
 ***************************************************/
int setMCGMode(int mode, int crysVal, unsigned short mcgVal, unsigned char c2Set, unsigned char argEnable)
{
	int i;
	unsigned int clkVal = crysVal;
	unsigned char 
		mcgc1, mcgc2, mcgc4, mcgc5, mcgc6, mcgs,		// MCG's register sample
		
		/* MCG's register current values */
		c1clks = (MCG_C1 & MCG_C1_CLKS_MASK) >> MCG_C1_CLKS_SHIFT,
		c1irefs = (MCG_C1 & MCG_C1_IREFS_MASK) >> MCG_C1_IREFS_SHIFT,
		c1frdiv,
		c2range0, c2hgo0, c2erefs0, c2lp, c2ircs,
		c4drst_drs, c4dmx32, c5prdiv0, c6vdiv0,
		c6plls = (MCG_C6 & MCG_C6_PLLS_MASK) >> MCG_C6_PLLS_SHIFT,
		
		c2SetEnable = (argEnable & C2SETEN_MASK) >> C2SETEN_SHIFT, 	// MCG_C2 register
		valEnable = (argEnable & MCGVALEN_MASK) >> MCGVALEN_SHIFT	// check arguments will be used
		;
	/* If do not use c2Set, then load default value */
	if(!c2SetEnable) 
	{
		c2Set = MCG_C2;
	}
	if(valEnable)
	{
		if(checkVal(mode, crysVal, mcgVal)) return -1;
		/* Load value from mcgVal */
		c1frdiv = (mcgVal & FRDIV_MASK) >> FRDIV_SHIFT;
		c4dmx32 = (mcgVal & DMX32_MASK) >> DMX32_SHIFT;
		c4drst_drs = (mcgVal & DRST_DRS_MASK) >> DRST_DRS_SHIFT;
		c5prdiv0 = (mcgVal & PRDIV0_MASK) >> PRDIV0_SHIFT;
		c6vdiv0 = (mcgVal & VDIV0_MASK) >> VDIV0_SHIFT;
	} else
	{
		/* If do not use mcgVal, then load remain values from registers */
		c1frdiv = (MCG_C1 & MCG_C1_FRDIV_MASK) >> MCG_C1_FRDIV_SHIFT;
		c4drst_drs = (MCG_C4 & MCG_C4_DRST_DRS_MASK) >> MCG_C4_DRST_DRS_SHIFT; 
		c4dmx32 = (MCG_C4 & MCG_C4_DMX32_MASK) >> MCG_C4_DMX32_SHIFT;
		c5prdiv0 = (MCG_C5 & MCG_C5_PRDIV0_MASK) >> MCG_C5_PRDIV0_SHIFT;
		c6vdiv0 = (MCG_C6 & MCG_C6_PLLS_MASK) >> MCG_C6_PLLS_SHIFT;
	}
	
	/* initial MCG_C2 register */
	c2range0 = (c2Set & MCG_C2_RANGE0_MASK) >> MCG_C2_RANGE0_SHIFT,
	c2hgo0 = (c2Set & MCG_C2_HGO0_MASK) >> MCG_C2_HGO0_SHIFT,
	c2erefs0 = (c2Set & MCG_C2_EREFS0_MASK) >> MCG_C2_EREFS0_SHIFT,
	c2lp = (c2Set & MCG_C2_LP_MASK) >> MCG_C2_LP_SHIFT,
	c2ircs = (c2Set & MCG_C2_IRCS_MASK) >> MCG_C2_IRCS_SHIFT;
	
	switch (mode)
	{
		case emcgmFBE:
			c1clks = 2;
			c1irefs = 0;
			c6plls = 0;
			c2lp = 0;
			break;
		case emcgmPBE:
			c1clks = 2;
			c1irefs = 0;
			c6plls = 1;
			c2lp = 0;
			break;
		
		case emcgmFBI:
			c1clks = 1;
			c1irefs = 1;
			c6plls = 0;
			c2lp = 0;
			c2ircs = 1;
			break;
			
		case emcgmFEI:
			c1clks = 0;
			c1irefs = 1;
			c6plls = 0;
			break;
			
		case emcgmFEE:
			c1clks = 0;
			c1irefs = 0;
			c6plls = 0;
//			clkVal = crysVal
			break;
		case emcgmPEE:
			c1clks = 0;
			c1irefs = 0;
			c6plls = 1;
			break;	
			
		case emcgmBLPI:
			c1clks = 1;
			c1irefs = 1;
			c6plls = 0;
			c2lp = 1;
			c2ircs = 1;
			return -1;
			break;	
				
		case emcgmBLPE:
			c1clks = 2;
			c1irefs = 0;
			c2lp = 1;
			return -1;
			break;
	}
	
	/* Clear all bits will be configured in MCG's registers */
	mcgc1 = MCG_C1 & ~MCG_C1_IREFS_MASK & 
			~MCG_C1_CLKS_MASK & 
			~MCG_C1_FRDIV_MASK;
	mcgc2 = MCG_C2 & ~MCG_C2_EREFS0_MASK & 
			~MCG_C2_HGO0_MASK & 
			~MCG_C2_RANGE0_MASK & 
			~MCG_C2_LP_MASK &
			~MCG_C2_IRCS_MASK;
	mcgc4 = MCG_C4 & ~MCG_C4_DMX32_MASK & ~MCG_C4_DRST_DRS_MASK;
	mcgc5 = MCG_C5 & ~MCG_C5_PRDIV0_MASK;
	mcgc6 = MCG_C6 & ~MCG_C6_VDIV0_MASK & ~MCG_C6_PLLS_MASK;
	mcgs = MCG_S & ~MCG_S_IREFST_MASK & 
			~MCG_S_CLKST_MASK & 
			~MCG_S_OSCINIT0_MASK &
			~MCG_S_IRCST_MASK &
			~MCG_S_PLLST_MASK;
	
	/* Prepare MCG's registers */
	mcgc1 |= (c1frdiv << MCG_C1_FRDIV_SHIFT) |
			(c1clks << MCG_C1_CLKS_SHIFT) |
			(c1irefs << MCG_C1_IREFS_SHIFT);
	mcgc2 |= (c2erefs0 << MCG_C2_EREFS0_SHIFT) |
			(c2hgo0 << MCG_C2_HGO0_SHIFT) |
			(c2ircs << MCG_C2_IRCS_SHIFT) |
			(c2lp << MCG_C2_LP_SHIFT) |
			(c2range0 << MCG_C2_RANGE0_SHIFT);
	mcgc4 |= (c4dmx32 << MCG_C4_DMX32_SHIFT) | (c4drst_drs << MCG_C4_DRST_DRS_SHIFT);
	mcgc5 |= c5prdiv0 << MCG_C5_PRDIV0_SHIFT;
	mcgc6 |= (c6plls << MCG_C6_PLLS_SHIFT) | (c6vdiv0 << MCG_C6_VDIV0_SHIFT);
	mcgs |= (c1irefs << MCG_S_IREFST_SHIFT) |
			(c2erefs0 << MCG_S_OSCINIT0_SHIFT) |
			(c2ircs << MCG_S_IRCST_SHIFT) |
			(c6plls << MCG_S_PLLST_SHIFT);
	if(c1clks == 0 && c6plls == 1) mcgs |= (3 << MCG_S_CLKST_SHIFT);
	else mcgs |= (c1clks << MCG_S_CLKST_SHIFT);
	
	/* Assign values to MCG's registers */
	/*MCG_C4 = mcgc4;
	MCG_C5 = mcgc5;
	MCG_C6 = mcgc6;
	MCG_C2 = mcgc2;
	MCG_C1 = mcgc1;*/
	
	for(i=0; MCG_S != mcgs; i++)
	{
		if(i>2000) return -1;
	}
	
	return mode;
}

/**********************************************************************
 *
 * Function:    getMCGMode
 *
 * Description: Finding mode which MCG is staying in
 * 
 * Notes:       This function is specific to the KL46Z256
 *
 * Returns:     mode of MCG.
 *
 **********************************************************************/
int getMCGMode() 
{
	int IREFS = (MCG_S & MCG_S_IREFST_MASK) >> MCG_S_IREFST_SHIFT;
	int CLKS = (MCG_S & MCG_S_CLKST_MASK) >> MCG_S_CLKST_SHIFT;
	int PLLS = (MCG_S & MCG_S_PLLST_MASK) >> MCG_S_PLLST_SHIFT;
	int LP = (MCG_C2 & MCG_C2_LP_MASK) >> MCG_C2_LP_SHIFT;
	
	if(CLKS == 0) return emcgmFEE;
	
	if(CLKS == 3) return emcgmPEE;
	
	if(CLKS == 1)
	{
		if(LP == 1) return emcgmBLPI;
		return emcgmFBI;
	}
	
	if(LP == 1) return emcgmBLPE;
	
	if(PLLS == 1) return emcgmPBE;
	
	return emcgmFBE;
}


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
int initMCG(int crystal_val, unsigned char drst_drs, unsigned char dmx32, 
		signed char frdiv_val, unsigned char lp_mode, unsigned char clks) {
	int i=0;
	int mcgMode = getMCGMode();
	unsigned int return_value=0;
	
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
	return return_value;
}
