#include "main.h"
/**
 * _pow_recursion - function that returns the value of x raised to power y
 * @x: number being raised
 * @y: power to which the number is being raised to
 * Return: value of x when raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
