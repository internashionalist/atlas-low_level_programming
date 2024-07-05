#include "main.h"

/**
 * read_textfile- reads a text file and prints it to the POSIX standard output.
 * @filename: name of the file to be read
 * @letters: number of chars being read and printed
 *
 * Return: number of chars printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int descriptor; /* file descriptor */
	ssize_t num_read; /* number of chars read */
	ssize_t num_write; /* number of chars written */
	char *buffer = malloc(sizeof(char) * letters); /* more concise! */

	if (filename == NULL || buffer == NULL) /* if filename or buffer is NULL */
	{
		return (0); /* return 0 */
	}

	descriptor = open(filename, O_RDONLY);

	if (descriptor == -1) /* if open fails */
	{
		return (0); /* return 0 */
	}

	
	

