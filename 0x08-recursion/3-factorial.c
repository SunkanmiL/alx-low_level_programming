#include "main.h"
/**
 * factorial - function that returns factorial
 * @n: integer being tested
 * Return: the factorial of a number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
