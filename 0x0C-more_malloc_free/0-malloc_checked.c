#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory
 * @b: variable to allocate memory for
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *n;

	n = malloc(b);
	if (n == NULL)
		exit(98);
	return (n);
}
