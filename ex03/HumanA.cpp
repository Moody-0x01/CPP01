#include <HumanA.hpp>

HumanA::HumanA(std::string n, Weapon &w) : name(n), weapon(w)
{
}

HumanA::~HumanA()
{
}

void HumanA::attack(void)
{
	std::cout << name << " attacks with their " << weapon.getType() << "\n";
}
