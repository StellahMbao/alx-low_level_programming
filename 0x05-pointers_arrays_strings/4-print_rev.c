#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints string in reverse
 *
 * @s: string
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	/* find length of string and point to last character */
	while (*s != '\0')
	{
		length++;
		++s;
	}

	s--;

	for (i = length; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}


