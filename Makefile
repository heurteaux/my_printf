##
## EPITECH PROJECT, 2023
## my_printf
## File description:
## makefile
##

NAME		=	libmy.a

SRCS	:=	$(shell find $(SRC_DIRS) -name "*.c" \
			-not -path "./tests/*" \
			-not -name "main_dev.c")

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

tests_run: re
	gcc -o $(TEST_NAME) $(SRC_TEST) $(NAME) $(TESTFLAGS)
	./unit_tests

dev_test: re
	gcc main_dev.c libmy.a
	make clean
	./a.out
