/*
** my_putnbr_base_u.c for my_printf in /Users/jerrai_y/test7/jerrai_y/include
** 
** Made by JERRAIN Yohann
** Login   <jerrai_y@etna-alternance.net>
** 
** Started on  Thu Apr  7 11:02:21 2016 JERRAIN Yohann
** Last update Thu Apr  7 14:07:25 2016 JERRAIN Yohann
*/

#include "../my_lib.h"

void	my_putnbr_base_u(unsigned int nbr, char *base)
{
  int	o;
  int	drop_the;

  drop_the = my_strlen(base);
  o = 0;
  if (nbr != 0)
    {
      my_putnbr_base(nbr / drop_the, base);
    }
  if (nbr == 0)
    {
      my_putchar('0');
    }
  else
    {
      o = nbr % drop_the;
      my_putchar(base[o]);
    }
}
