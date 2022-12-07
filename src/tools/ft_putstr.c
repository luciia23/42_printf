#include "tools.h"

int ft_putstr(char  *s)
{
    int len;
    
    if (!s)
        return (write(1, "(null)", 6));
    len = ft_strlen(s);
    return (write(1, s, len));
}