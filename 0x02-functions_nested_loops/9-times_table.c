#include "main.h"
/**
*times_table - prints times table up to 9
*Return: void
*/
void times_table(void)
{
	int a, b, product;

	product = 0;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			product = a * b;
			if (b != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (product >= 10)
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			else if ((product < 10) && (b != 0))
			{
				_putchar(' ');
				_putchar((product % 10) + '0');
			}
			else
			{
				_putchar((product % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
