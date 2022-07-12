#include "main.h"
#include <stdio.h>

/**
*print_array - print n digits of an array
*@a: array to print
*@n: number of values to print
*Description: prints n digits of array
*Return: nothing
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
