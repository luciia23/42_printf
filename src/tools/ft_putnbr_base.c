/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcollado <lcollado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:21:42 by lcollado          #+#    #+#             */
/*   Updated: 2022/12/13 19:21:01 by lcollado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

int ft_putnbr_base(int nbr, char *base)
{
    int base_len;
    int count;

    base_len = ft_strlen(base);
    count = 0;
    if (nbr < 0)
    {
        count = ft_putchar('-');
        nbr = nbr * (-1);
    }
    if (nbr < base_len)
        count += ft_putchar(base[nbr]);
    if (nbr >= base_len)
    {
        count += ft_putnbr_base(nbr / base_len, base);
		count += ft_putnbr_base(nbr % base_len, base);
    }
    // while (nbr > 0)
    // {
    //     count += ft_putchar(base[nbr % base_len]);
    //     nbr /= base_len;
    // }

    return count;
}

