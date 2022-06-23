#include "main.h"
#include <string.h>
/**
 * wildcmp - function that compares two strings
 * @s1: first input string
 * @s2: second input string
 * Return: 1 if the strings are identical, 0 if not
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			if (*s2 == '*' && *(s1 + 1) != '.')
			{
				if (*(s2 + 1) != '*')
				{
					wildcmp(s1 + 1, s2);
				}
				else
				{
					wildcmp(s1, s2 + 1);
				}
			}
			else if (*s2 == '*')
			{
				wildcmp(s1 + 1, s2 + 1);
			}
			else
			{
				return (0);
			}
		}
		else
		{
			wildcmp(s1 + 1, s2 + 1);
		}
	}
	return (1);
}

