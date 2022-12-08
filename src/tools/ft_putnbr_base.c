/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcollado <lcollado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:21:42 by lcollado          #+#    #+#             */
/*   Updated: 2022/12/08 11:55:08 by lcollado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/tools.h"

int ft_putnbr_base(int nbr, char *base)
{
    int base_len;
    int count;

    base_len = ft_strlen(base);
    count = 0;

    if (nbr == -2147483648)
    {
        count = ft_putchar('-');
        count += ft_putchar('2');
        nbr = 147483648;
    }
    else if (nbr < 0)
    {
        count = ft_putchar('-');
        nbr = nbr * (-1);
    }

    while (nbr > 0)
    {
        count += ft_putchar(base[nbr % base_len]);
        nbr /= base_len;
    }

    return count;
}

int main()
{
    //gcc ft_printf.c ft_formatprint.c ../libftprintf.a
}