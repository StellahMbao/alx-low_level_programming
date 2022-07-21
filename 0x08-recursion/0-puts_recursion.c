#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *  _puts_recursion - prints string followed by a new line
 *  @s: string to print
 */
void _puts_recursion(char *s)
{
	unsigned int index = 0;

	if (s[index] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[index]);
	_puts_recursion(s + 1);
}


