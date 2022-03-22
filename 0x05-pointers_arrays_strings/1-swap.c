#include "main.h"
/**
* swap_int - swaps the values
*@a: pointer to a
*@b: ponter to b
*Return: Nothing
*/
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
