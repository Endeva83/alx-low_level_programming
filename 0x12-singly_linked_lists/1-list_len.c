#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to linked list
 * Return: number of nodes in linked list
 **/
size_t list_len(const list_t *h)
{
	if (h == NULL)
		return (0);
	if (h->next != NULL)
		return (list_len(h->next) + 1);
	return (1);
}
