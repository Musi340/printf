#include "holberton.h"
/**
* _printf- formats and prints data
* @format:list of variable arguments
*
*Return: i
*/

int _printf(const char *format, ...)
{

va_list ap;
unsigned int i;
char *str;

va_start(ap, format);
i = vfprintf(stdout, format, ap);
i = i - 1;
if (format == NULL)
{
return (0);
}
switch (format[i])
{
case 'c':
i = va_arg(ap, int);
putchar(i);
break;
case 's':
str = va_arg(ap, char *);
puts(str);
break;
case '%':
i = va_arg(ap, int);
putchar(i);
break;
case 'd':
i = va_arg(ap, int);
putchar(i);
break;
case 'i':
i = va_arg(ap, int);
putchar(i);
break;
}
va_end(ap);
return (i);
}
