#include "main.h"

/**
 * copy_file - copies the content of a file to another file
 * @file_from: file to copy from
 * @file_to: file to copy to
 *
 * Return: 1 on success
 */

int copy_file(const char *file_from, const char *file_to)
{
	int descriptor_from, descriptor_to; /* file descriptors */
	int num_read, num_write; /* number of characters read and written */
	char buffer[1024]; /* buffer to hold characters */

	/* open file_from, DO NOT CREATE, read only */
	descriptor_from = open(file_from, O_RDONLY);

	if (descriptor_from == -1) /* if open fails */
	{
		/* error message for open failure */
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98); /* exit with code 98 */
	}

	/* open file_to, create if it doesn't exist, readwrite, truncate */
	descriptor_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (descriptor_to == -1) /* if open fails */
	{
		/* error message for open failure */
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99); /* exit with code 99 */
	}

	/* read from file_from into buffer */
	num_read = read(descriptor_from, buffer, 1024);

	if (num_read == -1) /* if read fails */
	{
		/* error message for read failure */
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98); /* exit with code 98 */
	}

	/* write from buffer to file_to */
	num_write = write(descriptor_to, buffer, num_read);

	if (num_write == -1) /* if write fails */
	{
		/* error message for write failure */
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99); /* exit with code 99 */
	}

	/* close file_from */
	if (close(descriptor_from) == -1)
	{
		/* error for close failure */
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", descriptor_from);
		exit(100); /* exit with code 100 */
	}

	/* close file_to */
	if (close(descriptor_to) == -1)
	{
		/* error for close failure */
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", descriptor_to);
		exit(100); /* exit with code 100 */
	}

	return (1); /* return 1 on success */
}