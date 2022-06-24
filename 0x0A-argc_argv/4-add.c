#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: count of arguments
 * @argv: array pointing to arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int sum = 0, a, b, x;

	for (a = 1; a < argc: a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (argv[a][b] < '0' || argv[a][b] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		x = atoi(argv[a]);
		sum += x;
	}
	printf("%d\n", sum);
	retun (0);
}
