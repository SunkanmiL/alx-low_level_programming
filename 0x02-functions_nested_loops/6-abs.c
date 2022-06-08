#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @n: integer being tested
 * Return: absolute value of the input integer
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
	return (0);
}
