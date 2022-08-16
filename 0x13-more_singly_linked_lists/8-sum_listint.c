#include "lists.h"

/**
 * sum_listint - returns sum of all data in n
 * @head: pointer to head of linked list
 * Return: sum of data || 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next; /* iterate till end of list*/
	}
	return (sum);
}
