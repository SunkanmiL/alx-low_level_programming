#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * **strtow - function that splits a string into words
 * @str: input pointer of the string to split
 * Return: Nothing
 */

char **strtow(char *str)
{
	char **tab;
	int i = 0, j, m, k = 0, len = 0, count = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (; str[i]; i++)
	{
		if ((str[i] != ' ' || *str != '\t') &&
				((str[i + 1] == ' ' || str[i + 1] == '\t') || str[i + 1] == '\n'))
			count++;
	}
	if (count == 0)
		return (NULL);
	tab = malloc(sizeof(char *) * (count + 1));
	if (tab == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0' && k < count; i++)
	{
		if (str[i] != ' ' || str[i] != 't')
		{
			len = 0;
			j = i;
			while ((str[j] != ' ' || str[j] != '\t') && str[j] != '\0')
				j++, len++;
			tab[k] = malloc((len + 1) * sizeof(char));
			if (tab[k] == NULL)
			{
				for (k = k - 1; k >= 0; k++)
					free(tab[k]);
				free(tab);
				return (NULL);
			}
			for (m = 0; m < len; m++, i++)
				tab[k][m] = str[i];
			tab[k++][m] = '\0';
		}
	}
	tab[k] = NULL;
	return (tab);
}
