#include "main.h"

/**
* _strcmp - compares two strings
* @s1: first string.
* @s2: second string
* Return: 0 if s1 and s2 are equals
*/

int _strcmp(char *s1, char *s2)
{
	int i, n;

	i = 0;

	n = 0;

	while (n == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		n = *(s1 + i) - *(s2 + i);
		i++;
	}
	return (n);
}
