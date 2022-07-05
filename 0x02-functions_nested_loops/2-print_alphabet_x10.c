#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet ten times
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char a;
	int count;

	for (count = 0; count < 10; count++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
