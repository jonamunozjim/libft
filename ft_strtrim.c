/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz-j <jmunoz-j@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 14:41:00 by jmunoz-j          #+#    #+#             */
/*   Updated: 2026/09/23 14:44:22 by jmunoz-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/****************************************************************
 * 								*
 * Description:							*
 * 	Allocate memory with malloc and return a copy of 's1'	*
 * 	with the characters of 'set' deleted at start and end	*
 * 	of the string,						*
 *								*
 * Return value:						*
 * 	Trimmed string.						*
 * 	NULL if memory allocation fails				*
 * 								*
 ***************************************************************/

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
