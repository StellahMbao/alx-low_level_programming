#include <stdio.h>
/*Main- Prints lowercase alphabets in reverse*/
/*Return: 0 (Success) */

int main(void)
{
	char alpha = "z";

	while (alpha >= "a")
	{
		putchar(alpha);
		alpha--;
	}
	putchar("\n");
	return (0);
}
