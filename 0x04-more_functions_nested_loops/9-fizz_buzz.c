#include <stdio.h>

/**
 * main - prints numbers 0 to 100 followed by a new line
 * prints Fizz for multiples of 3
 * prints Buzz for multpiles of 5
 * prints FizzBuzz for multiples of 3 and 5
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0)
		{
			printf("Fizz");
		}
		else if (x % 5 == 0)
		{
			printf("Buzz");
		}
		else if ((x % 5 == 0) && (x % 3 == 0))
			printf("FizzBuzz");

		else
			printf("%d", x);
	}

	if (x < 100)
	{
		printf(" ");
	}
	else
	{
		printf("\n");
	}
	return (0);
}
