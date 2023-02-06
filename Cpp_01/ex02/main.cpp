#include <iostream>

int main(void)
{
	std::string sayHello;
	std::string *stringPTR;
	std::string &stringREF = sayHello;
	
	sayHello = "HI THIS IS BRAIN";
	stringPTR = &sayHello;

	std::cout << &sayHello << std::endl;
	std::cout << &stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << sayHello << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;

	return (0);
}