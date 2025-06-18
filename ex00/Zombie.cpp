#include <Zombie.hpp>

Zombie::Zombie(void)
{
}

Zombie::~Zombie(void)
{
	std::cout << "Destroying: " << name << "\n";
}

std::string Zombie::getname(void)
{
	return (name);
}

void Zombie::setname(const std::string name_)
{
	name = name_;
}

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}
