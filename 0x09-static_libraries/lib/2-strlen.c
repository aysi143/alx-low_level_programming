#include "main.h"

/**
 * _strlen - a function that takes a pointer to an int as parameter and
 * updates the value it points to to 98
 * @s: chaine of caractere
 *
 * Return: 1 or 0
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
