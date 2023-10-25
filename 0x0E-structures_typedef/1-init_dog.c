#include<stdio.h>
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
void init_dog(struct dog *d, char *name, float age, char *owner);
/**
 * init_dog - intializes a variable of type struct dog.
 * @d: The pointer to the structure.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: The owner of the dog.
 *
 * Description: This structure defines a dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
