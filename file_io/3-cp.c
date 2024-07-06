#include "main.h"

/**
 * copy_file - copies the content of a file to another file
 * @file_from: file to copy from
 * @file_to: file to copy to
 *
 * Return: 1 on success, bunch of error messages and exit codes on failure
 */

int copy_file(const char *file_from, const char *file_to)
{
	int descriptor_from, descriptor_to; /* file descriptors */
	int num_read, num_write; /* number of characters read and written */
	char buffer[1024]; /* buffer to hold characters */
	mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	/* permissions for new file */

	descriptor_from = open(file_from, O_RDONLY); /* open file_from, DO NOT CREATE */

	if (descriptor_from == -1) /* if open fails */
	{
		/* error message for open failure */
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98); /* exit with code 98 */
	}

	/* open file_to, create if it doesn't exist, readwrite, truncate */
	descriptor_to = open(file_to, O_CREAT | O_RDWR | O_TRUNC, permissions);

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

/**
 * main - entry point to copy thsi stupid file
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 1 on success, bunch of other stuff on failure
 */

int main (int argc, char *argv[]) 
{
	int status; /* whether or not copy_file worked I guess */

	if (argc != 3) /* if arguments wrong */
	{
		/* another error message */
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97); /* exit with code 97 */
	}

	status = copy_file(argv[1], argv[2]); /* copy the damn file */

	return (status); /* return the status */
}
