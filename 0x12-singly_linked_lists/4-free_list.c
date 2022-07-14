#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_list - a function that frees a list_t list
 * @head: struct
 * Return: Always 0 (Success)
 */

void free_list(list_t *head)
{
	if (head == NULL)
		return;

	if (head->next != NULL)
		free_list(head->next);
	free(head->str);
	free(head);
}
