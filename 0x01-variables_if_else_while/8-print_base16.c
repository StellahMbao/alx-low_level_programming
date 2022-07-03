#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point prints numbers to base 16
 * Return: 0
 */
int main(void)
{
	int i;
	char a;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}
	for (a = 97; a <= 102; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}


