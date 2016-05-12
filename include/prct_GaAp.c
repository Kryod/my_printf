/*
** prct_GaAp.c for my_printf in /Users/jerrai_y/test7/jerrai_y/include
** 
** Made by JERRAIN Yohann
** Login   <jerrai_y@etna-alternance.net>
** 
** Started on  Thu Apr  7 11:03:27 2016 JERRAIN Yohann
** Last update Thu Apr  7 11:03:29 2016 JERRAIN Yohann
*/

#include "../my_lib.h"

void prct_gg(va_list *list)
{
	my_putexp_maj_float(va_arg(*list, double));
}

void prct_a(va_list *list)
{
	my_putstr("0x");
	my_putnbr_base((int)va_arg(*list, void *), "0123456789abcdef");
}

void prct_aa(va_list *list)
{
	my_putstr(va_arg(*list, char*));
}

void prct_p(va_list *list)
{
	void *var;

	var = va_arg(*list, void *);
	if (var == NULL)
	{
		my_putstr("(nil)");
		return;
	}
	my_putstr("0x");
	my_putnbr_base((int)var, "0123456789abcdef");
}
