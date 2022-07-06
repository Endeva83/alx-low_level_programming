#include "main.h"
#include <stdio.h>
/**
*main - print the first 98 fibonacci numbers.
*Description: print the first 98 fibonacci numbers.
*Return: Nothing.
*/
int main(void)
{
	int count;
	unsigned long x, y, z, a, b, c, take;

	x = 0;
	y = 1;
	for (count = 1; count <= 90; count++)
	{
		z = x + y;
		x = y;
		y = z;
		printf("%lu, ", z);
	}

	a = x % 1000;
	x = x / 1000;
	b = y % 1000;
	y = y / 1000;

	while (count <= 98)
	{
		take = (a + b) / 1000;
		c = (a + b) - take * 1000;
		z = (x + y) + take;
		x = y;
		y = z;
		a = b;
		b = c;

		if (c >= 100)
			printf("%lu%lu", z, c);
		else
			printf("%lu0%lu", z, c);
		if (count < 98)
			printf(", ");
		count++;
	}
	putchar('\n');
	return (0);
}
