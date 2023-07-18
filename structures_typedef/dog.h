#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - structure to be created
 *
 * @name : char * element of struct dog
 * @age  : float  element of struct dog
 * @owner: char * element of struct dog
 *
 * Description : structure dog with 3 elements name age owner of a dog
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
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
void free_dog(dog_t *d);
#endif
