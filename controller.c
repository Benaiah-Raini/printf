#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 *controller - function that controles the specifiers
 *
 *@s: The character the specifies behavior
 *Return: an integer of number of characters printed, 0 if unssuccesful
 */
int (*controller(char s))(va_list)
{
func functions[] = {
{"c", _char},
{"s", _string},
{"d", _signedint},
{"i", _signedint},
{"u", _unsignedint},
{"b", print_bin},
{"x", _hexa_lower},
{"X", _hexa_upper},
{"o", _octal},
{NULL, NULL}
};

int i = 0;

while (functions[i].span != NULL)
{
if (s == *(functions[i].span))
{
return (functions[i].f);
}
i++;
}
return (NULL);
}
