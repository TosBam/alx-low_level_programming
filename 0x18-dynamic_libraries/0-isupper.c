#include "main.h"

/**
 * _isupper - check if var is uppercase or lowercase
 * @c: character to check
 * Return: 1 or 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
