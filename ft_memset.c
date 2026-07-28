void *ft_memset(void s[n], int c, size_t n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		s[i] = c;
		i++;
	}
}

