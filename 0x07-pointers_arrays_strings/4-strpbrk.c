#include "main.h"
#include <stdio.h>
/**
 * *_strpbrk - function that searches a string for any of a set of bytes
 * @s: string being tested
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0; s[i]; i++)
	{
		for (n = 0; accept[n]; n++)
		{
			if (s[i] == accept [n])
				return (s + i);
		}
	}
	return (NULL);
}
