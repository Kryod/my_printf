/*
** prct_scid.c for my_printf in /Users/jerrai_y/test7/jerrai_y/include
** 
** Made by JERRAIN Yohann
** Login   <jerrai_y@etna-alternance.net>
** 
** Started on  Thu Apr  7 11:04:59 2016 JERRAIN Yohann
** Last update Thu Apr  7 11:05:01 2016 JERRAIN Yohann
*/

#include "../my_lib.h"

void prct_s(va_list *list)
{
	char* str;

	str = va_arg(*list, char*);
	if (str == NULL){
		my_putstr("(null)");
		return;
	}
	my_putstr(str);
}

void prct_c(va_list *list)
{
	my_putchar(va_arg(*list, int));
}

void prct_i(va_list *list)
{
	my_putnbr_base(va_arg(*list, int), "0123456789");
}

void prct_d(va_list *list)
{
	my_put_nbr(va_arg(*list, int));
}

void prct_n(va_list *list)
{
	char* str;

	str = va_arg(*list, char*);
	if (str == NULL){
		my_put_nbr(0);	
		return;
	}
	my_put_nbr(my_strlen(str));
}
