#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - function that searches for an integer
 * @array: array
 * @size: number of elements in the array
 * @cmp: a pointer to the function to be used to compare values
 * Return: -1 if no element matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if ((array == NULL) || (size <= 0) || (cmp == NULL))
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
