#include "main.h"

/**
**_strcpy - copies string src to buffer pointed to by dest
*@dest: string pointer
*@src: buffer pointer
*Description: cpies string src to buffer
*Return: dest pointer
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (i >= 0)
	{
		dest[i] = src[i];

		if (src[i] == '\0')
			return (dest);
		i++;
	}
	return (dest);
}
