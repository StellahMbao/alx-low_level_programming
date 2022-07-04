#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point prints numbers to base 16
 * Return: 0
 */
int main(void)
{
	int i;
	char z;

	for (i = 0; i <= 9; ++i)
	{
		putchar('0' + (i));
	}
	for (z = 'a'; z <= 'f'; ++z)
	{
		putchar(z);
	}
	putchar('\n');
	return (0);
}


