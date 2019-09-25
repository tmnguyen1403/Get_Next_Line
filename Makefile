NAME = test.out
SRCS = get_next_line.c
OBJECTS = get_next_line.o
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	gcc $(FLAGS) -o $(NAME) $(OBJECTS)

$(OBJECTS):
	gcc $(FLAGS) -c $(SRCS)

clean:
	rm -f $(NAME)

fclean: clean
	rm -f $(OBJECTS)

re: fclean all
