#include "lists.h"

/**
 * pop_listint - deletes head node of a list
 * @head: linked list
 * Return: Head nodes's data
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp;

	if (*head == NULL)
		return (0);

	tmp = *head;
	data = tmp->n;

	*head = tmp->next;
	free(tmp);
	return (data);
}
