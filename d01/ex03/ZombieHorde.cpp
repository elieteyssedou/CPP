#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include <iostream>
#include "Zombie.hpp"

class ZombieHorde
{
public:
	ZombieHorde(int N);
	~ZombieHorde();
	void setZombieType();
	Zombie* newZombie(std::string name);
	Zombie* randomChump();
private:
	std::string _type;
};

#endif