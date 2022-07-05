#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - function that creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: Always 0 (Success)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *copy_name, *copy_owner;
	unsigned int i, len_name = 0, len_owner = 0;

	new_dog = malloc(sizeof(dog_t));
	if (name == NULL)
		return (NULL);
	if (name == NULL || age <= 0 || owner == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		len_name++;
	for (i = 0; owner[i] != '\0'; i++)
		len_owner++;

	copy_name = malloc(sizeof(char) * (len_name + 1));
	if (copy_name == NULL)
		return (NULL);
	copy_owner = malloc(sizeof(char) * (len_owner + 1));
	if (copy_owner == NULL)
		return (NULL);

	for (i = 0; i <= len_name; i++)
		copy_name[i] = name[i];
	for (i = 0; i <= len_owner; i++)
		copy_owner[i] = owner[i];

	new_dog->name = copy_name;
	new_dog->owner = copy_owner;
	new_dog->age = age;
	return (new_dog);
}
