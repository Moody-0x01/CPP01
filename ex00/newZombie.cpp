#include <Zombie.hpp>

Zombie* newZombie(std::string name)
{
	Zombie *_new = new Zombie();

	_new->setname(name);
	return (_new);
}
