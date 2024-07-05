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
	int descriptor;
	int num_write;

	if (filename == NULL) /* if filename NULL */
	{
		return (-1); /* return -1 */
	}
	/* open file, create if it doesn't exist, write only, truncate */
	descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (descriptor == -1) /* if open or any part fails */
	{
		return (-1); /* return -1 */
	}