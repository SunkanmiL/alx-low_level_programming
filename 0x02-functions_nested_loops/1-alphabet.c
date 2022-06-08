#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase
 *
 * Return: Alawys 0 (Success)
 */
void print_alphabet(void)
{
	char alpha;
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
