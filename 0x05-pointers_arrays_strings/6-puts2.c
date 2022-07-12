#include "main.h"

/**
*puts2 - writes every other character
*@str: input string to print
*Description: prints every other character of string
*Return: nothing
*/

void puts2(char *str)
{
	int i, j;

	i = 0;
	j = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	while (j < i)
	{
		_putchar(str[j]);
		j += 2;
	}
	_putchar('\n');
}
