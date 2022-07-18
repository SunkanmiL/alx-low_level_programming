#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node at index
 * @head: pointer to head of node
 * @index: the index of the node that should be deleted
 * Return: Always 0 (Success)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *old, *next;
	unsigned int i;

	if (*head == NULL || head == NULL)
		return (-1);
	next = *head;

	if (index == 0)
	{
		old = next->next;
		free(next);
		*head = old;
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		if (next == NULL)
			return (-1);
		old = next;
		next = next->next;
	}
	old->next = next->next;
	free(next);
	if (index == 0)
	{
		head = &old;
		return (1);
	}
	return (i);
}
