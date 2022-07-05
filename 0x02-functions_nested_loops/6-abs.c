#include "main.h"
/**
 * _abs - computes absolute value of an integer
 *
 * @c: integer used in argument
 *
 * Return: Always 0
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
	return (c * -1);
}

