#ifndef doggy
#define doggy

/**
 * struct dog - dog is a pet, collecting its name and owner name with age
 * @name: name of dog
 * @age: age of dog
 * @owner: owners name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif /* doggy */
