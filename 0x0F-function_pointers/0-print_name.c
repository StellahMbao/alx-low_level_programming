#include <stdlib.h>

/**
 * print_name - function that prints name
 * @name: parameter needed
 * @f: function to execute
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
