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
	Machine ();
	Machine mach;
	Kernel() 
	{
		
		createProc("change_register.virtMachineexe");
		createProc("change_register_in_loop.virtMachineexe");
		createProc("Change_register.virtMachineexe");

		machine.pic.irq_0 = []() 
		{
		
			std::cout << "Caught the hardware interruption 1 " << std::endl;
		};

		Todo: Rouind-robin scheduling
		if( _cycle_passed_after_preemption > Kernel::MAX_CYCLES_BEFORE_PREEMTION)
		{
			_cycle_passed_after_preemption = (_cycle_passed_after_preemption + 1 ) process.size();
			_cycle_passed_after_preemption = 0;
		}
		else
		{
			_cycle_passed_after_preemption++;
		}

		std::cout << "Caught the software interruption 1" << std::endl;
		};
		machine.Start();
		
	}

	std::vector<Process> processes;
	void createProc(std::string name);
private:

	static const unsigned int MAX_CYCLES_BEFORE_PREEMTION = 100;
	Process::process_id type _last_issed_rpcess_id;
	Mem:ram_type::size_type _last_ram_position;
	unsigned int _cycles_passed_after_preemption;
	std::vector<Process>::size_type _current_process_index;
};

#endif