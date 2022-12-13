/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcollado <lcollado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:21:49 by lcollado          #+#    #+#             */
/*   Updated: 2022/12/13 18:48:29 by lcollado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

int ft_putunsnbr(unsigned int nbr, char *base)
{
    unsigned int base_len;
    int count;
    int i;
    char aux[100];
    base_len = ft_strlen(base);
    count = 0;

    i = 0;
    if (nbr == 0)
        count = ft_putchar('0');
    while (nbr > 0)
    {
        aux[i] = base[nbr % base_len];
        nbr /= base_len;
        i++;
    }
    while (--i > 0)
        count += ft_putchar(aux[i]);
    // if (nbr < base_len)
    //     count += ft_putchar(base[nbr]);
    // if (nbr >= base_len)
    // {
    //     count += ft_putunsnbr(nbr / base_len, base);
	// 	count += ft_putunsnbr(nbr % base_len, base);
    // }

    return count;
}