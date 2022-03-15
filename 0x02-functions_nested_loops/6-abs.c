#include "holberton.h"

/**
 * _abs - computes the absolute value for an interger
 * @n: interger to be tested
 * Return: 0 or 1
 */

int _abs(int n)

{
	return (n < 0 ? -1 * n : n);
}
