#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * *new_dog - function creates new dog
 * @namme: first member
 * @age: second member
 * @owner: third member
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
		copy_of_owner = malloc(len(owner) + 1);
			if (copy_of_owner == NULL)
			{
				free(copy_of_name);
				free(dog1);
				return (NULL);
			}
			dog1->owner = strcpy(copy_of_owner, owner);


}
