#include <stdio.h>
/**
 * main - prints the largest prime factor of 612852475143
 * Return: Always 0 (Success)
 */
int main(void)
{
	long i;
	long num = 612852475143;

	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
			num /= i;
	}
	printf("%li\n", num);
	return (0);
}
