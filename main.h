#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * struct structprint - structure with char and function attributes
 *
 * @q: characters
 *
 * @u: callback function
 */

typedef struct structprint
{
	char *q;
	int (*u)(char *format, va_list);
} structype;

int _putchar(char ch);
int _puts(char *string);
int printc(char *format, va_list);
int printstr(char *format, va_list);
int (*driver(char *format))(char *format, va_list);
int _printf(char *format, ...);
int printint(char *format, va_list pa);
int integer(int number);
int contadordigit(int number);
int _abs(int number);
int printpercent(char *format, va_list pa);
int printhex(char *format, va_list);
int printHex(char *format, va_list);
int printocta(char *format, va_list);
int printunsign(char *format, va_list);
#endif
