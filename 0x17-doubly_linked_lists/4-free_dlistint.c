#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees a doubly linked list
 * @head: head of list
 */
void free_dlistint(dlistint_t *head)
{
	if (!head) /* if list is empty*/
		return;
	while (head && head->next) /* not empty */
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
