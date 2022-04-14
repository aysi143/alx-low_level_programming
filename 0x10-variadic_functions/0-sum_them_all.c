#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - is function which sums given number of arguments
 * @n: is unsigned const int
 *
 * Return: returns the sum
**/
int sum_them_all(const unsigned int n, ...)
{
unsigned int sum = 0, i;
va_list ls;

va_start(ls, n);

for (i = 0; i < n; i++)
sum += va_arg(ls, int);

va_end(ls);

return (sum);

if (n == 0)
return (0);
}
