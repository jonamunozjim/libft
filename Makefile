# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmunoz-j <jmunoz-j@student.42malaga.c      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/29 17:24:54 by jmunoz-j          #+#    #+#              #
#    Updated: 2026/09/29 17:53:25 by jmunoz-j         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

## Var to compilator
NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
AR = ar rcs

## Var to files ft
SRC = ft_atoi.c \
	ft_isalpha.c \
	ft_itoa.c \
	ft_lstdelone.c \
	ft_lstnew.c \
	ft_memcpy.c \
	ft_putendl_fd.c \
	ft_strchr.c \
	ft_strlcat.c \
	ft_strncmp.c \
	ft_substr.c \
	ft_bzero.c \
	ft_isascii.c \
	ft_lstadd_back.c \
	ft_lstiter.c \
	ft_lstsize.c \
	ft_memmove.c \
	ft_putnbr_fd.c \
	ft_strdup.c \
	ft_strlcpy.c \
	ft_strnstr.c \
	ft_tolower.c \
	ft_calloc.c \
	ft_isdigit.c \
	ft_lstadd_front.c \
	ft_lstlast.c \
	ft_memchr.c \
	ft_memset.c \
	ft_putstr_fd.c \
	ft_striteri.c \
	ft_strlen.c \
	ft_strrchr.c \
	ft_toupper.c \
	ft_isalnum.c \
	ft_isprint.c \
	ft_lstclear.c \
	ft_lstmap.c \
	ft_memcmp.c \
	ft_putchar_fd.c \
	ft_split.c \
	ft_strjoin.c \
	ft_strmapi.c \
	ft_strtrim.c \

OBJ = $(SRC:%.c=%.o)

## Rules
all: $(NAME)

## compile rule
$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

## converting .c to .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

## Remove rules
clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
