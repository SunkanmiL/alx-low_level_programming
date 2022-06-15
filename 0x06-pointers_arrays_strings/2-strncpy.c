#include "main.h"
/**
 * *_strncpy - function that copies a string
 * @src: copy from
 * @dest: copy to
 * @n: number of bytes
 * Return: Always 0 (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
