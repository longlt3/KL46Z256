/*
  FILE    : kinetis_sysinit.h
  PURPOSE : system initialization header for Kinetis ARM architecture
  LANGUAGE: C
  Copyright © 2012 Freescale semiConductor Inc. All Rights Reserved.
*/
#ifndef KINETIS_SYSINIT_H
#define KINETIS_SYSINIT_H

#ifdef __cplusplus
extern "C" {
#endif

/* Word to be written in SIM_COP in order to disable the Watchdog */
#define KINETIS_WDOG_DISABLED_CTRL	0x0

/* 
	Initializes the Kinetis hardware: e.g. disables the Watchdog
*/
void __init_hardware();

/* Weak definitions of handlers point to Default_Handler if not implemented */
void NMI_Handler() __attribute__ ((weak, alias("Default_Handler")));
void HardFault_Handler() __attribute__ ((weak, alias("Default_Handler")));
void SVC_Handler() __attribute__ ((weak, alias("Default_Handler")));
void PendSV_Handler() __attribute__ ((weak, alias("Default_Handler")));
void SysTick_Handler() __attribute__ ((weak, alias("Default_Handler")));

void DMA0_IRQHandler() __attribute__ ((weak, alias("Default_Handler")));
void DMA1_IRQHandler() __attribute__ ((weak, alias("Default_Handler")));
void DMA2_IRQHandler() __attribute__ ((weak, alias("Default_Handler")));
void DMA3_IRQHandler() __attribute__ ((weak, alias("Default_Handler")));
void FTFA_IRQHandler() __attribute__ ((weak, alias("Default_Handler")));
void PMC_IRQHandler() __attribute__ ((weak, alias("Default_Handler")));
void LLW_IRQHandler() __attribute__ ((weak, alias("Default_Handler")));
void I2C0_IRQHandler() __attribute__ ((weak, alias("Default_Handler")));
void I2C1_IRQHandler() __attribute__ ((weak, alias("Default_Handler")));
void SPI0_IRQHandler() __attribute__ ((weak, alias("Default_Handler")));
void SPI1_IRQHandler() __attribute__ ((weak, alias("Default_Handler")));
void UART0_IRQHandler() __attribute__ ((weak, alias("Default_Handler")));
void UART1_IRQHandler() __attribute__ ((weak, alias("Default_Handler")));
void UART2_IRQHandler() __attribute__ ((weak, alias("Default_Handler")));
void ADC0_IRQHandler() __attribute__ ((weak, alias("Default_Handler")));
void CMP0_IRQHandler() __attribute__ ((weak, alias("Default_Handler")));
void TPM0_IRQHandler() __attribute__ ((weak, alias("Default_Handler")));
void TPM1_IRQHandler() __attribute__ ((weak, alias("Default_Handler")));
void TPM2_IRQHandler() __attribute__ ((weak, alias("Default_Handler")));
void RTC_Alarm_IRQHandler() __attribute__ ((weak, alias("Default_Handler")));
void RTC_Seconds_IRQHandler() __attribute__ ((weak, alias("Default_Handler")));
void PIT_IRQHandler() __attribute__ ((weak, alias("Default_Handler")));
void I2S0_IRQHandler() __attribute__ ((weak, alias("Default_Handler")));
void USBOTG_IRQHandler() __attribute__ ((weak, alias("Default_Handler")));
void DAC0_IRQHandler() __attribute__ ((weak, alias("Default_Handler")));
void TSI0_IRQHandler() __attribute__ ((weak, alias("Default_Handler")));
void MCG_IRQHandler() __attribute__ ((weak, alias("Default_Handler")));
void LPTimer_IRQHandler() __attribute__ ((weak, alias("Default_Handler")));
void SLCD_IRQHandler() __attribute__ ((weak, alias("Default_Handler")));
void PORTA_IRQHandler() __attribute__ ((weak, alias("Default_Handler")));
void PORTCD_IRQHandler() __attribute__ ((weak, alias("Default_Handler")));

/*
** ===================================================================
**     Method      :  Default_Handler
**
**     Description :
**         The default interrupt handler.
** ===================================================================
*/
void Default_Handler();

#ifdef __cplusplus
}
#endif

#endif /* #ifndef KINETIS_SYSINIT_H */
