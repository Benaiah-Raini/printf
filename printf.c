#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - Prints test file
 * @format: Format of output
 * Return: An integer
 */
int _printf(const char *format, ...)
{
int i = 0, count = 0;
f_ptr print_func;
char ben;
va_list args;

va_start(args, format);
if (!format || (_strlen((char *)format) == 0))
{
return (-1);
}
while (format[i] != '\0')
{
ben = format[i];
if (ben == '%')
{
i++;
ben = format[i];
if (ben == '\0' && _strlen((char *)format) == 1)
return (-1);
if (ben == '\0')
return (count);
if (ben)
print_func = controller(ben);
if (print_func != NULL)
count += print_func(args);
else if (ben == '%')
count += _prints(ben);
else
{
count += _prints('%');
count += _prints(ben);
}
}
else
count += _prints(ben);
i++;
}
va_end(args);
return (count);
}
