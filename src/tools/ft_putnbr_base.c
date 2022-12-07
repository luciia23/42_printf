#include "tools.h"

int ft_putnbr_base(int nbr, char *base)
{
    int base_len;
    int count;

    base_len = ft_strlen(base);
    count = 0;

    if (nbr == -2147483648)
    {
        count = ft_putchar('-');
        count += ft_putchar('2');
        nbr = 147483648;
    }
    else if (nbr < 0)
    {
        count = ft_putchar('-');
        nbr = nbr * (-1);
    }

    while (nbr > 0)
    {
        count += ft_putchar(base[nbr % base_len]);
        nbr /= base_len;
    }

    return count;
}