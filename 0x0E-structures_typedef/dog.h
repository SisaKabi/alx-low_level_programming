#ifndef DOG_H
#define DOG_H
/**
 * struct dog - holds the details of a dog and its owner
 * @name: the dog's name
 * @age: the dog's current age
 * @owner: the name of the dog's owner
 *
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

#endif
