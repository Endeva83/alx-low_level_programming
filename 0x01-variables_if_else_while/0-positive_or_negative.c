#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
*main - Entry point, positive or negative, print sign of random number
*@void: Empty parameter list for main
*Decription: positive, zero and negative values
*Return: zero for success
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
