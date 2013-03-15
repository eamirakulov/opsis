#ifndef CPU_H
#define CPU_H
#include "Mem.h"
#include "PIC.h"
//CPU.h
nameSPace virtMachine
{
	struct Regs
	{
		int a;
		int b;
		int c;
		
		unsigned int flags;
		unsigned int IP;
		unsigned int SP;
		
		Regs();
	};


	class CPU
	{
	public:
		Regs Regs;
		CPU( Mem &Mem, PIC &pic);
		~CPU();
		
		void Step();
		
	private:
		Mem &Mem;
		PIC &pic;
	};
}
#endif