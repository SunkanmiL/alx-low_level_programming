#inlcude "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the straight should be printed
 * Return: Always 0 (Success)
 */

void print_line(int n)
{
	int length;

	if (n > 0)
	{
		for (length = 0; length < n; length++)
			_putchar('_');
	}
	_putchar('\n');
}
