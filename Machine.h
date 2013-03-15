#ifndef Machine_H
#define Machine_H

#include "CPU.h"
#include "Memory.h"
#include "PIC.h"

namespace vm
{

	class Machine
	{
	public:
		//Memory memory;
		//PIC pic;
		//CPU cpu;
		Machine()
		{

		}
		void Start()
		{}

		virtual ~Machine()
		{
			//for(;;)
			//{
			//	cpu.Step();
			//
			//	pic.irq_0();
			//	//General the Timer Interrupt
			//}
		}
	private:
	};
}
#endif