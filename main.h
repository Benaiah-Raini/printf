#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
typedef int (*f_ptr)(va_list args);
typedef struct Functions
{
	char *span;
	int (*f)(va_list args);
} func;
int _printf(const char *format, ...);
char *converter(unsigned int i, int base, ...);
int _prints(char c);
int _leng_to_string(char *s);
void _pristr(char *s);
char *_stcopy(char *desty, char *src);
int (*controller(char s))(va_list);
int _char(va_list args);
int _string(va_list args);
int _signedint(va_list args);
int _unsignedint(va_list args);
int print_bin(va_list val);
int _hexa_lower(va_list args);
int _hexa_upper(va_list args);
int _octal(va_list args);
int print_other_string(va_list val);
int print_HEX_extra(unsigned int num);

#endif
