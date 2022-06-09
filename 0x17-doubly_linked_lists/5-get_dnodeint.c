#include "lists.h"

/**
 * get_dnodeint_at_index - Get the nth node of the list
 * @head: Head of the list
 * @index: Index of the list, starting with 0
 *
 * Return: Node in the current index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *h = head;
	unsigned int i = 0;

	while (h != NULL)
	{
		if (i == index)
			return (h);
		i++;
		h = h->next;
	}

	return (NULL);
}
