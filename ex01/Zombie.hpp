#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie {
private:
	std::string name;
public:
	Zombie(void);
	~Zombie(void);

	std::string getname(void);
	void setname(const std::string name_);
	void announce(void);
};

Zombie* zombieHorde(int N, std::string name);
#endif // !ZOMBIE_HPP
