#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: 0 for success
 */
int main(void)
{
	int x;
	int y;

	for (x = 0; x <= 9; ++x)
	{
		for (y = 0; y <= 9; ++y)
	}
	if (x != y && x < y)
	{
		putchar((x) + '0');
		putchar((y) + '0');
	}
	if (x == 8 && y == 9)
	{
		continue;
	}
	else
	{
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
