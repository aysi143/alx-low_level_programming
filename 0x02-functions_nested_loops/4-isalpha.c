#include "main.h"

/**
 * _isalpha - check if character is lower case
 * @c: character to be checked
 *
 * Return: 1 if lowercase 0 otherwhise
 */
int _isalpha(int c)
{
	return (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z') ? 1 : 0);
}
