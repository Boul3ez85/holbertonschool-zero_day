#include "holberton.h"




int (*get_struct(const char *a))(va_list)
{
format_t structs_pr[] = {
{"c", print_c},
{"s", print_s},
{"%", print_percent},
/*{"d", print_d},
{"i", print_i},*/
{NULL, NULL}
};

int x = 0;

while (structs_pr[x].f)
{
if (*a == *structs_pr[x].spc)
{
return (structs_pr[x].f);
}
x++;
}
 return (structs_pr[x].f);
}
