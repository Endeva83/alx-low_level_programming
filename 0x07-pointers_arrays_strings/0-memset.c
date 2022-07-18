#include "main.h"

/**
*_memset - fills memory with a constant byte.
*@s: pointer to memory.
*@b: constant byte used to replace.
*@n: number of  bytes to replace.
*Description: fills memory s with byte b for n bytes
*Return: pointer to memory
*/

char *_memset(char *s, char b, unsigned int n)
{
	for (; n > 0; n--)
	{
		s[n - 1] = b;
	}
	return (s);
}
