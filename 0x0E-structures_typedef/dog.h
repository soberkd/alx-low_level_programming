#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - structure of dog
 * @age: age of the dog
 * @name: name of the dog
 * @owner: ownwer o the dog
 *
 * Description: This structure stores infomation about the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * struct dog_t - structure of dog
 * @age: age of the dog
 * @name: name of the dog
 * @owner: ownwer o the dog
 *
 * Description: This structure stores infomation about the dog
 */
typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
