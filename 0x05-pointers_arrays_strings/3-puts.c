#include "main.h"

/**
*_puts - Prints the string
*@str: input string to print
*Description: Prints the string to stdout
*Return: nothing
*/

void _puts(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
