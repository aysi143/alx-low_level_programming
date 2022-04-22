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
 * add_node - Prints length and the string, then returns amount of nodes
 * @head: Pointer to a struct constant
 * @str: haha ex di
 * Return: Returns amount of node
**/

list_t *add_node(list_t **head, const char *str)
{

list_t *newNode;

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
newNode->next = *(head);
*head = newNode;

return (newNode);
}
