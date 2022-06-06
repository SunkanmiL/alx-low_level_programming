#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int charSize = sizeof(char);
	int intSize = sizeof(int);
	int longSize = sizeof(long);
	int longLongSize = sizeof(long long);
	float floatSize = sizeof(float);

	printf("Size of a char: %d byte(s)\n", charSize);
	printf("Size of an int: %d byte(s)\n", intSize);
	printf("Size of a long int: %d byte(s)\n", longSize);
	printf("Size of a long long int: %d byte(s)\n", longLongSize);
        printf("Size of a float: %d byte(s)\n", floatSize);
        return (0);
}	


























