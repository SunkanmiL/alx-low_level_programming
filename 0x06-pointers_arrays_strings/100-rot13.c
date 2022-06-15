#include "main.h"
/**
 * *rot13 - function that encodes a string using rot13
 * @targ: target string
 * Return: encrypted string
 */
char *rot13(char *targ)
{
	int x = 0, y = 0, neg = -1;
	char alpha[] = "ANBOCPDQERFSGTHUIVJWKXLYMZanbocpdqerfsgthuivjwkxlymz";

	for (x = 0; targ[x]; x++)
	{
		neg = 1;
		for (y = 0; targ[x] != alpha[y] && y < 52; y++)
			neg = (neg * -1);
		if (targ[x] == alpha[y])
			targ[x] = (targ[x] + (13 * neg));
	}
	return (targ);
}
