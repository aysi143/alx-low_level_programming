#include "main.h"
#include <stdio.h>
/**
 *_strchr - locates a character in a string
 *@s: s
 *@c: c
 *Return: pointer
 **/
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++);
	return (NULL);
	}
