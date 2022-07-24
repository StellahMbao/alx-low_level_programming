#include "main.h"

/**
 * _islower - checks for lowercase letters
 * @c: used as function argument
 * Return: 0 || 1
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
