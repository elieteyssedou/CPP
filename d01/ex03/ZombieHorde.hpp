#include "ZombieHorde.hpp"
#include "Zombie.hpp"
#include <iostream>

ZombieHorde::ZombieHorde(int N)
{
	std::cout << "A ZombieHorde was created." << std::endl;
	setZombieType();
	return;
}

ZombieHorde::~ZombieHorde()
{
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

	zomb = new Zombie(name, this->_type);
	return (zomb);
}

Zombie* ZombieHorde::randomChump()
{
	std::string NameArray[10] = { "Bryan", "John", "Michael", "Anton", "Antoine", "Lou", "Alain", "Felix", "Elie", "Mike"};

	Zombie zomb(NameArray[rand() % 10], this->_type);
	zomb.announce();
	return (&zomb);
}