#include "holberton.h"
#include <stdarg.h>


int print_c(va_list parameters)
{
_putchar(va_arg(parameters, int));
return (1);
}


int print_s(va_list parameters)
{
int i = 0;
char *l = va_arg(parameters, char *);

if (l == NULL)
l = "(null)";

while (l[i])
{
_putchar(l[i]);
i++;
}
return (i);
}


int print_percent(__attribute__((unused))va_list parameters)
{
char c = '%';
_putchar(c);
return (1);
}
