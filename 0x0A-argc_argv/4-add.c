#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: count of arguments
 * @argv: array pointing to arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	int a, b, sum;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[a]);
	}
	printf("%i\n", sum);
	return (0);
}
