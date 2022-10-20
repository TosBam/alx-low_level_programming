#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_number - print an interger
 * @n: interger to be printed
 * Return: void
 */

void print_number(int n)
{
	unsigned int x, y, count;

	if (n < 0)
	
	{
		_putchar(45);
		x = -n;
	}
	else
	{
		x = n;
	}
	y = x;
	count = 1;

	while (y > 9)
	{
		y /= 10;
		count *= 10;
	}
	for (count >= 1; count /= 10)
	{
		_putchar(((x / count) % 10) + 48);
	}
}
