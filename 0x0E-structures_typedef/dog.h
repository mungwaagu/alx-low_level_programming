#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - struct type for dog
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /*ifndef _DOG_H_ */
