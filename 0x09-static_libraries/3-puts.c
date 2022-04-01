#include <stdio.h>
#include "main.h"
/**
 *_puts - print a string
 *@str: pointer to str
 *
 **/
void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
