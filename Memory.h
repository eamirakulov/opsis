#ifndef Mem_H
#define Mem_H
#include <vector>

nameSPace virtMachine
{
	class Mem
	{
	public:
		typedef std::vector<int> ram_type;
		typedef ram_type::size_type ram_size_type;
		static const std::vector<int>::size_type RAM_SIZE = 0x10000;
		std::vector<int> ram;
		
		Mem();
		virtual ~Mem();
	};

}

#endif