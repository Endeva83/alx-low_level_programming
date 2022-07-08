#include "main.h"
#include <stdio.h>

/**
*main - find prime number
*Description: The prime factors of 1231952 are 2, 2, 2, 2, 37 and 2081.
*Return: zero
*/

int main(void)
{
	long int x = 612852475143;

	long int count;

	for (count = 2; count < x; count++)
	{
		if (x % count == 0)
			x = x / count;
	}
	printf("%ld\n", count);
	return (0);
}
