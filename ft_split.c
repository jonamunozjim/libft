/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz-j <jmunoz-j@student.42malaga>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 20:29:48 by jona              #+#    #+#             */
/*   Updated: 2026/09/28 22:45:15 by jona             ###   ########.fr       */
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
			if (s[i + 1] != c)
				count++;
		}
		else
			i++;
	}
	return (count);
}

void	fill_split(char **out, char const *s, char c, unsigned int count)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	char			*temp;

	temp = malloc ((ft_strlen (s) + 1) * sizeof(char));
	i = 0;
	j = 0;
	k = 0;
	while (j < count)
	{
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i])
		{
			temp[k] = s[i];
			i++;
			k++;
		}
		temp[k] = '\0';
		out[j] = strdup (temp);
		j++;
		k = 0;
	}
	free (temp);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	count;
	char			**out;

	count = word_count (s, c);
	out = malloc ((count + 1) * sizeof(char *));
	fill_split (out, (char *)s, c, count);
	out[count] = NULL;
	return (out);
}

int	main(void)
{
	char	s[] = "Hola   que tal como estas";
	char	c;
	char	**split;
	int 	i;
	int	count;
	
	i = 0;
	c = ' ';
	count = word_count (s, c);
	//s = ft_strdup ("Hola que tal como estas");
	printf("Str: %s\nc: %c\nword_count: %i\n---Split\n",s, c, count);
	split = ft_split(s, c);
	while (i < count)
	{
		printf("split[%i]: %s\n", i, split[i]);
		i++;
	}
	i = 0;
	while (i < count)
	{
		free(split[i]);
		i++;
	}
	free (split);
	//free (s);
	return (0);
}
