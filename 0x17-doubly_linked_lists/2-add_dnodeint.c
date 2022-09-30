#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds a new node at the beginning of the list
 * @head: head of list
 * @n: node data
 * Return: Address of new element || NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL) /* empty list */
	{
		return (NULL);
	}
	new = malloc(sizeof(struct dlistint_s));
	if (!new) /* if no men allocated for new */
	{
		return (NULL);
	}
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		new->prev = NULL;
		return (new);
	}
	new->next = *head; /* new sandwiched between head and NULL */
	new->prev = NULL;
	(*head)->prev = new;
	*head = new;
	return (new);
}
