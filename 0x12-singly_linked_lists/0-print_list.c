#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints length and the string, then returns amount of nodes
 * @h: Pointer to a struct constant
 * Return: Returns amount of node
**/

size_t print_list(const list_t *h)
{
unsigned int count = 0;

while (h != NULL)
{
if (h->str == NULL)
printf("[%u] %s\n", 0, "(nil)");
else
printf("[%u] %s\n", h->len, h->str);

h = h->next;
count++;
}

return (count);
}
