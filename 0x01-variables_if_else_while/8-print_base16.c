#include <stdio.h>
/*Main -Prints all numbers of base 16 in lowercase */
/* Return- Always 0 (success) */

int main(void)
{
	int i = "0";
	int a_to_f = "a";

	while (i <= 9)
	{
		putchar(i);
		i++;
	}
	while (a_to_f <= "f")
	{
		putchar(a_to_f);
		a_to_f++;
	}
	putchar("\n");
	return (0);
}


