#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h> // va_list
#include <unistd.h> // write
#include <stddef.h>

#include "tools.h"

#define DECIMAL "0123456789"
#define HEX_LOWER "0123456789abcdef"
#define HEX_UPPER "0123456789ABCDEF"

int ft_printf(const char *format, ...);
int ft_formatprint(const char *s, va_list args);

#endif

