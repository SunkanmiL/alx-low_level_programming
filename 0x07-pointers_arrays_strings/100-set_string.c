#include "main.h"
/**
 * set_string - function that sets the value of a pointer to a char
 * @s: pointer
 * @to: character being set
 * Return: Always 0 (Success)
 */
void set_string(char **s, char *to)
{
	*s = to;
}
