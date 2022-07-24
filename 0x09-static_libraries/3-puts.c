#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _puts - prints a string followed by a new line
 * @str: string to print
 * Return:
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
