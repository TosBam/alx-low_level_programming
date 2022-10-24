#include "main.h"

/**
 * swap_int - swap values of two intergers
 * @a: int a
 * @b: int b
 */

void swap_int(int *a, int *b)
{
	int d;

	d = *a;
	*a = *b;
	*b = d;
}
