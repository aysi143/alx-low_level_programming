#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * _strlen - Length of the passed string
 * @s: String
 * Return: Returns the length of a string
**/
int _strlen(const char *s)
{
int i = 0;

while (*(s + i) != '\0')
i++;

return (i);
}

/**
 * add_node_end - Add nodes to the end of the nodes
 * @head: Pointer to a struct pointer
 * @str: String passed
 * Return: Returns amount of node
**/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *newNode, *tmp = *head;

newNode = malloc(sizeof(newNode));
if (newNode == NULL)
return (NULL);
if (str == NULL)
{
free(newNode);
return (NULL);
}
newNode->len = _strlen(str);
newNode->str = strdup(str);
newNode->next = NULL;
if (*head == NULL)
{
*head = newNode;
return (newNode);
}
while (tmp->next != NULL)
tmp = tmp->next;
tmp->next = newNode;

return (newNode);
}
