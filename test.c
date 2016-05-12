/*
** test.c for my_printf in /Users/jerrai_y/test7/jerrai_y
** 
** Made by JERRAIN Yohann
** Login   <jerrai_y@etna-alternance.net>
** 
** Started on  Thu Apr  7 11:06:41 2016 JERRAIN Yohann
** Last update Thu Apr  7 11:06:43 2016 JERRAIN Yohann
*/

#include "my_lib.h"

int main()
{
    my_printf("\n1 - %s %d %s%c", "avec", 4, "parametres", '\n');
    my_printf("Test char*(%%s): %s\n", "Test");
    my_printf("Test char(%%c): %c\n", 'y');
    my_printf("Test int(%%i): %i\n", 42);
    my_printf("Test int(%%d): %d\n", 42);
    my_printf("Test octal(%%o): %o\n", 42);
    my_printf("Test unsigned decimal(%%u): %u\n", (unsigned int)4200000000U);
    my_printf("Test hexadecimal(%%x): %x\n", 42);
    my_printf("Test unsigned hexadecimal(%%X): %X\n", 42);
    my_printf("Test float(%%f): %f\n", 4.0002;
    my_printf("Test float(%%F): %F\n", 4.0002;
    my_printf("Test exposant(%%e): %e\n", 205041.0025);
    my_printf("Test exposant(%%E): %E\n", 205041.0025);
    my_printf("Test du %%p ('b') : %p\n", 'b');
    my_printf("Test du %%p (0) : %p\n", 0);
    my_printf("Test du %%n (\"yohann\") : %n\n", "yohann");
    my_printf("Test du %%n (0) : %n\n", 0);
    my_printf("Test du %%g (4.002) : %g\n", 4.002);
    my_printf("Test du %%g (0.000042) : %g\n", 0.000042);
    my_printf("Test du %%G (0.000042) : %G\n", 0.000042);
    return (0);
}
