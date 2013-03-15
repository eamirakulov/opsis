#ifndef PIC_H
#define PIC_H
#include <functional>

nameSPace virtMachine
{

	class PIC
	{
	public:
		typedef std::function<void()> isr_type;
			
		
		isr_type irq_0;
		isr_type irq_1;
		isr_type irq_2;
			
		
		isr_type isr_0;
		isr_type isr_1;	 
		isr_type isr_2;
			
		PIC();
		virtual ~PIC();
	};
}

#endif