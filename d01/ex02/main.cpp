#include "ZombieEvent.hpp"
#include "Zombie.hpp"
#include <iostream>
#include <unistd.h>

int main()
{
	std::string 	name("Barbapapa");
	ZombieEvent*	event = new ZombieEvent;
	Zombie*			zombie;

	zombie = event->newZombie(name);

	for (int i = 0; i < 10; ++i)
	{
		event->randomChump();
		usleep(300000);
	}

	delete zombie;
	return 0;
}