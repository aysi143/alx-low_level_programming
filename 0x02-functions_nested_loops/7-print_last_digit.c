#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @n: The number
 *
 * Return: The last digit of n
 */
int print_last_digit(int n)
{
	int last_digit = ((n < 0 ? -1 : 1) * n) % 10;

	_putchar('0' + last_digit);
	return (last_digit);
}
