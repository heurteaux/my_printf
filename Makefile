##
## EPITECH PROJECT, 2023
## mini_printf
## File description:
## makefile
##

TEST_NAME	=	unit_tests

SRC_TEST	=	tests/my_printf_tests.c

TESTFLAGS	=	-lcriterion --coverage

tests_run:
	gcc -o $(TEST_NAME) *.c $(SRC_TEST) $(TESTFLAGS)
	./unit_tests
