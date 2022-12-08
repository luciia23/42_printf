/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcollado <lcollado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:21:11 by lcollado          #+#    #+#             */
/*   Updated: 2022/12/08 11:52:57 by lcollado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include <stdio.h>

int ft_printf(const char *format, ...)
{
    va_list args; //tipo de datos que se utiliza para almacenar una lista de argumentos variables
    int count;

    if (!format)
        return (-1);
    count = 0;
    va_start(args, format); // inicializa este tipo de datos
    count = ft_formatprint(format, args);
    va_end(args); // limpia la variable va_list y libera cualquier memoria asignada
    //Succesful return --> the number of characters printed (excluding the null byte used to end output to strings)
    //Unsuccesful return --> a negative value is returned
    return (count);

}

int main()
{
    ft_printf("%d\n", ft_printf("%d\n", 12354));
    printf("%d\n", printf("%d\n",12354));
    return (0);
}