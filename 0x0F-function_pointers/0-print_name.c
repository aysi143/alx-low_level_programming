#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name as is
 * @name: name of the person
 * @f: is pointer
 * Return: Nothing.
**/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
{
return;
}
else
{
f(name);
}
}
