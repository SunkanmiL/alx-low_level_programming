#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a newly allocated space memory
 * @str: string
 * Return: pointer of duplicated string
 */

char *_strdup(char *str)
{
	char *ptr;
	int i, j = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	ptr = (char *)malloc(sizeof(char) * (i + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (str[j] != '\0')
	{
		ptr[j] = str[j];
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}

/**
 * *new_dog - function that creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: a pointer to the new dog or NULL if failed
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_name;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_name = malloc(sizeof(dog_t));
	if (new_name == NULL)
		return (NULL);
	(*new_name).name = _strdup(name);
	if ((*new_name).name == NULL)
	{
		free(new_name);
		return (NULL);
	}
	(*new_name).age = age;
	(*new_name).owner = _strdup(owner);
	if ((*new_name).owner == NULL)
	{
		free((*new_name).name);
		free(new_name);
		return (NULL);
	}
	return (new_name);
}
