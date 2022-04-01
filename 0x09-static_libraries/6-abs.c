#include "main.h"
#include <stdio.h>
/**
* _abs - check positive, negative or zero
* @n: the number to be checked
*
* Return: return absolute value
*/
int _abs(int n)
{
if (n >= 0)
{
return (n);
}
return (n * -1);
}
