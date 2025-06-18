#include <Zombie.hpp>

void randomChump(std::string name)
{
	Zombie Z;

	Z.setname(name);
	Z.announce();
}
