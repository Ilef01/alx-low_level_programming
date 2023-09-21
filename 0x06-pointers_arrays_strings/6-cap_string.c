#include "main.h"
/**
 * *cap_string - capitalizes all words of a string
 * @s: the string
 * Return: the string capitalized
 */
char *cap_string(char *s)
{
	char delimiter[] = " \t\n,;.!?\"(){}";
	char *p = s;

	while (*s != '\0')
	{
		char *d = delimiter;

		while (*d != '\0')
		{
			if (*s == *d)
			{
				break;
			}
			d++;
		}
		if (*d == '\0')
		{
			if (*s >= 'a' && *s <= 'z')
				*s = *s - 32;
		}
		s++;
	}
	return (p);
}
