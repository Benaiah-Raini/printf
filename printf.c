#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
/**
 * _printf - Prints test file
 * @format: Format of output
 * Return: An integer
 */
int _printf(const char *format, ...)
{
int char_to_print = 0;
va_list arg_list;

if (format == NULL)
return (-1);

va_start(arg_list, format);

while (*format)
{
if (*format != '%')
{
write(1, format, 1);
char_to_print++;
}
else
{
format++;
if (*format == '\0')
break;
if (*format == '%')
{
write(1, format, 1);
char_to_print++;
}
else if (*format == 'c')
{
char c = va_arg(arg_list, int);
write(1, &c, 1);
char_to_print++;
}
else if (*format == 's')
{
char *str = va_arg(arg_list, char*);
int str_len = 0;
while (str[str_len] != '\0' && strncmp(&str[str_len], "10", 2) != 0)
{            
write(1, &str[str_len], 1);
char_to_print++;
str_len++;
}
}
}
format++;
}

va_end(arg_list);
return char_to_print;
}
