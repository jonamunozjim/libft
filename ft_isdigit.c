#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(unsigned char c)
{
	if (c >= '0' && c <= '9')
		return (2048);
	else
		return (0);
}
/*
int	main(int ac, char **av)
{
	if (ac != 2)
		printf("Error");
	else
	{
		printf("ft_isdigit: %i", ft_isdigit(av[1][0]));
		printf("\nisdigit: %i", isdigit(av[1][0]));
	}
	return (0);
}*/
