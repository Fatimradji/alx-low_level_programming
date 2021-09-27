#include <stdio.h>
#include "dog.h"

/**
 * print_dog -prints value of dogs
 * @d: struct values of dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("(nil)\n");

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
	{
		printf("Name: %s\n", (*d).name);
	}
	if (d->age == 0)
		printf("Age: %f\n", d->age);
	else
	{
		printf("Age: %f\n", d->age);
	}
	if ((*d).owner == NULL)
		printf("Owner: (nil)\n");
	else
	{
		printf("Owner: %s\n", (*d).owner);
	}
}
