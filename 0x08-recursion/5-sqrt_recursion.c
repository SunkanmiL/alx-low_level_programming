#include "main.h"
#include <stdio.h>
/**
 * sqr_root - checks if perfect square
 * @n: input being squared
 * @root: square root
 * Return: square root of the number
 */

int sqr_root(int n, int root)
{
	if (n == root * root)
		return (root);
	else if (n < root * root)
		return (-1);
	return (sqr_root(n, root + 1));
}

/**
 * _sqrt_recursion - function that returns the square root of a number
 * @n: input being squared
 * Return: square root of the number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqr_root(n, 0));
}
