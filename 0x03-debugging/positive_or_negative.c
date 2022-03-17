/*
******************************************************************************
*                                                                            *
*                                                 _____  ______    ____  ___ *
*    5-printf.c                                  /  _  \ |    |    \   \/  / *
*                                               /  /_\  \|    |     \     /  *
*    By: AYSI (aysanewyonasj@gmail.com)     /    |    \    |___  /     \  *
*                                              \____|__  /_______ \/___/\  \ *
*    Created: 2022-03-10 13:29:43 by Aysanew           \/        \/      \_/ *
*    Updated: 2022-03-10 13:29:43 by Aysanew                                 *
*                                                                            *
******************************************************************************
*/

#include<stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* positive_or_negative - my fonction
*@n: the number
*
* Return: Always 0 (Success)
*/

void positive_or_negative(int n)
{

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
}

