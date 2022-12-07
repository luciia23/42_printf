#include "tools.h"

int ft_putunsnbr(unsigned int nbr, char *base)
{
    int base_len;
    int count;

    base_len = ft_strlen(base);
    count = 0;

    while (nbr > 0)
    {
        count += ft_putchar(base[nbr % base_len]);
        nbr /= base_len;
    }

    return count;
}