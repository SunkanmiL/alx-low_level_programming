#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * generates random valid passwords for the program 101-crackme
 * Return: Always 0 (Success)
 */
void randomPasswordGeneration(int N)
{
	int i = 0;

	int randomizer = 0;

	srand((unsigned int)(time(NULL)));

	char numbers[] = "0123456789";

	char letter[] = "abcdefghijklmnoqprstuvwxyz";
	
	char LETTER[] = "ABCDEFGHIJKLMNOQPRSTUVWXYZ";

	char symbols[] = "!@#$^&*?";
	
	char password[N];

	randomizer = rand() % 4;

	for (i = 0; i < N; i++)
	{
		if (randomizer == 1)
		{
			password[i] = numbers[rand() % 10];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 2)
		{
			password[i] = symbols[rand() % 8];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else
		{
			password[i] = letter[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
	}
}

// Driver Code
int main()
{
	int N = 10;

	randomPasswordGeneration(N);

	return (0);
}