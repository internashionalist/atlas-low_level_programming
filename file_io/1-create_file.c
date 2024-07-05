#include "main.h"

/**
 * create_file - creates file
 * @filename: name of file being created
 * @text_content: content of file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int descriptor; /* file descriptor */
	int num_write; /* number of chars written */
	int content_length = 0; /* length of text_content */

	if (filename == NULL) /* if filename NULL */
	{
		return (-1); /* return -1 */
	}
	/* open file, create if it doesn't exist, write only, truncate */
	descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (descriptor == -1) /* if any part of that fails */
	{
		return (-1); /* return -1 */
	}

	if (text_content == NULL) /* if text_content is NULL */
	{
		close(descriptor); /* close file */
		return (1); /* return 1 */
	}

	while (text_content[content_length] != '\0') /* find length of text_content */
	{
		content_length++; /* increment counter */
	}

	num_write = write(descriptor, text_content, content_length); /* write to file */

	if (num_write == -1) /* if writing fails */
	{
		return (-1); /* return -1 */
	}

	close(descriptor); /* close file */
	return (1); /* return 1 */
}
