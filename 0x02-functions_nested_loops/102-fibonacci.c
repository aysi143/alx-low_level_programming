#include "holberton.h"
#include <stdio.h>
/**
 * main - prints first 50 numbers of the fibonacci sequence
 * Return: 0
 */
int main(void)
{
	int i, n;
	long f1, f2, next;

	f1 = 1;
	f2 = 2;
	n = 50;

	for (i = 0; i < n; i++)
	{
		if (i == 49)
		{
			printf("%lu", f1);
		} else
		{
			printf("%lu, ", f1);
			next = f1 + f2;
			f1 = f2;
			f2 = next;
		}
	}
	printf("\n");
	return (0);
}
