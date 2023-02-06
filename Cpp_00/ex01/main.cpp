#include "PhoneBook.hpp"

std::string check_lenght(std::string data)
{
	if (data.length() > 10)
		return (data.substr(0, 9) + '.');
	else
		return (data);
}

int	check_index(std::string key)
{
	if (key.length() != 1)
		return (-1);
	if (key == "0")
		return (0);
	if (std::atoi(key.c_str()))
		return (std::atoi(key.c_str()));
	return (-1);
}

int main(void)
{
	PhoneBook	phone;
	int			index;
	int			flag;
	std::string	key;

	index = 0;
	flag = 0;
	while (1)
	{
		std::cout << "> ";
		key = PhoneBook::ft_getline();
		if (key == E)
			break;
		else if (key == A)
		{
			if (index == 8)
				index = 0;
			if (index < 8)
			{
				phone.add(index);
				index++;
			}
			if (flag < 8)
				flag++;
		}
		else if (key == S)
		{
			int i;
			for (i = 0; i < flag; i++) {
				std::cout << "|";
				std::cout << std::setw(10) << i; std::cout << "|";
				std::cout << std::setw(10) << check_lenght(phone.get(i).GetFristname()); std::cout << "|";
				std::cout << std::setw(10) << check_lenght(phone.get(i).GetLastname()); std::cout << "|";
				std::cout << std::setw(10) << check_lenght(phone.get(i).GetNickname()); std::cout << "|";
				std::cout << std::endl;
			}
			std::cout << "Please enter the index of the contact to get more info: ";
			key = PhoneBook::ft_getline();
			i = check_index(key);
			if (i >= 0 && i < flag) {
				std::cout << "Fist name   : " << phone.get(i).GetFristname() << std::endl;
				std::cout << "Last name   : " << phone.get(i).GetLastname() << std::endl;
				std::cout << "Nick name   : " << phone.get(i).GetNickname() << std::endl;
				std::cout << "Secret      : " << phone.get(i).GetSecret() << std::endl;
				std::cout << "Phone number: " << phone.get(i).GetPhonenumber() << std::endl;
			}
			else
				std::cout << "No contact with this index..." << std::endl;
		}
	}
	return (0); 
}