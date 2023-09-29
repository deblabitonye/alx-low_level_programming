#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: The sting to be searched
 * @c: The character to be located
 *
 * Return: if c is found - a pointer to the first occurance
 * If c is not found - NULL
 */
char *_strchr(char *s, char c)
{
int a = 0;
for (; s[a] >= '\0'; a++)
{
if (s[a] == c)
return (&s[a]);
}
return (0);
}
