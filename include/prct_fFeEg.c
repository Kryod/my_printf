/*
** prct_fFeEg.c for my_printf in /Users/jerrai_y/test7/jerrai_y/include
** 
** Made by JERRAIN Yohann
** Login   <jerrai_y@etna-alternance.net>
** 
** Started on  Thu Apr  7 11:03:50 2016 JERRAIN Yohann
** Last update Thu Apr  7 11:03:56 2016 JERRAIN Yohann
*/

#include "../my_lib.h"

void prct_f(va_list *list)
{
	my_putfloat(va_arg(*list, double));
}

void prct_ff(va_list *list)
{
	my_putfloat(va_arg(*list, double));
}

void prct_e(va_list *list)
{
	my_putexp(va_arg(*list, double));
}

void prct_ee(va_list *list)
{
	my_putexp_maj(va_arg(*list, double));
}

void prct_g(va_list *list)
{
	my_putexp_float(va_arg(*list, double));
}
