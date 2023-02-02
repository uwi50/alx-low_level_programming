#include "lists.h"

/**
 * insert_nodeint_at_index- inserts a new node at a given position
 * @head: listint_t
 * @idx: index of the list
 * @n: integer
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *tmp, *new;

	if (head == NULL)
		return (NULL);
	if (idx == 0)
		return (add_nodeint(head, n));

	tmp = *head;
	for (i = 0; i < (idx - 1); i++)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
