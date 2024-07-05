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

	num_read = read(descriptor, buffer, letters);

	if (num_read == -1) /* if reading fails */
	{
		return (0); /* return 0 - can I combine this with the above? */
	}

	num_write = write(STDOUT_FILENO, buffer, num_read);

	if (num_write == -1 || num_read != num_write) /* if writing fails */
	{
		return (0); /* return 0 */
	}

	close(descriptor); /* close file */
	free(buffer); /* free buffer - do I need to free in above cases? */

	return (num_write); /* return number of characters written */
}



	
	

