#include "main.h"

/**
 * printc - prints a character
 *
 * @pa: format for char
 *
 * @format: pointer
 *
 * Return: characters to print
 */

int print(char *format, va_list pa)
{
	(void)format;

	_putchar(va_arg(pa, int));

	return (1);
}
