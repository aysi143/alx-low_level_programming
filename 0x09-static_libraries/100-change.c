#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry Point
 * @argc : counter
 * @argv : pointer of arguments
 * Return:integer
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	else
	{
		if (atoi(argv[1]) >= 25)
		{
			sum += atoi(argv[1]) / 25;
			sprintf(argv[1],"%d", atoi(argv[1]) % 25);
		}
		if (atoi(argv[1]) >= 10)
		{
			sum += atoi(argv[1]) / 10;
			sprintf(argv[1],"%d", atoi(argv[1]) % 10);
		}
		if (atoi(argv[1]) >= 5)
		{
			 sum += atoi(argv[1]) / 5;
			 sprintf(argv[1],"%d", atoi(argv[1]) % 5);
		}
		if (atoi(argv[1]) >= 2)
		{
			sum += atoi(argv[1]) / 2;
			sprintf(argv[1],"%d", atoi(argv[1]) % 2);
		}
		if (atoi(argv[1]) == 1)
		{
			sum += 1;
		}
		printf("%d\n", sum);
		return (0);
	} 
}
