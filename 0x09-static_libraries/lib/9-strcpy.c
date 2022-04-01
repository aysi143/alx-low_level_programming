#include "main.h"

/**
 * _strcpy - a function that takes a pointer to an int as parameter and
 * @dest: chaine of caractere
 * @src: cahine caractere
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
