#include <Zombie.hpp>

void Test(int N)
{
	Zombie* Zs;

	Zs = zombieHorde(N, "John");
	for (int i = 0; i < N; i++)
		Zs[i].announce();
	std::cout << "Allocation Success: " << N << " zombies\n";
	delete[] Zs;
}

int main(void)
{
	Test(10);
	Test(0);
	Test(1);
	Test(500);


	Test(-2147483648);
	Test(-1);
	Test(2147483647);
	return (0);
}
