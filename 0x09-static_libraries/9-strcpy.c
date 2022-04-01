#include "main.h"
/**
 *_strcpy - copies pointed string
 *@dest: dest
 *@src: src
 *
 *Return: pointer to dest
 **/
char *_strcpy(char *dest, char *src)
{
char  *start = dest;
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (start);
}
