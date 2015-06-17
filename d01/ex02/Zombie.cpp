#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type)
{
	std::cout << "A Zombie was born with the name of " << name << " and the type of " << type << "." << std::endl;
	return;
}

Zombie::~Zombie()
{
	std::cout << "A Zombie died." << std::endl;
	return;
}

void	Zombie::announce()
{
	std::cout << "\033[1;31m<" << this->_name << " (" << this->_type << ")>\033[0m Braiiiiiiinnnssss..." << std::endl;
	return;
}