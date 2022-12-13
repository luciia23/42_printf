/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcollado <lcollado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:50:14 by lcollado          #+#    #+#             */
/*   Updated: 2022/12/13 18:02:55 by lcollado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

int ft_puthex(unsigned int nbr, char *base)
{
    int base_len;
    int count;
    char    buffer[100];
    int i;

    base_len = ft_strlen(base);
    count = 0;
    i = 0;
    if (nbr == 0)
        count += ft_putchar('0');
    while (nbr > 0)
    {
        buffer[i] = base[nbr % base_len];
        nbr /= base_len;
        i++;
    }
    while (--i >= 0)
        count += ft_putchar(buffer[i]);
    return (count);
}