#include "main.h"

/**
 *_string - prints string specified by args
 *
 *@args: A list of variable inputs
 *
 *Return: An integer of number of characters printed
 */
int _string(va_list args)
{
char *str = va_arg(args, char *);

if (!str)
{
str = "(null)";
_pristr(str);

return (_leng_to_string(str));
}
_pristr(str);
return (_leng_to_string(str)); /* might be k + 1 */
}
