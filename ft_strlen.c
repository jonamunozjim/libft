//#include <stdio.h>
//#include <string.h>
size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/*
int	main(void)
{
	char	str[] = "Hola";

	ft_strlen(str);
	printf ("ft_length: %lu\nlength: %lu",
		       	ft_strlen (str), strlen(str));
		return (0);
}*/
