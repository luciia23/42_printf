/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcollado <lcollado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:21:46 by lcollado          #+#    #+#             */
/*   Updated: 2022/12/08 10:21:46 by lcollado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

int ft_putstr(char  *s)
{
    int len;
    
    if (!s)
        return (write(1, "(null)", 6));
    len = ft_strlen(s);
    return (write(1, s, len));
}