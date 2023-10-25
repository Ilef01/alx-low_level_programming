#include"dog.h"
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
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
