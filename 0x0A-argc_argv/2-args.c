#include <stdio.h>

/**
 * main - prints the function.
 * @argc: is argument counter to an int.
 * @argv: is an agument value determiner for char.
 *
 * Return: Returns always success.
**/

int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);

return (0);

}
