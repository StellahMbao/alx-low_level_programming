#include "lists.h"
#include <stdlib.h>

/**
 * sum_dlistint - returns sum of data in linked list
 * @head: head poinetr of list
 * Return: sum || 0 for empty list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

