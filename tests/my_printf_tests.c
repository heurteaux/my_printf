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

int my_printf(char *format, ...);

Test(my_printf, test1, .init = redirect_all_stdout)
{
cr_assert_eq(my_printf("Hello %s!\n", "World"), 13);
cr_assert_stdout_eq_str("Hello World!\n", "");
}

Test(my_printf, test2, .init = redirect_all_stdout)
{
    cr_assert_eq(my_printf("neg_val : %d\n", -16), 14);
    cr_assert_stdout_eq_str("neg_val : -16\n", "");
}

Test(my_printf, test3, .init = redirect_all_stdout)
{
    cr_assert_eq(my_printf("char_c : %c\n", 'h'), 11);
    cr_assert_stdout_eq_str("char_c : h\n", "");
}

Test(my_printf, test4, .init = redirect_all_stdout)
{
cr_assert_eq(my_printf("percent : %%\n"), 12);
cr_assert_stdout_eq_str("percent : %\n", "");
}

Test(my_printf, test5, .init = redirect_all_stdout)
{
cr_assert_eq(my_printf("calc : %d\n", 1+1),9);
cr_assert_stdout_eq_str("calc : 2\n", "");
}

Test(my_printf, test6, .init = redirect_all_stdout)
{
cr_assert_eq(my_printf("pos_val : %d\n", 452), 14);
cr_assert_stdout_eq_str("pos_val : 452\n", "");
}

Test(my_printf, test7,.init = redirect_all_stdout)
{
cr_assert_eq(my_printf("zero : %d\n", 0), 9);
cr_assert_stdout_eq_str("zero : 0\n", "");
}

Test(my_printf, test8,.init = redirect_all_stdout)
{
cr_assert_eq(my_printf("test : %hello world\n"), 19);
cr_assert_stdout_eq_str("test : hello world\n", "");
}

Test(my_printf, test9,.init = redirect_all_stdout)
{
cr_assert_eq(my_printf("int_i : %i\n", 13), 11);
cr_assert_stdout_eq_str("int_i : 13\n", "");
}

Test(my_printf, test10,.init = redirect_all_stdout)
{
cr_assert_eq(my_printf("last_char : %"), 12);
cr_assert_stdout_eq_str("last_char : ", "");
}

Test(my_printf, test11,.init = redirect_all_stdout)
{
cr_assert_eq(my_printf("num float : %f\n", 34.5), 18);
cr_assert_stdout_eq_str("num float : %f\n", "");
}

Test(my_printf, test12,.init = redirect_all_stdout)
{
cr_assert_eq(my_printf("num float : %f\n", 12.5), 18);
cr_assert_stdout_eq_str("num float : %f\n", "");
}

Test(my_printf, test13,.init = redirect_all_stdout)
{
cr_assert_eq(my_printf("num float : %f\n", 19), 14);
cr_assert_stdout_eq_str("num float : %f\n", "");
}

Test(my_printf, test14,.init = redirect_all_stdout)
{
cr_assert_eq(my_printf("floating pointing number is %e\n", 100.0), 33);
cr_assert_stdout_eq_str("floating pointing number is %e\n", "");
}

Test(my_printf, test15,.init = redirect_all_stdout)
{
cr_assert_eq(my_printf("floating pointing number is %e\n", 112.5), 33);
cr_assert_stdout_eq_str("floating pointing number is %e\n", "");
}

Test(my_printf, test16,.init = redirect_all_stdout)
{
cr_assert_eq(my_printf("double is %lf\n", 25), 12);
cr_assert_stdout_eq_str("double is %lf\n", "");
}

Test(my_printf, test17,.init = redirect_all_stdout)
{
cr_assert_eq(my_printf("double is %lf\n", 32.8), 14);
cr_assert_stdout_eq_str("double is %lf\n", "");
}

Test(my_printf, test18,.init = redirect_all_stdout)
{
cr_assert_eq(my_printf("long double is %Lf\n", 42.9), 19);
cr_assert_stdout_eq_str("long double is %Lf\n", "");
}

Test(my_printf, test19,.init = redirect_all_stdout)
{
cr_assert_eq(my_printf("octal integer is %o\n", 10), 19);
cr_assert_stdout_eq_str("octal integer is %o\n", "");
}

Test(my_printf, test20,.init = redirect_all_stdout)
{
cr_assert_eq(my_printf("octal integer is %o\n", 5), 18);
cr_assert_stdout_eq_str("octal integer is %o\n", "");
}

Test(my_printf, test21,.init = redirect_all_stdout)
{
cr_assert_eq(my_printf("short unsigned integer %u\n", 4), 25);
cr_assert_stdout_eq_str("short unsigned integer %u\n", "");
}

Test(my_printf, test22,.init = redirect_all_stdout)
{
cr_assert_eq(my_printf("short unsigned integer %u\n", -5), 26);
cr_assert_stdout_eq_str("short unsigned integer %u\n", "");
}

Test(my_printf, test23,.init = redirect_all_stdout)
{
cr_assert_eq(my_printf("long decimal integer %ld\n", 5), 22);
cr_assert_stdout_eq_str("short unsigned integer %ld\n", "");
}

Test(my_printf, test24,.init = redirect_all_stdout)
{
cr_assert_eq(my_printf("hexadecimal integer %x\n", 2), 21);
cr_assert_stdout_eq_str("hexadecimal integer %x\n", "");
}
