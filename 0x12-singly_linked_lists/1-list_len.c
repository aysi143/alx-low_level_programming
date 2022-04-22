#include <stdio.h>
#include "lists.h"

/**
 * list_len - Prints length and the string, then returns amount of nodes
 * @h: Pointer to a struct constant
 * Return: Returns amount of node
**/

size_t list_len(const list_t *h)
{
unsigned int count = 0;

while (h != NULL)
{
h = h->next;
count++;
}

return (count);
}
