#include "main.h"

/**
 * _isupper - checks for uppercase letters
 * @c: used as argument in function
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
