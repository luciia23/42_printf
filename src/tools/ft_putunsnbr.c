/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcollado <lcollado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:21:49 by lcollado          #+#    #+#             */
/*   Updated: 2023/01/04 15:10:29 by lcollado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

int ft_putunsnbr(unsigned int nbr, char *base, int count)
{
    int base_len;
    char    buffer[100];
    int i;

    base_len = ft_strlen(base);
    i = 0;
    nbr = (unsigned long)nbr;
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