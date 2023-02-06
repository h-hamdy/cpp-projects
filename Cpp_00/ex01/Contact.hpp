#ifndef Contact_HPP
# define Contact_HPP

# include <iostream>

class Contact {
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	secret;
		std::string	phone_number;
	public:
		void SetFistname (std::string value);
		void SetLastname (std::string value);
		void SetNickname (std::string value);
		void SetSecret (std::string value);
		void SetPhonenumber (std::string value);

		std::string GetFristname ();
		std::string GetLastname ();
		std::string GetNickname ();
		std::string GetSecret ();
		std::string GetPhonenumber ();
};

#endif