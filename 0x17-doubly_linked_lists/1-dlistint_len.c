#include "lists.h"

/**
 * dlistint_len - Count number of elements in the list
 * @h: Head of the linked list
 *
 * Return: Number of nodes (size_t)
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
