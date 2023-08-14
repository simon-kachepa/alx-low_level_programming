#ifndef HEADER_FILE
#define HEADER_FILE

/**
 * struct dog - structure of the type dog
 * @name: Pointer to the element name
 * @age: Pointer to the element age
 * @owner: Pointer to the element owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
