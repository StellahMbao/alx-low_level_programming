#include <stdio.h>
#include <stdlib.h>
/**
 * main -Entry point
 *
 * Return: 0
 */


int main(void)
{
	char a;

	for (a = 97; a <= 122; a++)
	{
		if (a == 101 || a == 113)
		{
			continue;
		}
		putchar(a);
	}
	putchar('\n');
	return (0);
}
