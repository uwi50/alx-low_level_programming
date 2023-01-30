#include "lists.h"

/**
 * print_list - prints all element of the linked list
 * @h: point to list_t
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t f = 0;

	while (h)
	{
		if (!h -> str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		f++;
	}
	return (s);
}
