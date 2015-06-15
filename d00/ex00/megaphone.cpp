#include <unistd.h>

void	my_mega_print(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		write(1, &str[i], 1);
		i++;
	}
}

int main(int ac, char **av)
{
	int i;

	i = 1;
	if(ac == 1)
		write(1, "* LOUD AND UNBEARABLE FEEDBACK NOISE *", 38);
	else
		while (av[i])
		{
			my_mega_print(av[i]);
			i++;
		}
	write(1, "\n", 1);
	return 0;
}