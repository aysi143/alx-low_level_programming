#include "main.h"
/**
 *_memcpy - copies memory area.
 *@dest: dest
 *@src: src
 *@n: n
 *Return: pointer to dest
 **/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
			}
	return (dest);

	}
