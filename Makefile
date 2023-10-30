##
## EPITECH PROJECT, 2023
## my_printf
## File description:
## makefile
##

NAME		=	libmy.a

SRCS		=	base_lib/my_put_nbr_loops.c	\
				base_lib/my_put_nbr.c		\
				base_lib/my_putchar.c		\
				base_lib/my_putstr.c		\
				base_lib/my_strlen.c		\
				base_lib/my_put_nbr_base.c	\
				base_lib/my_put_nbr_base_loops.c	\
				base_lib/my_strncmp.c	\
				internal_functions/display_args.c	\
				internal_functions/display_args_math.c	\
				internal_functions/put_address.c	\
				internal_functions/display_double.c	\
				internal_functions/display_long_double.c	\
				internal_functions/display_rounded_float.c	\
				internal_functions/display_scientific.c	\
				internal_functions/display_args_complex_types.c	\
				internal_functions/specifiers_collection.c	\
				internal_functions/specifiers_manipulation.c	\
				internal_functions/data_types/types_instancing.c	\
				my_printf.c

OBJS	=	$(SRCS:.c=.o)

CFLAGS	=	-Werror -Wall -Wextra

TEST_NAME	=	unit_tests

SRC_TEST	=	tests/my_printf_tests.c

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
