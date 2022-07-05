#include "main.h"
/**
 * print_sign - prints sign of a number
 *
 * @n: int used in function argument
 *
 * Return: 1 || 0 || -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
	}
	return (0);
}

