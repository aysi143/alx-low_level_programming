#include "main.h"

/**
 * _islower - check if character is lower case
 * @c: character to be checked
 *
 * Return: 1 if lowercase 0 otherwhise
 */
int _islower(int c)
{
	return ('a' <= c && c <= 'z' ? 1 : 0);
}
