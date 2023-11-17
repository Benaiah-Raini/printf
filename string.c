#include "main.h"
/**
* _strlen - finds the length of a string
* @str: string
*
* Return: length of string.
*/
int _strlen(char *str)
{
  int i;

  for (i = 0; str[i] != '\0'; i++)
    ;
  return (i);
}

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
int i, len;
  
if (!str)
{
str = "(null)";
len = _strlen(str);
for (i = 0; i < len; i++)
  _prints(str[i]);

return (len);
}
  else
{
  len = _strlen(str);
  for (i = 0; i < len; i++)
    _prints(str[i]);
  return (len);
}

}
