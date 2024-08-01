CC = gcc
CFLAGS = -Wall -Werror -Wextra -g
DEPS = header.h
OBJ = main.o error.o basics_funcs.o basics_funcs_2.o basics_funcs_3.o dict_import.o dict_to_array.o verify.o hashmap.o ft_strtok.o find_funcs.o
NAME = rush-02

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $@ $^

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all