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
	unsigned int i;
	char *dest, *src;

	src = ptr;

	if (old_size == new_size)
		return (ptr);
	if (ptr == 0)
	{
		dest = malloc(sizeof(char) * new_size);
		return (dest);
	}
	if (new_size == 0 && ptr != 0)
	{
		free(ptr);
		return (NULL);
	}
	dest = malloc(sizeof(char) * new_size);
	if (dest == 0)
		return (NULL);
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			dest[i] = src[i];
		return (des);
	}
	free(ptr);
	return (dest);
}
