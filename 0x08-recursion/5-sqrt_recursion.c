#include "main.h"

/**
 * sqrt_a - main - check the code
 * @a: number
 * @b: number of power
 * Return: Always 0.
 */

int sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrt_a(a, b + 1));
}

/**
 * _sqrt_recursion - main - check the code
 * @n: number
 *
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}
