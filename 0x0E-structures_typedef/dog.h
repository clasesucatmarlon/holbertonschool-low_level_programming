#ifndef HOLBERTON
#define HOLBERTON
/**
 * struct dog - struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: structure of dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/* task 1 - nitialize a variable of type struct dog */
void init_dog(struct dog *d, char *name, float age, char *owner);

/* task 2 - prints a struct dog */
void print_dog(struct dog *d);

/* task 4 - creates a new dog */
dog_t *new_dog(char *name, float age, char *owner);

/* task 5 - frees dogs */
void free_dog(dog_t *d);
#endif
