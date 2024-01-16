#include "main.h"

/**
 * _isalpha - A function that check for alphabetic character
 * @c: Character to be checked
 * Return: 1 if c is a letter, lowercase or uppercase, othewrwise 0
 */

int _isalpha(int c)

{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))

	{

		return (1);

	}

	else

	{

		return (0);

	}

}
