#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - function that reallocates a memory block
 * @ptr: void pointer
 * @old_size: old memory allocated
 * @new_size: new memory allocated
 * Return: Always 0 (Success)
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *dest, *src;
	unsigned int i;


	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
		{
			return (NULL);
		}
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	dest = malloc(new_size);
	if (dest == NULL)
		return (NUL);

	src = ptr;

	for (i = 0; i < new_size && i < old_size; i++)
		dest[i] = src[i];
	free(ptr);
	return (dest);
}
