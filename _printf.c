#include "holberton.h"
/**
 *_printf - produces output according to a format
 *@format:  a character string composed of zero or more directives
 *Return: Integer
 */
int _printf(const char *format, ...)
{
va_list ap;
unsigned int i;
char *str;
va_start(ap, format);
i = vfprintf(stdout, format, ap);
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
case 'u':
i = va_arg(ap, int);
putchar(i);
break;
case 'o':
i = va_arg(ap, int);
putchar(i);
break;
case 'x':
i = va_arg(ap, int);
putchar(i);
break;
case 'X':
i = va_arg(ap, int);
putchar(i);
break;
case 'p':
i = va_arg(ap, int);
putchar(i);
break;
}
va_end(ap);
return (i);
}
