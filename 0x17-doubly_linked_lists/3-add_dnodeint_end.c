#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - add node at the end of doubly linked list
 * @head: head of list
 * @n: nodes
 * Return: address of new element || NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *end;

	if (!head)
	{
		return (NULL);
	}
	new = malloc(sizeof(struct dlistint_s));
	if (!new)
		return (NULL);
	new->n = n;

	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		new->prev = NULL;
		return (new);
	}
	end = *head;
	while (end->next != NULL)
		end = end->next;
	new->next = NULL;
	new->prev = end;
	end->next = new;
	return (new);
}



