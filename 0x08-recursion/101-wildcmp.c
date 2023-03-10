#include "main.h"

/**
 * wildcmp - Compares two strings.
 * @s1: A pointer to a string.
 * @s2: A pointer to a string that may contain the wildcard character `*`.
 *
 * Return: 1 if the strings are identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
    if (*s2 == '*')
    {
        if (*s1 == '\0')
            return (wildcmp(s1, s2 + 1));
        else
            return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
    }
    if (*s1 == '\0')
        return (*s2 == '\0');
    if (*s1 == *s2)
        return (wildcmp(s1 + 1, s2 + 1));
    return (0);
}

