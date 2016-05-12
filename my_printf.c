/*
** my_printf.c for my_printf in /Users/jerrai_y/test7/jerrai_y
** 
** Made by JERRAIN Yohann
** Login   <jerrai_y@etna-alternance.net>
** 
** Started on  Thu Apr  7 10:57:54 2016 JERRAIN Yohann
** Last update Thu Apr  7 14:05:02 2016 JERRAIN Yohann
*/

#include "my_lib.h"

void fill_tab(char tab[19])
{
	tab[0] = 's';
	tab[1] = 'c';
	tab[2] = 'i';
	tab[3] = 'd';
	tab[4] = 'o';
	tab[5] = 'u';
	tab[6] = 'x';
	tab[7] = 'X';
	tab[8] = 'f';
	tab[9] = 'F';
	tab[10] = 'e';
	tab[11] = 'E';
	tab[12] = 'g';
	tab[13] = 'G';
	tab[14] = 'a';
	tab[15] = 'A';
	tab[16] = 'p';
	tab[17] = 'n';
}

void fill_tab_pointeur(void (*func[19]) (va_list *list))
{
	func[0] = &prct_s;
	func[1] = &prct_c;
	func[2] = &prct_i;
	func[3] = &prct_d;
	func[4] = &prct_o;
	func[5] = &prct_u;
	func[6] = &prct_x;
	func[7] = &prct_xx;
	func[8] = &prct_f;
	func[9] = &prct_ff;
	func[10] = &prct_e;
	func[11] = &prct_ee;
	func[12] = &prct_g;
	func[13] = &prct_gg;
	func[14] = &prct_a;
	func[15] = &prct_aa;
	func[16] = &prct_p;
	func[17] = &prct_n;
}

void verif(char c, va_list *list)
{
	void (*func[19])(va_list *list);
	char tab[19];
	int i;

	i = 0;
	fill_tab(tab);
	fill_tab_pointeur(func);
	while (i != 19)
	{
		if (tab[i] == c)
			func[i] (list);
		i++;
	}
}

int my_printf(char* str, ...)
{
	va_list list;
	int 	i;

	i = 0;
	va_start(list, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%'){
			if (str[i + 1] == '%')
				my_putchar('%');
			verif(str[i + 1], &list);
			i = i + 2;
		}
		else
		{
			my_putchar(str[i]);
			i++;
		}
	}
	va_end(list);
	return (0);
}
