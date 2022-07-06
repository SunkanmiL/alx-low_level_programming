#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator - executes a function given as a parameter on each element of array
 * @array: array
 * @size: number of element
 * @action: pointer to print in regular or hexadecimal
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if ((array == NULL) || (size == 0) || (action == NULL))
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
