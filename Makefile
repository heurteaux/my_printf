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

# Automatically added .c files
			./tests/my_printf_tests.c \
			./base_lib/my_putchar.c \
			./base_lib/my_put_nbr.c \
			./base_lib/my_putstr.c \
			./base_lib/my_strlen.c \
			./base_lib/my_put_nbr_loops.c \
			./base_lib/my_strncmp.c \
			./base_lib/my_put_nbr_base.c \
			./base_lib/my_put_nbr_base_loops.c \
			./base_lib/my_getnbr.c \
			./internal_functions/put_address.c \
			./internal_functions/specifiers_collection.c \
			./internal_functions/nb_len.c \
			./internal_functions/specifiers_manipulation.c \
			./internal_functions/data_types/types_instancing.c \
			./internal_functions/conversion_specifiers/basic_conversion_modifiers.c \
			./internal_functions/display_args/display_args.c \
			./internal_functions/display_args/display_args_complex_types.c \
			./internal_functions/display_args/display_args_math.c \
			./internal_functions/display_args/display_double.c \
			./internal_functions/display_args/display_long_double.c \
			./internal_functions/display_args/display_rounded_float.c \
			./internal_functions/display_args/display_scientific.c \
			./internal_functions/display_args/display_unsigned_nbr.c \
			./internal_functions/display_args/display_and_count_maj_hex.c \
			./internal_functions/display_args/display_maj_scientific.c \
			./my_printf.c \

SRCS += \
