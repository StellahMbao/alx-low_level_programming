#include "lists.h"

/**
 * find_listint_loop - finds loop in a linked list
 * @head: head pointer of linked list
 * Return:  The address of the node where the loop starts || NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *turtle, *hare;

	turtle = hare = head;
	while (turtle != NULL && hare != NULL)
	{
		turtle = turtle->next;
		hare = hare->next->next;

		if (turtle == hare)
		{
			turtle = head;
			while (turtle != hare)
			{
				turtle = turtle->next;
				hare = hare->next;
			}
			return (turtle);
		}
	}
	return (NULL);
}
