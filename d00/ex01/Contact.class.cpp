
#include "Contact.class.hpp"

Contact::Contact(void)
{
	create();
	this->num++;
}

Contact::~Contact(void)
{
	return;
}

void	Contact::create(void)
{
	std::cout << "\033[1;32mFirstname : \033[0m" << std::endl;
	std::cin >> this->_firstname;
	
	std::cout << "\033[1;32mLastname : \033[0m" << std::endl;
	std::cin >> this->_lastname;
	
	std::cout << "\033[1;32mNickname : \033[0m" << std::endl;
	std::cin >> this->_nickname;
	
	std::cout << "\033[1;32mLogin : \033[0m" << std::endl;
	std::cin >> this->_login;
	
	std::cout << "\033[1;32mPostadress : \033[0m" << std::endl;
	std::cin >> this->_postadress;
	
	std::cout << "\033[1;32mEmail : \033[0m" << std::endl;
	std::cin >> this->_emailadress;
	
	std::cout << "\033[1;32mBirthday : \033[0m" << std::endl;
	std::cin >> this->_birthday;
	
	std::cout << "\033[1;32mFavorite meal : \033[0m" << std::endl;
	std::cin >> this->_favmeal;
	
	std::cout << "\033[1;32mUnderwear Color : \033[0m" << std::endl;
	std::cin >> this->_underwearcolor;
	
	std::cout << "\033[1;32mDarkest Secret : \033[0m" << std::endl;
	std::cin >> this->_darkestsecret;

	return;
}

void	Contact::display(void) const
{
	std::cout << "\033[1;32mFirstname : \033[0m" << this->_firstname << std::endl;

	std::cout << "\033[1;32mLastname : \033[0m" << this->_lastname << std::endl;
	
	std::cout << "\033[1;32mNickname : \033[0m" << this->_nickname << std::endl;
	
	std::cout << "\033[1;32mLogin : \033[0m" << this->_login << std::endl;
	
	std::cout << "\033[1;32mPostadress : \033[0m" << this->_postadress << std::endl;
	
	std::cout << "\033[1;32mEmail : \033[0m" << this->_emailadress << std::endl;
	
	std::cout << "\033[1;32mBirthday : \033[0m" << this->_birthday << std::endl;
	
	std::cout << "\033[1;32mFavorite meal : \033[0m" << this->_favmeal << std::endl;
	
	std::cout << "\033[1;32mUnderwear Color : \033[0m" << this->_underwearcolor << std::endl;
	
	std::cout << "\033[1;32mDarkest Secret : \033[0m" << this->_darkestsecret << std::endl;

	return;
}

void Contact::list(int index)
{
	std::cout << "         " << std::to_string(index) << "|";

	if (this->_firstname.length() > 10)
		std::cout << this->_firstname.substr(0, 9) << ".|";
	else
		std::cout << std::string(10 - this->_firstname.length(), ' ') << this->_firstname << "|";

	if (this->_lastname.length() > 10)
		std::cout << this->_lastname.substr(0, 9) << ".|";
	else
		std::cout << std::string(10 - this->_lastname.length(), ' ') << this->_lastname << "|";

	if (this->_nickname.length() > 10)
		std::cout << this->_nickname.substr(0, 9) << ".|" << std::endl;
	else
		std::cout << std::string(10 - this->_nickname.length(), ' ') << this->_nickname << "|" << std::endl;
}