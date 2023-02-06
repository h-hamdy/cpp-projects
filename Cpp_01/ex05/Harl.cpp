#include "Harl.hpp"

void	Harl::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didnt put enough bacon in my burger! If you did, I wouldnt be asking for more!"
			<< std::endl;
}

void	Harl::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. Ive been coming for years whereas you started working here since last month."
			<< std::endl;
}

void	Harl::error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

int	get_index(std::string str)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int index = 0; index < 4; index++) {
		if (str == levels[index])
			return (index);
	}
	return (-1);
}

void	Harl::complain( std::string level )
{
	int index;
	void (Harl::*p) ();
	
	index = get_index(level);
	if (index == -1)
	{
		std::cout << "Invalid level..." << std::endl;
		return ;
	}
	switch (index)
	{
		case 0:
			p = &Harl::debug;
			break ;
		case 1:
			p = &Harl::info;
			break ;
		case 2:
			p = &Harl::warning;
			break ;
		case 3:
			p = &Harl::error;
			break ;
	}
	(this->*p) ();
}