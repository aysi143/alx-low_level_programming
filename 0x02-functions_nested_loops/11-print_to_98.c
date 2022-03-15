#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints all the natural numbers from n to 98
 *
 * @n: interger to be tested
 * Return: list of numbers
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%i, ", i);
		}
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			printf("%i, ", i);
		}
	}
	printf("98\n");
}
