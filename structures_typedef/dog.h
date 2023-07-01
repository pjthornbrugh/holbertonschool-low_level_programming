#ifndef DOG_H
#define DOG_H

/*
 * File: dog.h
 * Auth: Pilar Thornbrugh
 * Desc: defines a new type struct with dogs.
 *
 */

/** struct dog - a new type describing a dog.
 * @name: the name of the dog.
 * @age: the age of the dog.
 * @owner: the owner of the dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif