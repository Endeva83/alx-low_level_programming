#include "main.h"
#include <stdio.h>

/**
* main - print all arguemnts
* @argc: number of arguments
* @argv: arguments entered
* Description: print all arguments including file name
* Return: zero
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
