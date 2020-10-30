##
## EPITECH PROJECT, 2020
## GENERIC LINKED LIST
## File description:
## Makefile
##

SRC = 	src/list.c 					\
		src/list_bubble_sort.c 		\
		src/node.c 					\
		src/node_data.c 			\
		src/struct_create.c 		\
		src/struct_destroy.c 		\
		src/persona.c 				\

OBJ = $(SRC:%.c=%.o)
OBJ += src/main.o

TESTS = \

COVERAGE = -lcriterion --coverage

UT = ./unit_tests

NAME = gen

CC = gcc

INCLUDE = -I ./include

CFLAGS = $(INCLUDE) -Wall -Wextra -Wshadow

LDFLAGS = \

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

tests_run: clean
	$(CC) -o $(UT) $(TESTS) $(SRC) $(COVERAGE) $(CFLAGS) $(LDFLAGS)
	$(UT)

clean:
	$(RM) $(OBJ)
	$(RM) *.gc*

fclean: clean
	$(RM) $(NAME)
	$(RM) $(UT)

re: fclean all