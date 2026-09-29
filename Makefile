#Nombre, compilador y flags

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror

#Sources
SRCS= srcs/ft_putchar.c\
      srcs/ft_putstr.c\
      srcs/ft_strcmp.c\
      srcs/ft_strlen.c\
      srcs/ft_swap.c

#Fuentes y objetos
OBJS = $(SRCS:.c=.o)

all: $(NAME)

#Empaquetar lib
$(NAME): $(OBJS)
	ar crs $(NAME) $(OBJS)

#Regla para compliar .c a .o
%.o:%.c 
	$(CC) $(CFLAGS) -I includes/ -c $< -o $@

#Limpiar archivos objetos
clean:
	rm -f $(OBJS)

#Limpiar todo
fclean: clean
	rm -f $(NAME)

#Recompilar todo
re: fclean all

.PHONY: all clean fclean re


