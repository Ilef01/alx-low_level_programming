#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates a substring within a string.
 * @haystack: The string to search within.
 * @needle: The substring to search for.
 *
 * Return: A pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
    while (*haystack)
    {
        char *h = haystack;
        char *n = needle;

        while (*haystack && *n && *haystack == *n)
        {
            haystack++;
            n++;
        }

        if (!*n)
        {
            return h;
        }

        haystack = h + 1;
    }

    return NULL;
}
