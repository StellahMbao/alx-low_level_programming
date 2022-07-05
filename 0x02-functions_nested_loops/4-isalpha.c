#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 *
 * @c: int used for argument of function
 *
 * Return: 0 || 1
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
