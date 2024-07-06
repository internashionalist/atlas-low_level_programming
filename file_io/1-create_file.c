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
	mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH | S_IWOTH;
	/* permissions for new file */
	if (filename == NULL) /* if filename NULL */
	{
		return (-1); /* return -1 */
	}
	/* open file, create if it doesn't exist, readwrite, truncate */
	descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, permissions);

	if (descriptor == -1) /* if any part of that fails */
	{
		return (-1); /* return -1 */
	}

	if (text_content == NULL) /* if text_content is NULL */
	{
		close(descriptor); /* close file */
		return (1); /* return 1 */
	}

	if (text_content != NULL) /* if text_content is not NULL */
	{
		/* find length of text_content */
		while (text_content[content_length] != '\0')
		{
			content_length++; /* increment counter */
		}
	}
	/* write to file */
	num_write = write(descriptor, text_content, content_length);

	if (num_write == -1) /* if writing fails */
	{
		return (-1); /* return -1 */
	}

	close(descriptor); /* close file */
	return (1); /* return 1 */
}
