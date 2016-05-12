/*
** my_putchar.c for my_printf in /Users/jerrai_y/test7/jerrai_y/include
** 
** Made by JERRAIN Yohann
** Login   <jerrai_y@etna-alternance.net>
** 
** Started on  Thu Apr  7 11:01:11 2016 JERRAIN Yohann
** Last update Thu Apr  7 11:06:19 2016 JERRAIN Yohann
*/

#include "../my_lib.h"

void my_putchar(char c)
{
	write(1, &c, 1);
}
