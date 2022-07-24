#include "main.h"

/**
 * _abs - computes absolite value of an integer
 *
 * @c: integer used in argument
 *
 * Return: 0 Always
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
	{
		return (c * -1);
	}
}
