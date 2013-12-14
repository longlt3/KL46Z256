/**************************************************************************************
 * Description		: Timer/PWM Module demo header file
 **************************************************************************************/

#ifndef TPM_H_
#define TPM_H_

#include "resources.h"

int initTPM(TPM_MemMapPtr TPMx, unsigned char simTPMSrc, char simPLLS, unsigned short scMOD, unsigned char scPS);
int modeTPM(TPM_MemMapPtr TPMx, unsigned char scCMOD);
void setTPMSC(TPM_MemMapPtr TPMx, char scDMA, char scTOIE, char scCPWMS);
int setTPMCONF(TPM_MemMapPtr TPMx, unsigned int confVal);
int setTPMCnSC(TPM_MemMapPtr TPMx, int channel, unsigned char mode);
void setTPMCnV(TPM_MemMapPtr TPMx, int channel, unsigned short value);

#endif /* TPM_H_ */
