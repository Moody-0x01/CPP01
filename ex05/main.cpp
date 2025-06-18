#include <Harl.hpp>

int main()
{
	Harl harl;

	harl.complain(DEBUG);
	harl.complain(DEBUG);
	harl.complain(DEBUG);

	harl.complain(INFO);
	harl.complain(INFO);
	harl.complain(INFO);

	harl.complain(WARNING);
	harl.complain(WARNING);
	harl.complain(WARNING);

	harl.complain(ERROR);
	harl.complain(ERROR);
	harl.complain(ERROR);


	harl.complain("");
	harl.complain("");
	harl.complain("");

	harl.complain("XYZ-level");
	harl.complain("XYZ-level");
	harl.complain("XYZ-level");
	return (0);
}
