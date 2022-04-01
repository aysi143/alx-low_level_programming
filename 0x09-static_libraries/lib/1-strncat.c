#include "main.h"

/**
 * _strncat - a function ...
 * @dest: the chaine
 * @src: the chaine
 * @n: the number
 *
 * Return: 1 or 0
 */

char	*_strncat(char *dest, char *src, int n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
