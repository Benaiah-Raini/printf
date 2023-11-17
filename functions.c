#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

/**
 *converter - converts an unsigned integer to base n
 *
 *@base: Working base
 *@i: integer
 *Return: The string to return
 */
char *converter(unsigned int i, int base, ...)
{
va_list form;

char *ptr, U;

static char buffer[128];
int frm;

char *change;

change = malloc(sizeof(char) * 17);
va_start(form, base);
U = va_arg(form, int);
if (U == 1)
change = _stcopy(change, "0123456789ABCDEF");
else
change = _stcopy(change, "0123456789abcdef");

ptr = &buffer[127];
*ptr = '\0';
while (i != 0)
{
frm = i % base;
*--ptr = change[frm];
i = i / base;
}
return (ptr);
}

/**
 * _prints - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1. on error, -1 is returned and errno is
 * set appropriately
 */

int _prints(char c)
{
return (write(1, &c, 1));
}

/**
 * _leng_to_string - reset number
 * Description: This function return a length for some string
 *
 * @s: pointer char
 * Return: int length
 *
 */
int _leng_to_string(char *s)
{
int en = 0;

while (*s++)
{
en++;
}

return (en);
}

/**
 *  _pristr a string s
 *
 * @s: string to print
 * Return: the length of the string
 */
void _pristr(char *s)
{
int a = 0;

while (a < _leng_to_string(s))
{
_prints(s[a]);
a++;
}
}

/**
 *_stcopy - copies one string to another
 *
 *@desty: The destination string
 *@src: The source string
 *Return: The destination pointer
 */
char *_stcopy(char *desty, char *src)
{
int a, len;

len  = _leng_to_string(src);
for (a = 0 ; a <= len ; a++)
{
desty[a] = src[a];
}
return (desty);
}
