#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - function that allocates memory for an array 
 * @nnemb: array number
 * @size: size of the memory to print
 * Return: NULL if malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(size * nmemb);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < (size * nmemb); i++)
		a[i] = 0;
	return (a);
}
