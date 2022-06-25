#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the min number of coins to make change
 * @argc: count of arguments
 * @argv: array pointing to arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else if (argc < 0)
	{
		return (0);
	}

	printf("%d\n", change(atoi(argv[1])));
	return (0);
}

/**
 * change - get change
 * @cents: amount of cents you need to give back
 * Return: Change
 */

int change(int cents)
{
	int a = 25, b = 10, c = 5, d = 2, e = 1;
	int coins;

	while (cents > 0)
	{
		while (cents >= a)
		{
			cents -= a;
			coins++;
		}
		while (cents >= b)
		{
			cents -= b;
			coins++;
		}
		while (cents >= c)
		{
			cents -= c;
			coins++;
		}
		while (cents >= d)
		{
			cents -= d;
			coins++;
		}
		while (cents >= e)
		{
			cents -= e;
			coins++;
		}
	}
	return (coins);
}
