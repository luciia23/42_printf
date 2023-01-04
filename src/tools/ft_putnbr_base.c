/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcollado <lcollado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:21:42 by lcollado          #+#    #+#             */
/*   Updated: 2023/01/04 13:52:08 by lcollado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

int ft_putnbr_base(int nbr, char *base)
{
    int base_len;
    int count;

    base_len = ft_strlen(base);
    count = 0;
    if (nbr == -2147483648)
    {
        count += ft_putchar('-');
        count += ft_putchar('2');
        nbr = 147483648;
    }
    else if(nbr < 0)
    {
        count = ft_putchar('-');
        nbr = nbr * (-1);
    }
    if (nbr < base_len)
        count += ft_putchar(base[nbr]);
    else if (nbr >= base_len)
    {
        count += ft_putnbr_base(nbr / base_len, base);
		count += ft_putnbr_base(nbr % base_len, base);
    }
    return count;
}
