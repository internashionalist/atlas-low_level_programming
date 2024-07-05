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

	if (file_from == NULL || file_to == NULL) /* if either file NULL */
	{
		return (-1); /* return -1 */
	}