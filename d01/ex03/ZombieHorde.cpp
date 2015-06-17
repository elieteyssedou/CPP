#include "ZombieHorde.hpp"
#include "Zombie.hpp"
#include <iostream>

ZombieHorde::ZombieHorde(int N) : n(N)
{
	std::cout << "A ZombieHorde was created." << std::endl;
	setZombieType();
	_horde = new Zombie[N];
	for(int i = 0; i < N; i++)
	{
		this->_horde[i].setType(this->_type);
	}
	for(int i = 0; i < N; i++)
	{
		this->_horde[i].announce();
	}
	return;
}

ZombieHorde::~ZombieHorde()
{
	delete [] _horde;
	std::cout << "A ZombieHorde died." << std::endl;
	return;
}

void	ZombieHorde::setZombieType()
{
	std::cout << "Please define a type of Zombie : ";
	std::cin >> this->_type;
	return;
}

Zombie* ZombieHorde::newZombie(std::string name)
{
	Zombie *zomb;

	zomb = new Zombie();
	return (zomb);
}