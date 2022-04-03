#include "main.h"

/**
 * _islower - Checks for lowercase character
 *
 * @c: Number to be checked
 *
 * Return: 1 (Success) OR 0 (Failure)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
