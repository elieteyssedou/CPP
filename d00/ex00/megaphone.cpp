/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteyssed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/15 20:17:15 by eteyssed          #+#    #+#             */
/*   Updated: 2015/06/15 20:17:16 by eteyssed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	my_mega_print(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	std::cout << str;
}

int main(int ac, char **av)
{
	int i;

	i = 1;
	if(ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		while (av[i])
		{
			my_mega_print(av[i]);
			i++;
		}
	std::cout << std::endl;
	return 0;
}
