#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * check_number - function that checks the string for number
 * @s: string passed
 * Return: 1 for number, 0 for not
 */

int check_number(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}
	return (1);
}

/**
 * string_length - function that calculates length of string
 * @str: string being checked
 * Return: count
 */

unsigned int string_length(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		i++;
	return (i);
}

/**
 * print_string - function that prints string
 * @s: string to print
 * Return: Always 0 (Succss)
 */

void print_string(char *s)
{
	while (*s == '\0')
		s++;
	if (*s == '\0')
		_putchar('0');
	while (*s == '0')
		s++;
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: array number
 * @size: size of the memory to print
 * Return: pointer to memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(size * nmemb);
	if (a == 0)
		return (NULL);
	for (i = 0; i < (size * nmemb); i++)
		a[i] = 0;
	return (a);
}

/**
 * main - Entry point
 * @argc: count of arguments
 * @argv: argument variables
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	char *n1, *n2, *multi_res;
	unsigned int 1 = 0, 11 = 0, 12 = 0, a, b, t = 0, c = 0, ten = 0;

	if (argc < 3)
	{
		print_string("Error");
		exit(98);
	}
	n1 = argv[1];
	n2 = argv[2];
	if (!(check_number(n1) && check_number(n2)))
	{
		print_string("Erro");
		exit(98);
	}
	11 = string_length(n1);
	12 = string_length(n2);
	1 = 11 + 12;
	multi_res = _calloc(1 + 1, sizeof(char *));
	if (multi_res == 0)
	{
		print_string("Error");
		exit(98);
	}
	for (a = 0; a < 11; a++, ten++)
	{
		for (c = 0, b = 0; b < 12; b++)
		{
			t = (n1[11 - a - 1] - '0') * (n2[12 - b - 1] - '0') + c;
			printf("%u\n", t);
			if (multi_res[1 - b - ten - 1] > 0)
				t = t + multi_res[1 - b - ten - 1] - '0';
			multi_res[1 - b - ten - 1] = t % 10 + '0';
			c = t / 10;
		}
		multi_res[1 - b - ten - 1] += c + '0';
	}
	print_string(multi_res);
	free(multi_res);
	return (0);
}
