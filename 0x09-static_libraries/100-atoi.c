#include "main.h"

/**
 * _atoi - convert a number in a string to an integer
 *
 * @s: String to be converted
 *
 * Return: converted integer OR 0 if none
 */

int _atoi(char *s)
{
	int sign_cache = 1;
	int result = 0;

	while (s[0] != '\0')
	{
		if (s[0] == '-')
			sign_cache *= -1;
		else if (s[0] >= '0' && s[0] <= '9')
			result = (result * 10) + (s[0] - '0') * sign_cache;
		else if (result)
			break;

		s++;
	}

	return (result);
}
