#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * number - function to calculate number of words
 * @str: string being passed to check for words
 * Return: number of words
 */
int number(char *str)
{
	int a, num = 0;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (*str == ' ')
			str++;
		else
		{
			for (; str[a] != ' ' && str[a] != '\0'; a++)
				str++;
			num++;
		}
	}
	return (num);
}
/**
 * free_everything - frees the memory
 * @string: pointer values being passed for freeing
 * @i: counter
 * Return: Always 0 (Success)
 */

void free_everything(char **string, int i)
{
	for (; i > 0;)
		free(string[--i]);
	free(string);
}
/**
 * **strtow - function that splits a string into words
 * @str: input pointer of the string to split
 * Return: Nothing
 */
char **strtow(char *str)
{
	int total_words = 0, b = 0, c = 0, len = 0;
	char **words, *found_word;

	if (str == 0 || *str == 0)
		return (NULL);
	total_words = number(str);
	if (total_words == 0)
		return (NULL);
	words = malloc(sizeof(char *) * (total_words + 1));
	if (words == 0)
		return (NULL);
	for (; *str != '\0' && b < total_words;)
	{
		if (*str == ' ')
			str++;
		else
		{
			found_word = str;
			for (; *str != ' ' && *str != '\0';)
			{
				len++;
				str++;
			}
			words[b] = malloc(sizeof(char) * (len + 1));
			if (words[b] == 0)
			{
				free_everything(words, b);
				return (NULL);
			}
			while (*found_word != ' ' && *found_word != '\0')
			{
				words[b][c] = *found_word;
				found_word++;
				c++;
			}
			words[b][c] = '\0';
			b++;
			c = 0, len = 0;
			str++;
		}
	}
	return (words);
}
