#include "main.h"
#include "string.h"



/**
 * rev_string - reverse a string
 * @_strlen - reverse a string
 * @s: character
 * Return: len
 */

void rev_string(char *s)
{
	int i, len = strlen(s), j = 0;
	char temp;

	for (i = len - 1; i >= len / 2; i--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		j++;
	}
}
