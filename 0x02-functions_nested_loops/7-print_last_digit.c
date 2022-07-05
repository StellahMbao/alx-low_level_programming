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
	if (x > 0 || x == 0)
	{
		_putchar(x % 10 + '0');
		return (x % 10);
	}
	else 
	{
		x = x * -1;
		_putchar(x % 10 + '0');
		return (x % 10);
	}
}

