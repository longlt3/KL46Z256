/**************************************************************************************
 * Description		: Enable/Disable an interrupt event via NVIC ISR number
 **************************************************************************************/

#ifndef IRQ_H_
#define IRQ_H_

void enable_irq (int irq);
void disable_irq (int irq);

#endif /* IRQ_H_ */
