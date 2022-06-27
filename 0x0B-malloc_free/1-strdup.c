#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * @str: string being allocated in memory
 * Return: Always 0 (Success)
 */

char *_strdup(char *str)
{
	int i, end;
	char *s;

	if (str == NULL)
		return (NULL);
	for (end = 0; str[end] != '\0'; end++)
	{
	}

	s = malloc(sizeof(char) * end + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < end; i++)
		s[i] = str[i];
	return (s);
}

