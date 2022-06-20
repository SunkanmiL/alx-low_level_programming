#include "main.h"
#include <stdio.h>
/**
 * *_strchr - function that locates a character in a string
 * @c: character
 * @s: pointer
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{
	int i;
	char *null = NULL;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	if (s[i] == '\0')
		return (s + i);
	else
		return (null);
}
