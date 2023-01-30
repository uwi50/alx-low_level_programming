#include "lists.h"

/**
 * list_len - returns the number of elements in a linked lists
 * @h: points to the list_t list
 *
 * Return: number of elements in h
 */

size_t list_len(const list_t *h)
{
	size_t f = 0;

	while (h)
	{
		f++;
		h = h->next;
	}
	return (f);
}
