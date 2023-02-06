#include "./PhoneBook.hpp"

void Contact::SetFistname (std::string value) {
	first_name = value;
}

void Contact::SetLastname (std::string value) {
	last_name = value;
}

void Contact::SetNickname (std::string value) {
	nickname = value;
}

void Contact::SetSecret (std::string value) {
	secret = value;
}

void Contact::SetPhonenumber (std::string value) {
	phone_number = value;
}

std::string Contact::GetFristname () {return (first_name);}
std::string Contact::GetLastname () {return (last_name);}
std::string Contact::GetNickname () {return (nickname);}
std::string Contact::GetSecret () {return (secret);}
std::string Contact::GetPhonenumber () {return (phone_number);}