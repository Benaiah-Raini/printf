#include <stdarg.h>
#include "main.h"

/**
 * _signedint - prints signed integer using putchar
 * @args: integer to be printed
 * Return: count of characters printed
 */
int _signedint(va_list args) {
char *str;
int n = va_arg(args, int);
int count = 0;

if (n < 0) {
_prints('-');
n *= -1;
}
str = converter(n, 10, 0); // Assuming converter is correctly implemented
_pristr(str); // Assuming _pristr is correctly implemented
count = _leng_to_string(str); // Assuming _leng_to_string is correctly implemented

return count;
}

/**
 * _unsignedint - prints unsigned integer using putchar
 * @args: integer to be printed
 * Return: count of characters printed
 */
int _unsignedint(va_list args) {
char *str;
unsigned int n = va_arg(args, unsigned int);
int count = 0;

str = converter(n, 10, 0); // Assuming converter is correctly implemented
_pristr(str); // Assuming _pristr is correctly implemented
count = _leng_to_string(str); // Assuming _leng_to_string is correctly implemented

return count;
}
