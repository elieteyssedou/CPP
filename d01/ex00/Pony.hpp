#ifndef PONY_HPP
# define PONY_HPP

class Pony
{
public:
	Pony();
	~Pony();
};

Pony*	ponyOnTheHeap();
Pony	ponyOnTheStack();

#endif