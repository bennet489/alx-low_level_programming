#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - Dog information
 * @name: pointer to the name of dog
 * @age: pointer to the age of dog
 * @owner: pointer to the owner of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Defining a new type dog_t as a new name for the type struct dog.
 */
typedef struct dog dog_t;

int _putchar(char);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

#endif
