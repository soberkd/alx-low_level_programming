#include "dog.h"

/**
 * print_dog - prints the dog structure
 * @d: pointer to struct dog values
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
