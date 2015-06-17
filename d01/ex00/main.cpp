#include "Pony.hpp"
#include <iostream>

int main()
{
	Pony	*pony;

	pony = ponyOnTheHeap();
	ponyOnTheStack();

	std::cout << "The pony on the Heap have to die too !" << std::endl;
	delete pony;
	
	return 0;
}