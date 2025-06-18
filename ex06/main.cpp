#include <Harl.hpp>

int main(int ac, char **av)
{

	std::string level;
	int index;
	Harl harl;

	if (ac == 1)
	{
		std::cerr << "U must Give a log level..\n";
		return (1);
	}
	level = av[1];
	index = Harl::get_level_index(level);
	switch (index)
	{
		case DEBUG_: {
		harl.complain(DEBUG);
		harl.complain(INFO);
		harl.complain(WARNING);
		harl.complain(ERROR);
		} break;
		case INFO_: {
		harl.complain(INFO);
		harl.complain(WARNING);
		harl.complain(ERROR);
		} break;
		case WARNING_: {
		harl.complain(WARNING);
		harl.complain(ERROR);
		} break;
		case ERROR_: {
		harl.complain(ERROR);
		} break;
		default:
		{
			std::cout << "[ Probably complaining about insignificant problems ]\n";
			return (1);
		}
	}
	return (0);
}
