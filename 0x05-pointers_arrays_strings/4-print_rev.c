#include "main.h"
/**
* print_rev - prints a string in reverse
*@s: string to reverse
*Return: Nothing
*/
void print_rev(char *s)
{
	int l;

	l = 0;
	while (*(s + l) != '\0')
		l++;
	l--;
	for (; l >= 0; l--)
		_putchar(*(s + l));
	_putchar('\n');
}
