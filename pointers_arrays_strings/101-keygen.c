#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/*
 * main - generates random valid passwords for the program 101-crackme
 *
 * Return: 0
 */

void generate_password(int sum)
{
	srand(time(0)); /* seed */
	char password[100]; /* password under 100 char */
	int i = 0, ascii_val; /* position tracker, ASCII value */

	while (sum > 0)
	{
		ascii_val = (rand() % 94) + 33; /* random ASCII value */
		if (sum - ascii_val >= 33 || sum - ascii_val == 0) /* if valid value */
		{
			password[i++] = ascii_val;
			sum -= ascii_val;
		}
	}

	password[i] = '\0'; /* terminate */

	printf("%s\n", password);
}

int main(void)
{
	generate_password(2772); /* do the damn thing */

	return (0);
}
