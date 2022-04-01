#include "main.h"
/**
 *_strcmp - compares to strings
 *@s1: s1
 *@s2: s2
 *Return: 1
 **/
int _strcmp(char *s1, char *s2)
{

while (*s1 == *s2 && *s1 != '\0')
{
s1++;
s2++;
}
return (*s1 - *s2);
}
