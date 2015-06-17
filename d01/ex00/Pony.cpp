#include "Pony.hpp"
#include <iostream>

Pony::Pony()
{
	std::cout << "A pony was born";
}

Pony::~Pony()
{
	std::cout << "A pony died." << std::endl;
}

Pony*	ponyOnTheHeap()
{
	Pony* pony;
	pony = new Pony;
	std::cout << " on the heap." << std::endl;
	return (pony);
}

Pony ponyOnTheStack()
{
	Pony pony;
	std::cout << " on the stack." << std::endl;
	return (pony);
}