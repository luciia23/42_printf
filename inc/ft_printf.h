/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcollado <lcollado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:21:18 by lcollado          #+#    #+#             */
/*   Updated: 2023/01/10 17:16:45 by lcollado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h> // va_list
#include <unistd.h> // write
#include <stddef.h>

#define DECIMAL "0123456789"
#define HEX_LOWER "0123456789abcdef"
#define HEX_UPPER "0123456789ABCDEF"

#include "tools.h"

int ft_printf(const char *format, ...);
int ft_formatprint(const char *s, va_list args);

#endif

