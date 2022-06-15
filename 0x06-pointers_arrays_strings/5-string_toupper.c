#include "main.h"
/**
 * *string_toupper - function that changes all lowercase letters to uppercase
 * @n: input string
 * Return: capitalised string
 */
char *string_toupper(char *n)
{
	int i;

	for(i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'Z')
			n[i] = n[i] - 32;
	}
	return (n);
}
