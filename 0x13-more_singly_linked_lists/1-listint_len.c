#include "lists.h"

/**
 * listint_len - returns number of elements in a linked list
 * @h: list
 * Return: Number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count += 1;
		h = h->next;
	}
	return (count);
}
