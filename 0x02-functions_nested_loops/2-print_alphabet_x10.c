#include "main.h"

/**
 * print_alphabet_x10 - print in lowercase
 */

void print_alphabet_x10(void)
{
	int count = 0;
	char d;

	while (count++ <= 9)
	{
		for (d = 'a'; d <= 'z'; d++)
			_putchar(d);

		_putchar('\n');
	}
}
