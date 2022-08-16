#include "lists.h"

/**
 * add_nodeint - Adds node at the beggining of a list
 * @head: pointer to be header of the list
 * @n: node to be added to list
 * Return: Address of new node || NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
