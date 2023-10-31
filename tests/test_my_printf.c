/*
** EPITECH PROJECT, 2023
** Created by seila.aillet@epitech.eu on 27/10/23.
** File description:
** test_my_printf.c
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
    char str[10] = {0};
    my_printf("%s", "salut");
    sprintf(str, "%s", "salut");
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test2, .init = redirect_all_stdout)
{
    char str[10] = {0};
    my_printf("%s", "bonjour");
    sprintf(str, "%s", "bonjour");
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test3, .init = redirect_all_stdout)
{
    char str[15] = {0};
    my_printf("%s", "hello world");
    sprintf(str, "%s", "hello world");
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test4, .init = redirect_all_stdout)
{
    char str[15] = {0};
    my_printf("%i", 2000);
    sprintf(str, "%i", 2000);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test5, .init = redirect_all_stdout)
{
    char str[15] = {0};
    my_printf("%d", 200000);
    sprintf(str, "%d", 200000);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test6, .init = redirect_all_stdout)
{
    char str[10] = {0};
    char x = 'A';
    my_printf("%c", x);
    sprintf(str, "%c", x);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test7, .init = redirect_all_stdout)
{
    char str[10] = {0};
    float x = 1.50;
    my_printf("%f", x);
    sprintf(str, "%f", x);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test8, .init = redirect_all_stdout)
{
    char str[15] = {0};
    double x = 1.2555;
    my_printf("%f", x);
    sprintf(str, "%f", x);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test9, .init = redirect_all_stdout)
{
    char str[15] = {0};
    double x = 1.25005;
    my_printf("%f", x);
    sprintf(str, "%f", x);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test10, .init = redirect_all_stdout)
{
    char str[15] = {0};
    double x = 20000;
    my_printf("%e", x);
    sprintf(str, "%e", x);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test11, .init = redirect_all_stdout)
{
    char str[20] = {0};
    double x = 0.54;
    my_printf("%e", x);
    sprintf(str, "%e", x);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test12, .init = redirect_all_stdout)
{
    char str[25] = {0};
    double x = 0.054;
    my_printf("%e", x);
    sprintf(str, "%e", x);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test13, .init = redirect_all_stdout)
{
    char str[25] = {0};
    double x = 0.0054;
    my_printf("%e", x);
    sprintf(str, "%e", x);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test14, .init = redirect_all_stdout)
{
    char str[25] = {0};
    double x = 0.00054;
    my_printf("%e", x);
    sprintf(str, "%e", x);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test15, .init = redirect_all_stdout)
{
    char str[20] = {0};
    double x = 0.000054;
    my_printf("%e", x);
    sprintf(str, "%e", x);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test16, .init = redirect_all_stdout)
{
    char str[15] = {0};
    double x = 20000000;
    my_printf("%e", x);
    sprintf(str, "%e", x);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test17, .init = redirect_all_stdout)
{
    char str[15] = {0};
    double x = 2.0000056;
    my_printf("%e", x);
    sprintf(str, "%e", x);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test18, .init = redirect_all_stdout)
{
    char str[15] = {0};
    double x = 2.00340056;
    my_printf("%e", x);
    sprintf(str, "%e", x);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test19, .init = redirect_all_stdout)
{
    char str[15] = {0};
    double x = 2.150340056;
    my_printf("%e", x);
    sprintf(str, "%e", x);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test20, .init = redirect_all_stdout)
{
    char str[15] = {0};
    double x = 2.155756;
    my_printf("%e", x);
    sprintf(str, "%e", x);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test21, .init = redirect_all_stdout)
{
    char str[15] = {0};
    double x = 2.156;
    my_printf("%e", x);
    sprintf(str, "%e", x);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test22, .init = redirect_all_stdout)
{
    char str[20] = {0};
    int x = 31;
    my_printf("%o", x);
    sprintf(str, "%o", x);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test23, .init = redirect_all_stdout)
{
    char str[20] = {0};
    int x = 31;
    my_printf("%o", x);
    sprintf(str, "%o", x);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test24, .init = redirect_all_stdout)
{
    char str[25] = {0};
    double x = 0.980000;
    my_printf("%e", x);
    sprintf(str, "%e", x);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test25, .init = redirect_all_stdout)
{
    char str[50] = {0};
    int x = -20;
    my_printf("%o", x);
    sprintf(str, "%o", x);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test26, .init = redirect_all_stdout)
{
    char str[50] = {0};
    int x = -10;
    my_printf("%o", x);
    sprintf(str, "%o", x);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test27, .init = redirect_all_stdout)
{
    char str[50] = {0};
    int x = -20;
    my_printf("%x", x);
    sprintf(str, "%x", x);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test28, .init = redirect_all_stdout)
{
    char str[50] = {0};
    int x = 20;
    my_printf("%x", x);
    sprintf(str, "%x", x);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test29, .init = redirect_all_stdout)
{
    char str[50] = {0};
    int x = 40;
    my_printf("%x", x);
    sprintf(str, "%x", x);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test30, .init = redirect_all_stdout)
{
    char str[27] = {0};
    my_printf("%s", "abcdefghijklmnopqrstuvwxyz");
    sprintf(str, "%s", "abcdefghijklmnopqrstuvwxyz");
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test31, .init = redirect_all_stdout)
{
    char str[70] = {0};
    my_printf("%s", "abcdefghijklmnisjiljsqjlqjskljjfqsokoqsfkoqfsoioiqsfopqrstuvwxyz");
    sprintf(str, "%s", "abcdefghijklmnisjiljsqjlqjskljjfqsokoqsfkoqfsoioiqsfopqrstuvwxyz");
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test32, .init = redirect_all_stdout)
{
    char str[10] = {0};
    char x = 'a';
    my_printf("%c", x);
    sprintf(str, "%c", x);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test33, .init = redirect_all_stdout)
{
    char str[10] = {0};
    char x = '1';
    my_printf("%c", x);
    sprintf(str, "%c", x);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test34, .init = redirect_all_stdout)
{
    char str[10] = {0};
    char x = '10';
    my_printf("%c", x);
    sprintf(str, "%c", x);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test35, .init = redirect_all_stdout)
{
    char str[25] = {0};
    double x = 1.2500895;
    my_printf("%f", x);
    sprintf(str, "%f", x);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test36, .init = redirect_all_stdout)
{
    char str[15] = {0};
    my_printf("%d", 200);
    sprintf(str, "%d", 200);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test37, .init = redirect_all_stdout)
{
    char str[25] = {0};
    my_printf("%d", 100000000);
    sprintf(str, "%d", 100000000);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test38, .init = redirect_all_stdout)
{
    char str[25] = {0};
    my_printf("%d", 100000000000);
    sprintf(str, "%d", 100000000000);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test39, .init = redirect_all_stdout)
{
    char str[25] = {0};
    my_printf("%d", 1000000000000000000000);
    sprintf(str, "%d", 1000000000000000000000);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test40, .init = redirect_all_stdout)
{
    char str[25] = {0};
    my_printf("%i", 100);
    sprintf(str, "%i", 100);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test41, .init = redirect_all_stdout)
{
    char str[25] = {0};
    my_printf("%i", 100000);
    sprintf(str, "%i", 100000);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test42, .init = redirect_all_stdout)
{
    char str[25] = {0};
    my_printf("%i", 1000050550500);
    sprintf(str, "%i", 1000050550500);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test43, .init = redirect_all_stdout)
{
    char str[25] = {0};
    my_printf("%d", 1000050550500);
    sprintf(str, "%d", 1000050550500);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test44, .init = redirect_all_stdout)
{
    char str[25] = {0};
    my_printf("%i", 1550500);
    sprintf(str, "%i", 1550500);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test45, .init = redirect_all_stdout)
{
    char str[25] = {0};
    my_printf("%i", 1500);
    sprintf(str, "%i", 1500);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test46, .init = redirect_all_stdout)
{
    char str[25] = {0};
    my_printf("%i", 15);
    sprintf(str, "%i", 15);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test47, .init = redirect_all_stdout)
{
    char str[80] = {0};
    int x = 15;
    my_printf("%p", &x);
    sprintf(str, "%p", &x);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test48, .init = redirect_all_stdout)
{
    char str[80] = {0};
    int x = 1500;
    my_printf("%p", &x);
    sprintf(str, "%p", &x);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test49, .init = redirect_all_stdout)
{
    char str[80] = {0};
    int x = 158200;
    my_printf("%p", &x);
    sprintf(str, "%p", &x);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test50, .init = redirect_all_stdout)
{
    char str[80] = {0};
    int x = 1900;
    my_printf("%p", &x);
    sprintf(str, "%p", &x);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test51, .init = redirect_all_stdout)
{
    char str[80] = {0};
    int sp = 198561661800;
    my_printf("%p", &sp);
    sprintf(str, "%p", &sp);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test52, .init = redirect_all_stdout)
{
    char str[80] = {0};
    int sp = 1985616615651252515800;
    my_printf("%p", &sp);
    sprintf(str, "%p", &sp);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test53, .init = redirect_all_stdout)
{
    char str[80] = {0};
    int sp = 19856166156512545465665552515800;
    my_printf("%p", &sp);
    sprintf(str, "%p", &sp);
    cr_assert_stdout_eq_str(str);
}


Test(my_printf, test54, .init = redirect_all_stdout)
{
    char str[80] = {0};
    int sp = -19856166156512545465665552515800;
    my_printf("%p", &sp);
    sprintf(str, "%p", &sp);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test55, .init = redirect_all_stdout)
{
    char str[25] = {0};
    double x = -1.25005;
    my_printf("%f", x);
    sprintf(str, "%f", x);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test56, .init = redirect_all_stdout)
{
    char str[25] = {0};
    double x = -1.25;
    my_printf("%f", x);
    sprintf(str, "%f", x);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test57, .init = redirect_all_stdout)
{
    char str[25] = {0};
    double x = -1.00;
    my_printf("%f", x);
    sprintf(str, "%f", x);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test58, .init = redirect_all_stdout)
{
    char str[25] = {0};
    double x = -1;
    my_printf("%f", x);
    sprintf(str, "%f", x);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test59, .init = redirect_all_stdout)
{
    char str[25] = {0};
    double x = -200;
    my_printf("%f", x);
    sprintf(str, "%f", x);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test60, .init = redirect_all_stdout)
{
    char str[25] = {0};
    double x = -400000;
    my_printf("%f", x);
    sprintf(str, "%f", x);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test61, .init = redirect_all_stdout)
{
    char str[15] = {0};
    int x = -200;
    my_printf("%d", x);
    sprintf(str, "%d", x);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test62, .init = redirect_all_stdout)
{
    char str[25] = {0};
    int x = -100000000;
    my_printf("%d", x);
    sprintf(str, "%d", x);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test63, .init = redirect_all_stdout)
{
    char str[25] = {0};
    int x = -100000000000;
    my_printf("%d", x);
    sprintf(str, "%d", x);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test64, .init = redirect_all_stdout)
{
    char str[25] = {0};
    int x = -1000000000000000000000;
    my_printf("%d", x);
    sprintf(str, "%d", x);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test65, .init = redirect_all_stdout)
{
    char str[25] = {0};
    int x = -100;
    my_printf("%i", x);
    sprintf(str, "%i", x);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test66, .init = redirect_all_stdout)
{
    char str[25] = {0};
    int x = -100000;
    my_printf("%i", x);
    sprintf(str, "%i", x);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test67, .init = redirect_all_stdout)
{
    char str[25] = {0};
    int x = -1500;
    my_printf("%i", x);
    sprintf(str, "%i", x);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test68, .init = redirect_all_stdout)
{
    char str[25] = {0};
    int x = -15;
    my_printf("%i", x);
    sprintf(str, "%i", x);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test69, .init = redirect_all_stdout)
{
    char str[80] = {0};
    int x = -15;
    my_printf("%p", &x);
    sprintf(str, "%p", &x);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test70, .init = redirect_all_stdout)
{
    char str[80] = {0};
    int x = -1500;
    my_printf("%p", &x);
    sprintf(str, "%p", &x);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test71, .init = redirect_all_stdout)
{
    char str[80] = {0};
    int x = -158200;
    my_printf("%p", &x);
    sprintf(str, "%p", &x);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test72, .init = redirect_all_stdout)
{
    char str[80] = {0};
    int x = -1900;
    my_printf("%p", &x);
    sprintf(str, "%p", &x);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test73, .init = redirect_all_stdout)
{
    char str[80] = {0};
    int sp = -198561661800;
    my_printf("%p", &sp);
    sprintf(str, "%p", &sp);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test74, .init = redirect_all_stdout)
{
    char str[80] = {0};
    int sp = -1985616615651252515800;
    my_printf("%p", &sp);
    sprintf(str, "%p", &sp);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test75, .init = redirect_all_stdout)
{
    char str[80] = {0};
    int sp = -19856166156512545465665552515800;
    my_printf("%p", &sp);
    sprintf(str, "%p", &sp);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test76, .init = redirect_all_stdout)
{
    char str[90] = {0};
    my_printf("%f", 123.10000);
    sprintf(str, "%f", 123.10000);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test77, .init = redirect_all_stdout)
{
    char str[25] = {0};
    double x = 123.10000;
    my_printf("%e", x);
    sprintf(str, "%e", x);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test78, .init = redirect_all_stdout)
{
    char str[25] = {0};
    double x = 123.10000;
    my_printf("%e", x);
    sprintf(str, "%e", x);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test79, .init = redirect_all_stdout)
{
    char str[70] = {0};
    char x = '10';
    my_printf("%u", x);
    sprintf(str, "%u", x);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test80, .init = redirect_all_stdout)
{
    char str[10] = {0};
    char x = 'a';
    my_printf("%u", x);
    sprintf(str, "%u", x);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test81, .init = redirect_all_stdout)
{
    char str[80] = {0};
    int sp = 19856166156512545465665552515800;
    my_printf("%u", sp);
    sprintf(str, "%u", sp);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test82, .init = redirect_all_stdout)
{
    char str[80] = {0};
    int sp = -19856166156512545465665552515800;
    my_printf("%u", sp);
    sprintf(str, "%u", sp);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test83, .init = redirect_all_stdout)
{
    char str[25] = {0};
    double x = -1.25005;
    my_printf("%u", x);
    sprintf(str, "%u", x);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test84, .init = redirect_all_stdout)
{
    char str[25] = {0};
    double x = -1.25;
    my_printf("%u", x);
    sprintf(str, "%u", x);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test85, .init = redirect_all_stdout)
{
    char str[25] = {0};
    float x = -1.5000;
    my_printf("%lf", x);
    sprintf(str, "%lf", x);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, test86, .init = redirect_all_stdout)
{
    char str[25] = {0};
    float x = 30.09;
    my_printf("%lf", x);
    sprintf(str, "%lf", x);
    cr_assert_stdout_eq_str(str);
}
