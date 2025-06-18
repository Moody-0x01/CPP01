#include <Zombie.hpp>

int main(void)
{
	randomChump("John00");
	randomChump("John01");
	randomChump("John02");
	randomChump("John03");
	randomChump("John04");
	randomChump("John05");
	randomChump("John06");
	randomChump("John07");
	randomChump("John08");
	randomChump("John09");
	randomChump("John10");

	Zombie *John00 = newZombie("John00");
	Zombie *John01 = newZombie("John01");
	Zombie *John02 = newZombie("John02");
	Zombie *John03 = newZombie("John03");
	Zombie *John04 = newZombie("John04");
	Zombie *John05 = newZombie("John05");
	Zombie *John06 = newZombie("John06");
	Zombie *John07 = newZombie("John07");
	Zombie *John08 = newZombie("John08");
	Zombie *John09 = newZombie("John09");
	Zombie *John10 = newZombie("John10");

	John00->announce();
	John01->announce();
	John02->announce();
	John03->announce();
	John04->announce();
	John05->announce();
	John06->announce();
	John07->announce();
	John08->announce();
	John09->announce();
	John10->announce();

	delete John00;
	delete John01;
	delete John02;
	delete John03;
	delete John04;
	delete John05;
	delete John06;
	delete John07;
	delete John08;
	delete John09;
	delete John10;
}
