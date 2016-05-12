/*
** my_putfloat.c for my_printf in /Users/jerrai_y/test7/jerrai_y/include
** 
** Made by JERRAIN Yohann
** Login   <jerrai_y@etna-alternance.net>
** 
** Started on  Thu Apr  7 11:00:30 2016 JERRAIN Yohann
** Last update Fri Apr  8 10:57:19 2016 JERRAIN Yohann
*/

#include "../my_lib.h"

void afterpoint(float x)
{
    int i;
	int before_point;
	int conv;
	double after_point;

    i = 0;
    while (i < 6)
    {
    	conv = x * 10;
        before_point = (int)conv;
		after_point = x * 10 - (double)before_point;
        x = after_point;
	    my_put_nbr(before_point);
        i++;
    }
}

void my_putfloat(float n)
{
    int before_point;
    double after_point;

    if (n < 0)
      {
	my_putchar('-');
	n = n * (-1);
      }
    before_point = (int)n;
    after_point = n - (double)before_point;
    my_put_nbr(before_point);
    my_putchar('.');
    afterpoint(after_point);
}
