/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz-j <jmunoz-j@student.42malaga>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 20:29:48 by jona              #+#    #+#             */
/*   Updated: 2026/09/28 21:42:44 by jona             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	word_count(char const *s, char c)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (i == 0 || s[i] == c)
		{
			i++;
			while (s[i] != c && s[i])
				i++;
			count++;
		}
		else
			i++;
	}
	return (count);
}

unsigned int	*word_length(char const *s, char c, unsigned count) 
{
	unsigned int	*len_arr;
	unsigned int	i;
	unsigned int	len;
	unsigned int	j;

	i = 0;
	j = 0;
	len = 0;
	len_arr = malloc (count * sizeof(int));
	while (j < count)
	{
		while (s[i] != c && s[i])
		{
			len++;
			i++;
		}
		len_arr[j] = len;
		len = 0;
		i++;
		j++;
	}
	return (len_arr);
}

void	fill_split(char **out, char *s, char c, unsigned int count)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (j < count)
	{
		while (s[i] != c)
		{
			out[j][i] = s[i];
			i++;
		}
		out [j][i] = '\n';
		j++;
	}
}
		
char **ft_split(char const *s, char c)
{
	unsigned int	i;
	unsigned int	count;
	char		**out;
	unsigned int	*len;
	
	i = 0;
	count = word_count (s, c);
	len = word_length (s, c, count);
	out = malloc (50 * sizeof(char));
	while (i < count)
	{
		out[i] = malloc ((len[i] + 1) * sizeof(char));
		i++;
	}
	fill_split (out, (char *)s, c, count);
	i = 0;
	free(len);
	return (out);
}

int	main(void)
{
	char	s[] = "Hola que tal como estas";
	char	c;
	char	**split;
	int 	i;
	int	count;
	
	i = 0;
	c = ' ';
	count = word_count (s, c);
	//s = ft_strdup ("Hola que tal como estas");
	printf("Str: %s\nc: %c\nword_count: %i\n",s, c, count);
	split = ft_split(s, c);
	while (i < count)
	{
		printf("%s\n", split[i]);
		i++;
	}
	free (split);
	//free (s);
	return (0);
}

