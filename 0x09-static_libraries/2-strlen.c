#include "main.h"
#include <stdio.h>
/**
 *_strlen - return lenght of string
 *@s: pointer s
 *Return: i
 **/
int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
