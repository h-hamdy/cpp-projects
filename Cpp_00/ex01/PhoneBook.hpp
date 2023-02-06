#ifndef PhoneBook_HPP
# define PhoneBook_HPP

# define A "ADD"
# define S "SEARCH"
# define E "EXIT"

# include "./Contact.hpp"
# include <string.h>
# include <iomanip>
# include <cctype>

class PhoneBook {
	private:
		Contact	_contact[8];
	public:
		Contact get(int flag);
		void add(int index);
		static std::string ft_getline( void );
		PhoneBook ();
		~PhoneBook ();
};

#endif
