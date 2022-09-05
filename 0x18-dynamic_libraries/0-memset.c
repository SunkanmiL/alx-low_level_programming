#include "main.h"
/**
 * *_memset - function that fills memory with a constant byte
 * @n: bytes
 * @s: pointed destination
 * @b: constant byte
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n > 0)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
