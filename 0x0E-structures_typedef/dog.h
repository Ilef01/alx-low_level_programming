#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Represents a dog.
 * @name: Name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Description: This structure defines a dog.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
