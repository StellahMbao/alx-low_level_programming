#include "main.h"

/**
 * print_last_digit - prints  last digit of a number
 *
 * @x: int used in function argument
 *
 * Return: 0 for success
 */
int print_last_digit(int x)
{
	int last_digit = x % 10;

	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}

