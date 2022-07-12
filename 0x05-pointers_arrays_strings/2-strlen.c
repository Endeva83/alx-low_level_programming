#include "main.h"

/**
*_strlen - returns the length of the string
*@s: input string to count
*Description: returns the length of a given string
*Return: length of string as int
*/

int _strlen(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	return (n);
}
