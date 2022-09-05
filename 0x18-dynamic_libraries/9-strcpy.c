#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - function that copies the string pointed to by src
 * @src: copy from
 * @dest: copy to
 * Return: stirng
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (i >= 0)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
			return (dest);
		i++;
	}
	return (dest);
}
