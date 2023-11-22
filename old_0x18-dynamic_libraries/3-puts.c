#include "main.h"

/**
 * _puts - prints a string
 * @str: string parameter
 * Return: 0
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		++str;
	}
	_putchar('\n');
}
