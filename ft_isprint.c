//#include <stdio.h>
//#include <ctype.h>
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 176)
		return (16384);
	else
		return (0);
}
/*
int	main(void)
{
	printf("ft_isprint:%i\n", ft_isprint('a'));
	printf("isprint: %i", isprint('a'));
	printf("\n----\n");
	printf("ft_isprint: %i\n", ft_isprint('\0'));
	printf("isprint: %i", isprint('\0'));
}*/
