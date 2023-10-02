#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: the string
 * @accept: the character
 * Return: a pointer to the first occurence
 */
char *_strchr(char *s, char accept)
{
	while (*s != '\0')
	{
		if (*s == accept)
			return (s);
		s++;
	}
	if (*s == accept)
		return (s);
	return (0);
}
