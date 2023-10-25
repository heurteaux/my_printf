/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** tests my_printf
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

int mini_printf(char *format, ...);

Test(mini_printf, test1, .init = redirect_all_stdout)
{
cr_assert_eq(mini_printf("Hello %s!\n", "World"), 13);
cr_assert_stdout_eq_str("Hello World!\n", "");
}

Test(mini_printf, test2, .init = redirect_all_stdout)
{
    cr_assert_eq(mini_printf("neg_val : %d\n", -16), 14);
    cr_assert_stdout_eq_str("neg_val : -16\n", "");
}

Test(mini_printf, test3, .init = redirect_all_stdout)
{
    cr_assert_eq(mini_printf("char_c : %c\n", 'h'), 11);
    cr_assert_stdout_eq_str("char_c : h\n", "");
}

Test(mini_printf, test4, .init = redirect_all_stdout)
{
cr_assert_eq(mini_printf("percent : %%\n"), 12);
cr_assert_stdout_eq_str("percent : %\n", "");
}

Test(mini_printf, test5, .init = redirect_all_stdout)
{
cr_assert_eq(mini_printf("calc : %d\n", 1+1),9);
cr_assert_stdout_eq_str("calc : 2\n", "");
}

Test(mini_printf, test6, .init = redirect_all_stdout)
{
cr_assert_eq(mini_printf("pos_val : %d\n", 452), 14);
cr_assert_stdout_eq_str("pos_val : 452\n", "");
}

Test(mini_printf, test7,.init = redirect_all_stdout)
{
cr_assert_eq(mini_printf("zero : %d\n", 0), 9);
cr_assert_stdout_eq_str("zero : 0\n", "");
}

Test(mini_printf, test8,.init = redirect_all_stdout)
{
cr_assert_eq(mini_printf("test : %hello world\n"), 19);
cr_assert_stdout_eq_str("test : hello world\n", "");
}

Test(mini_printf, test9,.init = redirect_all_stdout)
{
cr_assert_eq(mini_printf("int_i : %i\n", 13), 11);
cr_assert_stdout_eq_str("int_i : 13\n", "");
}

Test(mini_printf, test10,.init = redirect_all_stdout)
{
cr_assert_eq(mini_printf("last_char : %"), 12);
cr_assert_stdout_eq_str("last_char : ", "");
}
