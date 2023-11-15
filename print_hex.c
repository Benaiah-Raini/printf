#include "main.h"
#include <stdarg.h>
/**
 *_hexa_lower - print an integer in hexadecimal lowercase
 *
 *@args: A list of variable arguments
 *Return: an integer count of number of characters
 */
int _hexa_lower(va_list args)
{
	char *str;

	unsigned int a = 0, add = 0;

	a = va_arg(args, unsigned int);
	str = converter(a, 16, 0);
	_prints(str);
	add = _leng_to_string(str);

	return (add);
}
