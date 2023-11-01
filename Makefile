##
## EPITECH PROJECT, 2023
## my_printf
## File description:
## makefile
##

NAME		=	libmy.a

SRCS	    := $(shell find $(SRC_DIRS) -name "*.c" -not -path "./tests/*")

OBJS	=	$(SRCS:.c=.o)

CFLAGS	=	-Werror -Wall -Wextra

TEST_NAME	=	unit_tests

SRC_TEST	=	tests/test_my_printf.c

TESTFLAGS	=	-lcriterion --coverage

$(NAME):	$(OBJS)
	ar rc $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME) $(TEST_NAME)

re: fclean all

tests_run:	$(OBJS)
	gcc -o $(TEST_NAME) $(OBJS) $(SRC_TEST) $(TESTFLAGS)
	./unit_tests

dev_test: tests_run
	code_stl
