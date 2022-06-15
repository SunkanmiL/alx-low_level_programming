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
	int i;

	for(i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	returmn (dest);
}
