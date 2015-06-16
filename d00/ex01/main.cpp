/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteyssed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/15 20:19:43 by eteyssed          #+#    #+#             */
/*   Updated: 2015/06/15 20:19:44 by eteyssed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

int Contact::num = 0;

int main()
{
	int i = 0;
	int n = 0;
	std::string cmd;
	Contact *phonebook[8];

	std::cout << "\033[1;33mThis is PhoneBook 1.0, welcome !\033[0m" << std::endl;
	std::cout << "\033[1;33mADD to add a contact to your phonebook.\033[0m" << std::endl;
	std::cout << "\033[1;33mSEARCH to search a contact in your phonebook.\033[0m" << std::endl;
	std::cout << "\033[1;33mEXIT to quit the phonebook.\033[0m" << std::endl;

	while(cmd.compare("EXIT"))
	{
		i = 0;
		std::cout << "$> ";
		std::cin >> cmd;
		n = Contact::num;
		if(!cmd.compare("ADD"))
		{
			if (n < 8)
			{
				phonebook[n] = new Contact;
			}
			else
				std::cout << "\033[1;31mMore than 8 contacts.\033[0m" << std::endl;
		}
		else if (!cmd.compare("SEARCH") && n > 0)
		{
			std::cout << "\033[1;31mThese are the existing contacts :\033[0m" << std::endl;
			while (i < n)
			{
				phonebook[i]->list(i);
				i++;
			}
			std::cout << "\033[1;31mChoose a contact, by index, to display it (or die) :\033[0m" << std::endl;
			std::cin >> i;
			if (i < n)
				phonebook[i]->display();
			else
				std::cout << "\033[1;31mNo such contact.\033[0m" << std::endl;
		}
	}
	return 0;
}
