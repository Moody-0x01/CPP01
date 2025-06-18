#include <Weapon.hpp>

Weapon::Weapon() {
}

Weapon::~Weapon() {
}

Weapon::Weapon(std::string t) : type(t)
{
}

const std::string& Weapon::getType(void)
{
	return (type);
}

void Weapon::setType(std::string type_)
{
	type = type_;
}
