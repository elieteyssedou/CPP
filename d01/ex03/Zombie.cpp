#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{
	std::string NameArray[10] = { "Bryan", "John", "Michael", "Anton", "Antoine", "Lou", "Alain", "Felix", "Elie", "Mike"};
	_name = NameArray[rand() % 10];
	std::cout << "A Zombie was born with the name of " << this->_name << "." << std::endl;
	
	return;
}

Zombie::~Zombie()
{
	std::cout << "A Zombie (" << this->_name << ") died." << std::endl;
	return;
}

void	Zombie::announce()
{
	std::cout << "\033[1;31m<" << this->_name << " (" << this->_type << ")>\033[0m Braiiiiiiinnnssss..." << std::endl;
	return;
}

void	Zombie::setType(std::string type)
{
	this->_type = type;
	return;
}