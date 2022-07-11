#include <stdio.h>

/**
 * main - Illustrating the array type decay
 *
 *Return: Always 0
 */
int main(void)
{
	int p;
	int t[10];

	p = t;
	printf("t: %p\n", t);
	rintf("&t[0]: %p\n", &t[0])
	printf("p: %p\n", p);
	f(t);
	return (0);
}
