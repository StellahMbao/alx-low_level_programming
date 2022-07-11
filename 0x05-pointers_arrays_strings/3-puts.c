#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _puts - prints a string followed by a newline
 * @str: string
 * Return:
 */
void _puts(char *str)
{
	while (*str != '\0')
		_putchar(*str++);

	_putchar('\n');
}

