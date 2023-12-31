#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - a dog's basic info
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 *
 * Description: longer description
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
#endif
