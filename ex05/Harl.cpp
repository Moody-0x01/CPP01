#include <Harl.hpp>

Harl::Harl() {
	funcs[0] = &Harl::debug;
	funcs[1] = &Harl::info;
	funcs[2] = &Harl::warning;
	funcs[3] = &Harl::error;
}

Harl::~Harl() {
}

void Harl::debug(void)
{
	std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
}

void Harl::info(void)
{
	std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void Harl::warning(void)
{
	std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}

void Harl::error(void)
{
	std::cout << "ERROR: This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain(std::string level)
{

	int index = Harl::get_level_index(level);
	if (index == -1)
		std::cerr << "Unknown log level: " << level << "\n";
	else
		(this->*funcs[index])();
}

int Harl::get_level_index(std::string level)
{
	std::string	s[COUNT] = {DEBUG, INFO, WARNING, ERROR};

	for (int i = 0; i < COUNT; i++)
	{
		if (s[i] == level)
			return (i);
	}
	return (-1);
}
