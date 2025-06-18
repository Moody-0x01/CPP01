#include <Zombie.hpp>

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *zombies;

	if (N < 0)
	{
		std::cerr << "Allocation failed at: [N=" << N << "] zombies\n";
		throw std::runtime_error("Invalid Allocation");
	}
	try {
		zombies = new Zombie[N];
		for (int i = 0; i < N; i++)
			zombies[i].setname(name);
	} catch (const std::bad_alloc&) {
		std::cerr << "Allocation failed at: [N=" << N << "] zombies\n";
		throw std::runtime_error("Big Allocation Failure");
	}
	return (zombies);
}
