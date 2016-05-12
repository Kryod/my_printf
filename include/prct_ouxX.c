/*
** prct_ouxX.c for my_printf in /Users/jerrai_y/test7/jerrai_y/include
** 
** Made by JERRAIN Yohann
** Login   <jerrai_y@etna-alternance.net>
** 
** Started on  Thu Apr  7 11:04:44 2016 JERRAIN Yohann
** Last update Thu Apr  7 11:04:46 2016 JERRAIN Yohann
*/

#include "../my_lib.h"

void prct_o(va_list *list)
{
	my_putnbr_base_u(va_arg(*list, unsigned int), "01234567");
}

void prct_u(va_list *list)
{
	my_putnbr_base_u(va_arg(*list, unsigned int), "0123456789");
}

void prct_x(va_list *list)
{
	my_putnbr_base_u(va_arg(*list, unsigned int), "0123456789abcdef");
}

void prct_xx(va_list *list)
{
	my_putnbr_base_u(va_arg(*list, unsigned int), "0123456789ABCDEF");
}
