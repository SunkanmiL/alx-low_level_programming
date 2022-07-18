#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: Pointer to linked list
 * Return: Number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	if (h == NULL)
		return (0);
	if (h->next != NULL)
		return (listint_len(h->next) + 1);
	return (1);
}
