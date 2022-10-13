#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Sizes of a char: %d byte(s)\n", sizeof(a));
	printf("Sizes of a int: %d byte(s)\n", sizeof(b));
	printf("Sizes of a lond int: %d byte(s)\n", sizeof(c));
	printf("Sizes of a long long int: %d byte(s)\n", sizeof(d));
	printf("Sizes of a float: %d byte(s)\n", sizeof(e));
	return (0);
}
