void ft_bzero(void s[n], size_t n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		s[i] = '\0';
		i++;
	}
}

