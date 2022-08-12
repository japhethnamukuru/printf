#include "main.h"

/**
 * printhex - prints hexadecimal and the psecifier
 *
 * @format: pointer
 *
 * @pa: hexadecimal values array
 *
 * Return: hex value
 */

int printhex(char *format, va_list pa)
{
	unsigned int num = va_arg(pa, unsigned int);
	unsigned int num2;
	int i, j, copy, count = 0;
	char *numhex;
	(void)format;

	if (num == 0)
		return (_putchar('0'));
	for (num2 = num; num2 != 0; count++)
		num2 = num / 16;
	numhex = malloc(count);

	for (i = 0; num != 0; i++)
	{
		copy = num % 16;
		if (copy < 10)
			numhex[i] = copy + '0';
		else
			numhex[i] = copy - 10 + 'a';
		num = num / 16;
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(numhex[j]);
	free(numhex);
	return (count);
}

/**
 * printHex - print hexadecimal with X specifier
 *
 * @format: pointer
 *
 * @pa: array of hexadecimal values
 *
 * Return: number of digits printed
 */

int printHex(char *format, va_list pa)
{
	unsigned int num = va_arg(pa, unsigned int);
	unsigned int num2;
	int i, j, copy, count = 0;
	char *numhex;
	(void)format;

	if (num == 0)
		return (_putchar('0'));

	for (num2 = num; num2 != 0; count++)
		num2 = num / 16;
	numhex = malloc(count);

	for (i = 0; num != 0; i++)
	{
		copy = num % 16;
		if (copy < 10)
			numhex[i] = copy + '0';
		else
			numhex[i] = copy - 10 + 'A';
		num = num / 16;
	}
	for (j = i - 1; j >= 0; j++)
		_putchar(numhex[j]);
	free(numhex);
	return (count);
}
