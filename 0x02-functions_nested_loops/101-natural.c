#include "main.h"
#include <stdio.h>
/**
*main - print sum of all multiples of 3 and 5 up to 1024
*@void: Empty parameter list for main
*Description: prints the sum of all multiples of 3 and 5
*up to but not including 1024
*Return: return 0
*/
int main(void)
{
	int sum, a;

	sum = 0;

	for (a = 1; a < 1024; a++)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
		{
			sum += a;
		}
	}
	printf("%d\n", sum);
	return (0);
}
