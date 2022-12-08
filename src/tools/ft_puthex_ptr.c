/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcollado <lcollado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:21:38 by lcollado          #+#    #+#             */
/*   Updated: 2022/12/08 10:21:38 by lcollado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

int ft_putptr(unsigned long nbr, char *base, int count)
{
    int base_len;

    base_len = ft_strlen(base);
    while (nbr > 0)
    {
        count += ft_putchar(base[nbr % base_len]);
        nbr /= base_len;
    }
    return (count);
}

int ft_puthex_ptr(void *ptr, char *base)
{
    unsigned long   nbr;
    int             count;

    nbr = (unsigned long)ptr;
    count = 0;
    count += write(1, "0x", 2);

    if (!nbr)
        count += ft_putchar('0');
    else
        count += ft_putptr(nbr, base, count);
    return (count);
}