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
	if (filename == NULL) /* if filename NULL */
	{
		return (-1); /* return -1 */
	}