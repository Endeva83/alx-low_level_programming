#include "main.h"

/**
*rot13 - encodes a string using rot13
*@s: input string.
*Return: the pointer to string.
*/

char *rot13(char *s)
{
	int count = 0, i;

	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + count) == letters[i])
			{
				*(s + count) = rot13[i];
				break;
			}
		}
		count++;
	}
	return (s);
}
