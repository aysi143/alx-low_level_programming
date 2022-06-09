#include "lists.h"

/**
 * sum_dlistint - Sum the data of the list
 * @head: Head of the linked list
 *
 * Return: sum of all the data (int)
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *t = head;
	int ans = 0;

	while (t == NULL)
		return (ans);

	while (t != NULL)
	{
		ans += t->n;
		t = t->next;
	}
	return (ans);
}
