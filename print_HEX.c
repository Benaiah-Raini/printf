#include "main.h"
#include <stdarg.h>

/**
 *_hexa_upper - prints an integer in hexadecimal uppercase
 *
 *@args: A list of variable arguments
 *Return: An integer of number of characters printed
 */

int _hexa_upper(va_list args)
{
char *str;

unsigned int a = 0, count = 0;

a = va_arg(args, unsigned int);
str = converter(a, 16, 1);
_prints(str);
count = _leng_to_string(str);
return (count);
}
