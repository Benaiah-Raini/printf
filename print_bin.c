#include "main.h"
/**
 * print_bin - converts to binary
 * @val: argument
 *
 * Return: integer
 */

int print_bin(va_list val)
{
	int flag = 0;
	int count = 0;
	int i, a = 1, b;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((a << (32 - i)) & num);
		if (p >> (31 - i))
			flag = 1;
		if (flag)
		{
			b = p >> (31 - i);
			_prints(b + 48);
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		_prints('0');
	}
	return (count);
}
