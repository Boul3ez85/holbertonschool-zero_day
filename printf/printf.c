#include "holberton.h"


int _printf(const char *format, ...)
{
  int i = 0;
    int (*x)(va_list);
    int check = 0;
va_list parameters;

va_start(parameters, format);

if (format != NULL && format[i] != '\0')
{

for (i = 0; format[i]; i++)
{
_putchar(format[i]);
check++;
}
 if (!format[i])
   return (check);
 
 x = get_struct(&format[i + 1]);
   if (x != NULL)
     {
       check += x(parameters);
       i += 2;
     }
   else
     {
       if (!format[i + 1])
	 
	   return (-1);
	 
       if (format[i + 1] == '%')
	 {
	   _putchar('%');
	   i += 2;
	   check++;
	 }
       else
	 i++;
       }
}
 if (format == NULL)
 return (-1);
 }   
 va_end(parameters);
 return (check);
 }
