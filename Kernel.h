#ifndef Kernel_H
#define Kernel_H

#include <vector>
#include <string>
#include <iostream>
#include "Mem.h"
#include "Machine.h"
#include "PIC.h"


class Kernel
{
public:
		//Machine ();
	Machine mach;
	Kernel() 
	{
		
		//createProc("change_register.virtMachineexe");
		//createProc("change_register_in_loop.virtMachineexe");
		//createProc("Change_register.virtMachineexe");

		//machine.pic.irq_0 = []() 
		//{
		//	//ToDo: Unload the cyrrebt process

		//	std::cout << "Caught the hardware interruption 1 " << std::endl;
		//};



		/*machine.pic.isr_0 = [&]()
		{*/
		// Todo: Rouind-robin scheduling
		//if( _cycle_passed_after_preemption > Kernel::MAX_CYCLES_BEFORE_PREEMTION)
		//{
		// Preempt
		// Save Regs from cpu to current process
		// Change the state of the current process from running to ready
		//_cycle_passed_after_preemption = (_cycle_passed_after_preemption + 1 ) process.size()

		// Set the register state for the processor to the state of the current process
		// CPU & IS change 
		// Change the state of the curent process to running
		//	_cycle_passed_after_preemption = 0;
		//}
		//else
		//{
		//	_cycle_passed_after_preemption++;
		//}
		/*};
		machine.pic.isr_3 = [&]()
		{*/
		// todo sytscall exit, ,unload the ucdrrent process
		//  Remove the current process from the process list
		// Perform  the context switch
		/*};
		machine.pic.isr_1 = []() 
		{*/
		//ToDo: Unload the cyrrebt process

		//std::cout << "Caught the software interruption 1 " << std::endl;
		//};

		//machine.Start();
		///
	}

	//std::vector<Process> processes;
	//void createProc(std::string name);
private:
	//		static const unsigned int MAX_CYCLES_BEFORE_PREEMTION = 100;

	//Process::process_id type _last_issed_rpcess_id;
	//Mem:ram_type::size_type _last_ram_position;

	//	unsigned int _cycles_passed_after_preemption;
	//std::vector<Process>::size_type _current_process_index;
};

#endif