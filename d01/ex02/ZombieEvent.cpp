#include "ZombieEvent.hpp"
#include "Zombie.hpp"
#include <iostream>

ZombieEvent::ZombieEvent()
{
	std::cout << "A ZombieEvent was created." << std::endl;
	setZombieType();
	return;
}

ZombieEvent::~ZombieEvent()
{
	std::cout << "A ZombieEvent died." << std::endl;
	return;
}

void	ZombieEvent::setZombieType()
{
	std::cout << "Please define a type of Zombie : ";
	std::cin >> this->_type;
	return;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
	Zombie *zomb;

	zomb = new Zombie(name, this->_type);
	return (zomb);
}

Zombie* ZombieEvent::randomChump()
{
	std::string NameArray[10] = { "Bryan", "John", "Michael", "Anton", "Antoine", "Lou", "Alain", "Felix", "Elie", "Mike"};

	Zombie zomb(NameArray[rand() % 10], this->_type);
	zomb.announce();
	return (&zomb);
}