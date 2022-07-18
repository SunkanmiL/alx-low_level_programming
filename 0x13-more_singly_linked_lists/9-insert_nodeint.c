#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the head of the node
 * @idx: the index of the list where the new node should be added
 * @n: Value of input
 * Return: Always 0 (Success)
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;

	listint_t *new;
	listint_t *temp;

	if (*head == NULL)
		return (NULL);

	temp = *head;

	while (temp != NULL)
	{
		if (count == idx - 1)
		{
			new = malloc(sizeof(listint_t));
			if (new == NULL)
			{
				return (NULL);
			}
			else
			{
				new->n = n;
				new->next = temp->next;
				temp->next = new;
				return (new);
			}
		}
		if (temp->next != NULL)
			temp = temp->next;
		count++;
	}
	return (NULL);
}
