#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 * @s: string input
 * Return: String in reverse
 */
void print_rev(char *s)
{
	int i, c = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		c++;
	}
	for (i = c - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
