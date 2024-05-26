#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/*
 * generate_password - generates valid passwords for program 101-crackme
 *
 * Return: void
 */

void generate_password(int sum)
{
	int ascii_value, i = 0;
	char password[100];

	srand(time(NULL));

	while (sum > 0)
	{
		ascii_value = (rand() % 94) + 33;

		if (sum - ascii_value >= 33 || sum - ascii_value == 0)
		{
			password[i++] = (char)ascii_value;
			sum -= ascii_value;
		}
	}

	password[i] = '\0';

	printf("%s\n", password);
}

/**
 * main - actually generates the password
 *
 * Return: 0
 */

int main(void)
{
	generate_password(2772);

	return (0);
}
