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
	float age;
	char *name;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
