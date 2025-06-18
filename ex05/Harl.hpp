#ifndef HARL_HPP
#define HARL_HPP
#include <iostream>

#define COUNT 4
#define DEBUG "DEBUG"
#define INFO "INFO"
#define WARNING "WARNING"
#define ERROR "ERROR"

class Harl {
public:
	Harl();
	void complain(std::string level);
	static int get_level_index(std::string level);
	~Harl();

private:
	void (Harl::*funcs[COUNT])();
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
};

#endif // !HARL_HPP
