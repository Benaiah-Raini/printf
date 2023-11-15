#include "main.h"
#include <stdarg.h>
#include <string.h>

/**
 * rot13_transform - Rotates the alphabet by 13 places (ROT13)
 *
 * @args: Strings
 * Return: An array of characters
 */
int _rot13(va_list args)
{
char *original = va_arg(args, char *);
char *s;
int a, b, count;
char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

s = strdup(original);
if (s == NULL)
{
/* Handle memory allocation failure*/
return 0;
}

for (a = 0; s[a] != '\0'; a++)
{
for (b = 0; b < 52; b++)
{
if (s[a] == data[b])
{
s[a] = rot[b];
break;
}
}
}

_pristr(s);
count = _leng_to_string(s);
free(s);
return count;
}
