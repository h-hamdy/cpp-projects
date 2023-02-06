#include "Harl.hpp"

int	check_level(char *str)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int index = 0; index < 4; index++) {
		if (str == levels[index])
			return (index);
	}
	return (-1);
}

int main(int ac, char **av)
{
	Harl a;

	if (ac != 2 || check_level(av[1]) == -1)
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return (0);
	}
	a.complain(av[1]);
}