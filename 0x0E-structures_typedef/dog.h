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
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
