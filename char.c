#include "main.h"
/**
 *_char - Prints a character
 *
 *@args: A va_list containing character
 *
 *Return: The integer 1 because it prints only a character
 */
int _char(va_list args)
{
char c = va_arg(args, int);
_prints(c);
return (1);
}
