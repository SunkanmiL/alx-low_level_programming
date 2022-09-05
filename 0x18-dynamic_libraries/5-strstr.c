#include "main.h"
#include <stdio.h>
/**
 * *_strstr - function that locates a substring
 * @needle: the string being found
 * @haystack: the string bein analyzed
 * Return: a pointer to the substring beginning
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}

		if (*two == '\0')
			return (haystack);
	}
	return (NULL);
}
