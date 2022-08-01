#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
#include <string.h>

/**
 * *new_dog - function creates new dog
 * @name: first member
 * @age: second member
 * @owner: third member
 * Return:Dog1
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1;
	char *new_name;
	char *new_owner;

	dog1 = malloc(sizeof(dog_t));/*assigning memory*/
	if (dog1 == NULL)
		return (NULL);
	dog1->age = age;

	if (name != NULL)
	{
		new_name = malloc(strlen(name) + 1);
		if (new_name == NULL)
		{
			free(dog1);
			return (NULL);
		}
		dog1->name = strcpy(new_name, name);
	}
	else
		dog1->name = NULL;
	if (owner != NULL)
	{
		new_owner = malloc(strlen(owner) + 1);

		if (new_owner == NULL)
		{
			free(new_name);
			free(dog1);
			free(dog1);
		}
		dog1->owner = strcpy(new_owner, owner);
	}
	else
		dog1->owner = NULL;
	return (dog1);
}
