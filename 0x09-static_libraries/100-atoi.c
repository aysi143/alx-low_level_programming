#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string to be converted
 * Return: integer
 */
int _atoi(char *s)
{
  int i, sign;
  unsigned int num;

  num = i = 0;
  sign = 1;
  while ((s[i] < '0' || s[i] > '9') && s[i] != '\0')
    {
      if (s[i] == '-')
	sign *= -1;
      i++;
    }
  for (; s[i] != '\0' && s[i] >= '0' && s[i] <= '9'; i++)
    {
      num = num * 10 + (s[i] - '0');
    }
  num *= sign;
  return (num);
}
