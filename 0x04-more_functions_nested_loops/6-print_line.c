#include "main.h"

/**
 * print_line - draw a straight line
 * @n: number of '_' to print
 * Return: success
 */

void print_line(int n)

{
	int line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
			_putchar('_');
	}

	_putchar('\n');
}
