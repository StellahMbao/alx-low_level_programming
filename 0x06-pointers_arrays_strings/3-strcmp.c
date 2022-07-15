#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strcmp - compares 2 strings
 * @s1: first string
 * @s2: second string
 * Return: nothing
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}
