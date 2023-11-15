#include "main.h"
#include <stdarg.h>

/**
 *_octal - Prints an integer in its octal form
 *
 *@args: A va_list of variable arguments
 *Return: integer number of digits printed
 */
int _octal(va_list args)
{
	char *str;

	int add = 0;

	unsigned int n = va_arg(args, unsigned int);

	str = converter(n, 8, 0);
	_prints(str);
	add = _leng_to_string(str);
	return (add);
}
