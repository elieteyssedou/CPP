#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include <iostream>
#include "Zombie.hpp"

class ZombieHorde
{
public:
	ZombieHorde(int N);
	~ZombieHorde();
	void			setZombieType();
	Zombie*			newZombie(std::string name);
	Zombie*			randomChump();
	int				n;
private:
	std::string		_type;
	Zombie			*_horde;
};

#endif