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

#include "class.hpp"
#include <iostream>

int main()
{
	std::string str1;
	std::cin >> str1;

	while(str1.compare("EXIT"))
	{
		std::cin >> str1;
	}
	return 0;
}
