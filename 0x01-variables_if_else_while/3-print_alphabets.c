#include <stdio.h>
#include <stdlib.h>
/* main - entry point */
/* Return: always 0 */

int main(void)
{
	char lower = "a";

	while (lower <= "z")
	{	putchar(lower);
		lower++;
	}
	char upper = "A";

	while (upper <= "Z")
	{
		putchar (upper);
		upper++;
	}
	putchar("\n");
	return (0);
}

