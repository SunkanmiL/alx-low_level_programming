#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - function that prints all the elements of a list_t list
 * @h: Pointer to elements of the list
 * Return: 0 if str is null
 */

size_t print_list(const list_t *h)
{
	int count;

	if (h == NULL)
		return (0);
	for (count = 0; h != NULL; count++)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (count);
}
