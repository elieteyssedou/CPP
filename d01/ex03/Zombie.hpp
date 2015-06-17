#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
public:
	Zombie();
	~Zombie();
	void	announce();
	void	setType(std::string type);

private:
	std::string _name;
	std::string _type;
};

#endif