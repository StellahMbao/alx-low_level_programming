#include "main.h"
/**
 * _islower - checks for lowercase characters
 *
 * @c: used as argument of function
 *
 * Return: 0 || 1 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}

