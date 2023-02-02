#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node at index
 * index of a listint_t linked list
 * @head: pointer to the first element of the list
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *node_to_delete;
	unsigned int i;

	if (!head || !(*head))
		return (-1);
	if (index == 0)
	{
		node_to_delete = (*head);
		(*head) = (*head)->next;
		free(node_to_delete);
		return (1);
	}
	tmp = (*head);
	for (i = 0; i < (index - 1); i++)
	{
		if (!tmp || !(tmp->next))
			return (-1);
		tmp = tmp->next;
	}
	node_to_delete = tmp->next;
	tmp->next = node_to_delete->next;
	free(node_to_delete);
	return (1);
}
