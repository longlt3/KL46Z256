/**************************************************************************************
 * Description		: Timer/PWM Module demo source file
 **************************************************************************************/

#include "resources.h"
#include "tpm.h"

#define checkTPMCONF	0xF0F8FD1F
#define checkTPMCnSC	0x82

#define irqTPM 			1<<17

/*******************************************************************
 * Function						: initTPM
 * 
 * Description					: Initial TPM
 * 
 * Arguments
 * - TPM_MemMapPtr TPMx			: Base TPM pointer (TPMx_BASE_PTR)
 * - unsigned char simTPMSrc	: TPM Clock Source Select 
 * - char simPLLS				: PLL clock select 
 * - unsigned short scMOD		: Modulo value 
 * - unsigned char scPS			: Prescale Factor Selection 
 * 
 * Return						: void
 *******************************************************************/
int initTPM(TPM_MemMapPtr TPMx, unsigned char simTPMSrc, char simPLLS, unsigned short scMOD, unsigned char scPS)
{
	// Check valid 
	if(simTPMSrc > 3 || scPS > 7) return 1;
	// Clock gated for TPMx
	if(TPMx == TPM0_BASE_PTR)
		SIM_SCGC6 |= SIM_SCGC6_TPM0_MASK;
	else if(TPMx == TPM1_BASE_PTR)
		SIM_SCGC6 |= SIM_SCGC6_TPM1_MASK;
	else
		SIM_SCGC6 |= SIM_SCGC6_TPM2_MASK;
	SIM_SOPT2 |= SIM_SOPT2_TPMSRC(simTPMSrc);      					// Selects the clock source for the TPM counter clock
	if(simPLLS) SIM_SOPT2 |= SIM_SOPT2_PLLFLLSEL_MASK;				// select PLL as source
	TPM_SC_REG(TPMx) |= TPM_SC_PS(scPS);							// Set prescale
	TPM_MOD_REG(TPMx) = scMOD;										// Set module
	return 0;
}

/*******************************************************************
 * Function						: modeTPM
 * 
 * Description					:
 * 	Select clock mode for TPM's counter (enable or disable TPM)
 * 
 * Arguments
 * - TPM_MemMapPtr TPMx			: Base TPM pointer (TPMx_BASE_PTR)
 * - unsigned char scCMOD		: Clock Mode Selection value
 * 
 * Return						: Error code
 *******************************************************************/
int modeTPM(TPM_MemMapPtr TPMx, unsigned char scCMOD)
{
	if(scCMOD > 3) return 1;
	TPM_SC_REG(TPMx) |= TPM_SC_CMOD(scCMOD);
	return 0;
}

/*******************************************************************
 * Function						: setTPMSC
 * 
 * Description					: TPMx_SC settings
 * 
 * Arguments
 * - TPM_MemMapPtr TPMx			: Base TPM pointer (TPMx_BASE_PTR)
 * - char scDMA					: DMA Enable 
 * - char scTOIE				: Timer Overflow Interrupt Enable 
 * - char scCPWMS				: Center-aligned PWM Select 
 * 
 * Return						: Error code
 *******************************************************************/
void setTPMSC(TPM_MemMapPtr TPMx, char scDMA, char scTOIE, char scCPWMS)
{
	if(scDMA) TPM_SC_REG(TPMx) |= TPM_SC_DMA_MASK;					// Enable DMA
	if(scTOIE)
	{
		NVIC_ISER |= (1<<irqTPM);					// Enable NVIC ISR
		TPM_SC_REG(TPMx) |= TPM_SC_TOIE_MASK;		// Enable IRQ
	}
	if(scCPWMS)
	{
		TPM_SC_REG(TPMx) |= TPM_SC_CPWMS_MASK;		// TPM counter operates in up-down counting mode.
	}
}

/*******************************************************************
 * Function						: setTPMCONF
 * 
 * Description					: TPMx_CONF settings
 * 
 * Arguments
 * - TPM_MemMapPtr TPMx			: Base TPM pointer (TPMx_BASE_PTR)
 * - unsigned int confVal		: TPM CONF register value
 * 
 * Return						: error code
 *******************************************************************/
int setTPMCONF(TPM_MemMapPtr TPMx, unsigned int confVal)
{
	char valid = confVal & checkTPMCONF;
	if(!valid) return 1;
	TPM_CONF_REG(TPMx) = confVal;
	return 0;
}

/*******************************************************************
 * Function						: setTPMCnSC
 * 
 * Description					: TPMx_CnSC settings
 * 
 * Arguments
 * - TPM_MemMapPtr TPMx			: Base TPM pointer (TPMx_BASE_PTR)
 * - int channel				: Channel of TPM
 * - unsigned int mode			: TPM CnSC register mode value
 * 
 * Return						: error code
 *******************************************************************/
int setTPMCnSC(TPM_MemMapPtr TPMx, int channel, unsigned char mode)
{
	char valid = mode & checkTPMCnSC;
	if(channel<0 || channel>5 || !valid) return 1;
	TPM_CnSC_REG(TPMx, channel) = mode;
	return 0;
}

/*******************************************************************
 * Function						: setTPMCnSC
 * 
 * Description					: TPMx_CnV settings
 * 
 * Arguments
 * - TPM_MemMapPtr TPMx			: Base TPM pointer (TPMx_BASE_PTR)
 * - int channel				: Channel of TPM
 * - unsigned int value			: TPM CnV register value
 * 
 * Return						: error code
 *******************************************************************/
void setTPMCnV(TPM_MemMapPtr TPMx, int channel, unsigned short value)
{
	TPM_CnV_REG(TPMx, channel) = value;
}
