/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcollado <lcollado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:21:33 by lcollado          #+#    #+#             */
/*   Updated: 2022/12/08 10:21:34 by lcollado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"
int ft_putchar(char c)
{
    return (write(1, &c, 1));
}