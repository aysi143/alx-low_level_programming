#include "main.h"
#include <stdio.h>
/**
 *_strncat - concatenates two strings
 *@dest: dest
 *@src: src
 *@n: n
 *Return: pointer to dest
 **/
char *_strncat(char *dest, char *src, int n)
{
int l, i;
for (l = 0; dest[l] != '\0'; l++)
{
}
for (i = 0; src[i] != '\0'; i++)
{
}
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[l + i] = src[i];
}
return (dest);
}
