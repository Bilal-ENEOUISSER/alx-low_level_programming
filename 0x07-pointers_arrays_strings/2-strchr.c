#include "main.h"

/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: Pointer to the first occurrence of c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
int i = 0;
while (s[i] != '\0')
{
if (s[i] == c)
return (&s[i]);
i++;
}
return (0);
}
