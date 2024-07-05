#include "main.h"

/**
 * append_text_to_file - appends text at end of file
 * @filename: name of file
 * @text_content: content to append
 *
 * Return: 1 on success or -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int descriptor; /* file descriptor */
	int num_write; /* number of characters written */
	int content_length = 0; /* length of text_content */

	if (filename == NULL) /* if filename NULL */
	{
		return (-1); /* return -1 */
	}