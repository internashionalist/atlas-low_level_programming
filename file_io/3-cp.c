#include "main.h"

/**
 * main - copies the content of one file to another
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0 on success or 97, 98, 99, 100 on failure
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, n_read, n_write;
	char buffer[1024];