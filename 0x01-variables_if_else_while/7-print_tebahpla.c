#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	char z;

	for (z = 122; z >= 97; z--)
	{
		putchar(z);
	}
	putchar('\n');
	return (0);
}
