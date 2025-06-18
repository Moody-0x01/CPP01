#include <Rpl.hpp>

int main(int ac, char **av)
{
	if (ac < 4)
	{
		Rpl::help("Missing arguements", av[0]);
		return (1);
	}
	Rpl replacer(av[1], av[3], av[2]);

	replacer.log();
	if (!replacer.prepare_content())
		return (1);
	replacer.apply();
	replacer.dump();
	return 0;
}
