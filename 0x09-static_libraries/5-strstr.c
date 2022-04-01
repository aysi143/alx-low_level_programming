#include "main.h"
#include <stdio.h>
/**
 *_strstr - locates a substring
 *@haystack: haystack
 *@needle: needle
 *Return: pointer
 **/
char *_strstr(char *haystack, char *needle)
{
		while (*haystack)
		{
			char *Begin = haystack;
			char *pattern = needle;

			while (*haystack && *pattern && *haystack == *pattern)
			{
				haystack++;
				pattern++;
			}
			if (!*pattern)
				return (Begin);
			haystack = Begin + 1;
		}
		return (NULL);
	}
