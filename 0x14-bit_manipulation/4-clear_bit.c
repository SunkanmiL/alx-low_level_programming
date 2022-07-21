#include "main.h"
/**
 * clear_bit - function that sets value of bit to 0 at a given index
 * @n: pointer to the bit
 * @index: index to set value to 0
 * Return: -1 if an error occurs, else 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
