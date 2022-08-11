#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/**
 * _strnlen - returns the length of a string
 * @s: string to count
 * Return: lenth of string
 **/
int _strnlen(const char *s)
{
	int i;

	if (s == NULL)
		return (0);
	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * add_node - add a new node at the beginning of a linked list
 * @head: address of beginning of string
 * @str: string to add to new node
 * Return: number of nodes in linked list
 **/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strnlen(str);
	new->next = *head;

	*head = new;
	return (new);
}
