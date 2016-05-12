/*
** my_put_nbr.c for my_printf in /Users/jerrai_y/test7/jerrai_y/include
** 
** Made by JERRAIN Yohann
** Login   <jerrai_y@etna-alternance.net>
** 
** Started on  Thu Apr  7 11:00:13 2016 JERRAIN Yohann
** Last update Thu Apr  7 14:06:36 2016 JERRAIN Yohann
*/

#include "../my_lib.h"

void	la_boucle(int c)
{
  if (c >= 10 || c < 0)
    {
      my_put_nbr(c / 10);
      my_put_nbr(c % 10);
    }
  else
    {
      my_putchar(c + 48);
    }
}

void	my_put_nbr(int n)
{
  int c;

  c = n;
  if (c < 10 && c >= 0)
    {
      my_putchar(c + 48);
    }
    else if (c == -2147483647 - 1)
    {
      my_putstr("-2147483648");
    }
  else if (c > 9)
    {
      la_boucle(c);
    }
  else
    {
      my_putchar('-');
      c = -1 * c;
      la_boucle(c);
    }
}
