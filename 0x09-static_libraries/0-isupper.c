#include "main.h"
#include <stdio.h>
/**
 * _isupper - check the c is uppercase
 * @c: the character to be checked
 * Return: 1 if uppecase and 0 otherwise
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
