#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - struct that create new type
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Desc: defining a new type of struct dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
