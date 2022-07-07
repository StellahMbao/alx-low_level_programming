#include "main.h"
#include <stdio.h>

/**
 * print_line - prints line n times
 * @n: number of times line will be printed
 */
void print_line(int n)
{
	int counter = 1;

	if (n > 0)
	{
		while (counter <= n)
		{
			_putchar('_');
			counter++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}




