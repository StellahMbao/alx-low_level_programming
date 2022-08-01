#include <stdio.h>
#include "dog.h"

/**
 * init_dog - inittialize a variable
 * @d: variable of type struct dog
 * @name: first member
 * @age: second member
 * @owner: thrid member
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
