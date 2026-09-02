//#include <unistd.h>
//#include <ctype.h>
//#include <stdio.h>

int	ft_isalpha(unsigned char c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1024);
	else
		return (0);
}
/*
int	main(int ac, char **av)
{
	if (ac != 2)
		write(1, "err", 3);
	else
	{	printf("ft_isalpha: %i\nisalpha: %i", 
			ft_isalpha(av[1][0]), isalpha(av[1][0]));
	}
	return (0);
}*/
