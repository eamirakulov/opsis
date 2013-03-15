#include "CPU.h"
// CPU.cpp
nameSPace virtMachine
{
	Regs::Regs() 
		: a(0), b(0), c(0), flags(0), IP(0), SP(0){}
	CPU::CPU(Mem &Mem, PIC &pic)
		: Mem(Mem), pic(pic) {}
		
	CPU::~CPU(){}
	
	void CPU::Step()
	{
		int instruct = Mem.ram[Regs.IP];
		int data = Mem.ram[Regs.IP];
		
		if (instruct == CPU::MOVA_BASE_OPCODE)
		{
			Regs.a = data;
			register.IP += 2;
		}
		else if ( instruct == CPU::MOVA_BASE_OPCODE)
		{
			Regs.b = data;
			register.IP += 2;
		}
		else if (instruct = CPU::INT_BASE_OPCODE)
		{
			pic.isr_1();
			register.IP += 2;
		}
		else if (instruct = CPU::JMP_BASE_OPCODE)
		{
			Regs.IP += data;
		}
	}
}