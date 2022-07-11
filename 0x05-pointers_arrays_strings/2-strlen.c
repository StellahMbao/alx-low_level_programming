#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strlen - returns length of a string
 * @s: string
 * Return: len
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s > '\0')
	{
		len++;
		s++;
	}
	return (len);
}

