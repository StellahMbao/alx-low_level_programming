#include <stdio.h>
#include <stdlib.h>
/* main- entry point*/
/* Return: 0 */

int main(void)
{
	char alpha = "a";

		while (alpha <= "z")
		{
		if ((alpha != "q") && (alpha != "e"))
		{
			putchar(alpha);
		}
		alpha++;
	putchr("\n");
	return (0);
}
