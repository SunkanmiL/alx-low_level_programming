#include "main.h"
/**
 * print_most_numbers - prints the numbers, 0-9
 *
 * Return: 0-9, excluding 2 and 4, followed by a new line
 */
void print_most_numbers(void)
{
	char i;

	for (i = 0; i <= 9; i++)
		_putchar(i);
	_putchar('\n');
}

