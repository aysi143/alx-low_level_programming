#include "main.h"
/**
 *_memset - fill memory with constant byte
 *@s: s
 *@b: b
 *@n: n
 *Return: pointer to object
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
			}
	return (s);
}
