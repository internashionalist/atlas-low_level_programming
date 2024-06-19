#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog struct
 * @name: name of dog
 * @age: age of said dog
 * @owner: whos got the dog
 *
 * Return - void I guess
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
