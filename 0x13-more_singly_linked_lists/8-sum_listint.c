#include "lists.h"
/**
 * sum_listint - function that return d sum of all the data in the linked list
 * @head: pointer to the head node of the linked list
 * Return: Sum of all the data, or 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int total = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}

	return (total);
}
