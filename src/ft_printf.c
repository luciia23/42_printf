#include "ft_printf.h"

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