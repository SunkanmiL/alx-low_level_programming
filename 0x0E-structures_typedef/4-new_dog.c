#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *_strdup(char *str);

/**
 * new_dog - function that creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: a pointer to the new dog or NULL if failed
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_name = NULL;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	new_name = malloc(sizeof(dog_t));
	if (new_name == NULL)
	{
		return (NULL);
	}

	new_name->name = _strdup(name);

	if (new_name-> == NULL)
	{
		free(p);
		return (NULL);
	}

	new_name->age = age;
	new_name->owner = _strdup(owner);

	if (new_name->owner == NULL)
	{
		free(new_name->name);
		free(new_name);
		return (NULL);
	}
	return (new_name);
}

/**
 * _strdup - function that returns a pointer to a newly allocated space memory
 * @str: string
 * Return: the pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *ptr;
	int len;

	if (str == NULL)
	{
		return (NULL);
	}
	len = 0;
	while (str(len) != '\0')
	{
		len++;
	}

	ptr = malloc(sizeof(char) * len + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	len = 0;
	while (str[len] != '\0')
	{
		ptr[len] = str[len];
		len++;
	}
	ptr[len] = '\0';
	return (ptr);
}
