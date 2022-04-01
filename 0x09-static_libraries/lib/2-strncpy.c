#include "main.h"

/**
 * _strncpy - a function ...
 * @dest: the chaine
 * @src: the chaine
 * @n: the number
 *
 * Return: 1 or 0
 */

char	*_strncpy(char *dest, char *src, int n)
{
	int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

