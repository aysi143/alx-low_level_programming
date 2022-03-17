#include "main.h"

/**
 * print_line - Entry point
 *@n: number of times to print '_'
 * Return: no return
 */
void print_line(int n)
{
	int i;
	char k;

	k = '_';
	for (i = 0; i < n; i++)
	{
		if (n > 0)
			_putchar(k);
	}
	_putchar('\n');
}
