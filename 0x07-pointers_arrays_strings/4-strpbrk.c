#include "main.h"

/**
*_strpbrk - searches a string for any of a set of bytes
*@s: string to search
*@accept: set of bytes to search for
*Description: retruns first occurrence in a string
*Return: pointer to first instance of string.
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
