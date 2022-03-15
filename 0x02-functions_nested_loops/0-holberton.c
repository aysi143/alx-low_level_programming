#include "holberton.h"
/**
 * main - Entry block
 * Description: prints holberton on new line
 * Return: 0
 */
int main(void)
{
	char c[10] = "Holberton";

	int i = 0;

	while (i < 9)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
