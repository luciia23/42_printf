/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcollado <lcollado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:21:29 by lcollado          #+#    #+#             */
/*   Updated: 2023/01/04 13:55:30 by lcollado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOOLS_H
# define TOOLS_H

#include "ft_printf.h"

size_t  ft_strlen(const char *str); // cuenta letras
int     ft_putstr(char *s); // %s
int     ft_putchar(char c); // %c
int     ft_puthex_ptr(void *ptr, char *base); // %p
int     ft_putnbr_base(int nbr, char *base); // %d y %i
int     ft_putunsnbr(unsigned int n, char *base, int aux); // %u %x %X

#endif