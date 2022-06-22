#include "main.h"
#include <stdio.h>
/**
 * squareroot - checks if perfect square
 * @n: input
 * @root: square root
 * Return: square root of the number
 */

int squareroot(int n, int root)
{
	if (root < 1)
		return (-1);
	else if (root * root == n)
		return (root);
	else
		return (squareroot(n, root - 1));
}

/**
 * _sqrt_recursion - function that returns the square root of a number
 * @n: input
 * Return: square root of the number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (squareroot(n, 0));
}
