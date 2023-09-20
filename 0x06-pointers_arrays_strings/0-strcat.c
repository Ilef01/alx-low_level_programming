#include "main.h"
/**
 * *_strcat - returns length of a string
 * @dest: the first string
 * @src:the second string
 * Return: the concatenation
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (p);
}
