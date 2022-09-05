#include "main.h"
#include <stdio.h>
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string being tested
 * @accept: bytes checked
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 1, a = 1;
	unsigned int count = 0;

	while (s[i] != '\0' && a == 1)
	{
		a = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				a = 1;
				break;
			}
		}
		i++;
	}
	return (count);
}
