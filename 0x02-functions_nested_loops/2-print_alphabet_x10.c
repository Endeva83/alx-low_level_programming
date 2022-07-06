#include "main.h"
/**
*print_alphabet_x10 - prints 10 times the alphabet, in lowercase
*/
void print_alphabet_x10(void)
{
	int count;

	char i;

	for (count = 1; count <= 10; count++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
