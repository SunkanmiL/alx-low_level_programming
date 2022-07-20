#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random valid passwords
 * Return: Always 0.
 */

int main(void)
{
	int pass[100];
	int index, count, s;

	count = 0;

	srand(time(NULL));

	for (index = 0; index < 100; index++)
	{
		pass[index] = rand() % 78;
		count += (pass[index] + '0');
		putchar(pass[index] + '0');
		if ((2772 - count) - '0' < 78)
		{
			s = 2772 - count - '0';
			count += s;
			putchar(s + '0');
			break;
		}
	}
	return (0);
}
