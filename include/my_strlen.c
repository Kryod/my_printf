/*
** my_strlen.c for my_printf in /Users/jerrai_y/test7/jerrai_y/include
** 
** Made by JERRAIN Yohann
** Login   <jerrai_y@etna-alternance.net>
** 
** Started on  Thu Apr  7 11:02:41 2016 JERRAIN Yohann
** Last update Thu Apr  7 11:02:43 2016 JERRAIN Yohann
*/

#include "../my_lib.h"

int	my_strlen(char *str)
{
  int i;

  i = 0;
  while (*str != '\0')
   {
     str = str + 1;
     i = i + 1;
   }
  return (i);
}
