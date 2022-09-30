#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - prints all elements of a list
 * @h: points to head of list
 *
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes;

	for (nodes = 0; h != NULL; nodes++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}

