#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * *_strdup - returns a pointer to a newly allocated space
 * @str: the string
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *d;
	int i = 0;
	int r;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	d = malloc(sizeof(char) * (i + 1));
	if (d == NULL)
		return (NULL);
	for (r = 0; r < i; r++)
		d[r] = str[r];
	return (d);
}
