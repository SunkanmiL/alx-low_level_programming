#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
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
	char *copy_name, *copy_owner;
	int i, len_name = 0, len_owner = 0;

	if (name == NULL || owner == NULL)
		return (NULL);
	while (name[len_name])
		len_name++;
	while (owner[len_owner])
		len_owner++;

	new_name = malloc(sizeof(dog_t));
	if (new_name == NULL)
		return (NULL);

	copy_name = malloc(len_name + 1);
	if (copy_name == NULL)
		return (NULL);
	for (i = 0; name[i]; i++)
		copy_name[i] = name[i];
	copy_name[i] = '\0';

	copy_owner = malloc(len_owner + 1);
	if (copy_owner == NULL)
		return (NULL);
	for (i = 0; owner[i]; i++)
		copy_owner[i] = owner[i];
	copy_owner[i] = '\0';

	new_name->name = copy_name;
	new_name->age = age;
	new_name->owner = copy_owner;
	return (new_name);
}
