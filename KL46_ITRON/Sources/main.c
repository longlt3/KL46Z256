/*
 * main implementation: use this 'C' sample to create your own application
 *
 */





#include <armv6/KL46/Project_Headers/derivative.h> /* include peripheral declarations */
//#include <kernel_id.h>

extern void kernel_start();

int main(void)
{
	int counter = 0;
	
	kernel_start();
	
	for(;;) {
	   	counter++;
	}
	
	return 0;
}
