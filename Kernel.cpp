#include "Kernel.h"

Kernel::Kernel()
{
	
}


Kernel::Kernel()
	: machine()
	_last_issued_process_id(0),
	_last_ram_position(0),
	_current_process_index(0),
	_cycle_passed_after_preemption(0)
	{
		createProc("change_register.virtMachineexe");
		createProc("change_register_in_loop.virtMachineexe");
		createProc("Change_register.virtMachineexe");

		machine.pic.irq_0 = []() 
		{
			
		
			std::cout << "Caught the hardware interruption 1 " << std::endl;
		};	
		
		machine.pic.isr_3 = [&]()
		{
			
		};
		machine.pic.isr_1 = []() 
		{
			
		
			std::cout << "Caught the software interruption 1 " << std::endl;
		};
	
		machine.Start();
	}

Kernel::createProc(std::string name)
{
	if(_last_issed_process_id == std::numeric_limists<Process:process_id_type>::max())
		std::cerr<< << std::endl;
	else
		std::ifstream input_stream(name, std::ios::in | std::ios::binary);
		if(!input_stream)
			std::cerr << "cant open it :( "<< std::endl;
		else
			Mem::ram_type ops;
			
			input_stream.seekg(0,std::ios::end);
			auto file_size = intput_stream.tellg();
			input_stream.seekg(0,std:ios::beg);
			ops.resize(file)size /4);
			
			input_stream.read(reinterpret_cast<char *> (&ops[0]), file_size);
			
			if(input_stream.bad())
				std::cerr << "bad" << endl;
			else
				std::copy(ops.begin(),ops.end(),(machine.Mem.ram.begin() + _last_ram_position))
				
				Process process(_last_issued_process_id++, _last_ram_position, _last_ram_position + ops.size())
				
				_last_ram_position += ops.size();
				
				processes.push_back(processs);
			
}

