#include "main.h"
/**
 * *string_toupper - changes lowercase to uppercase
 * @s: the string
 * Return: the string in uppercase
 */
char *string_toupper(char *s)
{
	char *p;

	p = s;
	while (*s != '\0')
	{
		if (*s >= 97 && *s <= 122)
			*s = *s - 32;
		s++;
	}
	return (p);
}
