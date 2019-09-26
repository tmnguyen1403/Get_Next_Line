NAME = libft.a
SRCS = ft_*.c
OBJECTS = ft_*.o
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)

$(OBJECTS):
	gcc $(FLAGS) -c $(SRCS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
