#include "main.h"
#include <stdio.h>

/**
 * print_square - prints square
 * @size: size
 */
void print_square(int size)
{
	int length;
	int width;

	if (size > 0)
	{
		for (length = 1; length <= size; length++)
		{
			for (width = 1; width <= size; width++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
