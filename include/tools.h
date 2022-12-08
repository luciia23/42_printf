/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcollado <lcollado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:21:29 by lcollado          #+#    #+#             */
/*   Updated: 2022/12/08 10:35:02 by lcollado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOOLS_H
# define TOOLS_H

#include "ft_printf.h"

size_t  ft_strlen(const char *str);
int     ft_putstr(char *s);
int     ft_putchar(char c);
int     ft_puthex_ptr(void *ptr, char *base);
int     ft_putnbr_base(int nbr, char *base);
int     ft_putunsnbr(unsigned int n, char *base);

#endif