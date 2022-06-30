#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array
 * @nmemb: array number
 * @size: size of the memory to print
 * Return: NULL if failed
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *a;
	void *tmp;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	a = malloc(size * nmemb);
	tmp = a;
	if (a == 0)
	{
		return (NULL);
	}
	for (i = 0; i < (size * nmemb); i++)
		a[i] = 0;
	return (tmp);
}
