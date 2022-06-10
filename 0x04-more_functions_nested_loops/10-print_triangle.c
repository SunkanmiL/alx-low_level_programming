#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 * Return: Always 0
 */
void print_triangle(int size)
{
	int x, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j >= 1; j--)
			{
				if (i < j)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}