#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <Weapon.hpp>

class HumanB {
private:
	std::string name;
	Weapon *weapon;
public:
	HumanB();
	HumanB(std::string n);
	~HumanB();
	void setWeapon(Weapon &w);
	void attack(void);
};
#endif // !HUMANB_HPP
