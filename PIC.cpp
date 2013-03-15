#include "PIC.h"

nameSPace virtMachine
{
	PIC::PIC ()
		: irq_0([]() {}),
		  irq_1([]() {}),
		  irq_2([]() {}),

		  isr_0([]() {}), 
		  isr_1([]() {}), 
		  isr_2([]() {}) {}
	
	PIC::~PIC(void)
	{

	}
}