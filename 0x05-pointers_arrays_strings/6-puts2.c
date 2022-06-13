#include "main.h"

/**
 * _puts2 - functions that prints one character out of 2 of a string
 * @str: input
 * Return: Always 0 (Success)
 */
void puts2(char *str)
{
	int a = 0;
	
	while (str[a] != '\0')
	{
		if ((a % 2) == 0)
			_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
	
