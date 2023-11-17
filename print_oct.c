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
int i, add = 0;

unsigned int n = va_arg(args, unsigned int);
str = converter(n, 8, 0);

if (str == NULL)
{
	_pristr("null");
	return (-1);
}
for (i = 0; str[i] != '\0'; i++)
{
_prints(str[i]);
add++;
}
free(str);
return (add);
}
