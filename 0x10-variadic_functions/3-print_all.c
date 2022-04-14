#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: any variable type
 * Return: Nothing
**/

void print_all(const char * const format, ...)
{
unsigned int i = 0, j = 0;
char *str;
va_list ls;
va_start(ls, format);

while (format && format[i])
{
switch (format[i])
{
case 'c':
printf("%c", va_arg(ls, int));
break;
case 'i':
printf("%i", va_arg(ls, int));
break;
case 'f':
printf("%f", va_arg(ls, double));
break;
case 's':
str = va_arg(ls, char *);
if (str == NULL)
str = "(nil)";

printf("%s", str);
break;
}
j = i + 1;

while (format[j] && (format[j] == 'c' || format[j] == 'i' ||
format[j] == 'f' || format[j] == 's'))
{
printf(", ");
break;
}

i++;
}
printf("\n");
va_end(ls);
return;
}
