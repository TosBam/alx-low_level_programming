#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: string parameter
 * Return: 0
 *
 */

void print_rev(char *s)
{
	int i, len;

	i = 0;
	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}