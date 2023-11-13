#include <stdarg.h>
#include "main.h"

/**
 *_signedint - prints integer using putchar
 *
 * @args: integer to be printed
 * Return: count of characters printed
 */
int _signedint(va_list args)
{
char *str;

int n = va_arg(args, int), count = 0;

if (n < 0)
{
_prints('-');
n *= -1;
}
str = converter(n, 10, 0);
_pristr(str);
count = _leng_to_string(str);
return (count);
}

/**
 *_unsignedint - prints integer using putchar
 *
 * @args: integer to be printed
 * Return: count of characters printed
 */
int _unsignedint(va_list args)
{
char *str;

int n = va_arg(args, unsigned int), count = 0;

	str = converter(n, 10, 0);
_pristr(str);
count = _leng_to_string(str);
return (count);
}
