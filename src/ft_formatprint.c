/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formatprint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcollado <lcollado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:21:56 by lcollado          #+#    #+#             */
/*   Updated: 2022/12/08 11:49:44 by lcollado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int ft_checkformat(const char *format, va_list args, int i, int count)
{
    if (format[i + 1] == 'c')
        count = ft_putchar(va_arg(args, int));
    if (format[i + 1] == 's')
        count = ft_putstr(va_arg(args, char *));
    if (format[i + 1] == 'p')
        count = ft_puthex_ptr(va_arg(args, void *), HEX_LOWER);
    if (format[i + 1] == 'd' || format[i + 1] == 'i')
        count = ft_putnbr_base(va_arg(args, int), DECIMAL);
    if (format[i + 1] == 'u')
        count = ft_putunsnbr(va_arg(args, unsigned int), DECIMAL);
    if (format[i + 1] == 'x')
        count = ft_putnbr_base(va_arg(args, int), HEX_LOWER);
    if (format[i + 1] == 'X')
        count = ft_putnbr_base(va_arg(args, int), HEX_UPPER);
    if (format[i + 1] == '%')
        count = ft_putchar('%');
    
    return (count);
}
int ft_formatprint(const char *format, va_list args)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (format[i])
    {
        if (format[i] == '%')
        {
         //función que chequea el formato
         count = ft_checkformat(format, args, i, count);
         i++;
        }
        else
            count += write(1, &format[i], 1);
        i++;
    }
    return (count);
}