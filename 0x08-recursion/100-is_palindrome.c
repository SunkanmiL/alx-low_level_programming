#include "main.h"
#include "2-strlen_recursion.c"
/**
 * palindrome - checks if string is palindrome
 * @s: string being evaluated
 * @a: start of string
 * @len: end of string
 * Return: 1 if a string is palindrome, 0 if not
 */

int palindrome(char *s, int len, len a)
{
	if (len <= a)
		return (1);
	if (s[len] != s[a])
		return (0);
	return (checker(s, len - 1, a + 1));
}

/**
 * is_palindrome - Entry point
 * @s: string being evaluated
 * Return: 1 if a string is palindrome, o if not
 */

int is_palindrome(char *s)
{
	int len, b;

	if (s[0] == '\0')
		return (1);
	len = _strlen_recursion(s);
	b = checker(s, len - 1, 0);
	return (b);
}
