/*
** my_lib.h for my_printf in /Users/jerrai_y/test7/jerrai_y
** 
** Made by JERRAIN Yohann
** Login   <jerrai_y@etna-alternance.net>
** 
** Started on  Thu Apr  7 10:58:48 2016 JERRAIN Yohann
** Last update Thu Apr  7 14:05:58 2016 JERRAIN Yohann
*/

#ifndef HEADER_
	#define HEADER_

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>

void my_putchar(char c);
void my_putstr(char* c);
void prct_o(va_list *list);
void prct_u(va_list *list);
void prct_x(va_list *list);
void prct_xx(va_list *list);
void prct_f(va_list *list);
void prct_ff(va_list *list);
void prct_e(va_list *list);
void prct_ee(va_list *list);
void prct_g(va_list *list);
void prct_gg(va_list *list);
void prct_a(va_list *list);
void prct_aa(va_list *list);
void prct_s(va_list *list);
void prct_c(va_list *list);
void prct_i(va_list *list);
void prct_d(va_list *list);
void prct_p(va_list *list);
void prct_n(va_list *list);
void my_putnbr_base(int nbr, char *base);
void my_putnbr_base_u(unsigned int nbr, char *base);
int  my_strlen(char *str);
void my_put_nbr(int n);
int  my_printf(char* str, ...);
void verif(char c, va_list *list);
void fill_tab_pointeur(void (*func[19]) (va_list *list));
void fill_tab(char tab[19]);
void my_putfloat (float n);
void my_putexp(float n);
void my_putexp_maj(float n);
void my_putexp_maj_float(float n);
void my_putexp_float(float n);

#endif
