#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - creates new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 *
 * Return: pointer to new dog or NULL if fails
 */

dog_t *new_dog(char *name, float age, char *owner)

{
	dog_t *new_dog;
	int i = 0;
	int j = 0;
	int k = 0;

	for (; name[i] != '\0'; i++) /* find name strlen */
		;
	i++;

	for (; owner[j] != '\0'; j++) /* find owner strlen */
		;
	j++;

	new_dog = malloc(sizeof(dog_t)); /* allocate new dog memory */

	if (new_dog == NULL) /* if malloc fails */
		return (NULL);

	new_dog->name = malloc(i * sizeof(char)); /* allocate mem for strings */
	new_dog->owner = malloc(j * sizeof(char));

	if (new_dog->name == NULL || new_dog->owner == NULL) /* if malloc fails */
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);

		return (NULL);
	}

	for (; k < i; k++) /* copy name and owner to new dog */
		new_dog->name[k] = name[k];

	for (; k < j; k++)
		new_dog->owner[k] = owner[k];

	new_dog->age = age; /* set age */

	return (new_dog); /* fresh new dog smell */
}
