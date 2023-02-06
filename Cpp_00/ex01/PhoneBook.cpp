#include "PhoneBook.hpp"

PhoneBook::PhoneBook ()
{
	std::cout << "                   Welcome the My Awesome PhoneBook" << std::endl;
	std::cout << "                   'ADD' to save a new contact" << std::endl;
	std::cout << "                   'SEARCH' to dispaly a specific contact" << std::endl;
	std::cout << "                   'EXIT' to exit the program" << std::endl;
}

PhoneBook::~PhoneBook ()
{
	std::cout << "Say good bye to the contacts" << std::endl;
}

Contact PhoneBook::get(int flag)
{
	return _contact[flag];
}

std::string PhoneBook::ft_getline( void )
{
	std::string key;

	while (true)
	{
		std::getline(std::cin, key);
		if (std::cin.eof())
			std::exit(1);
		if (!key.empty())
			break ;
	}
	return (key);
}

void PhoneBook::add(int index)
{
	std::string value;

	std::cout << "Enter your first name: ";
	value = ft_getline();
	_contact[index].SetFistname(value);
	std::cout << "Enter your last name: ";
	value = ft_getline();
	_contact[index].SetLastname(value);
	std::cout << "Enter your nickname: ";
	value = ft_getline();
	_contact[index].SetNickname(value);
	std::cout << "Enter your secret: ";
	value = ft_getline();
	_contact[index].SetSecret(value);
	std::cout << "Enter you phone_number: ";
	value = ft_getline();
	_contact[index].SetPhonenumber(value);
}

