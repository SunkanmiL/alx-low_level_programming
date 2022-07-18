#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a linked list
 * @head: pointer to head of list
 * Return: The head node's data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *new;
	int data;

	if (*head == NULL || head == NULL)
		return (0);

	data = (*head)->n;
	new = (*head)->next;
	free(*head);
	*head = new;
	return (data);
}
