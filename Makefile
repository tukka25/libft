NAME = libft.a

sources = \
	ft_atoi.c ft_isalnum.c ft_memchr.c ft_bzero.c ft_toupper.c ft_tolower.c\
	ft_strlen.c ft_memset.c ft_memcpy.c ft_isprint.c ft_isdigit.c ft_isascii.c\
	ft_isalpha.c ft_memcmp.c ft_memmove.c ft_memcmp.c ft_strchr.c ft_strlcat.c\
	ft_strncmp.c ft_strnstr.c ft_calloc.c ft_strdup.c

objects = $(sources:.c = .o)


CC = gcc

CC_FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(objects)
	$(AR) -r $@ $?

%.o: %.c
	$(cc) -c $(CC_FLAGS ) $?

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)
re:
	fclean all
.PHONY: all bonus clean fclean re