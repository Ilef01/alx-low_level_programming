#include"dog.h"
#include<stdio.h>
/**
 * print_dog - prints a struct dog.
 * @d: The pointer to the structure.
 * Return: void
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
