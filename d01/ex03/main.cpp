#include "ZombieHorde.hpp"
#include "Zombie.hpp"
#include <iostream>
#include <unistd.h>

int main()
{
	std::string 	name("Barbapapa");
	ZombieHorde*	event = new ZombieHorde(10);
	delete	event;
	return 0;
}