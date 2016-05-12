/*
** my_putexp.c for my_printf in /Users/jerrai_y/test7/jerrai_y/include
** 
** Made by JERRAIN Yohann
** Login   <jerrai_y@etna-alternance.net>
** 
** Started on  Thu Apr  7 11:01:33 2016 JERRAIN Yohann
** Last update Fri Apr  8 16:22:32 2016 EL BOUCHIKHI Walid
*/

#include "../my_lib.h"

void aff_exp(float n, int compteur, int signe_exp)
{
	if (n < 1)
	{
		signe_exp = signe_exp * (-1);
		while (n < 1)
		{
			n = n * 10;
			compteur++;
		}
	}
	my_putfloat(n);
	my_putchar('e');
	if (signe_exp > 0)
		my_putchar('+');
	else
		my_putchar('-');
	if (compteur >= 10)
		my_put_nbr(compteur);
	else
	{
		my_putchar('0');
		my_put_nbr(compteur);
	}
}

void my_putexp(float n)
{
	int compteur;
	int signe_exp;

	signe_exp = 1;
	compteur = 0;
	if (n < 0)
	{
		my_putchar('-');
		n = n * (-1);
	}
	if (n >= 10)
	{
		while (n >= 10)
		{
			n = n / 10;
			compteur++;
		}
	}
	aff_exp(n, compteur, signe_exp);
}

void aff_exp_maj(float n, int compteur, int signe_exp)
{
	if (n < 1)
	{
		signe_exp = signe_exp * (-1);
		while (n < 1)
		{
			n = n * 10;
			compteur++;
		}
	}
	my_putfloat(n);
	my_putchar('E');
	if (signe_exp > 0)
		my_putchar('+');
	else
		my_putchar('-');
	if (compteur >= 10)
		my_put_nbr(compteur);
	else
	{
		my_putchar('0');
		my_put_nbr(compteur);
	}
}

void my_putexp_maj(float n)
{
	int compteur;
	int signe_exp;

	signe_exp = 1;
	compteur = 0;
	if (n < 0)
	{
		my_putchar('-');
		n = n * (-1);
	}
	if (n >= 10)
	{
		while (n >= 10)
		{
			n = n / 10;
			compteur++;
		}
	}
	aff_exp_maj(n, compteur, signe_exp);
}
