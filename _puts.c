#include "main.h"

/**
 * _puts - prints the string to stdout
 *
 * @string: input string
 *
 * Return: string count
 */

int _puts(char *string)
{
	int count = 0;

	while (*string)
	{
		_putchar(*string);
		string++;
		count++;
	}
	return (count);
}
