#include<stdio.h>
#include <stdlib.h>

/**
 * main - prints the function.
 * @argc: counts agruments passed to the function for int.
 * @argv: gives the value passed to the function for char.
 *
 * Return: Returns always success.
**/

int main(int argc, char *argv[])
{
int i, res = 1;

if (argc != 3)
{
printf("%s\n", "Error");
return (1);
}
else
{
for (i = 1; i < argc; i++)
{
res *= atoi(argv[i]);
}
printf("%d\n", res);
}
return (0);
}
