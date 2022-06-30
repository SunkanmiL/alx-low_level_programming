#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: variable to allocate memory for 
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);

	if (a == NULL)
	       exit(98);
	return (a);
}
