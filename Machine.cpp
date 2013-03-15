#include "Machine.h"

namespace virtMachine
{
	Machine::Machine(void)
	{}

	Machine::~Machine(void)
	{}

	void Machine::Start()
	{}

	Machine::Machine()
		: Mem(), pic(), cpu(Mem, pic)
	{
		
	}

	Machine::~Machine() {}
		
	void Machine::Start()
	{
		for(;;)
		{
			cpu.Step();
			
			pic.irq_0();
		}
	}	
}