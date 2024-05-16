#include <stdio.h>
/**
 * main - Prints the size of various types based on
 *        the computer it is compiled and run on
 *
 * Return: Always 0
 */
int main(void)
{
	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("Size of a char: %ld byte(s)\n", sizeof(int));
	printf("Size of a char: %ld byte(s)\n", sizeof(long int));
	printf("Size of a char: %ld byte(s)\n", sizeof(long long int));
	printf("Size of a char: %ld byte(s)\n", sizeof(float));
	return (0);
}
