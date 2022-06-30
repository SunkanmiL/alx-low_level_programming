#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1: string one being passed
 * @s2: string two being passed
 * @n: number of bytes
 * Return: Always 0 (Success)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int i, j, co, co_2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0' && j < n; j++)
		;
	co = i;
	co_2 = j;
	a = malloc(sizeof(char) * (co + co_2 + 1));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < co; i++)
	{
		a[i] = s1[i];
	}
	for (j = 0; j < co_2; j++)
		a[i + j] = s2[j];
	a[i + j] = '\0';
	return (a);
}
