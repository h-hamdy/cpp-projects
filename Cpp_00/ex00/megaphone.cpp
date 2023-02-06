#include <iostream>

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		for (int n_arg = 1; argv[n_arg]; n_arg++)
		{
			for (int index = 0; argv[n_arg][index]; index++)
			{
				if (islower(argv[n_arg][index]))
					std::cout << char(argv[n_arg][index] - 32);
				else
					std::cout << argv[n_arg][index];
			}
		}
		std::cout << std::endl;
	}
	else
		std::cout << "LOUD AND UNBEARABLE FEEDBACK NOISE" << std::endl;
}