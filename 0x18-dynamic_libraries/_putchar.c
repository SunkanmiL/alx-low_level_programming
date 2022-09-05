#include "main.h"
#include <unistd.h>
/**
 * _putchar - program prints character x to stdout
 * @x: Character to print out
 * Description - function prints the character x to stdout followed by
 * a new line
 * Return: On success 1
 */
int _putchar(char x)
{
	return (write(1, &x, 1));
}
