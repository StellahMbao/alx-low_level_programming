#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n, x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;

	printf("Last digit of %d is %d ", n, x);
	if (x > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (x == 0)
	{
		printf("and is 0\n");
	}
	else if (x < 6 && x != 0)
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
