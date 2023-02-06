#include <iostream>
#include <fstream>

int main (int ac, char **av) 
{
	std::fstream 	fi;
	std::fstream 	fo;
	std::string		str;
	std::string		line;
	

	if (ac == 4)
	{
		std::string		s1 = av[1];
		std::string		s2 = av[2];
		std::string		s3 = av[3];
		fi.open(av[1]);
		if (!fi)
		{
			std::cout << "file doesn't exist" << std::endl;
			return (0); 
		}
		s1.append(".replace");
		fo.open (s1.c_str(), std::fstream::in | std::fstream::out | std::fstream::trunc);
		if (fi.is_open())
		{
			int index = 0;
			for (;!fi.eof();) {
				std::getline(fi, str);
				if (str.empty())
					fo << "\n";
				for (int j = 0; str[j];) {
					index = str.find(av[2]);
					if (index != -1) {
						str.replace (index, s2.length(), av[3]);
						line.append(str.c_str());
						j = index;
					}
					else if (index == -1) {
						fo << str << std::endl;
						break;
					}
					else
						fo << line << std::endl;
				}
				}
			}
		else
			std::cout << "Error opening file" << std::endl;
		return 0;
	}
}