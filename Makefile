##
## Makefile for my_printf in /Users/jerrai_y/test7/jerrai_y
## 
## Made by JERRAIN Yohann
## Login   <jerrai_y@etna-alternance.net>
## 
## Started on  Thu Apr  7 10:59:32 2016 JERRAIN Yohann
## Last update Thu Apr  7 10:59:35 2016 JERRAIN Yohann
##

CC      = gcc

CFLAGS	= -W -Wall -Wextra -Werror -pedantic -fPIC

NAME    = my_printf


SRC     = my_printf.c 					\
		  include/my_putchar.c 			\
		  include/my_putstr.c 			\
		  include/prct_scid.c 			\
		  include/prct_ouxX.c 			\
		  include/prct_fFeEg.c 			\
		  include/prct_GaAp.c 			\
		  include/my_put_nbr.c 			\
		  include/my_putnbr_base.c 		\
		  include/my_putnbr_base_u.c 	\
		  include/my_strlen.c 			\
		  include/my_putfloat.c 		\
		  include/my_putexp.c 			\
		  include/my_putexp_float.c 

RM      = rm -f

OBJ     = $(SRC:%.c=%.o)

NAME1 	= libmy_printf_`uname -m`-`uname -s`.a

NAME2	= libmy_printf_`uname -m`-`uname -s`.so

.PHONY: all my_printf_dynamic my_printf_static clean flcean re

all:    my_printf_static my_printf_dynamic

my_printf_static:   $(OBJ)
					ar rc $(NAME1) $(OBJ)
	  				ranlib $(NAME1)

my_printf_dynamic:  $(OBJ)
	  				$(CC) $(CFLAGS) -shared -L. $(OBJ) -o $(NAME2)

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME1)
	$(RM) $(NAME2)

re:     fclean all