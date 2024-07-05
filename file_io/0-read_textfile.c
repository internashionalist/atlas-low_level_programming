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

	if (filename == NULL) /* if filename NULL */
	{
		return (0); /* return 0 */
	}
