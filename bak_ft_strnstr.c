/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz-j <jmunoz-j@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 14:27:09 by jmunoz-j          #+#    #+#             */
/*   Updated: 2026/09/23 10:03:19 by jmunoz-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	int		str_found;

	i = 0;
	j = 0;
	str_found = 0;
	if (ft_strlen(little) == 0)
		return ((char *)big);
	while (big[i] && i < len && !str_found)
	{
		if (big[i] == little[j])
		{
			while (little[j] && big[i] && !str_found)
			{
				if (little[j] == big[i + j])
				{
					j++;
					if (little[j] == '\0')
						str_found = 1;
				}
				else
					j++;
			}
		}
		else
			i++;
	}
	if (str_found)
		return (&((char *)big)[i]);
	else
		return (NULL);
}

//*Main inputs >> av[1][0]: len; av[2]: big; av[3]: little
/*int	main(int ac, char **av)
{
	int	len;

	len = av[1][0] - '0';
	if (ac == 1)
		printf ("No strings added");
	printf ("Len: %i\nBig: %s\nLittle: %s\nFound: %s\n", 
	len, av[2], av[3], strnstr(av[2], av[3], len));
	return (0);
}
*/
