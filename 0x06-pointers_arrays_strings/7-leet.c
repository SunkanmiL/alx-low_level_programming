#include "main.h"
/**
 * *leet - function that encodes a string into 1337
 * @targ: string to be converted into leet speak
 * Return: Always 0 (Success)
 */
char *leet(char *targ)
{
	int x = 0, num[5] = {4, 3, 0, 7, 1}, y = 0;
	char alpha[10] = "AaEeOoTtLl";

	for (; targ[x]; x++)
	{
		for (y = 0; (targ[x] != alpha[y] && y < 10); y++)
			;
		if (targ[x] == alpha[y])
		{
			y /= 2;
			targ[x] = (num[y] + '0');
		}
	}
	return (targ);
}
