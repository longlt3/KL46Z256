    .text
    .align 4    
    .globl dispatch
dispatch:
	mrs r0, primask
	mrs r1, control
	mrs r2, basepri
	mrs r3, faultmask
	mrs r4, psr
	
    
