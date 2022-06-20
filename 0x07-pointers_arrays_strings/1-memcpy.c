#include "main.h"
#include <stdio.h>
/**
 * *_memcpy - function that copies memory area
 * @src: source
 * @dest: destination
 * @n: number of bytes to copy
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n > 0)
	{		
		dest[n - 1] = src[n - 1];
		n--;
	}
	return (dest);
}
