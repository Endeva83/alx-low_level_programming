#include "main.h"

/**
*_isdigit - checks if value a digit 0-9
*@c: int to be checked
*Return: 1 if c is a digit, otherwise 0
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
