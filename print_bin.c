#include "main.h"
#include <stdarg.h>
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
int i, b;
unsigned int num = va_arg(val, unsigned int);
unsigned int p;

for (i = 0; i < 32; i++)
{
p = ((1u << (31 - i)) & num);
if (p >> (31 - i))
flag = 1;
if (flag)
{
b = p >> (31 - i);
_prints(b + '0');
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
