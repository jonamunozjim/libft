/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz-j <jmunoz-j@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 09:24:59 by jmunoz-j          #+#    #+#             */
/*   Updated: 2026/09/23 12:06:59 by jmunoz-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h> //quitar!!

void	ft_bzero(void *s, size_t n);
int	ft_isalnum(int c);
int	ft_isalpha(unsigned char c);
int	ft_isascii(int c);
int	ft_isdigit(unsigned char c);
int	ft_isprint(int c);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
size_t	ft_strlen(const char *s);
int	ft_tolower(int c);
int	ft_toupper(int c);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strrchr(const char *s, int c);
char	*strnstr(const char *big, const char *little, size_t len);
void	*memchr(const void *s, int c, size_t n);
int	memcmp(const void *s1, const void *s2, size_t n);


#endif
