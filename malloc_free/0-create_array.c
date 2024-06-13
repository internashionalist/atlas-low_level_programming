#include "main.h"

/**
 * create_array - creates array using chars, initializes with specific char
 * @size: size of array
 * @c: specific char that initializes, fills array
 *
 * Return: pointer to the array on success, NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i; /* initialize counter */
	char *array; /* pointer to array */

	if (size == 0) /* if parameter is 0 */
	{
		return (NULL);
	}

	array = malloc(sizeof(char) * (size + 1)); /* allocate memory + null byte */

	if (array == 0) /* if it fails */
	{
		return (NULL);
	}

	for (i = 0 ; i < size ; i++) /* iterates and initializes */
	{
		array[i] = c;
	}

array[size] = '\0'; /* adds our precious null byte */

return (array);
}
