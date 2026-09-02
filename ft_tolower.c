//#include <stdio.h>
//#include <ctype.h>

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	else
		return (c);
}
/*
int	main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	printf("tolower: %c\n", tolower (av[1][0]));
	printf("ft_tolower: %c\n", ft_tolower (av[1][0]));
	return (0);
}*/
