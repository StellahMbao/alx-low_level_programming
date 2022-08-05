#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints new string,
 * followed by a new line
 * @separator: string to be printed between strings
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *s;

	if (n > 0)
	{
		va_start(valist, n);
		for (i = 1; i <= n; i++)
		{
			s = va_arg(valist, char *);
			if (s == NULL)
			{
				printf("(nil)");
			}
			else
				printf("%s", s);
			if (i != n && separator != NULL)
				printf("%s", separator);
		}
		va_end(valist);
	}
	printf("\n");
}
