#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *str_concat - function that concatenates two strings
 * @s1: first input to concat
 * @s2: second input to concat
 * Return: Always 0 (Success)
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, size;
	char *array;

	for (i = 0; i <= *s1; i++)
	{
	}
	for (j = 0; j <= *s2; j++)
	{
	}

	size = i + j + 1;
	array = malloc(sizeof(char) * size);
	if (array == 0)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		*(array + i) = *(s1 + i);
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		*(array + i + j) = *(s2 + j);
	}
	return (array);
}
