/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteyssed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/15 20:22:13 by eteyssed          #+#    #+#             */
/*   Updated: 2015/06/15 20:22:13 by eteyssed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>

class Contact
{
public:
	static int	num;
	Contact(void);
	~Contact(void);
	void	create(void);
	void	display(void) const;
	void	list(int index);

private:
	std::string	_firstname;
	std::string	_lastname;
	std::string	_nickname;
	std::string	_login;
	std::string _postadress;
	std::string _emailadress;
	std::string	_phone;
	std::string	_birthday;
	std::string	_favmeal;
	std::string	_underwearcolor;
	std::string _darkestsecret;
};

#endif