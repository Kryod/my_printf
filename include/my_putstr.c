/*
** my_putstr.c for my_printf in /Users/jerrai_y/test7/jerrai_y/include
** 
** Made by JERRAIN Yohann
** Login   <jerrai_y@etna-alternance.net>
** 
** Started on  Thu Apr  7 11:00:56 2016 JERRAIN Yohann
** Last update Thu Apr  7 14:07:41 2016 JERRAIN Yohann
*/

#include "../my_lib.h"

void my_putstr(char* c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		my_putchar(c[i]);
		i++;
	}
}
