#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints more numbers
 */
void more_numbers(void)
{
	char i;
	int count;

	for (count = 1; count <= 10; count++)
	{
		for (i = 0; i <= 14; i++)
		{
			if ((i / 10) > 0)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
