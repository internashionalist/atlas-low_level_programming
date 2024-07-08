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
	mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3) /* if number of arguments is incorrect */
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97); /* print error message and exit with code 97 */
	}

	file_from = open(argv[1], O_RDONLY); /* open file_from - read only */

	if (file_from == -1) /* if open fails */
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98); /* print error message and exit with code 98 */
	}
	/* open file_to - create, write only, truncate */
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, permissions);

	if (file_to == -1) /* if open fails */
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99); /* print error message and exit with code 99 */
	}
	/* read data in file_from into buffer */
	while ((n_read = read(file_from, buffer, 1024)) > 0)
	{
		n_write = write(file_to, buffer, n_read); /* write data to file_to */

		if (n_write == -1) /* if write fails */
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(file_from);
			close(file_to);
			exit(99); /* print error message and exit with code 99 */
		}
	}

	if (n_read == -1) /* if read fails */
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(file_from); /* close file_from */
		close(file_to); /* close file_to */
		exit(98); /* print error message and exit with code 98 */
	}

	if (close(file_from) == -1) /* if file_from close fails */
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100); /* print error message and exit with code 100 */
	}

	if (close(file_to) == -1) /* if file_to close fails */
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100); /* print error message and exit with code 100 */
	}

	return (0); /* return 0 on success */
}
