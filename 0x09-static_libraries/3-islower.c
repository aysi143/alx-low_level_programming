#include "main.h"
#include <stdio.h>
/**
 * _islower - check the c is lowercase
 * @c: the character to be checked
 * Return: 1 if lowercase and 0 otherwise
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
