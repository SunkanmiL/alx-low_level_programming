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
	dog_t *new_dog = NULL;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_dog->name = _strdup(name);

	if (new_dog-> == NULL)
	{
		free(p);
		return (NULL);
	}

	new_dog->age = age;
	new_dog->owner = _strdup(owner);

	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	return (new_dog);
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
