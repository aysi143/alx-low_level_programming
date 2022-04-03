#include "main.h"

/**
 * _strstr - Locating a substring
 *
 * @needle: Occurance to find
 *
 * @haystack: String to search
 *
 * Return: Pointer
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *src = haystack;
		char *sub = needle;

		while (*haystack && *sub && *haystack == *sub)
		{
			haystack++;
			sub++;
		}
		if (!*sub)
			return (src);
		haystack = src + 1;
	}
	return (0);
}
