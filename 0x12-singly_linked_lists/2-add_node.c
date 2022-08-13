#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds node at the beginning of a list
 * @head: linked list
 * @str: data belonging to new mode
 * Return: address of new element || NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
	{
		return (NULL);
	}

	if (strdup(str) == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = strlen(str);

	if (head == NULL)
		new_node->next = NULL;

	else
		new_node->next = *head;

	*head = new_node;
	 return (new_node);
}

