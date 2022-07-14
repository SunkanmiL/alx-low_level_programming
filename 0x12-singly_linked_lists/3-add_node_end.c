#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: input
 * @str: string
 * Return: Always 0 (Success) 
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int i, count = 0;
	list_t *new_node;
	list_t *temp;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		count++;

	new_node->len = i;
	new_node->str = strdup(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new);
	}

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;
	return (new);
}
