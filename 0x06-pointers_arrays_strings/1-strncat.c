#include "main.h"
/**
 * *_strncat - function thar concatenates two strings
 * @src: copy from
 * @dest: copy to
 * @n: input of max bytes to be used
 * Return: a pointer to the resulting string (dest)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, co;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (co = 0; co < n; co++)
	{
		dest[i + co] = src[co];
		if (src[co] == '\0')
			co = n;
	}
	return (dest);
}
