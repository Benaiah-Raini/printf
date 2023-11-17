#include "main.h"
/**
 * print_pointer - prints pointer
 * @val: value
 *
 * Return: int
 */

int print_pointer(va_list val)
{
	void *p;
	char *s = "nil";
	long int a;
	int i, b;

	p = va_arg(val, void *);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
			_prints(s[i]);
		return (i);
	}
	a = (unsigned long int)p;
	_prints('0');
	_prints('x');
	b = print_convert_pointer(a);
	return (b + 2);
}
