#ifndef TOOLS_H
# define TOOLS_H

#include "ft_printf.h"

size_t  ft_strlen(const char *str);
int     ft_putstr(char *s);
int     ft_putchar(char c);
int     ft_puthex_ptr(void *ptr, char *base);
int     ft_putnbr_base(int nbr, char *base);
int     ft_putunsnbr(unsigned int n, char *base);

#endif