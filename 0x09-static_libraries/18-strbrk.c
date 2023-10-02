#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any set of bytes.
 * @s: The string to be searched.
 * @accept: The set of bytes to search for.
 *
 * Return: A pointer to the byte in @s that matches any byte in @accept,
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
    while (*s)
    {
        char *a = accept;

        while (*a)
        {
            if (*s == *a)
            {
                return s;
            }
            a++;
        }

        s++;
    }

    return NULL;
}
