#include "main.h"
#include <stdio.h>
/**
 * prime - checks for prime
 * @x: input being tested
 * @y: input being tested
 * Return: the function prime
 */

int prime(int x, int y)
{
	if (x < 2)
		return (0);
	if (x / 2 < y)
		return (1);
	if (x % y == 0)
	{
		return (0);
	}
	return (prime(x, y + 1));
}

/**
 * is_prime_number - functions that returns 1 if the input integer is a primenum
 * @n: input being tested
 * Return: Always 0 (Success)
 */

int is_prime_number(int n)
{
	return (prime(n, 2));
}
