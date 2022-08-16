#include "lists.h"

/**
 * free_listint - frees list
 * @head: pointer to head node
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		ptr = head;
		head = head->next; /* ptr = head->next*/
		free(ptr);
	}
}

