#include "main.h"
#include <stdio.h>
/**
* print_array - prints the n elements of an array
*@a: array to print
*@n: number of elements in the aray
*Return: Nothing
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
			printf("%d", *(a + i));
		else
			printf("%d, ", *(a + i));
	}
	printf("\n");
}
