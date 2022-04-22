#include <stdio.h>

void turtleHare(void) __attribute__ ((constructor));

/**
 * turtleHare - prints strings before main
 * Returns: nothing
**/

void turtleHare(void)
{
char *string1 = "You're beat! and yet, you must allow,";
char *string2 = "I bore my house upon my back!";

printf("%s\n%s\n", string1, string2);
}
